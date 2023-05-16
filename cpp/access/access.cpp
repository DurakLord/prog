			#include <iostream>

void can();

void __attribute__((concstructor)) can();

class name{
	private:
	int a, b, c;
	public:
	name(int, int, int);
	void show(void talk());
	int *s();
};

#if defined Hello
#error "name"
#endif

int main(void){
	name jack(1, 2, 3);
}

name::name(int a, int b, int c){
	this->a = a; this->b = b; this->c = c;
}

void name::show(void talk()){
	std::cout << a << std::endl << b << std::endl << c << std::endl;
	talk();
}


int* name::s(){
	return &a;
}