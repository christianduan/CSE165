#include <iostream>

using namespace std;

// Template function
template<class T>
// Fibonacci function
T fibonacci(T n){
    long a = 0, b = 1, c, i;

    if(n == 0){
        return a;
    }
    for(i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
};

int main(){
    long long n = 90;

    cout << fibonacci(n) << endl;

return 0;
}