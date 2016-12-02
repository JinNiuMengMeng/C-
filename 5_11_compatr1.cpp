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
	char name[] = "?ate";
	for(char ch = 'a'; strcmp(name, "mate"); ch++){
		cout << "name:" << name << endl;
		name[0] = ch;
		cout << "ch:" << ch << endl;
		delay(1000000);
	}
		cout << "name:" << name << endl;
	return 0;
}
