#include <iostream>

namespace my
{
struct Test
{
    int number;

    ~Test()
    {
        std::cout << "Test::~Test(): " << number << std::endl;
    }
    Test()
    {
        std::cout << "Test::Test()" << std::endl;
    }
    Test(int const n)
        : number(n)
    {
        std::cout << "Test::Test(int): " << number << std::endl;
    }
    Test(Test const &other)
        : number(other.number)
    {
        std::cout << "Test::Test(Test const &) : " << number << std::endl;
    }
    Test(Test      &&other)
        : number(other.number)
    {
        other.number = 0;
        std::cout << "Test::Test(Test &&) : " << number << std::endl;
    }
    Test &operator=(Test const &other)
    {
        std::cout << "Test &Test::operator=(Test const &) : " << number << " -> " << other.number << std::endl;
        if(this != &other)
        {
            this->~Test();
            new (this) Test(other);
        }
        return *this;
    }
    Test &operator=(Test &&other)
    {
        std::cout << "Test &Test::operator=(Test &&) : " << number << " -> " << other.number << std::endl;
        if(this != &other)
        {
            this->~Test();
            new (this) Test(static_cast<Test &&>(other));
        }
        return *this;
    }
};
}