#include <iostream>
#include "funcDef.cpp"
#include "functions.h"

using namespace std;

int main(){
    functions func;

    func.Void();
    func.Char();
    func.Int();
    func.Float();

    return 0;
}