#include <iostream>
#include <string>

struct inflatable{
	std::string name;
	float  volume;
	double price;
};

int main(){
	using namespace std;
	string buf;
	inflatable guest = {
		"name is world",
		23.3,
		23423
	};
struct	inflatable pal = {
		"Audacious Arthur",
		23.3,
		234234.234
	};

	cout << "expend your guest list with:" << guest.name;
	cout << " guest.volume:" << guest.volume;
	cout << " guest.price:" << guest.price << endl;
	cout << guest.price + pal.price << endl;
	cout << guest.name + pal.name << endl;
	return 0;
}
