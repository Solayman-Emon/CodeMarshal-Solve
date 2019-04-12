#include <iostream>

int main()
{
    int t, x, y, z, c = 1, maximum;
    std::cin >> t;

    while(t != 0){
        std::cin >> x >> y >> z;
        maximum = x;
        if(y > maximum){
            maximum = y;
        }
        if(z > maximum){
            maximum = z;
        }
        std::cout << "Case " << c << ": " << maximum << std::endl;
        t --;
        c ++;
    }

    return 0;
}
