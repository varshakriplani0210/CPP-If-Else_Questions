#include <iostream>

using namespace std;

int main()
{
int a,b,c,d,max;
cout<<"enter a,b and c to find the largest number from them "<<endl;
cin>>a>>b>>c>>d;
max=(a>b && a>c && a>d)?a:(b>c && b>d)?b:(c>d?c:d);
cout<<max;
}
