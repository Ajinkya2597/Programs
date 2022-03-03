#include<iostream>
using namespace std;

int main()
{
  int num, rev=0,n,digit;

  cout<<"enter numberto check";
  cin>>num;
  n=num;

  do{
digit=num%10;
rev=(rev*10)+digit;
num=num/10;
  } while(num!=0);

  if(n==rev)
  {
    cout<<"palindrome";
  }
  else
  {
    cout<<"not palindrome";
  }
}