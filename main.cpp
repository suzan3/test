#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a[4]={0,0,0,0};
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
            a[0]++;
        else if(s[i]=='C')
            a[1]++;
            else if(s[i]=='G')
            a[2]++;
            else if(s[i]=='T')
            a[3]++;
    }
    long long m;
    m=*max_element(a,a+4);
    if(n%4!=0 || m>(n/4) )
    {
        cout<<"===";
        return 0;
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='?')
            {
                for(int j=0;j<4;j++)
                {

                    {
                        if(j==0 && a[j]<(n/4))
                        {
                            s[i]='A';
                            a[j]++;
                            break;
                        }
                        else if(j==1 && a[j]<(n/4))
                        {
                            s[i]='C';
                            a[j]++;
                            break;
                        }
                        else if(j==2 && a[j] <(n/4))
                        {
                            s[i]='G';
                            a[j]++;
                            break;
                        }
                        else if(j==3 && a[j] <(n/4))
                        {
                            s[i]='T';
                            a[j]++;
                            break;
                        }
                    }
                }
            }
        }
    }
    cout<<s;
    return 0;
}
