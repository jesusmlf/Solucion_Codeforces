//Solution of problem 158A
//Link = https://codeforces.com/problemset/problem/158/A

#include <stdio.h>

int main(){
    int n,k,count = 0,lugar,p[50];
    scanf("%i %i",&n,&k);

    for(int i=0;i<n;i++){
        scanf("%i",&lugar);
        p[i] = lugar;
        }

    for(int i=0;i<n;i++){
        if( (p[i] >= p[k-1]) && (p[i]>0)){
            count += 1;
        }
    }

    printf("%i",count);
    return 0;
}