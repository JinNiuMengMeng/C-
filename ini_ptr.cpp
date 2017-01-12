#include <iostream>
#include <string>

int main(){
	using namespace std;
	int higgen =  5;
	int *higgen_pt = &higgen;
	int *fellow = new int;
	*fellow = 5;

	int* P;
	P =(int *) 0XB800000;

	cout << "value of higgen:" << higgen << " *higgen_pt:" << *higgen_pt << endl;
	cout << "higgen addr:" << &higgen << " higgen_sp addr:" << higgen_pt << endl;
	
	cout << "*fellow:" << *fellow << endl;
	cout << " p:" << P << endl;
	return 0;
}
