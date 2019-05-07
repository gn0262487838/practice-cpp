
//fibonacci seqence

//製作大型專案常常會互相引用，為了怕重覆定義，都加上#ifndef...#define...endif
#ifndef fibon_h  //習慣上最好大寫FIBON_H

#define fibon_h  //習慣上最好大寫FIBON_H

class fibon{
    public:
    fibon(int);
    int fun_fibon();
    int fibon_set(int); 

    private:
    int fibon_num1;
    int fibon_num2;
    int fibon_num3;
    int User_var;

};

#endif 
