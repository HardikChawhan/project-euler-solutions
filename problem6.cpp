#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int storage1 = 0;
    int storage2 = 0;
    int res;

    for (int i = 1; i <= 100; i++)
    {
        storage1 = storage1 + pow(i,2);
    }
    cout<<storage1<<endl;

    for (int i = 1; i <=100; i++)
    {
        storage2 = storage2 + i;
    }
    
    storage2 = pow(storage2,2)+1;
    cout<<storage2<<endl;

    res = storage2 - storage1;
    cout<<res;

return 0;
}