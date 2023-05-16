#ifndef DURAK_H
#define DURAK_H

class card{
    public:
    int domen, order;
    void set(int, int);
    void show();
};

class bank{
    public:
    card lot[36];
    bank();
    friend class player;
};


class player{
    public:
    char name[20];
    static int n;
    card *cards[6] = {0, 0, 0, 0, 0, 0};
    player(bank&);
    void set(bank&);
    void show();    
};
#endif 

