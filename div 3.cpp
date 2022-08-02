#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n+5];
    long long nn=n;
    set<long long>s;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;i--){
        if(mp[arr[i]]>0)break;
        else{
                mp[arr[i]]++;
        s.insert(arr[i]);
        }
    }
    long long len=s.size();
    cout<<nn-len<<endl;
}
return 0;
}
