#include <iostream>
using namespace std;

class BaseClassA{
	public:
	virtual	int get(){return 1;}
};
class BaseClassB : public BaseClassA{
	public:
		int get(){return 2;}
};
int main(){
	int a;
	BaseClassA *p;
	bool quit = false;
	while(1){
		cout << "father class 1; son class 2; quit 3;" << endl;
		cin >> a;
		switch(a){
			case 1:
				p = new BaseClassA;
				break;
			case 2:
				p = new BaseClassB;
				break;
			default:
				quit = true;
				break;
		}
		if(quit == true){
			break;
		}
		cout << "p->get():" << p->get() << endl;
	}
	return 0;
}
