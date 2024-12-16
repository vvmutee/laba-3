#include <iostream> 
#include <bitset>

int main()
{
    int x, i;
    std::cin >> x >> i;
    
    x = x >> i;
    
    std::cout << x % 2 << " - last bit" << std::endl;
    std::cout << std::bitset<sizeof(int) * 8>(x) << " binary" << std::endl;

    return 0;

}
