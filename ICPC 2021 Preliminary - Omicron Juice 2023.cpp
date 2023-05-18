#include <bits/stdc++.h>
using namespace std;
int main(){
   int t,a,b,c,k,p,i=1,ct;
   cin>>t;
   while(t--){
       cin>>a>>b>>c>>k;
       ct=0;
       cout<<"Case "<<i++<<": ";
       if(a<k) ct++;
       if(b<k) ct++;
       if(c<k) ct++;
       if(a==b && b==c) cout<<"Peaceful"<<endl;
       else if(ct>=2) cout<<"Fight"<<endl;
       else {
       p=(a+b+c)/3;
       bool a1 = abs(a-p)%k==0;
       bool b1 = abs(b-p)%k==0;
       bool c1 = abs(c-p)%k==0;
       bool d1 = (a+b+c)%3==0;
       if(a1&&b1&&c1&&d1) cout<<"Peaceful"<<endl;
       else cout<<"Fight"<<endl;
       }
   }
    return 0;
}
