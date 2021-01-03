#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x,y,n;

    
    cout <<"enter transation  ";
    cin>> y>>x;

    if (0<x<2001 && 0<y<2001 )
    {
        if (x%5==0 && y%5==0)
{
    if(y>x){

    
    cout<<((y-x)-0.5);
    exit(0);}
    else{
       cout<<((x-y)-0.5);
    exit(0);
    }
}   
 else if  (x%5==0 && y%5!=0)
 {
    cout<<" "<<x;
 exit(0);}
else if (x%5!=0 && y%5==0)
{    cout<<" "<<y;
exit(0);}
else 
cout << "no transation";
    }

    else 
    cout <<" no cash";
}
