#include <iostream>

int main(){
	using namespace std;
	double *pt = new double [3];
	pt[0] = 2.3;
	pt[1] = 34.3;
	pt[2] = 0.2;
	
	cout << "pt[1] is :" << pt[1] << endl;
	pt = pt + 1;
	cout << "pt[0] is :" << pt[0] << endl;
	cout << "pt[1] is :" << pt[1] << endl;

	pt = pt - 1;
	delete [] pt;
	return 0;
}
