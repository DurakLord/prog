#include <cstdlib>
template<class T>
int dynamicArr<T>::operator[](int k){
    if(a){
        T *b = new T [n];
        for (int i = 0; i < n; i++)
        b[i] = a[i];
        if(a) delete[] a;
    
        this->a = new T [k];
        for(int i = 0; i < n; i++)
        a[i] = b[i];
        delete[] b;
    }else a = new T [k];
    n = k;
    return n;
}

template<class T>
dynamicArr<T>::dynamicArr(int k){
    a = new T [k];
    n = k;
}

template<class T>
dynamicArr<T>::~dynamicArr(){
    if(a){
        std::cout << "Array was deleted " << std::endl; 
        delete[] this->a;
        a = nullptr;
    }
    
}

template<class T>
T dynamicArr<T>::operator()(int k){
    return *(a + k);
}

template<class T>
void dynamicArr<T>::del(){
    if(a){
        delete[] a;
        a = nullptr;
    }
}

template<class T>
void dynamicArr<T>::eq(int c, T b){
    a[c] = b;
}

template<class U>
dynamicArr<U>& operator <<(dynamicArr<U>& A, const U a){
    A[A.n + 1];
    (A.a)[A.n - 1] = a;
    return A;
}

template<class U>
dynamicArr<U>& operator >> (dynamicArr<U>& A,U &a){
    a = (A.a)[A.n - 1];
    A[A.n - 1];
    return A;
};

template<class T>
void dynamicArr<T>::operator=(const T a){
    for(int i = 0; i < this->n - 1; i++)
        *(this->a + i) = a;
}

template<class T>
dynamicArr<T>::operator T(){
    return (T) *(this->a);
};

template<class T>
dynamicArr<T>::operator T *(){
    T *b = new T[this->n];
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    return b;
};

template<class T>
void* dynamicArr<T>::operator new(size_t a){
    std::cout << "Hello " << std::endl;
    return malloc(100);
}

template<class T>
void dynamicArr<T>::operator delete(dynamicArr<T>* p){
    free(p);
}

