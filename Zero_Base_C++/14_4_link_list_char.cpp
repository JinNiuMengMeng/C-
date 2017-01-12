#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
class book{
	public:
		int num;
		float price;
		book * next;
};

bool check(string str){
	for(unsigned int i = 0; i < str.length(); i++){
		if((str[i] > '9' || str[i] < '0') && (str[i] != '.'))
			return false;
	}
	return true;
}

book * creat(){
	book * head = NULL;/*用做头结点*/
	book * p1, * p2;
	p1 = new book;
	head = p1;
	p2 = p1;
	cout << "Please input book Number, input zero over:" << endl;
	string str;
	cin >> str;
	while(!check(str)){
		cout <<	"Input not number, please input again:" << endl;
		cin >> str;
	}
	p1->num = atoi(str.c_str());
	if(p1->num != 0){
		cout << "please input book price" << endl;
		cin >> str;
		while(!check(str)){
			cout <<	"Input not number, please input again:" << endl;
			cin >> str;
		}
		p1->price = atof(str.c_str());
	}else{
		delete p1;
		p2 = NULL;
		head = NULL;
		return head;
	}
	while(p1->num != 0){
		p2 = p1;
		p1 = new book;
		cout << "Please input book number; input zero over:" << endl;
		cin >> str;
		while(!check(str)){
			cout <<	"Input not number, please input again:" << endl;
			cin >> str;
		}
		p1->num = atoi(str.c_str());
		if(p1->num != 0){
			cout << "please input book price:" << endl;
			cin >> str;
			while(!check(str)){
				cout <<	"Input not number, please input again:" << endl;
				cin >> str;
			}
			p1->price = atof(str.c_str());
		}
		p2->next = p1;
	}
	/*输出数据start*/
	delete p1;
	p2->next = NULL;
	return head;
}
void showbook(book * head){
	cout << endl << "book information:" << endl;
	while(head != NULL){
		cout << "Book num:" << head->num << " Book price:" << head->price << endl;
		head = head->next;
	}
}
void Delete(book * Head, int Booknum){
	book *prev;				/*用来保存访问过的节点的地址*/
	if(Head->num == Booknum){	/*判断头结点是否是我们要删除的节点*/
		prev = Head;		/*先将Head指针的地址保存*/
		Head = Head->next;	/*将头指针下一个指针的地址传递给头指针*/
//		::head = Head;		/*Head为形参,将其地址给全局变量的head*/
		delete prev;		/*删除prev*/
		cout << "删除头结点成功" << endl;
		return;
	}
	while(Head != NULL){	/*判断是否存在头结点*/
		if(Head->next == NULL){		/*判断是否存在第二个节点*/
			cout << "Can not be find you want to delete!" << endl;
			return;
		}else if(Head->next->num == Booknum){		/*判断Head后面的指针是否是我们指定删除的booknum*/
			prev = Head->next;				/*先保存我们要删除的当前节点*/
			Head->next = prev->next;		/*prev->next为第三个节点,Head->next为第二个节点*/
			delete prev;					/*删除prev节点*/
			cout << "Delete succeed!" << endl;
			return ;
		}
		Head = Head->next;					/*偏移指向book指针的节点,知道找到我们要删除的节点*/
	}
	cout << "Can not be find you want to delete!" << endl;
}
int main(void){
	book * p = NULL;
	int booknum;
	p = creat();
	showbook(p);
	for(int i = 0; i < 9; i++){
		cout << "please input delete booknum:" << endl;
		cin >> booknum;
		Delete(p, booknum);
		showbook(p);
	}
	return 0;
}
