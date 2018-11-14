#include "CQueue_.h"

bool CQueue_::empty() const
{
	return arr.size()==0;
}

int CQueue_::size() const
{
	return arr.size();
}

double & CQueue_::front()
{
	return arr[0];
}

const double & CQueue_::front() const
{
	return arr[0];
}

double & CQueue_::back()
{
	return arr[arr.size()-1];
}

const double & CQueue_::back() const
{
	return arr[arr.size() - 1];
}

void CQueue_::push(const double & val)
{
	arr.push_back(val);
}

void CQueue_::push(double && val)
{
	arr.push_back(val);
}

void CQueue_::pop(bool toEnd)
{
	if (toEnd) {
		arr.push_back(move(arr[0]));
	}
	
	arr.erase(begin(arr));

}
