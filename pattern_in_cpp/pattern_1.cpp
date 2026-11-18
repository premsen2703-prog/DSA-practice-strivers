#include<bits/stdc++.h>
using namespace std;
void print_pattern_1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
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
void print_pattern_3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void print_pattern_4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
void print_pattern_5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print_pattern_6(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<n-i+1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void print_pattern_7(int n)
{
    for(int i=0;i<=n;i++)
    { 
        //space
        for(int j=1;j<n-i+1;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void print_pattern_8(int n)
{
    for(int i=0;i<=n;i++)
    { 
        //space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        //space 
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void print_pattern_9(int n)
{
    for(int i=0;i<=n;i++)
    { 
        //space
        for(int j=1;j<n-i+1;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<=n;i++)
    { 
        //space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        //space 
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

}
void print_pattern_10(int n)

{
    for(int i=0;i<=2*n-1;i++){
        int star=i;
        if (i>n)star=2*n-i;
        for (int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print_pattern_11(int n)
      {  int start=1;
    for(int i=0;i<=n;i++){
        if(i%2==0)start=1;
        else start=0;
    for(int j=0;j<=i;j++){
        cout<<start<<" ";
        start=1-start;
    }
        cout<<endl;
    }
}
void print_pattern_12(int n)
      {  int space=2*(n-1);
    for(int i=1;i<=n;i++){
       //numbers
        for (int j=1;j<=i;j++){
            cout<<j;   
        }
       //spaces
      for( int j=1;j<=space;j++){
          cout<<" ";
      }
       //numbers
        for (int j=i;j>=1;j--){
            cout<<j;   
        }
        cout<<endl;
        space=space-2;
          
    }
}
void print_pattern_13(int n){
    int num=1;
       for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
          cout<<num<<" ";
          num++;
        
        }
      cout<<endl;
        }
    
    }
void print_pattern_14(int n){
    for(int i=0;i<=n;i++){
        //i=2
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print_pattern_15(int n){
    for(int i=0;i<=n;i++){
        //i=2
        for(char ch='A';ch<='A'+n-i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print_pattern_16(int n){
    for(int i=0;i<=n;i++){
        char ch='A'+i;
        for (int j=0;j<=i;j++){
            cout<<ch<<" ";  

        }
        cout<<endl;
    }
}
void print_pattern_17(int n){
    for(int i=0;i<n;i++){
        //sapces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        //characters
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint)ch++;
            else ch--;
        }
        //spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;

    }
}
void print_pattern_18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }       
        cout<<endl;
    }
}
void print_pattern_19(int n){
    int initial_space=0;
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<initial_space;j++){
            cout<<" ";
        }

        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        initial_space=initial_space+2;
        cout<<endl;
    }
    initial_space=8;
    for(int i=1;i<n;i++){
         //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=0;j<initial_space;j++){
            cout<<" ";
        }

        //stars
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        initial_space=initial_space-2;
        cout<<endl;

    }
}
void print_pattern_20(int n){
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n)star=2*n-i;
        //stars
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }

        //stars
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n)spaces+=2;
        else spaces-=2;

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
        print_pattern_20(n);

    }
}