#include<bits/stdc++.h>
#include<mutex>
using namespace std;

mutex mu;
void fun(){
    mu.lock();
    this_thread::sleep_for(chrono::seconds(3));
    for(int i = 0; i<10; i++){
        cout<<i<<endl;
    }
    
   mu.unlock();
}

int main(){
thread t1(fun);
mu.lock();
for(int i = 0; i<8 ; i++){
    cout<<"main thread -"<<i<<endl;
}
mu.unlock();

t1.join();


    return 0;
}