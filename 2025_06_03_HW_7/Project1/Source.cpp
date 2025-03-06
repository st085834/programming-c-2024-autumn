#include<iostream>

class ArrayList
{ 
private:
	int len;
	int* data;
	void init(int len = 10)
	{
		this->len = len;
		this->data = (int*)malloc(sizeof(int) * len);
	}
	bool indexValid(int index)
	{
		return 0 <= index < this->len;
	}
	void expand();

public:
	ArrayList(int len = 10)
	{
		this->init(len);
		for (int i = 0; i < this->len; ++i)
		{
			this->data[i] = 0;
		}
	}
	ArrayList(ArrayList& list)
	{
		//this->len = list.len;
		//this->data = list.data;
		this->init(list.len);
		for (int i = 0; i < list.len; ++i)
		{
			this->set(i, list.get(i));
		}
	}
	~ArrayList()
	{
		//for (int i = 0; i < this->len; ++i)
		//{
		//	this->data[i] = 0;
		//}
		free(this->data);
		//this->data = nullptr;
		//this->len = 0;
	}
	void randomize(int min = 10, int max = 99)
	{
		for (int i = 0; i < len; ++i)
		{
			this->data[i] = rand() % (max - min + 1) + min;
		}
	}
	void print()
	{
		for (int i = 0; i < this->len; ++i)
		{
			printf("%d ", this->data[i]);
		}
		printf("\n");
	}
	int get(int index)
	{
		if (indexValid(index))
		{
			return this->data[index];
		}
		return -1;
	}
	void set(int index, int value)
	{
		if (indexValid(index))
		{
			this->data[index] = value;
		}
	}
	int count()
	{
		return len;
	}

	void pushBack(int elem)
	{
		int* a = (int*)malloc(sizeof(int) * (len + 1));
		a[len] = elem;
		for (int i = 0; i < len; ++i)
		{
			a[i] = this->data[i];
		}
		this->data = a;
		for (int i = 0; i < len + 1; ++i)
		{
			std::cout << this->data[i] << " ";
		}
		std::cout << std::endl;
	}
	void pushFront(int element)
	{
		int* a = (int*)malloc(sizeof(int) * (len + 1));
		a[0] = element;
		for (int i = 1; i < len + 1; ++i)
		{
			a[i] = this->data[i];
		}
		this->data = a;
		for (int i = 0; i < len + 1; ++i)
		{
			std::cout << this->data[i] << " ";
		}
		std::cout << std::endl;
	}
	void insert(int index, int element)
	{
		int* a = (int*)malloc(sizeof(int) * (len + 1));
		a[index] = element;
		int b = 0;
		for (int i = 0; i < len + 1; ++i)
		{
			if (i == index)
				continue;
			else
				a[i] = this->data[b];
			++b;
		}
		this->data = a;
		for (int i = 0; i < len + 1; ++i)
		{
			std::cout << this->data[i] << " ";
		}
		std::cout << std::endl;
	}
	void popBack()
	{
		int* a = (int*)malloc(sizeof(int) * (len - 1));
		for (int i = 0; i < len - 1; ++i)
		{
			a[i] = this->data[i];
		}
		this->data = a;
		for (int i = 0; i < len - 1; ++i)
		{
			std::cout << this->data[i] << " ";
		}
		std::cout << std::endl;
	}
	void popFront()
	{
		int* a = (int*)malloc(sizeof(int) * (len - 1));
		for (int i = 1; i < len; ++i)
		{
			a[i] = this->data[i];
		}
		this->data = a;
		for (int i = 0; i < len - 1; ++i)
		{
			std::cout << this->data[i] << " ";
		}
		std::cout << std::endl;
	}
	int extract(int index)
	{
		int* a = (int*)malloc(sizeof(int) * (len - 1));
		int b = 0;
		for (int i = 0; i < len; ++i)
		{
			if (i == index)
				continue;
			else
				a[b] = this->data[i];
			++b;
		}
		this->data = a;
		for (int i = 0; i < len + 1; ++i)
		{
			std::cout << this->data[i] << " ";
		}
		std::cout << std::endl;
	}
	void reverse(int start, int end)
	{
		start -= 1;
		end -= 1;
		for (int i = 0; i < (end - start) / 2 + (end - start) % 2; ++i)
		{
			std::swap(this->data[start + i], this->data[end - i]);
		}
		for (int i = 0; i < len; ++i)
		{
			std::cout << this->data[i] << " ";
		}
		std::cout << std::endl;
	}
	int sum()
	{
		int a = 0;
		for (int i = 0; i < len; ++i)
		{
			a += this->data[i];
		}
		return a;
	}
	int secondMax()
	{
		int a = this->data[0];
		int c = 0;
		for (int i = 1; i < len; ++i)
		{
			if (this->data[i] > a)
			{
				a = this->data[i];
				c = i;
			}
		}
		this->data[c] = a - 1;
		int b = this->data[0];
		for (int i = 1; i < len; ++i)
		{
			if (this->data[i] > a)
			{
				b = this->data[i];
			}
		}
		this->data[c] = a;
		return b;
	}
	int lastMinIndex()
	{
		int a = this->data[0];
		int c = 0;
		for (int i = 1; i < len; ++i)
		{
			if (this->data[i] <= a)
			{
				a = this->data[i];
				c = i;
			}
		}
		return c;
	}
	int shift(int k)
	{
		int* a = (int*)malloc(sizeof(int) * len);
		for (int i = 0; i < len; ++i)
		{
			a[(i + k) % len] = this->data[i];
		}
		this->data = a;
		return;
	}
	int countOdd()
	{
		return sizeof(this->data) / 2 + (sizeof(this->data) % 2 + 1) % 2;
	}
	int sumEven()
	{
		int a = 0;
		for (int i = 0; i < len; i += 2)
		{
			a += this->data[i];
		}
		return a;
	}
};

int max(ArrayList list)
{
	int mx = list.get(0);
	for (int i = 0; i < list.count(); ++i)
	{
		mx = (mx > list.get(i) ? mx : list.get(i));
	}
	return mx;
}

int main(int argc, char* argv[])
{
	ArrayList list(10);
	list.randomize();
	list.print();
	printf("%d\n", max(list));
	list.pushBack(10);
	list.pushFront(10);
	list.insert(2, 10);
	list.popBack();
	list.popFront();
	return 0;
}