#include <iostream>
using namespace std;
class father{
	public:
	father(){cout << endl << "constructs father a base function!" << endl;}
	~father(){cout << "destructor father  base functions!" << endl << endl;}
	void print(){cout << name << "Tom tall is:" << tall << "cm!" << endl;}
	protected:
	int tall;
	string name;
};
class son : public father{
	public:
		son(string na, int ta, int we){
			name = na; tall = ta; weight = we; cout << "constructs son a base function!" << endl;
		}
		~son(){cout << "destructor son base functions!" << endl;}
		void print_son(){print(); cout << "Mike weight is:" << weight << "Kg!"<< endl;}
	protected:
		int weight;
};
int main(){
	son Mike("Tom", 180, 75);
	Mike.print_son();
	return 0;
}
