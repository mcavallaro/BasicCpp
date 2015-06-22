#include <iostream>
#include <limits>
int main()
{
     std::cout << "min double: " << std::numeric_limits<double>::min() << '\n' << "max double: " << std::numeric_limits<double>::max() << '\n' << "size of double: " << sizeof(double) << '\n';
     std::cout << "min long double: " << std::numeric_limits<long double>::min() << '\n' << "max long double: " << std::numeric_limits<long double>::max() << '\n' << "size of long double: " << sizeof(long double) << '\n';
} 
