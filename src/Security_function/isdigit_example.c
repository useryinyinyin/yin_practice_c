#include <stdio.h>
#include <ctype.h>

int main()
{
   int var1 = 'h';
   int var2 = '2';
    
   if( isdigit(var1) )
   {
      printf("var1 = |%c| 是一个数字\n", var1 );
   }
   else
   {
      printf("var1 = |%c| 不是一个数字\n", var1 );
   }
   if( isdigit(var2) )
   {
      printf("var2 = |%c| 是一个数字\n", var2 );
   }
   else
   {
      printf("var2 = |%c| 不是一个数字\n", var2 );
   }
  
   return(0);
}

// var1 = |h| 不是一个数字
// var2 = |2| 是一个数字