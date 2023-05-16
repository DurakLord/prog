#include <iostream>

class cloud{
    protected:
    cloud(){
        std::cout << "Jack";
    };
};

class name : public cloud{
    int a, b, c;
    public:
    name() : cloud() {};
};


int main(void){
    name Jack;
}