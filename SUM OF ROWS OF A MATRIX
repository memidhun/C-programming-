/*C program to create a two dimentional array matrix and find the sum of each rows using a function
-- CODE BY @memidhun -- */

#include<stdio.h>
void rowsum(int,int,int B[10][10]);


        void main()
        {
        int A[10][10],r,c,i,j,rsum;
        printf("Enter the number of rows and columns\n");
        scanf("%d%d",&r,&c);
        printf("Enter the %d elements of Matrix\n",r*c);
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        
        
        printf("\nMatrix is:\n\n");
        for(i=0;i<r;i++)
        {
            printf("|");
            for(j=0;j<c;j++)
            {
                if(j==c-1)
                printf("%d",A[i][j]);
                else
                printf("%d\t",A[i][j]);
            }
            printf("|");
            printf("\n");
        }
        rowsum(r,c,A);
    }
 
    
    
    void rowsum(int r1,int c1,int B[10][10])
     {  
        char C[20]={'s','t','n','d','r','d','t','h'};
        int tsum=0,rsum,i,j;
        printf("\n-----Row sum------\n");
        
        for(i=0;i<r1;i++)
        {
           rsum=0;
           for(j=0;j<c1;j++)
           {
               rsum+=B[i][j];
           }
           if(i==0)
           printf("The sum of %d%c%c row is: %d\n",i+1,C[0],C[(1)],rsum);
           else if(i==1)
           printf("The sum of %d%c%c row is: %d\n",i+1,C[2],C[(3)],rsum);
           else if(i==2)
           printf("The sum of %d%c%c row is: %d\n",i+1,C[4],C[(5)],rsum);
           else
           printf("The sum of %d%c%c row is: %d\n",i+1,C[6],C[(7)],rsum);
           tsum+=rsum;
        }
        printf("The total sum of rows is :%d\n",tsum);
     }
     
