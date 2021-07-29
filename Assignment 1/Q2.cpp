/*

Q2.) Write a program to check whether the given number of three digits is palindrome or not? [Do not use loops]

*/
#include <iostream>
using namespace std;
int main()
{
    int n_t,s_n,n;
    cout<<"Enter the no.: ";
    cin>>n;
    s_n=n;
    n_t=n%10;
    n=n/10/10;
    if (n_t==n)
        cout<<"The given number "<<s_n<<" is palindrome";
    else
        cout<<"The given number "<<s_n<<" is not palindrome";
    return 0;
}
