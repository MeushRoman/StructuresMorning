#include "Queue_.h"




bool Queue_::empty() const
{
	return arr.size()==0;
}

int Queue_::size() const
{
	return arr.size();
}

double & Queue_::front()
{
	return arr[0];
}

const double & Queue_::front() const
{
	return arr[0];
}

double & Queue_::back()
{
	return arr[arr.size() - 1];
}

const double & Queue_::back() const
{
	return arr[arr.size() - 1];
}

void Queue_::push(const double & val)
{
	arr.push_back(val);
}

void Queue_::push(double && val)
{
	arr.push_back(val);
	
}

void Queue_::pop()
{
	this->arr.erase(begin(arr));
}



