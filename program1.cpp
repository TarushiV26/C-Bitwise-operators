//using and & or operators
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter number 1 ";
    cin>>num1;
    cout<<"enter number 2 ";
    cin>>num2;
    int bitwise_and=num1&num2;
    int bitwise_or=num1|num2;
    cout<<"binary AND operation: "<<bitwise_and<<endl;
    cout<<"binary OR operation: "<<bitwise_or<<endl;

}
