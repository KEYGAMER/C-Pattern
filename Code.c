#include <stdio.h>
int main() {
    int a, b;
    char m, n;
    printf("Enter how many lines you want :\n");
    scanf("%d", &a);
    
    printf("Enter what character you want :\n");
    scanf(" %c", &n);
    
    printf("1. For printing rectangualr pattern with your character type '1'\n2. For printing an inverted triangular pattern with your character type '2'\n3. For printing a normal triangular pattern with your character type '3'\nEnter what you want to do: ");
    scanf(" %c", &m);
    
    if(m== '2'||m== '3') b=a;
    if(m== '1'){
        printf("Enter how many characters per line you want :\n");
    scanf("%d", &b);
    }
    
    switch(m) {
        case('1'): for(int i=1; i<=a; i++){
            for(int k=1; k<=b; k++){
                printf(" %c ",n);  
            }
            printf("\n");
        } break;
        case('2'): for(int i=1; i<=a; i++){
            for(int k=1; k<=b; k++){
                printf(" %c ",n );
            }
            printf("\n");
            b=b-1;
        } break;
        case('3'): for(int i=1; i<=a; i++){
            for(int k=1; k<=i; k++){
                printf(" %c ",n);
            }
            printf("\n");
        } break;
    }
    
    return 0;
}