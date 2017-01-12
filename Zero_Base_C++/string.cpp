#include <string>
#include <iostream>
using namespace std;
int main()
{
	string str= "123456789";
	cout << "size: " << str.size() << endl;       // 9
	cout << "length: " << str.length() << endl;   // 9

	cout << str.size << endl;                     // 注意1：输出为1
	cout << str.length << endl;                   // 注意2：输出为1
	return 0;
}
