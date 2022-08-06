#include<bits/stdc++.h>
using namespace std;
int main(){
int n,c=0,cc;
cin>>n;
 vector< pair <int,int> > v;
int p[n+5],q[n+5],pp[n+5],qq[n+5];
for(int i=0;i<n;i++){
 cin>>p[i]>>q[i];
}
for (int i=0; i<n; i++)
        v.push_back( make_pair(p[i],q[i]) );

sort(v.begin(),v.end());
for(int i=0;i<n;i++){
    if(i==n-1)break;
 if((v[i].first>v[i+1].first&&v[i].second<v[i+1].second)||(v[i].first<v[i+1].first&&v[i].second>v[i+1].second))
    c++;
}
//cout<<c<<endl;
 if(c>=1)cout<<"Happy Alex"<<endl;
else cout<<"Poor Alex"<<endl;
return 0;
}
