#include <iostream>
using namespace std;
class father{
	public:
	virtual void run(){cout << "Father can run ten thousand!" << endl;}
};
class son : public father{
	public:
		void run(){cout << "Son can run five thousand!" << endl;}
};
class daughter : public father{
	void run(){cout << "Daughter can one thousand!" << endl;}
};

void one(father fatherobj);
void two(father *father_p);
void three(father & father_ref);

int main(){
	father * p = NULL;
	int choice;
	bool quit = false;
	while(1){
		cout << endl << "0:quit  1:son  2:daughter  3:father" << endl;
		cin >> choice;
		switch(choice){
			case 0:
				quit = true;
				break;
			case 1:
				p = new son;
				one(*p);
				break;
			case 2:
				p = new daughter;
				two(p);
				break;
			case 3:
				p = new father;
				three(*p);
				break;
			default:
				cout << "Please input 0-3 number!" << endl;
				break;
		}
		if(quit == true){
			break;
		}
	}
}
void one(father fatherobj){
	fatherobj.run();
}
void two(father *father_p){
	father_p->run();
}
void three(father & father_ref){
	father_ref.run();
}
