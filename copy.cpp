#include <bits/stdc++.h>
using namespace std;


class A{
    public:
    int x;
    A(int x){
        this->x = x;
    }

    A(A&obj){
        this->x = obj.x;
    }
    void fun(){
        cout<<this<<endl;
        cout<<x<<endl;
    }

};



int main(){
    A a(10);
    A b(5);
    b = move(a);

  a.fun();
  b.fun();

    


    return 0;
}