// there is a num1.txt which has two numbers(4 and 5) in different lines. The programm will return the sum of that numbers.
#include <iostream>
#include <fstream>
#include <string>
int main()
{
    std::fstream file;
    file.open("num1.txt");
    if(file.is_open())
    {
        std::string line1;
        std::string line2;
        file >> line1;
        file >> line2;
        int var1 = std::stoi(line1);
        int var2 = std::stoi(line2);
        int var3 = var1 + var2;
        std::cout << var3 << std::endl;
        file.close();        
    }
    system("pause");
    return 0;
}