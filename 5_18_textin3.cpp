#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char ch[1024];
	char* ch_pt = new char;
	ch_pt = ch;
	int count = 0;

	while(cin.get(ch_pt, 1024).get()){
//		cin.fail(); //判断指针有没有指向字符串的尾部
		cout << cin.fail() << endl;
		cout << ch  << endl;
		++count;
		ch_pt = ch_pt + strlen(ch);
		cout << endl;
	}

	delete ch_pt;
	return 0;
}
