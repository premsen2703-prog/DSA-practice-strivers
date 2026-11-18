#include<bits/stdc++.h>// header file for input output and other functions
using namespace std;//
void print_pattern_2(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
// You can add more pattern functions here and test them in the main function
int main()
{
    //code to test the function
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        //code to test the function
        cout<<"Test case "<<i+1<<": "<<endl;
        int n;
        cin>>n;
        print_pattern_2(n);
    }
}