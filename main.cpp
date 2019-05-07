
#include<iostream>

#include "fibon.h"

using namespace std;

int main(){
    int User_input;
    cout<<"press a natural number:"<<endl;
    cin>>User_input;
    cout<<endl;

    fibon F(User_input);
    cout<<F.fun_fibon()<<endl;

    system("pause");
    return 0;

}
