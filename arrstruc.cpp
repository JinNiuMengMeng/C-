#include <iostream>
#include <string>

struct inflatable{
	std::string name;
	int age;
	float volume;
};

int main(){
	using namespace std;
	inflatable guests[2] = {
		{"LiMing", 24, 4.5},
		{"ZhanNi", 25, 4.4}
	};

	cout << "guests[0].name:" << guests[0].name 
		 << " guests[0].age:" << guests[0].age
		 << " guests[0].volume:" << guests[0].volume << endl;
	cout << "guests[1].name:" << guests[1].name 
		 << " guests[1].age:" << guests[1].age
		 << " guests[1].volume:" << guests[1].volume << endl;
		 return 0;
}
