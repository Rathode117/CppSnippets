#include <bits/stdc++.h>
using namespace std;


class A{
    public:
    int x;
    static int belongsToClass;
    A(int x){
        this->x = x;
    }
};

int A::belongsToClass = 10;
//type of static variable classname :: variablename = value;


int main(){
    A obj(5);
    cout<<A::belongsToClass<<endl;   //scopre resolution used

    return 0;
}