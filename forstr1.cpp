#include <iostream>
#include <string>
using namespace std;
int main(){
	cout << "Input a word:" <<endl;
	string word;
//	cin >> word;
	getline(cin, word);
	cout << "word.size():" << word.size() << endl;
	for(int i = word.size()-1; i >= 0; i--){
		cout << word[i];
	}
	cout << endl;
	return 0;
}
