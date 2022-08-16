

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        set<char>str;
        map<char,int>m;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]++;
        }
        //for(int i=0; i<s.size(); i++)
        //{
            //cout<<m[s[i]]<<endl;
        //}
        for(int i=0; i<s.size(); i++)
        {
            str.insert(s[i]);
        }
        sum=s.size()-str.size();
        int ans=(s.size()*2)-sum;
        cout<<ans<<endl;
        //for (auto it = str.begin(); it !=
                            // str.end(); ++it)
       // cout << ' ' << *it;
        //cout<<sum<<endl;
    }

    return 0;
}
