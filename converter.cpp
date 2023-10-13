#include <bits/stdc++.h>
using namespace std;



void decimaltohexadecimal(int x){
    unordered_map<int,char> mp = {{10,'A'},{11,'B'},{12,'C'},{13,'D'},{14,'E'},{15,'F'}};
    int copy = x;
    string ans = "";
    while(copy>0){
        int rem = copy%16;
        if(rem>9){
            ans+=mp[rem];
        }
        else{
            ans+=rem+'0';
        }
        copy = copy/16;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}



int main(){
    int x;
    string str;
    cin>>x;
    cin>>str;
    decimaltohexadecimal(x);



return 0;

}