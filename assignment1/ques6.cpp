#include<iostream>
using namespace std;
int main()
{
int n,i;
bool prime=0;
cout<<"enter the integer:";
cin>>n;
for(i=2; i<n/2; i++){
if(n%i==0){
prime=0;
break;
}
}
if(prime==0)
cout<<n<<"is a prime number";
else
cout<<n<<"is not a prime number";
return 0;
}
