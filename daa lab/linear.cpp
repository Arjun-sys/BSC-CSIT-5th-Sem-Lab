#include <stdio.h>
 
int main()
{  
 
    int i,num,array[num] ,key, found = 0;
 
    printf("Enter the number of elements ");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
        scanf("%d", &array[i]);
    printf("Enter the element to be searched ");
    scanf("%d", &key);
    /*  Linear search begins */
    for (i = 0; i < num ; i++)
    {
        if (key == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Element is present in the array at position %d",i+1);
    else
        printf("Element is not present in the array\n");
}
