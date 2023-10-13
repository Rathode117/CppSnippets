#include <bits/stdc++.h>
using namespace std;

class A{
public:
virtual void fun()=0;

};

class B: public A{

    public:
    void fun(){
        cout<<"virtual function overidden"<<endl;
    }
};

int main(){
    A* obj = new B();   //cannot call any member other then the one present in Class A
    (*obj).fun();      //-> can be used

    return 0;
}