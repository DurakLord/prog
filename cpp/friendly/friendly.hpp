extern void got(jack&, int, int, int);


class jack{
    private:
    int a, b, c;
    public:
    void cat();
    friend class friendly;
    friend void got(jack&, int, int, int);
};
class friendly{
    public:
    void got(jack& A, int k);
};

void friendly::got(jack& A, int k){
    A.a = k;
}

void jack::cat(){
    std::cout << "Hello";
}

void got(jack& O, int a, int b, int c){
    O.a = a; O.b = b; O.c = c;
}
