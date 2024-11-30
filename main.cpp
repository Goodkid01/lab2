#include <iostream>
#include <climits>
#include <cfloat>
#include <iomanip>
#include <cmath>


int main() 
{
    double a;
    std::cin >> a; 
    const double pi=acos(-1);
    double a2=a*a;
    double s=a2*pi;
    std::cout << std::fixed << std::setprecision(9) << s << std::endl;
    std::cout <<pi<< std::endl;


}
