#include <iostream>

using namespace std;

int main()
{
    int num,count=0;
    cout << "enter number for checking whether its prime or not" << endl;
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
           count++;
    }
    if(count==2)
        cout<<"entered number is prime";
    else
        cout<<"entered number is not prime";
    return 0;
}
