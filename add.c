#include<stdio.h>
struct poly{
     int  coeff;
     int exp;
};
int main(){
int n1,n2,i,j,k=0;
struct poly  poly1[10],poly2[10],poly3[10];
printf("enter no of terms in first polynomial");
scanf("%d",&n1);
for(i=0;i<n1;i++){
   printf("Enter coefficient and exponent for term %d: ", i + 1);
   scanf("%d%d", &poly1[i].coeff, &poly1[i].exp);
  }
printf("enter no of terms in second  polynomial");
scanf("%d",&n2);
for(j=0;j<n2;j++){
   printf("Enter coefficient and exponent for term %d: ", j + 1);
   scanf("%d%d", &poly2[i].coeff, &poly2[i].exp);
  }
i=0;j=0;
while(i<n1 && j<n2)
{
 if(poly1[i].exp==poly2[j].exp)
 {
 poly3[k].coeff=poly1[i].coeff+poly2[j].coeff;
 poly3[k].exp=poly1[i].exp;
 i++;j++;k++;
 }
 if(poly1[i].exp>poly2[j].exp)
 {
 poly3[k].coeff=poly1[i].coeff;
 poly3[k].exp=poly1[i].exp;
 i++;k++;
 }
  if(poly1[i].exp<poly2[j].exp)
 {
 poly3[k].coeff=poly2[j].coeff;
 poly3[k].exp=poly2[j].exp;
 j++;k++;
 }
while(i<n1){
 poly3[k].coeff=poly1[i].coeff;
 poly3[k].exp=poly1[i].exp;
 i++;k++;
}
while(i<n2){
 poly3[k].coeff=poly2[j].coeff;
 poly3[k].exp=poly2[j].exp;
 j++;k++;
}
printf("The resultant polynomial is: ");
    for (int y = 0;y < k; y++) {
        if (y != 0 && poly3[y].coeff > 0) {
            printf("+");
        }
        printf("%dx^%d ", poly3[y].coeff, poly3[y].exp);
    }
    printf("\n");

    return 0;
}
}
