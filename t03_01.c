// 12S23005 - Ariella U.C Sihombing

#include <stdio.h>

int main(int _argc, char **_argv)
{
int n, max, min ;
scanf("%d", &n) ;
int angka [n] ;
for (int i=0; i<n; i++)
scanf("%d", &angka[i]) ;  
max = angka[0] ;
min = angka[0] ;
for (int i=0; i<n; i++)
{
if (angka[i] > max)
max = angka[i] ;
if (angka[i] < min)
min = angka[i] ;
}
printf("%d\n", min) ;
printf("%d\n", max) ;
  return 0;
}
