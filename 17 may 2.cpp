#include <stdio.h> 
int main() 
{ 
 int arri[] = { 1, 2, 3 }; 
 int* ptri = arri; 
 char arrc[] = { 1, 2, 3 }; 
 char* ptrc = arrc; 
 printf("sizeof arri[] = %d ", sizeof(arri)); 
 printf("sizeof ptri = %d ", sizeof(ptri)); 
 printf("sizeof arrc[] = %d ", sizeof(arrc)); 
 printf("sizeof ptrc = %d ", sizeof(ptrc)); 
 return 0; 
} 
/* Answer would be :
sizeof arri[] = 12 (size of arrray is 3 and it is of type int 3*4=12)
sizeof ptri = 8 (ptri is a pointer which will hold a hexadecimal number thereby occupies 8 bytes)
sizeof arrc[] = 3 (size of arrray is 3 and it is of type char 3*1=3)
sizeof ptrc = 8 (ptrc is a pointer which will hold a hexadecimal number thereby occupies 8 bytes)
*/
