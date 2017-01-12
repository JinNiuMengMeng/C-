#include <iostream>
#include <ctime>

using namespace std;

void Delay(float times){
	clock_t delay = times * CLOCKS_PER_SEC;
	clock_t start = clock();
	while(clock() - start < delay);
}

int main(){
	int a = 3;
	Delay((float)a);

	return 0;
}
