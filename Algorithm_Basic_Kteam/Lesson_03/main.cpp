#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;
/*
	Lấy ra từng chữ số từ đầu đến cuối và 
	từ cuối đến đầu của 1 số.
*/
int main() {
	int nNum;
	cout << "Please input a number:";
	cin >> nNum;
	vector<int> vnEndToStart = GetEachNumEndToStart(nNum);
	vector<int> vnStartToEnd = GetEachNumStartToEnd(nNum);
	cout << "End to Start: ";
	for (int i = 0; i < vnEndToStart.size(); ++i) {
		cout << vnEndToStart[i] << " ";
	}
	cout << endl;
	cout << "Start to End: ";
	for (int i = 0; i < vnStartToEnd.size(); ++i) {
		cout << vnStartToEnd[i] << " ";
	}
	cout << endl;
	_getch();
	return 0;
}