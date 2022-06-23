#include<iostream>
using namespace std;

int main(){
    int pocketmoney = 3000;

    for (int i = 0; i < 31; i++)
    {
        if (i%2 == 0)
        {
            continue;
        }
         if (pocketmoney == 0)
         {
             break;
         }
         cout<<"You can go out today!"<<endl;
         pocketmoney = pocketmoney-300;
    }
    
return 0;
}