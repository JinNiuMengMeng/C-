#include <iostream>
using namespace std;
class father{
	public:
//		void print(){cout << "This is father class!" << endl;}
		virtual void print(){cout << "This is father class!" << endl;}
		/*两者之间有很大的差别,这是应为在不使用virtual之前,C++对重载的函数使用静态联编,而使用了virtual以后,C++则对该函数进行动态联编.*/
};
class son_1 : public father{
	public:
		void print(){cout << "This is son_1 class!" << endl;}
};
class son_2 : public father{
	public:
		void print(){cout << "This is son_2 class!" << endl;}
};
int main(){
	father father_1;
	son_1 son_1_1;
	son_2 son_2_2;

	father * father_p = &father_1;
	father * son_1_p = &son_1_1;
	father * son_2_p = &son_2_2;

	father_p->print();
	son_1_p->print();
	son_2_p->print();
	return 0;
}
