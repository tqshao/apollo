#include <iostream>
using namespace std;

class soldier{
public:
	soldier(){}
	soldier(char* name, int blood):name(name), blood(blood){}
	void init(char* name, int blood);
	void print();
	void print_new();
	void a();
	void b();
	void c();
private:
	char* name;
	int blood;
};

class headquartor{
public:
	void print();
	void init(soldier s[]);
private:
	soldier s[5];
};

int main(){
	char* names[3] = {"Hu","Jun","Hao"};
	int bloods[3] = {10,20,30};
	soldier s[3];
	for (int i = 0; i < 3; i++){
		s[i].init(names[i],bloods[i]);
	}
	headquartor h;
	h.init(s[3]);
	h. print();

	return 0;
}

void soldier::print(){
	cout<< "Soldier " << *name << "has " << blood << " blood." << endl;
}

void soldier::init(char* name_, int blood_){
	name = name_;
	blood = blood_;
}

void headquartor::init(soldier sol[]){
	for (int i =0; i < 3; i++)
	headquartors.s[i] = sol[i];
}


void headquartor::print(){
	for (int i =0; i < 3; i++)
	soldier[i].print();
}
