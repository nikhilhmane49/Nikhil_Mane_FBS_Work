#include <stdio.h>

int main(){

    //***************pattern 1 */

    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            printf("* ");
        }
        printf("\n");
    }


    //***************pattern 2 */

    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i;j++){
            printf("* ");

        }

        printf("\n");
    }

    //***************pattern 3 */

    for (int i = 1; i <= 5; i++){
        for (int j = 5; j >= i; j--){
            printf("* ");
        }
        printf("\n");
    }

    //***************pattern 4 */

    for (int i = 1; i <= 5;i++){
        for (int j = 1; j <= 5 - i;j++){
            printf(" ");
        };
        for (int k = 1; k <= i;k++){
            printf("* ");
        };
        printf("\n");
    }


    //***************pattern 5 */

    for (int i = 0; i < 5;i++){
        for (int j = 0; j < i;j++){
            printf(" ");
        };
        for (int k = 5; k > i;k--){
            printf("* ");
        };
        printf("\n");
    }


    //***************pattern 6 */

    for (int i = 1; i <= 5;i++){
        for (int j = 1; j <= i;j++){
            printf("%d", j);
        }
        printf("\n");
    }


    //***************pattern 7 */

    int count = 1;
    for (int i = 1; i <= 5;i++){
        for (int j = 1; j <= i;j++){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }


    //***************pattern 8 */

    for (int i = 1; i < 5;i++){
        for (int j = 1; j <= i;j++){
            printf("* ");
        };
        printf("\n");
    }
    for (int i = 3; i >= 1;i--){
        for (int j = 1; j <= i;j++){
            printf("* ");
        };
        printf("\n");
    }


    //***************pattern 9 */

    int n = 4; 

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }




    //***************pattern 10 */

    int n = 6;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (i == 1 || i == n || j == 1 || j == n || j==i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}