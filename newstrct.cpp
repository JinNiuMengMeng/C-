#include <iostream>
#include <cstring>
struct inflatable{
	std::string name;
	float volume;
	double price;
};
int main(){
	using namespace std;
	inflatable *ps = new inflatable;

	cout << "Enter a name:" ;
	getline(cin, ps->name);
	cout << "Enter a volume:";
	cin >> ps->volume;
	cout << "Enter a price:";
	cin >> ps->price;

	cout << "struct inflatable{" << endl;
	cout << "	" << ps->name << ","  << endl;
	cout << "	" << ps->volume << ","  << endl;
	cout << "	" << ps->price << endl;
	cout << "};" << endl;
	return 0;
}
