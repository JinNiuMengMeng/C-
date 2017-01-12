#include <iostream>
using namespace std;
class father{
	public:
		father():age(54){cout << "Call father class the construct function and initialize age!" << endl;}
		~father(){cout << "Call father class the deconstruct function" << endl;}
//		void jump()const{ cout << "fahter class can jump five steps" << endl;}
		virtual void jump()const{ cout << "fahter class can jump five steps" << endl;}
		void run(){cout << "father class can run tern thousandmeters!" << endl;}
	private:
		int age;

};
class son : public father{
	public:
		son(){cout << "Call son class the construct function!" << endl;}
		~son(){cout << "Call son class the deconstruct function!" << endl;}
		void jump()const{ cout << "son class can jump five steps" << endl;}
		void run(){cout << "son class can run tern thousandmeters!" << endl;}
};
int main(){
	father *p = new son;
	/*(new son)创造一个子类对象,将这个对象的地址给指向父类的指针p,*/
	
	p->jump();
	/*虽然子类也有与父类同名的函数,但p指针自动调用父类的函数.但是在父类函数名前面加上virtual之后,p指针自动指向子类的同名jump函数*/
	p->run();
	delete p;

	return 0;
}

