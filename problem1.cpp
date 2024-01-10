#include<iostream>
using namespace std;
int main(){

    int storage = 0;

    for (int i = 0; i < 1000; i++)
    {
        if (i%3==0 || i%5==0)
        {
            storage = storage + i;
        }
    }
    cout<<storage;

return 0;
}