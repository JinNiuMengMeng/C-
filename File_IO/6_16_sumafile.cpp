#include <iostream>
#include <fstream>

using namespace std;
int main(){
	ifstream inFile;
	inFile.open("test.txt");

	if(!inFile.is_open()){
		cout << "open test.txt failed" << endl;
		exit(EXIT_FALLURE);
	}
	
	return 0;
}
