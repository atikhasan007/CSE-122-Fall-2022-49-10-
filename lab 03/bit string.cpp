#include<bits/stdc++.h>
#include<cmath>

using namespace std;
#define modulo 1000000007
int main(){

 long long  n,i,ans=1;
 cin>>n;
 for(i=0;i<n;i++){
    ans = ans * 2;
    ans = ans % modulo;

 }
cout<<ans<<endl;

return 0;

}
