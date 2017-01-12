#include <iostream>
#include <cstring>
int main(){
	using namespace std;
	char animal[20] = "bear";
	const char * bird = " wren";
	char * ps ;

	cout << animal << " and";
	cout << " A concerned " << bird << " apeaks" << "\n";

	cin >> animal;
	ps = animal;

	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *)ps << endl << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *)ps << endl << endl;
	delete [] ps;
	return 0;
}
