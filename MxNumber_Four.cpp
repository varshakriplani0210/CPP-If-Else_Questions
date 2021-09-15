#include <iostream>

using namespace std;

int main()
{
int a,b,c,max;
cout<<"enter a,b and c to find the largest number from them "<<endl;
cin>>a>>b>>c;
max=(a>b)?(a>c ? a:c):(b>c ? b:c);
cout<<max;
}

