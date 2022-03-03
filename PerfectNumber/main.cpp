#include <iostream>
using namespace std;

int main() {
  int n,sum=0;
  cout<<"enter number";
  cin>>n;
  if(n==0 || n==1)
  {
  exit;
  }
  else
  {
  for(int i=1;i<=n/2;i++)
  {
    if(n%i==0)
    {
      sum+=i;
    }
  }
  if(sum==n)
  {
    cout<<"perfect number";
  }
  }
} 