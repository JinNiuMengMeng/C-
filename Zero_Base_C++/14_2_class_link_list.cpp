#include <iostream>
using namespace std;
class book{
	public :
		int num;
		float price;
		book*next;
};
int main(){
	book x, y, z, *head, *p;
	x.num = 1;
	x.price = 100;
	y.num = 2;
	y.price = 200;
	z.num = 3;
	z.price = 300;
	head = &x;
	x.next = &y;
	y.next = &z;
	z.next = NULL;
	p = head;
	while(p != NULL){
		cout << "num:" << p->num << " price:" << p->price << endl;
		p = p->next;
	}
	return 0;
}
