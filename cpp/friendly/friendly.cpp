#include <iostream>
#include "friendly.hh"
template<class T> class Main{
    private:
    T a;
    public: 
    Main(T a){
        this->a = a;
    }
    T get(){
        return this->a;
    };
};

class Name{
    private:
    int a;
    public:
    void get();
    Name(int k, int b, int c) : get();
};
int main(void){
    Main<int> k(20);
    std::cout << k.get();
}