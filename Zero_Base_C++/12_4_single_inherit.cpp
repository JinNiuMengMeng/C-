#include <iostream>

using namespace std;

class father{
//	private:
	protected:
		int father_tall, father_weight;
	public:
		void set_father_tall(int F_Tall){father_tall = F_Tall;}
		void set_father_weight(int F_Weight){father_weight = F_Weight;}
		//		void print_father_tall_weight(){cout << "父亲身高:"
//		<< father_tall << " 父亲体重:" << father_weight << endl;}
};
class son : public father{
	private:
		int son_tall, son_weight;
	public:
		void set_son_tall(int S_Tall){son_tall = S_Tall;}
		void set_son_weight(int S_Weight){son_weight = S_Weight;}
		void print_All_tall_weight(){cout << "儿子身高:" \
			<< son_tall << " 儿子体重:" << son_weight << endl;
			cout << "父亲身高:"<< father_tall << " 父亲体重:" \
			<< father_weight << endl;}
};
int main(){
	son LiMing;
	LiMing.set_father_tall(165);
	LiMing.set_father_weight(75);

	LiMing.set_son_tall(180);
	LiMing.set_son_weight(65);
	LiMing.print_All_tall_weight();

	return 0;
}
