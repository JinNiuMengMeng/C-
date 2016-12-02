#include <iostream>
#include <cstring>
int main(){
	using namespace std;
	char charr1[20]={0};
	string str;

	cout << "strlen(charr1):" << strlen(charr1) << endl;
	cout << "str.size():" << str.size() << endl;

	cin.get(charr1, 20).get();
	cout << "charr1:" << charr1 << endl;
	cout << "strlen(charr1):" << strlen(charr1) << endl;
	
	getline(cin, str);
	cout << "str:" << str << endl;
	cout << "str.size():" << str.size() << endl;
	cout << raw "(str "\n" edfg)" << endl; 

//	cout << R"(nihao\"\\n\",adasdfa)" << endl;
	return 0;

}
