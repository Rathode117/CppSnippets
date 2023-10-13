#include <bits/stdc++.h>
using namespace std;



int main(){
    ifstream f;
    f.open("myfile.txt");
    // f<<"hello"<<endl;
    // f<<"my name is mayand singh"<<endl;
    string h;
    while(getline(f,h)){
        cout<<h<<endl;
    }
    f.close();

    return 0;
}