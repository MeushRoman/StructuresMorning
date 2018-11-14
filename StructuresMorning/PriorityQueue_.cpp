#include "PriorityQueue_.h"



bool PriorityQueue_::empty() const
{
	return arr.size()==0;
}

int PriorityQueue_::size() const
{
	return arr.size();
}

void PriorityQueue_::push(string str, int priority)
{	
	//arr.push_back(pair<string, int>(str, priority));
	
	int pos = 0;
	for (; pos < arr.size(); pos++)
	{
		if (priority > arr[pos].second)
			break;
	}
	arr.insert(begin(arr) + pos, pair<string, int>(str, priority));
	

	//sort лямбда выражения
	/*sort(begin(arr), end(arr), []
	(pair<string,int> &p1,pair<string,int>&p2) {
		return p1.second > p2.second;
	});*/

}

pair<string, int>& PriorityQueue_::front()
{
	return arr[0];
}

const pair<string, int>& PriorityQueue_::front() const
{
	return arr[0];
}

pair<string, int>& PriorityQueue_::back()
{
	return arr[arr.size() - 1];
}

const pair<string, int>& PriorityQueue_::back() const
{
	return arr[arr.size() - 1];
}

void PriorityQueue_::pop()
{
	arr.erase(begin(arr));
}
