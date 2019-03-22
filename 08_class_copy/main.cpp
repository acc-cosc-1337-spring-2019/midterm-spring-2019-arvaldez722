#include <string>
#include <iostream>

/*
Create a Die instance and copy to another Die variable. 
Explain what happens with comments in your code.
Create a reference to a Die, explain what happens with comments in your code.  
Create test cases in 08_class_copy_test.
*/
#include "die.h"

int main() 
{
	Die instance;

	Die instance2 = instance;
	//At this point instance 2 only have the VALUE of instance --> if instance is changed later that's unrelated to instance2

	Die& reference = instance;
	//Now reference and instance share a memeory address --> so if reference is manipulated so is instance (and vice versa)


	/* ~~~Tutor Explanation~~~
	//Create a Die instance and copy to another Die variable.
	Die instance;
	instance.roll();
	std::cout << "Instance of Die rolled a " << std::to_string(instance.rolled_value()) << std::endl;

	Die instance2 = instance;
	std::cout << "Instance 2 of Die is set equal to Instance 1 " << std::endl;
	std::cout << "Instance 1 rolled_value = " << std::to_string(instance.rolled_value()) << std::endl;
	std::cout << "Instance 2 rolled_value = " << std::to_string(instance2.rolled_value()) << std::endl;
	//Notice they're the same

	instance.roll();
	std::cout << "Instance of Die rolled a " << std::to_string(instance.rolled_value()) << std::endl;
	std::cout << "Instance 1 rolled_value = " << std::to_string(instance.rolled_value()) << std::endl;
	std::cout << "Instance 2 rolled_value = " << std::to_string(instance2.rolled_value()) << std::endl;
	//Notice instance 1 changed, but not instance 2 because the assignment performed a member-wise copy.

	instance2.roll();
	std::cout << "Instance 2 of Die rolled a " << std::to_string(instance2.rolled_value()) << std::endl;
	std::cout << "Instance 1 rolled_value = " << std::to_string(instance.rolled_value()) << std::endl;
	std::cout << "Instance 2 rolled_value = " << std::to_string(instance2.rolled_value()) << std::endl;
	//Notice instance 2 changed but not instance 1. Each has their own memory space at this time so one cannot affect the other.

	Die& reference = instance;
	std::cout << "Reference of Die is set equal to Instance 1 " << std::endl;
	std::cout << "Instance 1 rolled_value = " << std::to_string(instance.rolled_value()) << std::endl;
	std::cout << "Reference rolled_value = " << std::to_string(reference.rolled_value()) << std::endl;

	reference.roll();
	std::cout << "Reference of Die rolled a " << std::to_string(reference.rolled_value()) << std::endl;
	std::cout << "Instance 1 rolled_value = " << std::to_string(instance.rolled_value()) << std::endl;
	std::cout << "Reference rolled_value = " << std::to_string(reference.rolled_value()) << std::endl;
	//Notice that reference changed instance 1. That's because the reference points to the same address as instance 1.

	instance.roll();
	std::cout << "Instance 1 of Die rolled a " << std::to_string(instance.rolled_value()) << std::endl;
	std::cout << "Instance 1 rolled_value = " << std::to_string(instance.rolled_value()) << std::endl;
	std::cout << "Reference rolled_value = " << std::to_string(reference.rolled_value()) << std::endl;
	//And this works both ways. Operations on the initial instance also affect the reference because they share the same memory space.
	*/
	
	return 0;
}