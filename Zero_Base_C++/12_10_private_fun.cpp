#include <iostream>
using namespace std;

class father{
	public:
		void room(){cout << "It's my father's room" << endl;}
};
class son : private father{
	public:
		void enjoy(){room();}
};

int main(){
	son Mike;
//	Mike.room();
	Mike.enjoy();
	return 0;
}

