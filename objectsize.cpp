#include <bits/stdc++.h>
using namespace std;



class B{      //classes will have size of all the inhe
    public:
    int x;
    int y;
    int z;
    int g;

   
};

int main(){

    B* obj = new B();    //object will only have the size of the object it is of
    cout<<sizeof(obj);
 
    
    

    return 0;
}