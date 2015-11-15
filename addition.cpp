#include <iostream>


template<typename integral_type>
integral_type add_numbers(integral_type firstvalue,integral_type secondvalue)
{
	return firstvalue + secondvalue;
}

int main()
{
	unsigned long firstnumber=0;
	unsigned long secondnumber=0;
	std::cout<<"\nsimple adder";
	std::cout<<"\n Enter first number : ";
	std::cin>>firstnumber;
	std::cout<<"\n Enter second number : ";
	std::cin>>secondnumber;
	
	unsigned long sum = add_numbers(firstnumber,secondnumber);
	
	std::cout<<"\nThe sum of "<<firstnumber<<" + "<<secondnumber<<" is "<<sum;
	
	return 0;
}