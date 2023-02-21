#include <stdio.h>
#include <stdbool.h>


bool addBonus(int *salary, int age);

void main(){

    int salary = 40000;
    
    if(addBonus(&salary,55))
        printf("GRATTIS");
    else
        printf("TO BAD");


}


bool addBonus(int *salary, int age){

    if(*salary > 30000 && age > 50){
        *salary *=1.1;
        return true;
    }
    else    
        return false;

}