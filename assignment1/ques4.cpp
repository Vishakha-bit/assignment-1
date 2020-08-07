#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str1[20],str2[20];
int i, j, len=0,temp=0;
cout<<"enter the string:";
gets(str1);
len=strlen(str1)-1;
for(i=len,j=0;i>=0i--,j++)
str2[j]=str1[i];
if(strcmp(str1,str2))
temp=1;
if(temp==1)
cout<<str1<<"is not a palindrome";
else
cout<<str1<<"is palindrome";
return 0;

}
