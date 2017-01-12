//成员变量的初始化顺序的例程如下：
#include <iostream>
using namespace std;
class demo {
	public:
		demo(){x=0;cout<<"demo的默认构造函数!"<<x<<endl;}
		demo(int i){x=i;cout<<"demo的带一个参数的构造函数!"<<x<<endl;}
		~demo(){cout<<"demo的默认析构函数!"<<x<<endl;}
		int get(){return x;}
		void set(int i){x=i;}
	private:
		int x;
};
class rectangle{
	public:
		rectangle(){x=1000;cout<<"rectangle的默认构造函数!"<<x<<endl;}
		rectangle(int i,int j,int k): x(i),width(j),length(k){
			cout<<"rectangle的带三个参数的构造函数!"<<"长方形b的面积为：" << length.get() 
				*width.get()<<endl;
		}
		~rectangle(){cout<<"rectangle的默认析构函数!"<<x<<endl;}
		int area(){return length.get()*width.get();}
	private:
		demo length;
		demo width;
		int x;
};
int main(){
	rectangle a(100, 200, 300);
	return 0;
}

