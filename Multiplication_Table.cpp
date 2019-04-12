#include <iostream>

int main()
{
    int t, c = 0;
    long long int x;
    std::cin >> t;

    while(t !=0 )
    {
        std::cin >> x;
        std::cout << "Case " << ++c << ":" << std::endl;
        for(int i = 1; i <= 10; i++)
        {
            std::cout << x << " * " << i << " = " << (x * i) << std::endl;
        }
        t --;
    }
    return 0;
}
