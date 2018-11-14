#include <string>
#include <iostream>
#include "PriorityQueue_.h"
using namespace std;

void main() {
	PriorityQueue_ d;
	d.push("S1", 0);
	d.push("S2", 0);
	d.push("B1", 2);
	d.push("P1", 1);
	d.push("B2", 2);
	d.push("S3", 0);
	d.push("P2", 1);
	d.push("B3", 2);

	while (!d.empty()) {
		cout << d.front().first << " " << d.front().second << endl;
		d.pop();
	}
	system("pause");
}


