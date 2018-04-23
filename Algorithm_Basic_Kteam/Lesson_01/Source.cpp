#include "Constants.h"
#include "Library.h"
#include "Header.h"

using namespace std;

/*
Chương trình cho phép nhập vào năm sinh và in ra số
tuổi của người đó
*/

int main() {
	int nYear = GetYear();
	int nYearOfBirth;
	cout << "Please input your year of birth: ";
	cin >> nYearOfBirth;
	cout << nYear - nYearOfBirth;
	_getch();
	return 0;
}
int GetYear() {
	time_t _time = time(NULL);
	tm* _tm = localtime(&_time);
	return _tm-> tm_year + 1900;
}