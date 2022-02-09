#include<stdio.h>
int main()
{
 int i;
 int nums[5];
 int sum = 0;
 printf("Enter the First num : ");
 scanf("%d", &nums[0]);
 printf("Enter the Second num : ");
 scanf("%d", &nums[1]);
 printf("Enter the third num : ");
 scanf("%d", &nums[2]);
 printf("Enter the Fourth num : ");
 scanf("%d", &nums[3]);
 printf("Enter the Fifth num : ");
 scanf("%d", &nums[4]);
 for(i = 0;  i<5;  i++)
 {
   if (nums[i]%2 != 0 )
    {
	 sum = sum + nums[i];
	}
	
	};
	printf("\n Sum of all odd values : %d" , sum);
    return 0;
	}
 


