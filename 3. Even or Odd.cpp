#include<iostream>
using namespace std;
class num
{
    int n;
    public: void data();
            void check();
};
void  num::data(){
    cout<<"Enter a number: ";
    cin>>n;
}
void num::check(){
    if(n%2==0)
        cout<<"\nEven Number\n";
    else
        cout<<"\nOdd Number\n";
}
int main(){
    num n1;
    n1.data();
    n1.check();
}
