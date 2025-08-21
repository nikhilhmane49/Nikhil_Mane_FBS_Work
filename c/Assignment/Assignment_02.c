#include <stdio.h>

// //****Accept the price from user. Ask the user if he is a student (user may say y or n). If he
// is a student and he has purchased more than 500 than discount is 20 % otherwise discount is 10 %.But if he is not a student then if he has purchased more than 600 discount is 15 % otherwise there is not discount.* /


void main(){
    float price,  final_price;

    printf("Enter the price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    char student;
    scanf(" %c", &student);

    if(student == 'y'){
        if(price > 500){
            final_price = price - (price * 0.2);
            printf("Final price: %.2f", final_price);
        }
        else{
            final_price = price - (price * 0.1);
            printf("Final price: %.2f", final_price);
        }
    }
    else{
        if(price > 600){
            final_price = price - (price * 0.15);
            printf("Final price: %.2f", final_price);
        }
        else{
            printf("No discount applicable. Final price: %.2f", price);
        }
    }

}