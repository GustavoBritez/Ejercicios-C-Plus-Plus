#include <iostream>

using namespace std;

int main()
{
    int altura, base;
    std::cout << "Ingrese el area";
    std::cin >> altura;
    std::cout << "Ingrese la base";
    std::cin >> base;

    int area = (base*altura) / 2;

    std::cout << "El area es " << area << std::endl;

    return 0;
}
