#include <bits/stdc++.h>
using namespace std;


class Animal{

int a; //pvt
public:
Animal(int a){
    this->a = a;
}
friend class Dog;
};
class Dog{
    string f = "i want bisuits ";
    public:
    void eat(Animal &object){
        cout<<f<<object.a<<endl;
    }
};

int main(){
    int biscuits = 12;
    Animal obj(biscuits);
    Dog german;
    german.eat(obj);

    return 0;

}






