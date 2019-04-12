#include <iostream>
#include <cmath>

int main()
{
    long long int cx, cy, px, py, r, distance, c = 0;
    int t;
    std::cin >> t;

    while(t != 0)
    {
        std::cin >> cx >> cy >> r >> px >> py;
        distance = sqrt(pow((cx - px),2) + pow((cy - py),2));
        if(distance < r)
        {
            std::cout << "Case " << ++c << ": " << "yes" << std::endl;
        }
        else
        {
            std::cout << "Case " << ++c << ": " << "no" << std::endl;
        }
        t --;
    }
    return 0;
}
