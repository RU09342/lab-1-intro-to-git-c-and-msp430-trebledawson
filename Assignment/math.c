int math(int num1, int num2, char Operator)
{
	switch (Operator)
	{
		case '+': // Addition
			return num1 + num2;
			break;
		
		case '-': // Subtraction
			return num1 - num2;
			break;
		
		case '*': // Multiplication
			return num1 * num2;
			break;
			
		case '/': // Division
			return num1 / num2;
			break;
			
		case '%': // Modulus
			return num1 % num2;
			break;
		
		default: // If Operator != any of the above, return -1
			return -1;
			break;
	}	
}
