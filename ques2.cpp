#include<iostream>
using namespace std;
int main(){
int i,n,a[50],sec,l,small,ss;
cout<<"enter no. of element in an array";
cin>>n;
for(i=0; i<n; i++){
cin>>a[i];
}
if(a[0]<a[1]){
l=a[1];
sec=a[0];
}
else{
l=a[0];
sec=a[1];
}
for(int i=2; i<n; i++){
if(a[i]>l)
sec=l;
l=a[i];
else if(a[i]>sec && a[i] != l){
sec=a[i];}
}
cout<<"sec largest element in an array is:"<<sec;
if(a[0]>a[1]){
        small=a[1];
        ss=a[0];
}
else
    small=a[0];
     ss=a[1];
     for(int i=2;i<n;i++){

        if(a[i]<1)
            ss=1;
             small=a[i];
             else if(a[i]<ss && a[i] != 1)
                ss=a[i];
     }
cout<<"sec smallest element in an array:"<<ss;
return 0;
}
