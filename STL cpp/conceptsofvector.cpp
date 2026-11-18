#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(2,100);//creating vector of size 2 and initializing with 100
    v.insert(v.begin(),300);//inserting element in vector
    v.insert(v.begin()+1,2,10);//inserting elements in vector
    
    vector<int>copy(2,50);//creating copy of vector
    v.insert(v.begin(),copy.begin(),copy.end());
    //inserting copy of vector in another vector
    for(int i:v){//range based loop
        cout<<i<<" ";
    }
    cout<<endl;//end of line
    cout<< v.size();//size of vector v
    cout<<endl;
    vector<int>v1{10,20};
    v1.size();//size of vector v1
    v.pop_back();//removing last element of vector
    cout<<v.size();//size of vector after pop_back
    cout<<endl;
    v1.swap(v);//swapping two vectors
    for(int i:v1){//range based loop
        cout<<i<<" ";
    }
    cout<<endl;
    v1.clear();//clearing vector v1
    cout<<v1.size();//size of vector v1 after clearing
    cout<<endl;
    cout<<v.empty();//checking if vector v is empty or not

    return 0; 
}