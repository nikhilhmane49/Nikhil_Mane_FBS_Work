#include <stdio.h>
#include <string.h>

//***********Write a program to scan string from user then scan a single character and search it
// in a accepted string.* /
//     int main()
// {
//     char str[10];
//     int flag = 0;

//     printf("Enter the string");
//     scanf("%s", str);

//     fflush(stdin);

//     char ch;
//     printf("Enter the char to find: ");
//     scanf("%c", &ch);

//     int i = 0;
//     while(str[i]!='\0'){
//         if(str[i]==ch){
//             flag = 1;
//             break;
//         }
//         i++;
//     }

//     if(flag==0){
//         printf("Char is not found");
//     }
//     else{
//         printf("Char is found");
//     }
// }

//*****WAP Replace all Occurrences of ‘a’ with $ in a String */
// int main(){
//     char str[20];
//     printf("Enter the string : ");
//     scanf("%s", str);

//     int i = 0;
//     while(str[i]!='\0'){
//         if(str[i]=='a'){
//             str[i] = '$';
//         }
//         i++;
//     }

//     printf("%s", str);
// }

//********WAP to Remove the nth Index Character from a Non-Empty String */

// int main(){
//     char str[20];

//     printf("Enter the string: ");

//     scanf("%s", str);

//     char len=strlen(str);

//     printf("The length of string is %d\n", len);
//     printf("The string is %s\n", str);

//     int idx;
//     printf("Enter the index to remove: ");
//     scanf("%d", &idx);

//     for (int i = idx; str[i] != '\0';i++){
//         str[i] = str[i + 1];
//         printf("%s\n", str);
//     }


//     printf("String after removing the char at index %d is %s", idx, str);
// }

//********WAP to Form a New String where the First Character and the Last Character have
// been Exchanged * /

// int main()
// {

//     char str[20];

//     printf("Enter the string: ");
//     scanf("%s", str);
//     int len = strlen(str);
//     printf("The length of string is %d\n", len);
//         char temp = str[0];
//         str[0] = str[len - 1];
//         str[len - 1] = temp;

//     printf("The modified string is %s", str);
// }

//******WAP to Count the Number of Vowels in a String */

// int main(){
//     char str[20];
//     printf("Enter the string: ");
//     scanf("%s", str);

//     int i = 0;
//     int count = 0;
//     while(str[i]!='\0'){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
//            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
//             count++;
//         }
//         i++;
//     }

//     printf("The number of vowels in the string is %d", count);
// }



// int main(){
//     char str[20];
//     printf("Enter the string: ");
//     scanf("%s", str);

//     int i = 0;
//     while(str[i]!='\0'){
//         if(str[i]=='&'){
//             str[i] = '$';
//         }
//         i++;
//     }

//     printf("The modified string is %s", str);
// }

//**** */

// int main(){
//     char str[20];
//     printf("Enter the string: ");
//     scanf("%s", str);

//     int i = 0;
//     while(str[i]!='\0'){
//         if(i%2!=0){
//             str[i] = st;
//         }
//         i++;
//     }

//     printf("The modified string is %s", str);
// }

//********WAP to Take in Two Strings and Display the Larger String without Using Built-in
// Functions * /

//     int main(){
//     char str1[20];
//     char str2[20];

//     printf("Enter the first string: ");
//     scanf("%s", str1);
//     printf("Enter the second string: ");
//     scanf("%s", str2);

//     int len1 = 0;
//     int len2 = 0;

//     while(str1[len1]!='\0'){
//         len1++;
//     }

//     while(str2[len2]!='\0'){
//         len2++;
//     }


//     if(len1<len2){
//         printf("The secoud  string is greater");
//     }
//     else if(len1>len2){
//         printf("The frirst string is smaller");
//     }
//     else{
//         printf("Both strings are equal");
//     }
// }

//*********Write a program to check the string is palindrome or not.(with using in bulid fun) */



    // int main(){
    //     char str[20];
    //     printf("Enter the string: ");
    //     scanf("%s", str);
    //     char rev[20];

    //     strcpy(rev, str);

    //     int res = strcmp(str, strrev(rev));

    //     if(res==0){
    //         printf("The string is palindrome");
    //     }
    //     else{
    //         printf("The string is not palindrome");
    //     }

    //     printf("The result is %d", res);
    // }

    //*********Write a program to check the string is palindrome or not.(without using in bulid fun) */
//     int main()
//     {
//         char str[20];
//         printf("enter the string:");
//         scanf("%s", str);
//         int len = strlen(str);
//         printf("The length of the string is %d", len);

//         int flag = 0;

//         for (int i = 0; i < len / 2; i++)
//         {
//             if (str[i] != str[len - i - 1])
//             {
//                 flag = 1;
//                 break;
//             }
//         }

//         if (flag == 0)
//         {
//             printf("The string is palindrome");
//         }
//         else{
//         printf("The string is not palindrome");
//     }
// }