#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while(t--){
    long long x,y;
    cin>>x>>y;
    if(x%2==0 && y%2==0)cout<<"Tonya"<<endl;
    else if(x%2==0 && y%2!=0)cout<<"Burenka"<<endl;
    else if(x%2!=0 && y%2==0)cout<<"Burenka"<<endl;
    else
        cout<<"Tonya"<<endl;
}


return 0;
}
