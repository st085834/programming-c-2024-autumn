#include<iostream>

//typedef Node* NodeAddr;

//typedef unsigned long long uint64;

struct Node
{
	int data;
	Node* next;
	Node(int data, Node* next = nullptr) : data(data), next(next)
	{
	}
	~Node()
	{
		data = 0;
		next = nullptr;
	}
};

class LinkedList
{
private:
	Node* head;
	void Clear()
	{
		Node* temp = head;
		while (temp != nullptr)
		{
			Node* t = temp;
			temp = temp->next;
			delete t;
		}
		head = nullptr;
	}
	void InsertHeadNode(Node* node)
	{
		node->next = head;
		head = node;
	}
	void InsertTailNode(Node* node)
	{
		if (IsEmpty())
		{
			return InsertHeadNode(node);
		}
		Node* temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = node;
		node->next = nullptr;
	}
	void InsertNode(Node* node, int index)
	{
		if (index == 0)
		{
			return InsertHeadNode(node);
		}
		Node* temp = head;
		for (int i = 1; i < index && temp != nullptr; ++i)
		{
			temp = temp->next;
		}
		if (temp != nullptr)
		{
			node->next = temp->next;
			temp->next = node;
		}
		else
		{
			delete node;
		}
	}
	Node* ExtractHeadNode()
	{
		if (IsEmpty())
		{
			return nullptr;
		}
		Node* res = head;
		head = head->next;
		return res;
	}
	Node* ExtractTailNode()
	{
		if (IsEmpty())
		{
			return nullptr;
		}
		if (head->next == nullptr)
		{
			return ExtractHeadNode();
		}
		Node* temp = head;
		while (temp->next->next != nullptr)
		{
			temp = temp->next;
		}
		Node* res = temp->next;
		temp->next = nullptr;
		return res;
	}
	Node* ExtractNode(int index)
	{
		if (index == 0)
		{
			return ExtractHeadNode();
		}
		Node* temp = head;
		for (int i = 0; i < index - 1 && temp->next != nullptr; ++i)
		{
			temp = temp->next;
		}
		if (temp->next == nullptr)
		{
			return nullptr;
		}
		Node* res = temp->next;
		temp->next = temp->next->next;
		res->next = nullptr;
		return res;
	}
public:
	LinkedList() : head(nullptr) {}
	~LinkedList() { Clear(); }
	bool IsEmpty()
	{
		return (head == nullptr);
	}
	int length()
	{
		int res = 0;
		Node* temp = head;
		while (temp != nullptr)
		{
			++res;
			temp = temp->next;
		}
		return res;
	}
	void swap(int ind1, int ind2)
	{
		if (ind2 == ind1)
		{
			return;
		}
		if (ind2 < ind1)
		{
			return swap(ind2, ind1);
		}
		Node* node2 = ExtractNode(ind2);
		Node* node1 = ExtractNode(ind1);
		InsertNode(node2, ind1);
		InsertNode(node1, ind2);
	}
	int Get(int index)
	{
		Node* temp = head;
		for (int i = 0; i < index && temp != nullptr; ++i)
		{
			temp = temp->next;
		}
		if (temp != nullptr)
		{
			return temp->data;
		}
		else
		{
			return -1;
		}
	}
	void sort()
	{
		for (int i = 0; i < length(); ++i)
		{
			for (int j = 0; j < length(); ++j)
			{
				if (Get(i) > Get(j))
				{
					swap(i, j);
				}
			}
		}
	}
	void Insert(int element, int index)
	{
		return InsertNode(new Node(element), index);
	}
	//TODO: реализовать методы и проверить работу всех методов.
	void InsertHead(int element)
	{
		InsertHeadNode(new Node(element));
	}
	void InsertTail(int element)
	{
		InsertTailNode(new Node(element));
	}
	int Extract(int index)
	{
		Node* extracted = ExtractNode(index);
		if (extracted == nullptr)
		{
			return -1;
		}
		int data = extracted->data;
		delete extracted;
		return data;
	}
	int ExtractHead()
	{
		Node* extracted = ExtractHeadNode();
		if (extracted == nullptr)
			return -1;
		int data = extracted->data;
		delete extracted;
		return data;
	}
	int ExtractTail()
	{
		Node* extracted = ExtractTailNode();
		if (extracted == nullptr)
			return -1;
		int data = extracted->data;
		delete extracted;
		return data;
	}
	void Print()
	{
		Node* temp = head;
		std::cout << "\n";
		while (temp != nullptr)
		{
			std::cout << temp->data << " ";
			temp = temp->next;
		}
	}
};

int main(int argc, char* argv[])
{
	LinkedList list;

	std::cout << "Testing InsertHead/Tail/At" << std::endl;
	list.InsertHead(1);
	list.InsertTail(3);
	list.Insert(2, 1);
	list.Print();

	std::cout << "\n\nTesting Extract" << std::endl;
	std::cout << "The result of ExtractHead(): " << list.ExtractHead() << std::endl;
	std::cout << "The result of Extract(int index) at index 1: " << list.Extract(1) << std::endl;
	std::cout << "The result of ExtractTail(): " << list.ExtractTail() << std::endl;

	return EXIT_SUCCESS;
}