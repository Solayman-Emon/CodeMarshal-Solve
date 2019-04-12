#include <iostream>

int main()
{
    long long int t, x, temp = 0;
    std::cin >> t;

    while (t != 0){
        std::cin >> x;
        temp = temp ^ x;
        t --;
    }
    std::cout << temp << std::endl;
    return 0;
}
