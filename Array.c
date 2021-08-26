 #include<stdio.h>
 int main()
{
 int b[3][3]; 
int i,j,s;
 s=0; 
for(i=0;i<3;i++)
 { for(j=0;j<3;j++) { 
printf("\nenter element [%d][%d]: ",i+1,j+1); 
scanf("%d",(*(b+i)+j));
 } 
} 
printf("\n");
 for(i=0;i<3;i++) {
 for(j=0;j<3;j++) {
 printf("%d ",*(*(b+i)+j));
 } 
printf("\n");
 } 
for(i=0;i<3;i++)
 { s=s+(*(*(b+i)+i));
 } 
printf("\nsum of diagonal elements is: %d", s);
 return 0;
}
