#include<iostream>
using namespace std;

int sum(int x, int y){
     return(x+y);
}
int pro(int x, int y){
     return (x*y);
}
int sub(int x, int y){
     return (x-y);
}
float div(float x, float y){
     return (x/y);
}
int main()
{
    float x,y,num;
    cout<<"Enter first number"<<endl;
    cin>>x;
    cout<<"Enter second number"<<endl;
    cin>>y;
    num=sum(x,y);
    cout<<"Add two numbers:" <<endl;
    cout<<num<<endl;
    cout<<"Productin is:" <<endl;
    num=pro(x,y);
    cout<<num<<endl;
    cout<<"Subtraction is:" <<endl;
    num=sub(x,y);
    cout<<num<<endl;
    cout<<"Division is:" <<endl;
    num=div(x,y);
    cout<<num<<endl;
}



    