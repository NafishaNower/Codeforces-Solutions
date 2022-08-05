#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,h,m;
cin>>n>>h>>m;
int a1;
a1=60*h+m;
//vector<int>v;
int mi1=INT_MAX;
int mi2=INT_MAX;
while(n--){
    int hh,mm,ans;
    int a2;
    cin>>hh>>mm;
    a2=60*hh+mm;
    //if(hh>h)
    ans=a2-a1;
    if(ans<0)ans=ans+(24*60);
        //ans=(a1-a2)+((h-hh)*60);
    mi1=min(ans,mi1);

}
cout<<mi1/60<<" "<<mi1%60<<endl;



}


return 0;
}

