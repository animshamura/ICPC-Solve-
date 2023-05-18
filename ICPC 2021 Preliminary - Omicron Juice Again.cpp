#include <bits/stdc++.h>
using namespace std;
int main(){
   int t,a,b,c,k,p,i=1;
   cin>>t;
   while(t--){
       cin>>a>>b>>c>>k;
       p=(a+b+c)/3;
       cout<<"Case "<<i++<<": ";
       bool a1 = abs(a-p)%k==0;
       bool b1 = abs(b-p)%k==0;
       bool c1 = abs(c-p)%k==0;
       bool d1 = (a+b+c)%3==0;
       if(a1&&b1&&c1&&d1) cout<<"Peaceful"<<endl;
       else cout<<"Fight"<<endl;
   }
    return 0;
}
