#include <iostream>
#include <cstring>

using namespace std;
int main(){
	char name[20] = {0};
	cout << "Input you name:";
	cin >> name;

	int i = 0;
	while(name[i] != '\0'){
		cout << "name["<< i << "]:" << name[i] << ":" << int(name[i]) << endl;
		i++;
	}
	return 0;
}
