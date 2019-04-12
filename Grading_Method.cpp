#include <iostream>

int main()
{
    int n, marks, c = 0;
    std::cin >> n;
    while(n != 0)
    {
        std::cin >> marks;

        if(marks >= 90 && marks <= 100)
        {
            std::cout << "Student " << ++c << ": " << "A+" << std::endl;
        }
        else if(marks >= 80 && marks <= 89)
        {
            std::cout << "Student " << ++c << ": " << "A" << std::endl;
        }
        else if(marks >= 70 && marks <= 79)
        {
            std::cout << "Student " << ++c << ": " << "A-" << std::endl;
        }
        else if(marks >= 60 && marks <= 69)
        {
            std::cout << "Student " << ++c << ": " << "B+" << std::endl;
        }
        else if(marks >= 50 && marks <= 59)
        {
            std::cout << "Student " << ++c << ": " << "B-" << std::endl;
        }
        else if(marks >= 40 && marks <= 49)
        {
            std::cout << "Student " << ++c << ": " << "C" << std::endl;
        }
        else if(marks >= 35 && marks <= 39)
        {
            std::cout << "Student " << ++c << ": " << "D" << std::endl;
        }
        else if(marks >=0  && marks <= 34)
        {
            std::cout << "Student " << ++c << ": " << "F" << std::endl;
        }
        n --;

    }
    return 0;
}
