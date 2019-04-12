#include <iostream>

int main()
{
    int t, n, div, sum, index, c = 1, arr[100];
    std::cin >> t;

    while(t != 0)
    {
        std::cin >> n;
        div = n;
        index = 0;
        sum = 0;
        while(n !=0 )
        {
            std::cin >> arr[index];
            sum = sum + arr[index];
            index ++;
            n --;
        }
        std::cout << "Case " << c++ << ": " << (sum / div) << std::endl;
        t --;

    }
    return 0;
}
