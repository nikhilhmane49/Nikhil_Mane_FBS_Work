
#include <stdio.h>
#include <string.h>

//***********a. mystrcpy */

// void mystrcpy(char *, char *);
// int main(){
//     char str[20] = "nikhil";
//     char str2[20];

//     mystrcpy(str2, str);

//     printf("The copied string is : %s\n", str2);
// }
// void mystrcpy(char *dest,char *src){
//     int i = 0;
//     while(src[i] != '\0'){
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
// }

//***************b. mystrlen */

// int strlength(char *);
// int main(){
//     char str[] = "nikhil";

//   int len= strlength(str);

//   printf("Then length of the string is %d", len);
// }

// int strlength(char * str){
//     int len=0;
//     int i = 0;

//     while(str[i]!='\0'){
//         len++;
//         printf("%d \n", len);
//         i++;
//     }

//     return len;
// }



//************** */

// int strcmps(char *, char *);
// int main(){
//     char str[10] = "nikhil";
//     char str2[10] = "nikhil";

//     strcmps(str, str2);
// }

// int strcmps(char * str1,char * str2){


// }

//**********mystrupper */

// void mystrupper(char *);
// int main(){
//     char str[] = "nikhil";

//     mystrupper(str);

//     printf("the uperr case updated string : %s", str);
// }

// void mystrupper(char *str){
//     int i = 0;
//     while(str[i]!='\0'){
//         if(str[i]>='a' && str[i]<='z'){
//             str[i] = str[i] - 32;
//         }
//         i++;
//     }
// }



//*********mystrlow() */

void mystrlow(char *);
int main()
{
    char str[] = "nikhil";

    mystrupper(str);

    printf("the uperr case updated string : %s", str);
}

void mystrupper(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}
