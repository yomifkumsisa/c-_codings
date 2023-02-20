/*Write a function declaration and a function definition for a function that
takes one argument of type double. The function returns the character
value 'P' if its argument is positive and returns 'N' if its argument is zero
or negative.*/
#include <iostream>
using namespace std;
double example(double);
int main()
{
    int n;
    char result;
cout<<"enter the number"<<endl;
cin>>n;
 result=example(n);
 cout<<"the answer is "<<result<<endl;
 return 0;
}
double example(double)
{
    int n;
    if (n>0&&n==0)
 return 'p';
    else
    return 'N';
}



