#include "Header.h"
#include <iostream>
using namespace std;

int main() {
	int nNum; 
	cout << "Please input a number: ";
	cin >> nNum;
	if (IsRevert(nNum, RevertNumber(nNum))) {
		cout << "yes";
	}
	else {
		cout << "No";
	}
	_getch();
	return 0;
}