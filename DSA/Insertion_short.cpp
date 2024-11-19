#include <stdio.h>
void is(int a[],int n){
	int i, key,j;
	for(i=1;i<n;i++){
			key=a[i];
			j=i-1;
			while(j>=0 && a[j]> key){
				a[j+1]=a[j];
				j =j-1;
			}
				a[j+1]=key;
	}
}
void print(int a[],int n){
	for (int i =0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
int main(){
printf("Shorting given array using Insertion Short Algorithm \n\n");
int n;
printf("Enter the number of Array element : ");
scanf("%d",&n);
int a[n];
printf ("Emter Array element : ");
for (int i =0;i<n;i++){
	scanf("%d",&a[i]);
}
printf("Unshorted Array : ");
print(a,n);
is(a,n);
printf("\nShorted Array : ");
print(a,n);
}
