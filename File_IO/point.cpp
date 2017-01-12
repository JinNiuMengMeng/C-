#include <iostream>
using namespace std;

int main(){
	int a[2] ={ 2};
	int * p = a;
	cout << "a:" << a << endl;
	cout << "a[0]:" << a[0] << endl;
	cout << "p:"  << p << endl;
	cout << "&p:"  << &p << endl;
	cout << "*p:" << *p << endl;
	return 0;
}
