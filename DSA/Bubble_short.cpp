#include <stdio.h>
void bs(int a[],int n){
	int i, j, t;
	for(i=0;i<n-1;i++){
			for(j=0;j<n-1;j++){
				if (a[j]>a[j+1]){
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
	}
}
void print(int a[],int n){
	for (int i =0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
int main(){
printf("Shorting given array using Bubble Short Algorithm \n\n");
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
bs(a,n);
printf("\nShorted Array : ");
print(a,n);
}
