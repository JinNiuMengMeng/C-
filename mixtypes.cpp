#include <iostream>

struct antarctica_years_end{
	int year;
};

int main(){
	antarctica_years_end s01, s02, s03;
	s01.year = 1998;
	s03.year = 2000;
	std::cout << "s01.year:" << s01.year << std::endl;
	std::cout << "s02.year:" << s02.year << std::endl;
	std::cout << "s03.year:" << s03.year << std::endl << std::endl;

	antarctica_years_end *pa = &s02;
	pa->year = 1999;
	std::cout << "pa->year:" << pa->year << std::endl;
	std::cout << "(pa-1)->year:" << (pa-1)->year << std::endl;
	std::cout << "(pa+1)->year:" << (pa+1)->year << std::endl << std::endl;


	antarctica_years_end trio[3];
	trio[0].year = 10;
	trio[1].year = 11;
	trio[2].year = 12;
	std::cout << "trio[0].year" << trio[0].year << std::endl;
	std::cout << "trio[1].year" << trio[1].year << std::endl;
	std::cout << "trio[2].year" << trio[2].year << std::endl << std::endl;

	antarctica_years_end *pt[3] = {&s01, &s02, &s03};
	std::cout << "pt[0]->year:" << pt[0]->year << std::endl;
	std::cout << "pt[1]->year:" << pt[1]->year << std::endl;
	std::cout << "pt[2]->year:" << pt[2]->year << std::endl << std::endl;

	
	antarctica_years_end **ppa = pt;
	std::cout << "(*ppa)->year:" << (*ppa)->year << std::endl;
	std::cout << "(*(ppa+1))->year:" << (*(ppa+1))->year << std::endl;
	std::cout << "(*(ppa+2))->year:" << (*(ppa+2))->year << std::endl;


}



















