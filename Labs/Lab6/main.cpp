#include "myHeader2.h"

namespace myName = myNamespace;

// Creates function that accesses functions in myHeader1.h
void test1(){
    myNamespace::fun1();
    myNamespace::fun2();
}

// Creates function that accesses functions in myHeader2.h
void test2(){
    using namespace myName;

    fun3();
    fun4();
}

int main(){
    // Calls declared functions
    test1();
    test2();

    return 0;
}

