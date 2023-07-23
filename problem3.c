#include<stdio.h>
// deleting array elements
int main()
{
    int a[50], size, pos, i;
    printf("Enter array size ");
    scanf("%d", &size);
    printf("Enter array elements ");
    for(i=0; i<size; i++)
    scanf("%d", &a[i]);

    printf("Enter the position of deleting data ");
    scanf("%d", &pos);

    for(i=pos-1; i<size; i++){
        a[i]=a[i+1];
    }
    size--;
    for(i=0;i<size; i++){
        printf("%d ", a[i]);
    }
    	
    return 0;
}