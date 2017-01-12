#include <iostream>
using namespace std;
class Num{
	public:
		Num(){n = 1; cout << "No arguments construct functions!" << endl;}
		Num(int a){n = a; cout << "Has an argument construct functions!" << endl;}
		Num(const Num&Number){n = Number.n; cout << "copy construct functions" << endl;}
		~Num(){cout << "destructor functions execute!" << endl;}
		int get()const{return n;}
		void set(int x){n = x;}
		void add(){++n;}
		Num operator++(){
			++n;
//			return Num(n);
			return *this;
		}
	private:
		int n;
};
int main(){
	Num i;
	cout << "i:" << i.get() << endl;
	i.add();
	cout << "i:" << i.get() << endl;
	Num n = ++i;
	cout << "n:" << n.get() << endl;

	return 0;
}
