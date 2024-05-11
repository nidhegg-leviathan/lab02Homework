#include <iostream>
#include <string>

int main()
{
        std::string name;

        // Name input
        std::cout << "Input name: ";
        std::cin >> name;

        std::cout << "Hello world from " + name << std::endl;
}
