#include <bits/stdc++.h>
#include<iostream>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define lli unsigned long long int
#define forit(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define fori(i,n) for(int j=i;j<n;j++)
#define pb push_back
#define ff first
#define ss second
#define pp pair<int,int>
#define mod  1000000007
using namespace std;
bool isV(char ch)
{
return(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
void tc()
{
          
lli n,m,x;
cin>>n;
multiset<lli>s;
for(int i=0;i<n;i++)
{
    cin>>x;
    if(s.find(x)!=s.end()&&x!=2048)
    {
        while(s.find(x)!=s.end()&&x!=2048)
        {
            s.erase(x);
            x*=2;
        }
        s.insert(x);
    }
    else
    s.insert(x);
}               
if(s.find(2048)!=s.end())cout<<"YES"<<"\n";
else
cout<<"NO"<<"\n";      
                     
                     
}
int main()
{
IOS;
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
     
lli q; cin>>q; while(q--)
                      
tc();
                                   
      
return 0;
}