#include<iostream>
using namespace std;
int fact(int n)
{ 
   if(n==0)
   {
    return 1;
   }
   else
   {
    return n*fact(n-1);
   }
}


int main()
{
    int n;
    cout<<"enter a number : "<<endl;
    cin>>n;
    cout<<"factorial of "<<n<<"is : "<<fact(n)<<endl;
return 0;    
}