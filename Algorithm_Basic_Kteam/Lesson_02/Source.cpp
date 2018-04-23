#include "Constants.h"
#include "Library.h"
#include "Header.h"

using namespace std;
using namespace taxi;

/*
Chương trình cho phép nhập vào số km và in ra số tiền phải trả
*/

int main() {
	int dKm(0);
	cout << "Please input your distance: ";
	cin >> dKm;
	cout << "Your fee: " << GetFee(dKm);
	_getch();
	return 0;
}
double taxi::GetFee(double dKm) {
	if (dKm <= RANGE_01) {
		return PRICE_01 * dKm;
	}
	else if (dKm <= RANGE_02) {
		return PRICE_01 * RANGE_01 + (dKm - RANGE_01) * PRICE_02;
	}
	else if (dKm < RANGE_03) {
		if (dKm > RANGE_04) {
			return PRICE_01 * RANGE_01 + PRICE_02 * RANGE_02 + (dKm - RANGE_02 - RANGE_01) * PRICE_03 * (1-DISCOUNT_PERCENT);
		}
		else {
			return PRICE_01 * RANGE_01 + PRICE_02 * RANGE_02 + (dKm - RANGE_02 - RANGE_01) * PRICE_03;
		}
	}
}