#include <iostream>
#include <cstring>
int main(){
	using namespace std;
	char charr1[20];
	char charr2[20] = "hello world";
	string str1;
	string str2 = "hello China";
	
	str1 = str2;
	strcpy(charr1, charr2);

	str1 += " Fujian";
	cout << charr2 << str2.size() << endl;
	strcat(charr2, " US");

	int len1 = str1.size();
	int len2 = strlen(charr2);

	cout <<"str1:" << str1 <<"\nlen(str1):" << len1 << endl;
	cout <<"charr2:" << charr2 <<"\nlen(charr2):" << len2 << endl;

	return 0;
}
