#include "Greeter.h"

namespace Greeter {
    void Greeter::set_inc(std::string name)
    {
        this->name = name;
    }
    std::string Greeter::greet()
    {
        std::string Hello = hello + name + sign;

        return  Hello;
    }


}


