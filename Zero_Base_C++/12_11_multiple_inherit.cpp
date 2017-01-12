#include <iostream>
using namespace std;
class father{
	public:
		void set_father_tall(int a){father_tall = a;}
		void print_father(){cout << "father tall is:" << father_tall << endl;}
	private:
		int father_tall;
};
class mather{
	public:
		void set_mather_tall(int a){mather_tall = a;}
		void print_mather(){cout << "mather tall is:" << mather_tall << endl;}
	private:
		int mather_tall;
};
class son : public mather, public father{
	public:
		void set_son_tall(int a){son_tall = a;}
		void print_son(){
			print_father();
			print_mather();
			cout << "son tall is:" << son_tall << endl;
		}
	private:
		int son_tall;
};
int main(){
	son Mike;
	Mike.set_father_tall(165);
	Mike.set_mather_tall(168);
	Mike.set_son_tall(180);
	Mike.print_son();
	return 0;
}
