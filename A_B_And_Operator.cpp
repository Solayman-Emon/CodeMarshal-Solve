#include <iostream>

int main()
{
    long long int t, x, y, c = 0;
    char ch;
    std::cin >> t;
    while(t != 0){
        std::cin >> x >> y >> ch;
        if(ch == '+'){
            std::cout << "Case " << ++c << ": " << x + y << std::endl;
        }
        else if(ch == '-'){
            std::cout << "Case " << ++c << ": " << x - y << std::endl;
        }
        else if(ch == '*'){
            std::cout << "Case " << ++c << ": " << x * y << std::endl;
        }
        else if(ch == '/'){
            std::cout << "Case " << ++c << ": " << x / y << std::endl;
        }
        else if(ch == '%'){
            std::cout << "Case " << ++c << ": " << x % y << std::endl;
        }
        t --;
    }
    return 0;
}
