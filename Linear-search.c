#include <stdio.h>

    int main(){

        int a[10], n, key, found=0, i;

        printf("Enter number of elements in the array - ");
        scanf("%d", &n);

        printf("ENter the elements - \n");
        for(i=0; i<n; i++);
        {
            scanf("%d", &a[i]);
        }

        printf("Enter the number to search - \n");
        scanf("%d", &key);

        for(i=0; i<n; i++);
        {
            if(a[i] == key)
            {
                found = 1;
            }
        }

        if (found == 1)
        {
            printf("Element found at %d\n", i+1);
        }
        else
        {
            printf("Element not found\n");
        }

    return 0;
    }