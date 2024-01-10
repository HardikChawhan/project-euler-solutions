#include<iostream>
using namespace std;
int main(){

    int num,result,storage;
    int num1 = 0;
    int num2 = 1;
    int sum = 0;

    do
    {
        if (num2 % 2 == 0)
        {
            sum = sum + num2;
        }
    
        storage=num1+num2;
        num1=num2;
        num2=storage;
    } while (num2<4000000);
    
    cout<<sum<<endl;
return 0;
}