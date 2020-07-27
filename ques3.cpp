#include<iostream>
using namespace std;
int main()
{
int n, i, j,temp;
int ar[64];
cout<<"enter the number of element";
cin>>n;
cout<<n;
for(i=0; i<n; i++)
{
cin>>ar[i];
}
for(i=0; i<=n-1; i++)
{
j=i;
while(j>0 && ar[j-1]>ar[j])
{
temp=ar[j];
ar[j]=ar[j-1];
ar[j-1]=temp;
j--;
}
}
cout<<"sorted list  of ascending order"
for(i=0; i<=n-1; Si++)
{
cout<<ar[i];
}
return 0;
}
