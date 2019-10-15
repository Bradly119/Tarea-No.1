#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    
    char l;
    
    printf("Vocal o consonante\n");
    printf("Introduzca una letra mayuscula o minuscula: ");
    l = getch();
    
    if(l=='a' || l=='A' || l=='e' || l=='E' || l=='i' || l=='I' || l=='o' || l=='O' || l=='u' || l=='U'){
        printf("\n\nLa letra %c es vocal\n",l);
    }
    else{
        printf("\n\nLa letra %c es consonante\n",l);
    }
    
}


