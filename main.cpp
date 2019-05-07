
#include<iostream>

#include "fibon.h"

// #include "fibon.cpp" 
/*
兩個.cpp要執行在VS code running是預設一個.cpp，
way1:
因此可直接#include "fibon.cpp"進來，但需要在fibon.h中加入#ifndef...#define...#endif
不然會重覆定義fibon喔!!!

way2:
或者在terminal(powershell)一起編譯兩個.cpp
Copyright (C) Microsoft Corporation. All rights reserved.

PS C:\Users\gn026\OneDrive\Documents\test cpp> g++ main.cpp fibon.cpp  編譯兩個cpp中間只需要空格就好，就會產生a.exe執行檔(windows)
PS C:\Users\gn026\OneDrive\Documents\test cpp> ./a.exe   執行檔案前要加上./
*/

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
