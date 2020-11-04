/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
 
using namespace std;
 
int main()
{
    int z,i,j,n,temp,a[35];
    cout<<"Enter the order:";
    cin >> z;
    if (z == 0){
        cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
 
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];    //moves element forward
            j=j-1;
        }
 
        a[j+1]=temp;    //insert element in proper place
    }
 
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
        
    }
    }
    else {
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
 
        while((temp>a[j])&&(j>=0))
        {
            a[j+1]=a[j];    //moves element forward
            j=j-1;
        }
 
        a[j+1]=temp;    //insert element in proper place
    }
 
    cout<<"\nSorted list is as follows\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    }
    return 0;
}