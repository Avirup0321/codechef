#include <iostream>
using namespace std;



int main()
{
    int x,y;
int n;
cout<< "enter transaction";
cin>>x>>y;
float withdraw;
withdraw=((y-x)-0.50);
if (x%5==0 && y%5==0)
{
    cout<< " withdraw";
}   
 else if  (x%5==0 && y%5!=0){
    cout<<" "<<x;
 }
else if (x%5!=0 && y%5==0)
{    cout<<" "<<y;}

     else {
    cout<< " no transction";}
    
    
 if (0<x<=2000)
    {
        cout<<" "<< withdraw;
    }
    else
    {
        cout<<"no cash";
    }
    
}