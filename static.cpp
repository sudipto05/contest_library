#include <stdio.h>
int var1;
extern int var2;
void increment()
{
    static int a=1;
    printf("INSIDE FUNCTION a=%d\n",a);
    ++a;
}
int main()
{
   while(true)
    {
        increment();
        printf("INSIDE MAIN\n");
    }
    //goto Back;
}
//arithmetic and comparison operators promote to int
/*extern usage*//*https://www.youtube.com/watch?v=hDfDnsvEodQ*/
//https://www.geeksforgeeks.org/c-language-2-gq/variable-declaration-and-scope-gq/
//https://www.geeksforgeeks.org/understanding-extern-keyword-in-c/
