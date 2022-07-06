#include <stdio.h>

int main(){
    int m,n,area_tablero,area_ficha = 2;
    scanf("%i %i",&m,&n);
    area_tablero = m * n;
    printf("%i",area_tablero/area_ficha);
}