// Example of template function

#include <iostream>

using namespace std;

template <class T>
T myFun(T x, T y){
    return (x>y)?x:y;
}

int main(){
    cout << myFun<int>(3,7) << endl;        // compiler generates 
                                            // function for int
    cout << myFun<float>(3.7,8.4) << endl;  // for float
    return 0;
}
