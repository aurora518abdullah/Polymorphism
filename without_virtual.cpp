#include<bits/stdc++.h>
using namespace std;

class Parent {
public:
    void show() {
        cout<<"Parent Class"<<endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout<<"Child Class"<<endl;
    }
};

int main() {
    Parent *ptr;
    Child obj;

    ptr = &obj;

    ptr->show();

    return 0;
}
