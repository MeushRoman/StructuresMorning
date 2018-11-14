#include "Stack_.h"


Stack_::Stack_(int maxSize)
{
	this->maxSize = maxSize;	
}

bool Stack_::empty() const
{
	return arr.size() == 0;
}

int Stack_::size() const
{
	return arr.size();
}

double & Stack_::top()
{
	return arr[arr.size() - 1];
}

const double & Stack_::top() const
{
	return arr[arr.size() - 1];
}

void Stack_::push(const double & val)
{
	arr.push_back(val);
}

void Stack_::push(double && val)
{
	if (arr.size() < maxSize)
		arr.push_back(val);
	else
		cout << "Stack overflow";
}

void Stack_::pop()
{
	if (arr.size() > 0)
		arr.pop_back();
	else
		cout << "Stack is empty";
}
