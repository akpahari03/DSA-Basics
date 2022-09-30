// #include<stdio.h>
// void indian();
// void french();
// int main()
// {
//     char c;
//     printf("Enter i/I for indian and f/F for french \n  ");
//     scanf("%c",&c);
//     if(c=='i' || c=='I')
//     {
//         indian();

//     }
//     else if(c=='f' || c=='F')
//     {
//         french();
//     }
//     else
//     {
//         printf("Invalid Input");
//     }

//     return 0;

// }

// void indian()
// {   
//     printf("Namaste");    
// }

// void french()
// {
//     printf("Bonjour");
// }


// sum of n natural nos. using recursion
// #include<stdio.h>
// int sum(int n);
// int main()
// {
//     int n;
//     int add;
//     printf("Enter The interger");
//     scanf("%d",&n);
//     // add=sum(n);
//     printf("Sum = \n %d \n",sum(n));
//     return 0;



// }

// int sum(int n)
// {
//     int sumnm1;
//     if(n==1)
//     {
//         return 1;
//     }
    
//     sumnm1=sum(n-1);
//     int sumn = sumnm1 + n;
//     return sumn;


// }


#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter The interger to calculate factorial ");
    scanf("%d",&n);
    // add=sum(n);
    printf("fact = \n %d \n",fact(n));
    return 0;



}

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    
    int factnm1=fact(n-1);
    int factn = factnm1 + n;
    return factn;


}