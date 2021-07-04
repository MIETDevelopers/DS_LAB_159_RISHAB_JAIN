/*CREATOR: RISHAB JAIN
CREATED ON: 26 MAY'21
MOTIVE:TO PERFORM A CHOICE CORRECTLY ONLY ONE TIME1118*/

#include <stdio.h>
 
int main()
{
   int arr[20], pos, i, n, value, s, c;
   printf("Enter number of elements in array\n");
    scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
    
    do
        {
            printf("\nSelect Your choise\n\n");
            printf("Enter 1 to Insert a number\n Enter 2 to Deletion \n Enter 3 to Find a number\n Enter 4 to EXIT the Program \n");
                scanf("%d", &c);

        switch (c) {
            
            case 1:                                          //Inserting
            printf("Enter the location where you want to insert an element\n");
                scanf("%d", &pos);
 
            printf("Enter the value to insert\n");
                scanf("%d", &value);
 
            for (i = n-1; i >= pos-1; i--)
            arr[i+1] = arr[i];
 
            arr[pos-1] = value;

            printf("The element present in the array are\n");
            for(i=0; i<n+1; i++)
                printf("%d \n", arr[i]);

            break;
 
            case 2:                                     //Deleting

            printf("Enter the location where you wish to delete element\n");
            scanf("%d", &pos);
    
            if ( pos >= n+1 )    
            printf("Deletion not possible.\n");
    
            else
         {    
            for ( i = pos - 1 ; i < n - 1 ; i++ ) 
            arr[i] = arr[i+1];        
        
             printf("The remaining element present in the array are\n");
        
            for( i = 0 ; i < n - 1 ; i++ )        
             printf("%d\n", arr[i]);   

             break;     
        }  
            case 3:                                                 //SEARCH
             printf("Enter a number to search\n");
            scanf("%d", &s);

            for (i = 0; i < n; i++)
          {
             if (arr[i] == s)    
              {
             printf("%d is present at location %d.\n", s, i+1);
                break;
             }
         }
            if(arr[i] != s)
            printf("%d isn't present in the array.\n", s);

            break;

            case 4 :
            printf("You have succesfully exited the Program");
                break;
                
            default:
            printf("The choise is not available ");
                break;
        
        return 0;

         } 
        
        }while (c != 4);
}        