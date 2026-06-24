#include<stdio.h>

int main()
{
	int num1=5,num2=6;
	
	// logical ope
	
	// && = and
	// || = or
	// !() = not 
	
	// && = and 
	
	// and operation me dono condition true honi chaiye means first true hogi to hi vo secound 
	// condition ko check karne jayega 
	printf("Ans is : %d\n",num1<num2 && num2>num1); // True 
	printf("Ans is : %d\n",num1>num2 && num2>num1);// false 
	
	printf("Ans is : %d\n",num1<num2 && num2<num1); // false 
	printf("Ans is : %d\n",num1>num2 && num2<num1); // false 
	
	
	// || = or 
	
	// or ke under dono condition true ho vesa nahi hona chaiye dono me se koi bi true honi chaiye
	// or ke under jo condition false hogi to hi vo check karne jayega dusi conditon ko 
	// first true hogi to vo secound condition ko check karne nahi jayega 
	
	
	printf("Ans is : %d\n",num1<num2 || num2>num1); // True 
	printf("Ans is : %d\n",num1>num2 || num2>num1);// True
	
	printf("Ans is : %d\n",num1<num2 || num2<num1); // True
	printf("Ans is : %d\n",num1>num2 || num2<num1); // false 
	
	
	
	// !(condition) = not 
	
	printf("Ans is : %d\n",!(num1<num2 || num1>num2));
	
}
