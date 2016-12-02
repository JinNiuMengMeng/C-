#include <iostream>
int main(){
	using namespace std;

	double wages[3] = {1110.1, 200.2, 333333.2};
	short strack[3] = {9, 5, 4};
	double* wages_pt = wages;
	short * strack_pt = &strack[0];

	cout << "wages_pt:" << wages_pt << " *wages_pt:" << *wages_pt << endl;
	wages_pt = wages_pt + 1;
	cout << "wages_pt:" << wages_pt << " *wages_pt:" << *wages_pt << endl << endl;

	cout << "strack_pt:" << strack_pt << " *strack_pt:" << *strack_pt << endl;
	strack_pt = strack_pt + 1;
	cout << "strack_pt:" << strack_pt << " *strack_pt:" << *strack_pt << endl;
	
	cout << "strack[0]:" << strack[0];
	cout << " strack[1]:" << strack[1] << endl << endl;

	cout << "*strack_pt:" << strack_pt;
	cout << " *(strack_pt + 1):" << *(strack_pt + 1) << endl <<endl;

	cout << "sizeof(wages):" << sizeof(wages) << endl;
	cout << "sizeof(wages_pt):" << sizeof(wages_pt) << endl;

}
