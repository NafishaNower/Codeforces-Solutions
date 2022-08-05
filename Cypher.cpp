

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int>v;
vector<int>vv;
vector<string>vs;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);
}
for(int i=0;i<n;i++){
    int c;
    cin>>c;
    //vv.push_back(c);
    string s;
    cin>>s;
    vs.push_back(s);

}
for(int i=0;i<n;i++){
        //cout<<1<<v[i]<<endl;
    for(int j=0;j<vs[i].size();j++){
            if(vs[i][j]=='D'){
                    if(v[i]==9)
                        v[i]=0;
            else v[i]++;
//cout<<2<<v[i]<<endl;
            }
    else{
        if(v[i]==0)
            v[i]=9;
            else v[i]--;
           // cout<<3<<v[i]<<endl;
    }

    }
    cout<<v[i]<<" ";
}
cout<<endl;
v.clear();
vv.clear();
vs.clear();
}
return 0;
}
