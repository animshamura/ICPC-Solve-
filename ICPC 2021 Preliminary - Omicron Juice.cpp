
#include <bits/stdc++.h>
using namespace std;
int main(){
   int t,a,b,c,i=1;
   cin>>t;
   while(t--){
       cin>>a>>b>>c;
       cout<<"Case "<<i++<<": ";
       if((a+b+c)%3==0) cout<<"Peaceful"<<endl;
       else cout<<"Fight"<<endl;
   }

    return 0;
}
