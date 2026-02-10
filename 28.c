#include <stdio.h>
int main() 
{ 
int n,i,max,second;
printf("Enter the size of the array: ");
scanf("%d", &n); int a[n];
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) 
{ scanf("%d", &a[i]); } 
max= a[0];
second= a[0]; 
for(i=0;i<n;i++){ if (a[i]>max){ 
second= max;
max= a[i];}
else if (a[i]<max&&a[i]>second){
second= a[i];
}
}
printf("%d",second);
return 0;
}
