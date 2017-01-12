#include <iostream>
using namespace std;
class Num{
	public:
		Num(){n = 1;cout << "默认构造函数!" << endl;}
		~Num(){}
		int get(){cout << "n: " << n << endl;return n;}
		void add(){n++;}
	private:
		int n;
};
int main(){
	Num a;
	for(int i = 0; i < 10; i++){
		a.get();
		a.add();
	}
	return 0;
}
