#include <cstddef> // for size_t
class Main{
    protected:
    int a, b;
    public:
    Main();
    operator int();
    ~Main();
};

extern void* operator new(size_t);
extern void* operator new(size_t, const char*);

void operator delete(void*) throw();


