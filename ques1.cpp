// to find greatest of three number
#include<iostream>
using namespace std;
int main(){
int a, b, c;
cout<<"enter the a:";
cin>>a;
cout<<"enter the b:";
cin>>b;
cout<<"enter the c:";
cin>>c;
if(a<b && c<b)
{
cout<<"b is the greater number"<<b;
}else if(a>b && a>c)
{
cout<<"a is a greater number"<<a;
}else{
cout<<"c is a greater number"<<c;
}
return 0;
}
