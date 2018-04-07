// class template
#include <iostream>

using namespace std;

template <class T, class U>
class myClass{
    T x;
    U y;
    public:
        myClass(T, U);
        void fun1(T);
};

template <class T, class U>
myClass<T,U>::myClass(T a, U b){
    x = a;
    y = b;
}

template <class T, class U>
void myClass<T,U>::fun1(T a){
    cout << a << endl;
    cout << x << endl;
    cout << y << endl;
}

int main(){
    myClass<int,int> a(1,2);    
    a.fun1(34);
    return 0;
}
