#include <iostream>
#include <string>
int main(){
	using namespace std;
	char charr1[20];
	char charr2[20] = "jagur";

	string str1;
	string str3 = "hello world";
	string str2 = "nihao";
	str1 = str2 + str3;
	str3 += str2;
	str2 += " hello China";
	cout << str1 << endl;
	cout << str3 << endl;
	cout << str2 << endl;
#if 0
	cout << charr2 << "  " << str2 << endl;
	cout << charr2[2] << "  " << str2[2] << endl;
	cin  >> charr1;
	cout << "charr1:" << charr1 << endl;
	cin >> str1;
	cout << "str1:" << str1 << endl;
	str1 = str3;
	cout << "str1:" << str1 << endl;
	cout << "str3:" << str3 << endl;
#endif
	return 0;

}
