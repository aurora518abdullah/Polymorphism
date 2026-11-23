#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
    virtual void show()=0;
};

class dog: public Animal{
public:
    void show()
    {
        cout<<"Barking";
    }
};

class cat: public Animal{
public:
    void show()
    {
        cout<<"mew";
    }
};

int main()
{
    Animal *a = new dog();
    a->show();

    Animal *b = new cat();
    b->show();
}
