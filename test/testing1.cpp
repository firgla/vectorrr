#include "vector1.h"
#include <iostream>
#include "gtest/gtest.h"
#include "test.h"
#include <vector>
 
 int main()
 {
 
 
    my::Test t1;
    t1.number = 1;

    my::Test t2;
    t2.number = 2;

    my::Test t3;
    t3.number = 3;

    my::Test t4;
    t4.number = 4;

    my::Test t5;
    t5.number = 5;

    my::Test t6;
    t6.number = 6;

    std::vector<my::Test> a;
    vector<my::Test> b;
    vector<my::Test> c;

    a.push_back(t1);
    a.push_back(t2);
    a.push_back(t3);
    a.push_back(t4);
    a.push_back(t5);
    a.push_back(t6);

    b.push_back(t1);
    b.push_back(t2);
    b.push_back(t3);
    b.push_back(t4);
    b.push_back(t5);
    b.push_back(t6);


    c.push_back(t1);
    c.push_back(t2);
    c.push_back(t3);
    c.push_back(t4);
    c.push_back(t5);
    c.push_back(t6);


/*
    a.clear();
    b.clear();

    std::cout << "C++ vector capacity: " << a.capacity() << std::endl;
    std::cout << "C++ vector size: "     << a.size()     << std::endl;

    std::cout << "My vector capacity: " << b.capacity() << std::endl;
    std::cout << "My vector size: "     << b.size()     << std::endl;
*/

/*
    std::cout << "-------------------------" << std::endl;
    a.insert(a.begin() + 3, 8, 10);
    std::cout << "C++ vector capacity: " << a.capacity() << std::endl;
    std::cout << "C++ vector size: "     << a.size()     << std::endl;

    b.insert(b.begin() + 3, 8, 10);
    std::cout << "My vector capacity: " << b.capacity() << std::endl;
    std::cout << "My vector size: "     << b.size()     << std::endl;
*/

/*
    std::cout << "-------------------------" << std::endl;
    a.push_back(7);
    std::cout << "C++ vector capacity: " << a.capacity() << std::endl;
    std::cout << "C++ vector size: "     << a.size()     << std::endl;

    std::cout << "-------------------------" << std::endl;
    b.push_back(7);
    std::cout << "My vector capacity: " << b.capacity() << std::endl;
    std::cout << "My vector size: "     << b.size()     << std::endl;
*/

/*
    std::cout << "-------------------------" << std::endl;
    a.pop_back();
    std::cout << "C++ vector capacity: " << a.capacity() << std::endl;
    std::cout << "C++ vector size: "     << a.size()     << std::endl;

    std::cout << "-------------------------" << std::endl;
    b.pop_back();
    std::cout << "My vector capacity: " << b.capacity() << std::endl;
    std::cout << "My vector size: "     << b.size()     << std::endl;
*/

/*
std::cout << "-------------------------" << std::endl;
    a.resize(20);

    std::cout << "C++ vector capacity: " << a.capacity() << std::endl;
    std::cout << "C++ vector size: "     << a.size()     << std::endl;


    std::cout << "-------------------------" << std::endl;
    b.resize(20);
    std::cout << "My vector capacity: " << b.capacity() << std::endl;
    std::cout << "My vector size: "     << b.size()     << std::endl;
*/
/*
    vector<int> d;
    vector<int> e;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);


    e.push_back(1);
    e.push_back(2);
    e.push_back(3);
    e.push_back(5);
    e.push_back(5);
    e.push_back(5);




    std::cout << (d >= e) << std::endl;
    */


    std::cout << "Выводим результат вектора с++"<< std::endl << (*(a.erase(a.begin() + 3))).number << std::endl << "Выводим результат собственного вектора" << std::endl << (*(b.erase(b.begin() + 3))).number << std::endl;

/*
    std::cout << "Выводим результат вектора с++"<< std::endl << *(a.clear()) << std::endl << "Выводим результат собственного вектора" << std::endl <<*(b.clear()) << std::endl;
    
    std::cout << "Конечные деструкторы при выходе из программы" << std::endl;
/*
/*
    std::cout << "Вывод собственного вектора" << std::endl;
    for(int i = 0; i < b.size(); i++)
    std::cout << b[i].number << std::endl;

    std::cout << "Вывод вектора c++" << std::endl;
    for(int i = 0; i < a.size(); i++)
    std::cout<< a[i].number << std::endl;


    std::cout << a.size() << std::endl;
    std::cout << b.size() << std::endl;
*/


/*
vector<int> a;
    for (int i = 0; i < 6; i++)
    {
        a.push_back(i);
    }

    std::vector<int> b;
    for (int i = 0; i < 6; i++)
    {
        b.push_back(i);
    }
    std::cout << *(a.erase(a.begin() + 1)) << " " << *(b.erase(b.begin() + 1)) << std::endl;
*/
 }