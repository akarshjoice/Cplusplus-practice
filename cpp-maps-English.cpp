#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
 int n,a,m,t;
 string s;
map<string,int> mp;
  cin>>n;
  for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t==1)
          {
              cin>>s>>m;
              if(mp.count(s))
                 {
                   mp[s]+=m;
                 }
               else  
                 mp.insert(pair<string,int>(s,m));
          }
        else if(t==2)
          {
              cin>>s;
              mp[s]=0;
          }
        else 
        {
            cin>>s;
            cout<<mp[s]<<endl;
        }
    }
   return 0;
}



