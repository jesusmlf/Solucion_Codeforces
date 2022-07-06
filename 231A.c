//Solution of problem 231A
//Link: https://codeforces.com/problemset/problem/231/A

#include <stdio.h>

int main(){
    int n,petya,vasya,tonya,contador = 0;
    scanf("%i",&n);

    while(n != 0){
        scanf("%i %i %i",&petya,&vasya,&tonya);

        if( (petya + vasya + tonya) >= 2 ){
            contador += 1;
        }
        n -= 1;
    }
    printf("%i",contador);
    return 0;   
}