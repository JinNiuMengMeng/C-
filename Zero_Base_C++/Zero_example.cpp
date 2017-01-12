#include <iostream> 
using namespace std; 
class father
{
	public:
		father():age(54){cout<<"调用father类的构造函数并初始化age的值为："<<age<<"\n";} ~father(){cout<<"调用father类的析构函数\n";}
		void jump()const {cout<<"父亲可以跳五个台阶\n";}
		void run()const{cout<<"父亲可以跑万米\n";}
	protected:
		int age;
};
class son:public father
{
	public:
		son(){cout<<"调用son类的构造函数\n";}
		~son(){cout<<"调用son类的析构函数\n";}
		void math(){cout<<"儿子会数学\n";}
		void jump()const {cout<<"儿子可以跳十个台阶\n";}
		void run()const{cout<<"儿子可以跑十万米\n";}
};
int main() 
{ 
	father *pfather=new son;	//在堆中创建一个派生类的对象并把该派生类的对象赋给基类指针，由于在堆中创建的对象都是匿名的，因此创建的时候必须用new加所属的类名。而且要访问它们必须用指针，new是一个关键字，作用是在堆中创建一个对象，该关键字在创建对象时会自动调用构造函数。
	pfather->jump();				//用该指针访问父类中的jump函数
	pfather->run();				//用该指针访问父类中的run函数
	//pfather->math();
	//delete pfather;				//删除指针指向的派生类的对象，该语句与new对应使用，使用时将自动调用析构函数删除在堆中创建的对象，并释放内存，这个语句将在后面的数组中有详细的介绍
	//system("pause");				//暂停程序
	return 0;
}
