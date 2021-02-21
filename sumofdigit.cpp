#include<iostream>
using namespace std;
int  main()
{
 int t,n,i,c=0;
    cin>>t;

    while(t--)
    {
        cin>>n;
        
    
   while(n>0)
       {c+=n%10;
        n/=10;
        }
        cout <<c <<endl;
        c=0;}
return 0;
        
       
}
