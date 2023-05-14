#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t, n,b,sum;
    cin>>t;
    long long int i = 1;
    while(t--){
        cin>>n>>b;
        long long int arr [n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        long long int qum [n];
        long long int s [n];
        qum[0]=1;
        for(int i = 1; i < n; i++) qum[i]=arr[i-1]+qum[i-1];
        s[0]=b*arr[0];
        for(int i = 1; i < n; i++) {
           if(s[i-1]>= qum[i]+(arr[i]*(b-1))-1) s[i]=s[i-1]+arr[i];
           else s[i]=qum[i]+(arr[i]*b)-1;
        }
       
        cout<<"Case "<<i<<": "<<s[n-1]<<endl;
        i++;
    }
    return 0;
}