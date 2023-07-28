// Bhaskor Roy
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define          sz(a)               (int)a.size()
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define MOD 1000000007
#define N 8

ll calcu(ll b,ll c,ll m){

if(c==0)
    return 1;
if(c==1)
    return b%m;

 ll   t=calcu(b,c/2,m);
    //cout<<t<<endl;

if(c%2==0)
    return (t*t)%m;
else
    return (((t*t)%m)*b)%m;

}


void s1(){

ll a,b,c;
cin>>a>>b>>c;

ll tem=calcu(b,c,MOD-1)%MOD;
cout<<calcu(a,tem,MOD)%MOD<<endl;

}



int main(){
int n;
cin>>n;
while(n--){
    s1();



}




return 0;
}
