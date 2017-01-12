#include <iostream>
#include <cstring>

using namespace std;

char *getname(void){

	char temp[80] = {0};
	cout << "Enter input name:";
	cin >> temp;
	char *temp_pt = new char[strlen(temp) + 1];
//	temp_pt = temp;
	strcpy(temp_pt, temp);

	return temp_pt;
}

int main(){
	char * name;
	int i = 0;
	for(i = 0; i < 5; i++){
		name = getname();
		cout << "name:" << name << " at:" << (int *)name <<endl;
		delete [] name;
	}
	return 0;
}
