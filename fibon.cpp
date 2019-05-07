
#include "fibon.h"

fibon::fibon(int User_var){
    fibon_set(User_var);
}

int fibon::fibon_set(int User_var){
    return User_var;
}

int fibon::fun_fibon(){
    fibon_num1 = 1;
    fibon_num2 = 1; 
    for(int i=3;i<=(User_var + 2);i++){
        fibon_num3 = fibon_num1 + fibon_num2;
        fibon_num1 = fibon_num2;
        fibon_num2 = fibon_num3;
    }

    return fibon_num3;
}

