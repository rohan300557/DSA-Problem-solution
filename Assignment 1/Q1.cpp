/*

Q1.) Take three numbers input from keyboard and print their values in descending order. (Like variable a, b
and c has values 7, 10 and 5 then values will be printed in order 10, 7, 5).

*/
#include <iostream>
using namespace std;
int main()
{
    int n[3],i,j,n_temp;
    cout<<"Enter the Three no.: ";
    cin>>n[0]>>n[1]>>n[2];
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if (n[i]<n[j])
            {
                n_temp=n[i];
                n[i]=n[j];
                n[j]=n_temp;
            }
        }
    }
    cout<<"The values in descending order are: ";
    for (i=0;i<3;i++)
    {
        cout<<n[i]<<" ";
    }
    return 0;
}
