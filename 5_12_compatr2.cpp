#include <iostream>
#include <string>
#include <cstring>
#include <ctime>
using namespace std;

void delay(int time){
	clock_t now = clock();
	while(clock() - now < time);
}

int main(){
	string word = "?ate";
	for(char ch = 'a'; word != "mate"; ch++){
		cout << "word:" << word << endl;
		word[0] = ch;
		cout << "ch:" << ch << endl;
		delay(1000000);
	}
		cout << "word:" << word << endl;
	return 0;
}
