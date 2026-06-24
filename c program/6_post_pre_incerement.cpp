
#include<stdio.h>

int main()
{
	int num=1;
	//post inceremnt 
	//num++ = post increment 
	
	printf("Num Value Is : %d\n",num++);
	
	//jab apne koi variable ke piche ++ use karte hai to vo ek var execute hone ke bad dekhne ko milta hai
	//us statment ke under nahi milta hai 
	
	
	// ++num = pre increment 
	printf("Num Value : %d\n",num);
	
	//pre increment 
	printf("Num value is : %d",++num);
	
	
	printf("decrement operation \n");
	int num2=5;
	
	printf("post decrement  : %d\n",num2--);
	printf("post decrement : %d\n",num2);
	
	
	printf("pre decrement : %d",--num2);
	
}
