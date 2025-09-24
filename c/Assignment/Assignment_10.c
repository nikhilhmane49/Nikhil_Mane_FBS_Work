
//*******String */

#include <stdio.h>
#include <string.h>

// ###################String built in function

//********length function */

int main(){

    char str[20] = "My Name is Nikhil";
    int length = strlen(str);
    printf("The length of the string is : %d", length);
}

//***********************strcpy()*/

int main(){
    char str1[10] = "Nikhil";
    char str2[10];
    char *result = strcpy(str2, str1);
    printf("the adress of str2: %u \n", &str2);
    printf("str2 value is %s :\n", str2);
    printf("the adress of str2 %u :", result);

    //this strcpy() function return the address of the destination string.
}


//************************strcmp() */

int main(){

    //Their is three condition for the cmp function


    //^^^^^^//if both string are same it return 0
  
    

    char str1[10] = "Nikhil";
    char str2[10] = "Nikhil";
    int result = strcmp(str1, str2);
    printf("The result is : %d", result);

    //^^^^^^//if first string is greater than second it return positive value(1)

    char str1[10] = "nikhil";
    char str2[10] = "Nikhil";
    int result = strcmp(str1, str2);
    printf("The result is : %d", result);

    //^^^^^^//if first string is less than second it return negative value(-1)

    char str1[10] = "Nikhil";
    char str2[10] = "nikhil";
    int result = strcmp(str1, str2);
    printf("The result is : %d", result);


// this strcmp() retrun the int value in return 

}

//**********strcat() */
int main(){

    char str1[20] = "My Name is ";
    char str2[10] = "Nikhil";
    char *result = strcat(str1, str2);
    printf("The concatenated string is : %s\n", str1);
    printf("The address of str1 is : %u\n", &str1);
    printf("The address of result is : %u\n", result);

    //this strcat() function return the address of the destination string.

}



//****************strrev() */

int main(){
    char str[20] = "My name is Nikhil";

    char * result=strrev(str);
    printf("The reversed string is : %s\n", str);
    printf("The address of str is : %u\n", &str);
    printf("The address of result is : %u\n", result);

    //this strrev() function return the address of the destination string.
}



//****************strupr() */

int main(){
    char str[20]="My name is Nikhil";

    char* res=strupr(str);
    printf("The upper case string is : %s\n", str); 
    printf("The address of str is : %u\n", &str);
    printf("The address of result is : %u\n", res);
    //this strupr() function return the address of the destination string.
}


// ****************strlwr() */


int main(){
    char str[20]="My name is Nikhil";

    char* res=strlwr(str);
    printf("The lower case string is : %s\n", str); 
    printf("The address of str is : %u\n", &str);
    printf("The address of result is : %u\n", res);
    //this strlwr() function return the address of the destination string.
}

// **********strchr()*/

int main(){
    char str[20]="My name is Nikhil";

   char* res=strchr(str,'N');

    printf("The first occurrence of the character is: %s\n", res);

    //*** this while loop is Prove of that it retrun the address of the first occurrence of the character */
    int i=0;
    while(str[i]!='\0'){
        printf("The character at index %d is : %c and its address is : %u\n", i, str[i], &str[i]);
        i++;
    }

    printf("The first occurrence of the character is at : %u\n", res);


    //this strchr() function return the address of the first occurrence of the character in the string.
}



//**********strrchr()*/
int main(){
    char str[20]="My name is Nikhil";

   char* res=strrchr(str,'i');
    printf("The last occurrence of the character is: %s\n", res);    
    //*** this while loop is Prove of that it retrun the address of the last occurrence of the character */
    int i=0;
    while(str[i]!='\0'){
        printf("The character at index %d is : %c and its address is : %u\n", i, str[i], &str[i]);
        i++;
    }
    printf("The last occurrence of the character is at : %u\n", res);
    //this strrchr() function return the address of the last occurrence of the character in the string.
}



//******* strtok() */

int main() {
    // Original string containing fruits separated by commas and spaces
    char str[30] = "apple, banana, mango, grapes";

    // strtok() splits the string into tokens based on delimiters ", "
    // First call: pass the actual string
    char* token = strtok(str, ", ");

    // Loop until no more tokens are found
    while (token != NULL) {
        printf("%s\n", token);  // Print the current token

        // Next call: pass NULL instead of str
        // 👉 Why NULL? 
        // Because strtok() remembers where it left off in the string,
        // so passing NULL tells it to continue tokenizing the same string.
        token = strtok(NULL, ", ");
    }

    return 0;
}



//********strstr() */

int main(){
    char str[20]="Hello World Nikhil";
    char substr[20] = "World";

    char* res = strstr(str, substr);

    printf("the adress of the given substring is:%u\n",res);

    if(res!=NULL){
        printf("The substring is found");
    }
    else{
        printf("The substring not found");
    }
}

//***********strpbrk()

int main()
{
    char str[] = "Hello World Nikhil";

    // strpbrk() finds the FIRST occurrence of any character from the given set
    char *res = strpbrk(str, "NWrf");

    if (res != NULL)
    {
        printf("First match found: %c at position: %ld\n", *res, res - str);
    }
    else
    {
        printf("No match found\n");
    }

    return 0;
}