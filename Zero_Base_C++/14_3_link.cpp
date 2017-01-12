#include <iostream>
using namespace std;
class book{
	public:
		int num;
		float price;
		book * next;/*用来指向下一个节点的指针,用于连接两个节点*/
};
book * head = NULL;/*用做头结点*/
book * creat(){
	book * p1, * p2;/*p1作为下个节点的指针,p2作为本节点的指针*/
	p1 = new book;/*新建一个book对象(节点)*/
	head = p1;/*将此对象赋给头结点*/
	p2 = p1;/*将p1指向的当前节点保存,赋给p2*/
	cout << "Please input book Number, input zero over:" << endl;
	cin >> p1->num;
	if(p1->num != 0){/*判断首次的数据是否为0,如果不是0,继续输入.*/
		cout << "please input book price" << endl;
		cin >> p1->price;
	}else{/*如果输入的数据是0,代表没有创建任何节点,将p1申请的空间删除掉*/
		delete p1;/*删除p1在堆区申请的空间*/
		p2 = NULL;/*并将p2指针赋为NULL*/
		head = NULL;/*再将头结点的指针也赋为NULL,将所有指针恢复为原始的状态*/
		return head;/*因为creat函数的返回值为book *,所以要返回一个同类型的数据*/
	}
	while(p1->num != 0){/*如果数据不为0*/
		p2 = p1;/*保存p1刚才创建得节点*/
		p1 = new book;/*申请新的节点*/
		cout << "Please input book number; input zero over:" << endl;
		cin >> p1->num;
		if(p1->num != 0){
			/*如果输入的数据不是0,将数据保存.如果输入的是0,则将在下个while循环中退出*/
			cout << "please input book price:" << endl;
			cin >> p1->price;
		}
		p2->next = p1;/*将上一次保存的节点指向新创建的节点,类似于节点间的"线"*/
	}
	/*输出数据start*/
	p1 = head;//将头指针的地址给p1
	while(p1 != NULL){
		cout << "p1->num:" << p1->num << " p1->price:" << p1->price << endl;
		p1 = p1->next;//将p1指向的下一个节点的地址再赋值给p1,
	}
	/*输出数据end*/
	delete p1;
	p2->next = NULL;
	return head;
}
int main(void){
	creat();
	return 0;
}
