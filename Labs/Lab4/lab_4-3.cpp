#include <iostream>

using namespace std;

class Subject{
    public:
        virtual void f(){
            cout << "f() function from Subject." << endl;
        }
        virtual void g(){
            cout << "g() function from Subject." << endl;
        }
        virtual void h(){
            cout << "h() function from Subject." << endl;
        }
};

class Proxy : public Subject{
    public:
        Subject* ptr;

        Proxy(){
            Subject();
        }

        Proxy(Subject* p){
            ptr = p; 
        }

        void f(){
            ptr->f();
        }
        void g(){
            ptr->g();
        }
        void h(){
            ptr->h();
        }

        void modProxy(Subject* p){
            ptr = p;
        }

        ~Proxy(){
        };
};

class Implementation1 : public Subject{
    public:
        void f(){
            cout << "f() function from imp1." << endl;
        }
        void g(){
            cout << "g() function from imp1." << endl;
        }
        void h(){
            cout << "h() function from imp1." << endl;
        }
};

class Implementation2 : public Subject{
    public:
        void f(){
            cout << "f() function from imp2." << endl;
        }
        void g(){
            cout << "g() function from imp2." << endl;
        }
        void h(){
            cout << "h() function from imp2." << endl;
        }
};


int main(){
    Implementation1 imp1;
    Implementation2 imp2;
    Proxy p(&imp1);
    Proxy q(&imp2);

    cout << "Proxy 1: " << '\n';
    p.f();
    p.g();
    p.h();
    cout << "Proxy 2: " << '\n';
    q.f();
    q.g();
    q.h();

    p.modProxy(&imp2);
    q.modProxy(&imp1);

    cout << "Modified Proxy to Changed Implementations" << '\n';

    cout << "Proxy 1: " << '\n';
    p.f();
    p.g();
    p.h();
    cout << "Proxy 2: " << '\n';
    q.f();
    q.g();
    q.h();

    return 0;
}