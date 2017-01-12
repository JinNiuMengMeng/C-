#include <iostream>
#include <string>
using namespace std;
class film{
	public:
		char name[16];
		int rating;
		film * next;
};
film * creat(void){
	film * prev;
film * head = NULL;
	film * current = NULL;
	current = new film;
	prev = current;

	if(current == NULL){
		cout << "Create node failed!" << endl;
	}else{
		head = NULL;
		cout << "Quit please input 'q + Enter', Please input film name:" << endl;
		cin >> current->name;
		cout << "Please input film rating:" << endl;
		cin >> current->rating;
		head = current;
		cout << "head->name:" << head->name << "head->rating:" << head->rating << endl;
	}
		for(int i = 0; i < 2; i++){
			prev->next = current;	
			current = new film;
			prev = current;
			cout << "Quit please input 'q + Enter', Please input film name:" << endl;
			cin >> current->name;
				cout << "Please input film rating:" << endl;
				cin >> current->rating;
		}
		prev->next = NULL;
		cout << "Film list:" << endl;
		current = head;
		while(current != NULL){
			cout << "film name:" << current->name << " film rating:" << current->rating << endl;
			current = current->next;
		}
		delete current;
		prev->next = NULL;
	}

int main(void){
	creat();
	return 0;
}
