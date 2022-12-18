#include <iostream>

using namespace std;

void modPtr(int* x){
    (*x)++;
}

int main(){
    int a[] = {4};

    int* ptr = a;

    cout << "Unmodified: address = " << &ptr << " value = " << *ptr << '\n';

    modPtr(ptr);

    cout << "Modified: address: " << &ptr << " value = " << *ptr << endl;

    return 0;
}