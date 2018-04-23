#include "Header.h"

int RevertNumber(int nNum) {
	int nResult = 0;
	int nDu;
	while (nNum != 0) {
		nDu = nNum % 10;
		nNum /= 10;
		nResult *= 10;
		nResult += nDu;
	}
	return nResult;
}
bool IsRevert(int nNum1, int nNum2) {
	return nNum1 == nNum2;
}