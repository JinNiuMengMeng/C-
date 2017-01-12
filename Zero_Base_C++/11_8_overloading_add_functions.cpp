#include <iostream>
using namespace std;
class Num{
	public:
		Num(){n = 1; cout << "No arguments construct functions!" << endl;}
		Num(int a){n = a; cout << "Has an argument construct functions!" << endl;}
		int get()const{return n;}
//		Num add(const Num &s){return Num(n + s.get());}
		Num operator+(const Num &s){return Num(n + s.get());}
	private:
		int n;
};
int main(){
	Num one(1),two(2), three;
//	three = one.add(two);
	three = one + two;
	cout << "one:" << one.get() << endl;
	cout << "two:" << two.get() << endl;
	cout << "three:" << three.get() << endl;
	return 0;
}
