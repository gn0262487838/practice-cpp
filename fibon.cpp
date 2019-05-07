#include "fibon.h"

fibon::fibon(int n){
    fibon_set(n);
}

int fibon::fibon_set(int m){
    User_var = m;
    return User_var; 
}

int fibon::fun_fibon(){
    fibon_num1 = 1;
    fibon_num2 = 1;
    if(User_var == 1){
        return fibon_num3 = 1;
    }
    else if(User_var == 2){
        return fibon_num3 = 1;
    }
    else{
        
        for(int i=3;i<=User_var;i++){
            fibon_num3 = fibon_num1 + fibon_num2;
            fibon_num1 = fibon_num2;
            fibon_num2 = fibon_num3;
        }
        return fibon_num3;
    }
}



