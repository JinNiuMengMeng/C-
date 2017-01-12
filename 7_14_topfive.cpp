#include <iostream>
#include <string>
using namespace std;
#define SIZE 5
void display(const string strr[], int size);
int main(){
	string str[SIZE];
	cout << "Please input a string:" << endl;

	for(int i = 0; i < 5; i++){
		cout << i + 1 << ":";
		getline(cin, str[i]); 
	}
	display(str, SIZE);
	return 0;
}
void display(const string strr[], int size){
	for(int i = 0; i < size; i++){
		cout << i + 1 << ":" << strr[i] << endl;
	}
}
