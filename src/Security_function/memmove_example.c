#include <stdio.h>
#include <string.h>

int main ()
{
   const char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return 0;
}

// Before memmove dest = oldstring, src = newstring
// After memmove dest = newstring, src = newstring