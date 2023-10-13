#include <bits/stdc++.h>
using namespace std;


class A{
    private:
    int x =10;
    friend void fun(A);

};

void fun(A obj){
    cout<<obj.x<<endl;
}


int main(){
    A obj;
    fun(obj);
    

    return 0;
}