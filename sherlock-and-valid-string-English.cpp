#include <bits/stdc++.h>

using namespace std;
 int a[26];
// Complete the isValid function below.
string isValid(string s) {
    string yes="YES";
    string no="NO";
for(int i=0;i<s.length();i++)
  {
      a[char(s[i])-97]+=1;
  }
  int tmp=0,flag=0;

  for(int i=0;i<26;i++)
   {
       cout<<char(i+97)<<"-"<<a[i]<<endl;
   }

int pos;
  sort(a,a+26);
for(int i=0;i<26;i++)
  { if(a[i]==0)
          continue;
    else
      {
        if(tmp==0)
          {
             tmp=a[i];
             pos=i;
          }  
        else
        {
            if(a[i]==tmp)
                continue;
            else if(a[i]!=a[i+1])
               {
                   if(flag!=1)
                     {
                         a[i]-=1;
                         
                         i=i-1;
                         flag=1;
                     }
                    else
                      {  
                          return no;
                      }
               } 
               else 
                  {
                     if(flag!=1)
                     {
                         a[pos]-=1;
                         tmp=0;
                         i=pos-1;
                         flag=1;
                     }
                    else
                      {  
                          return no;
                      } 
                  }
        }
      } 

  }

return yes;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
