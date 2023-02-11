// the sum of two entered numbers by using outside file.
#include <iostream>
#include <fstream>
#include <string>
void write_to_txt(std::string number_one, std::string number_two)
{
     std::ofstream writing;
     writing.open("sum.txt");
     if(writing.is_open())
     {
        writing << number_one << "\n";
        writing << number_two;
     }
     writing.close();
     
}
int sum_from_text()
{
    std::string line_one;
    std::string line_two;
    std::fstream sum;
    sum.open("sum.txt");
    if(sum.is_open())
    {
        sum >> line_one;
        sum >> line_two;
    }
    sum.close();
    int integer_one = std::stoi(line_one);
    int integer_two = std::stoi(line_two);
    int the_sum = integer_one + integer_two;
    return the_sum;
}
int main()
{   std::string number_one;
    std::string number_two; 
    std::cout << "enter two numbers\n";
    std::cin >> number_one;
    std::cin >> number_two;
    write_to_txt(number_one, number_two);
    std::cout << "the sum is " << sum_from_text() << std::endl;
    system("pause");
    return 0;
    
    
    
}
