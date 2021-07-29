/*

Q.3: WAP to calculate tax deduction as follow-
    1. Upto 2,5L no tax
    2. More than 2.5 L but up to 5L 10%
    3. More than 5L but up to 10L 20%
    4. More than 10L 30%
        i. If senior citizen (age >= 60) then relaxation of 5%
        ii. if woman candidate (age >= 60) then relaxation of 3%

*/
#include <iostream>
using namespace std;
int main()
{
    int inc,tax=0,age;
    char gen[50];
    cout<<"Enter your income: ";
    cin>>inc;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Gender (male/female): ";
    cin>>gen;
    if(inc<=250000)
    {
        tax = 0;
    }
    else if(inc>250000 && inc<=500000)
    {
        tax = (inc-250000)*10/100;
    }
    else if(inc>500000 && inc<=1000000)
    {
        tax = (inc-250000)*10/100;
        tax = tax + (inc-500000)*20/100;
    }
    else
    {
        tax = (inc-250000)*10/100;
        tax = tax + (inc-500000)*20/100;
        tax=tax+(inc-1000000)*30/100;
        if (age>=60)
        {
            tax = (inc-250000)*10/100;
            tax = tax + (inc-500000)*20/100;
            tax=tax+(inc-1000000)*25/100;
            if(gen=="female")
            {
                tax = (inc-250000)*10/100;
                tax = tax + (inc-500000)*20/100;
                tax=tax+(inc-1000000)*22/100;            
            }
        }
    }
    cout<<"Your Tax Deduction is: "<<tax;
    
    return 0;
}

