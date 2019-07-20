#include <stdio.h>
#include "vec.h"

int main()
{
   vecI v1;
   //init(&v1);
   //put(&v1,23);
   size(&v1);
  // put(&v1,46);
  /* byteSize(&v1);
   put(&v1,56);
   put(&v1,71);

   printf("%d %d\n",size(&v1),v1.maxSize);
   
   printVec(&v1);*/
   byteSize(&v1);
   
   return(0);
}
