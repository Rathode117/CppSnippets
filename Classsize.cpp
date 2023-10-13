#include <bits/stdc++.h>
using namespace std;


class Base{

    int p;
    int q;
};

class A:public Base{
    public:
    int a;
    int b;


};

class B: public A{      //classes will have size of all the inhe
    public:
    int x = 1;
    int y;

   
};

int main(){

    B* obj = new B();    //object will only have the size of the object it is of
    cout<<sizeof(Base)<<endl;
    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    cout<<sizeof(obj)<<endl;
    
    

    return 0;
}