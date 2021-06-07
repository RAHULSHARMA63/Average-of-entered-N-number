#include<iostream> 
using namespace std;
int main() 
 {
   int sum, n, i ; 
   float av;      
   cout<<"\n Enter the Value of N:"; 
   cin>>n; 
   sum=0; 
   i = 1; 
    do 
    {
	  sum= sum + i ; 
      i = i + 1; 
    } 
      while( i <= n);     
      av=(float) sum/n; 
      cout<<"\n Average is :"<<av; 
     return 0; 
 } 
