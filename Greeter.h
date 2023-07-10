#pragma once
#include <string>

namespace Greeter {
	class Greeter
	{
		std::string name;

	public:		
		std::string hello = "Здравствуйте, ";
		std::string sign = "!";

		Greeter(std::string name)
		{
			this->name = name;
		}

		Greeter() = default;

		void set_inc(std::string name);

		std::string greet();	
				
	};
}