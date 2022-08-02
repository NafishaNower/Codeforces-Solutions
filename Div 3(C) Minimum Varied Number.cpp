#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
        int n;
cin>>n;
vector<int>v;
   for(int i=9;i>=1;i--){
    if(i<n || i==n){
        v.push_back(i);
        n=n-i;
        //cout<<n<<" "<<i<<endl;
        //if(i<9)i++;
    }
    else if(n==0){
        break;
    }
   }
   for(int i=v.size()-1;i>=0;i--){
    cout<<v[i];
   }
   cout<<endl;
   v.clear();

}
return 0;
}

