/* #define for(i,n) for(i=0;i<n;i++) {
#define endfor }
#define x 3
int main(){
    int i;
    for (i , x)
        printf("%d" , i);
    endfor
} */
#include <stdio.h>
#define print_x_2x(x) printf("%d" , x) ; printf("%d" , 2*x)

int main(){
    for (int i = 1; i < 3; i++){
        print_x_2x(i);
    }
    return 0;
}