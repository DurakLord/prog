class Jack{
    public:
    int a = 10, b = 40, c = 50;
    Jack* newobj();
    int get();
};

Jack* Jack::newobj(){
    return new Jack();
}

extern "C" Jack* newObj(){
    Jack name;
    return name.newobj();
}

int Jack::get(){
    return this->a;
}

extern "C" int get(Jack* A){
    return A->get();
}
