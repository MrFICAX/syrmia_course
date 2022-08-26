#include "matematika.h"

//Sabira dva broja
int Matematika::saberi(int a, int b) {
    return a+b;
}

//Oduzima dva broja
int Matematika::oduzmi(int a, int b) {
    return a-b;
}

//Množi dva broja
int Matematika::mnozi(int a, int b){
    return a*b;
}

//Deli dva broja
int Matematika::deli(int a, int b){
    if(b==0)
        return 0;
    else    
        return a/b;
}

