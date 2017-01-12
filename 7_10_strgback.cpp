#include <iostream>
using namespace std;
char *buildstr(char c, int n);
int main(){
	int times = 0;
	char ch = '0';
	char *ps = new char;
while(1){
	cout << "Enter a character:";
	cin >> ch;
	cout << "Enter times:";
	cin >> times;
	ps = buildstr(ch, times);
	cout << ps << endl;
}
	delete [] ps;
}
char *buildstr(char c, int n){
	char* ptr = new char[n + 1];
	ptr[n] = '\0';
	while(n-- > 0){
		ptr[n] = c;
	}
	return ptr;
}
