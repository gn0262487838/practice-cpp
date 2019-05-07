
#include<iostream>

#include "fibon.h"

#include "fibon.cpp" //兩個.cpp要執行先要include(in VSc)並在fibon.h中加入#ifndef...#define...#endif

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
