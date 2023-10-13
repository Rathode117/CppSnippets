#include<bits/stdc++.h>
using namespace std;


class A{
    public:
    int x;
    A(int x){
        this->x = x;
    }
    void operator ++(int){   //binary overloading 
        this->x = x+5;
    }


    void fun(){
        cout<<x<<endl;
    }
     
};

  A operator+ (A &obj, A& obj2){    //binary operator overloading
        A ans(10);
        ans.x +=obj2.x+obj.x;
        return ans;
    }


int main(){
    A obj(5);
    A obj1(10);
    A result(10);
    result.fun();
    result = obj+obj1;
    result.fun();


  
    return 0;
}