#include<stdio.h>
// inserting array elements
int main()
{
    int a[50], size, i, num, pos;
    printf("Enter size ");
    scanf("%d", &size);
    printf("Enter array elements ");
    for(i=0; i<size; i++)
    scanf("%d", &a[i]);	
    printf("Enter the data you want to insert ");
    scanf("%d", &num);
    printf("Enter the position ");
    scanf("%d", &pos);
    for(i=size-1; i>=pos-1; i--){
        a[i+1] = a[i];
    }
    a[pos-1] = num;
    size++;
    for(i=0; i<size; i++){
        printf("%d ", a[i]);
    }

    return 0;
}