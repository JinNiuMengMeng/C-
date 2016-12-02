#include <iostream>
int main(){
	using namespace std;
	int night = 101;
	int* pt = new int;
	*pt = 101;

	cout << "night value: " << night;
	cout << " night addr:" << &night << endl;

	cout << "*pt value:" << *pt;
	cout << " *pt addr:" << pt <<endl;

	double * pd = new double;
	*pd = 100.01;

	cout << "*pd value:" << *pd;
	cout << " *pd addr:" << pd << endl;

	cout << "sizeof(*pd):" << sizeof(*pd) << endl;
	cout << "sizeof(pd):" << sizeof(pd) << endl;

	cout << "sizeof(*pt):" << sizeof(*pt) << endl;
	cout << "sizeof(pt):" << sizeof(pt) << endl;

	delete pt;
	cout << "*pt value:" << *pt;
	cout << " *pt addr:" << pt <<endl;

	return 0;
}
