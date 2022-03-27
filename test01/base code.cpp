#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
//
//string hexStrToBinStr(string hexStr) {
//	if (hexStr == "" || hexStr.empty())
//		return "";
//	string s;
//	for (int i = 0; i < hexStr.size(); ++i) {
//		string indexStr = hexStr.substr(i, i + 1);
//		string binStr = 
//	}
//}
//
//int main()
//{
//	string numStr;
//	cin >> numStr;
//	string s = hexStrToBinStr(numStr);
//	int ans = 0;
//	for (auto ch : s)
//		if (ch == '1')
//			++ans;
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}

int strHex2Bin(const char* sHex, int iHexLen, char* sBin, int iBinLen) {
	char sSrc[65];
	char sForamt[6];
	unsigned long ulSrc;
	memset(sSrc, 0, sizeof(sSrc));
	memcpy(sSrc, sHex, iHexLen);
	*(sSrc + 0) < 'A' ? ulSrc = *(sSrc + 0) - 0x30 : ulSrc = *(sSrc + 0) - 0x41 + 0xA;
	for (int = 1; i < iHexLen; ++i) {
		*(sSrc + i) < 1
	}
}
int main() {
	string hex;
	cin >> hex;
	const char *str = hex.c_str();
	char *temp;
	long num = strtol(str, &temp, 10);
	cout << num << endl;
	system("pause");
	return 0;

}