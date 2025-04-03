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


//brute force approach for printing a cross in the output terminal 

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows you want in the cross: ");
    scanf("%d", &n);
    if(n%2==0) {printf("Enter a odd number !!\n");
    }else{ for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++){
            for(int k=1, m=n ; k<=n, m>=1 ; k++, m--) {
           if(i==j||i==m&&j==k) printf("*");
           else printf(" "); }
        }
        
        printf("\n");
    }
}
    return 0;
}
// or you can use a more mathematical approach to print a cross in the output terminal 

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows you want in the cross: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Enter an odd number!\n");
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == j || i + j == n + 1) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}




// This is a code of a triangualr pattern with umbers that is non repeated !! ( Without using INT_MAX)

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows you want: ");
    scanf("%d", &n);
    int a=1;

   for(int i=1; i<=n; i++){
       for(int j=1; j<=i; j++){
           printf("%d ", a);
           a++;
       }
       printf("\n");
   }
    return 0;
}
// This is a code of a triangualr pattern with umbers that is non repeated !! ( With using INT_MAX)

#include <stdio.h>
#include <limits.h> // Using this library for INT_MAX check

int main() {
    int n;
    printf("Enter the number of rows for the number triangle: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1; // Exiting with a general error if the input is not a positive integer
    }

    int a = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", a);
            if (a == INT_MAX) { // Preventing (overflow) Which means that the number is too large to be stored in an int variable
                printf("\nWarning: Number overflow!\n");
                return 1;
            }
            a++;
        }
        printf("\n");
    }
    return 0;
}

/*to print a triangular pattern with only 0 and 1 in a special order like below :
Brute force approach 
1
01
101
0101
10101 
.........
*/
#include <stdio.h>

int main() {
    int a,n;
    for(int i=1; i<=n; i++) { //n is the number of rows you want to print
      if(i%2==0) a=0;
      else a=1;
      for(int j=1; j<=i; j++) {
          printf("%d",a);
          if(a==0) a=1;
          else a=0;
      }
      printf("\n");
    }
    return 0;
}
// or you can use a more mathematical approach to print a triangular pattern with only 0 and 1 in a special order like below :

#include <stdio.h>
int main() { int n;
    for(int i=1; i<=n; i++) {    //n is the number of rows you want to print
      for(int j=1; j<=i; j++) {
          if((i+j)%2==0) printf("1");
          else printf("0");
        }
      printf("\n");
    }
    return 0;
}


// For more cleaner code you can use this code to print a triangular pattern with only 0 and 1 in a special order like below :#include <stdio.h>

int main() { int n;
    for (int i = 1; i <= n; i++) { //n is the number of rows you want to print
        for (int j = 1; j <= i; j++) {
            printf("%d", (i + j) % 2 == 0);
        }
        printf("\n");
    }
    return 0;
}