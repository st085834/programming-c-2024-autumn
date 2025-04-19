#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int number(int n)
{
	if ((n == 1 || (n - 1) % 5 == 0 || (n - 1) % 3 == 0) && n > 0)
	{
		return 1;
	}
	else if (n < 1)
	{
		return 0;
	}
	else
	{
		return number(n - 3) + number(n - 5);
	}
}
char findMaxDigit(const std::string& s, int index, char currentMax) 
{
	if (index == s.length()) 
	{
		return currentMax;
	}
	char newMax = std::max(currentMax, s[index]);
	return findMaxDigit(s, index + 1, newMax);
}
int countDigits(const std::string& s, int index) 
{
	if (index == s.length()) {
		return 0;
	}
	int current = isdigit(s[index]) ? 1 : 0;
	return current + countDigits(s, index + 1);
}
std::string addStars(const std::string& s, int index) {
	if (index >= s.length() - 1) {
		return s.substr(index, 1); 
	}
	return s[index] + std::string("*") + addStars(s, index + 1);
}
std::string addBrackets(const std::string& s, int index)
{
	if (index == s.length() - 1)
		return s.substr(index, 1);
	if (s.length() % 2 == 0 && index == s.length() / 2 - 1)
		return s[index] + addBrackets(s, index + 1);
	if (index < s.length() / 2)
	{
		return s[index] + std::string("(") + addBrackets(s, index + 1);
	}
	else
	{
		return s[index] + std::string(")") + addBrackets(s, index + 1);
	}
}
std::string addMirror(const std::string& s, int index)
{
	if (index == s.length())
		return std::string("");
	char one = s[s.length() - 1 - index];
	if (one == '(')
	{
		return std::string(")") + addMirror(s, index + 1);
	}
	else 
	{
		return s[s.length() - 1 - index] + addMirror(s, index + 1);
	}
}
std::string cutStroke(const std::string& s, int index)
{
	if (index == s.length())
	{
		return std::string("");
	}
	if (index == s.length() / 2 && s.length() % 2 == 1)
		return s[index] + cutStroke(s, index + 1);
	char first = s[index];
	char second = s[s.length() - 1 - index];
	if (first == second)
		return cutStroke(s, index + 1);
	else
		return s[index] + cutStroke(s, index + 1);

}
int deleteMessage(int**& data, int k, int& n)
{
	if (data[k][1] == 0)
		return 1;
	else
	{
		int count = -1;
		for (int i = 0; i < n; ++i)
		{
			if (data[i][1] == data[k][1])
				++count;
		}
		return 1 + count + deleteMessage(data, data[k][1] - 1, n);
	}
} 
//deleteMessage Ч частичное решение
int gsd(int a, int b)
{
	int c = 0;
	for (int i = 2; i <= std::max(a, b); ++i)
	{
		if (a % i == 0 && b % i == 0)
		{
			c = i;
			break;
		}
	}
	if (c == 0)
		return 1;
	else
		return c * gsd(a / c, b / c);
}
int square(char**& data, int a, int b, const int& n)
{
	if (data[a][b] == '*' || a == n || b == n)
		return 0;
	else
	{
		data[a][b] = '*';
		return 1 + square(data, a + 1, b, n) + square(data, a - 1, b, n) + square(data, a, b + 1, n) + square(data, a, b - 1, n);
	}
}

int main(int argc, char argv[])
{
	
	return EXIT_SUCCESS;
}