#include <iostream>

namespace jack{
    int a, b, c;
    template<class T>
    class sword{
        private:
        T a, b, c;
        public:
        sword(T, T, T);
        void show();
    };
}
int main(void){
    jack::sword<int> katana(2, 3, 4);
    katana.show();

}
template<class T>
void jack::sword<T>::show(){
    std::cout <<a << std::endl <<b << std::endl <<c << std::endl;  
}

template <class T>
jack::sword<T>::sword(T a, T b, T c){
    this->a = a; this->b = b; this->c = c;
}
