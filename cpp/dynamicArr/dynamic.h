#ifndef DYNAMIC_H
#define DYNAMIC_H
#include <iostream>

template<class T>
class dynamicArr;

template<class U>
extern dynamicArr<U>& operator <<(dynamicArr<U>&, const U);

template<class U>
extern dynamicArr<U>& operator >> (dynamicArr<U>&, U&);



template <class T>
class dynamicArr{
    protected:
    T *a;
    int n;
    public:
    int operator[](int);
    T operator()(int);
    dynamicArr(int);
    ~dynamicArr();
    void operator = (const T);
    void del();
    void eq(int, T);
    // template<class U>
    template <class U>
    friend dynamicArr<U>& operator << (dynamicArr<U>&, const U);
    template<class U>
    friend dynamicArr<U>& operator >>(dynamicArr<U>&, U&);
    operator T();
    operator T* ();
    void* operator new(size_t);
    void operator delete(void*);
};
#endif

#include "dynamic.cpp"

