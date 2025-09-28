
#include <stdio.h>
#include <string.h>

//***************************a. mystrcpy */

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

//********************************b. mystrlen */

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




//***************************************** f mystrupper */

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



//********************************************mystrlow() */

// void mystrlow(char *);
// int main()
// {
//     char str[] = "nikhil";

//     mystrupper(str);

//     printf("the uperr case updated string : %s", str);
// }

// void mystrupper(char *str)
// {
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - 32;
//         }
//         i++;
//     }
// }

//*********************************************h. mystrrev*/

// void mystrrev(char *, int);

// int main(){
//     char str[20];
//     printf("Enter the string:");
//     scanf("%s", str);

//     int len = strlen(str);

//     mystrrev(str,len);


//     printf("The reversed string is : %s \n", str);
// }

// void mystrrev(char * str, int len){
//     char temp[20];
//     int i = len - 1;
//     int j = 0;

//     for (int i = len - 1; i >= 0; i--)
//     {
//         temp[j] = str[i];
//         j++;
//     }

//     temp[j] = '\0';

//     printf("The reversed string is : %s \n", temp);

//     strcpy(str, temp);
// }

//************************************mystrcat */

// void mystrcat(char *, char *);

// int main()
// {
//     char str[20];
//     char str2[20];

//     printf("Enter the first string:");
//     gets(str);
//     printf("Enter the second string:");
//     gets(str2);

//     mystrcat(str,str2);

//     printf("The concatenated string is : %s \n", str);
// }

// void mystrcat(char * dest ,char * src ){
//     int i = 0;

//     while(dest[i]!='\0'){
//         i++;
//     }

//     int j = 0;

//     while(src[j]!='\0'){
//         dest[i] = src[j];
//         i++;
//         j++;
//     }
// }



//***************************************strchr() */

    // int main(){
    //     char str[20];
    //     printf("Enter the string:");
    //     scanf("%s", str);
    //     char ch;
    //     int flag = 0;
    //     fflush(stdin);
    //     printf("Enter the character to search:");
    //     scanf("%c", &ch);

    //     int i = 0;

    //     while(str[i]!='\0'){
    //         if(str[i]==ch){
    //             flag = 1;
    //             printf("Char is found at index %d\n", i);
    //             break;
    //         }
    //         i++;
    //     }


    // }




    //************** */
    //##################################################Reaming
    // int main(){
    //     char str[20];
    //     printf("Enter the string:");
    //     gets(str);

    //     char substr[10];
    //     printf("Enter the substring:");
    //     gets(substr);

    //     int i = 0;
    //     while(str[i]!='\0'){
    //         if()

    //     }
    // }



    //************ */

    int main(){
        char str1[20];
        char str2[20];
        printf("Enter the first string:");
        gets(str1);
        printf("Enter the second string:");
        gets(str2);

        
    }