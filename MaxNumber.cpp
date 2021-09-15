//To find the max no from two numbers
//With IF-ELSE
//With TENARY OP

//teneray
#include <iostream>

using namespace std;
int main()
{
int a,b,max;
cout<<"enter a and b to find the largest number from them "<<endl;
cin>>a>>b;
max=(a>b)? a:b;
cout<<"The largest number is "<<max;
}

//With IF-ELSE
int main()
{
int a,b,max;
cout<<"enter a and b to find the largest number from them "<<endl;
cin>>a>>b;
if(a>b){
    cout<<"a is bigger";
}
else{
    cout<<"b is bigger";
}
}
