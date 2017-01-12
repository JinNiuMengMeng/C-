#include <iostream>
using namespace std;
class poser{
	public:
		virtual void beat(){cout << "The genetal boxer's strength is 260 pounds!" << endl;}
};
class Lewis : public poser{
	public:
		void beat(){cout << "The Lewis's strength is 350 pounds!" << endl;}
};
class Ali : public poser{
	public:
		void beat(){cout << "The Ali's strength is 450 pounds!" << endl;}
};
class Tyson : public poser{
	public:
		void beat(){cout << "The Tyson's strength is 500 pounds!" << endl;}
};
class Holy : public poser{
	public:
		void beat(){cout << "The Holi's strength is 460 pounds!" << endl;}
};
int main(){
	poser *p[5];
	poser *p1;
	int choose;
	for(int i = 0; i < 5; i++){
		cout << "Ali:1  Lewis:2  Tyson:3  Holy:4" << endl;
		cin >> choose;
		switch(choose){
			case 1:
				p1 = new Ali;
				p1->beat();
				break;
			case 2:
				p1 = new Lewis;
				p1->beat();
				break;
			case 3:
				p1 = new Tyson;
				p1->beat();
				break;
			case 4:
				p1 = new Holy;
				p1->beat();
				break;
			default:
				p1 = new poser;
				p1->beat();
				break;
		}
		cout << endl;
	}
	return 0;
}
