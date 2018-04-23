#include "Constants.h"
#include "Header.h"

vector<int> GetEachNumEndToStart(int nNum) {
	int nDu;
	vector<int> vnResult;
	while (nNum != 0) {
		nDu = nNum % 10;
		nNum /= 10;
		vnResult.push_back(nDu);
	}
	return vnResult;
}
vector<int> GetEachNumStartToEnd(int nNum) {
	vector<int> vnTemp = GetEachNumEndToStart(nNum);
	for (int i = 0; i < vnTemp.size()/2; ++i) {
		swap(vnTemp[i], vnTemp[vnTemp.size() - i - 1]);
	}
	return vnTemp;
}