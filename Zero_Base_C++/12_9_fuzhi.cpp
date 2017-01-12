#include <iostream>
using namespace std;

class father{
	public :
		void print(){cout << "In the class father" << endl;}
	private:
		int x;
};
class son : public father{

};

int main(){
	father a;
	son b;
	a = b;//编译通过
//	b = a;
	/*编译报错,对象的赋值操作调用了一个函数opreator=()函数,,该函数将运算符右边的对象成员赋值给左边的对象成员.左边的成员b虽然继承了父类的所有属性,但本身还具有一些特性,因此b所具有的属性大于父类a的(一代比一代强), 属性小的a不能赋值给属性大的b*/
	father *f_p = &b;//编译通过,基类的指针可以指向派生类,
//	son *s_p = &a;//编译失败,派生类的指针不能反过来指向基类
	/*派生类对象所占存储空间通常要比基类的大,原因是派生类除了继承基类的成员之外,还具有自己的成员,所以在基类的指针操作派生类的对象时,由于基类指针会想操作对象那样操作派生类对象,而基类对象所占用的内存空间又通常小于派生类对象,所以基类指针不会超出派生类对象去操作数据.*/
	father & fa = b;// 正确
//	son & so = a;//错误
}
