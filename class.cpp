#include <iostream>
using namespace std;
class Human{
	public:
		void Set_High(int x);
		void Show_High(void);
	private:
		int x;
		int high;
};
void Human::Set_High(int x){
	high = x;
}

void Human::Show_High(void){
	cout << "High is:" << high << endl;
}
int  main(){
	Human Mike;
	int a = 180;
	Mike.Set_High(a);
	Mike.Show_High();
	return 0;
}
