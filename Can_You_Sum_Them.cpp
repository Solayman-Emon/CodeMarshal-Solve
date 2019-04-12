#include <iostream>

int main()
{
    long long int n;
    int  sum = 0, x;
    std::cin >> n;
    for(int i = 0 ; i < n ; i++)
    {
        std::cin >> x;
        if(i % 2 == 0){
            sum = sum + x;
        }
    }
    std::cout << sum <<std::endl;
    return 0;
}
