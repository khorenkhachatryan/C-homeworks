//this function will return your entered text, but with great words.
#include <iostream>
#include <string>
std::string to_upper_case(std::string line)
{
    std::string new_line;

    for(int i = 0; i < line.size(); i++)
    {
        if(line[i] >= 97 && line[i] <= 122)
        {
            line[i] -= 32;
            new_line += line[i];
        }
        else
        {
            new_line += line[i];
        }
    }
    return new_line;



}
int main()
{
    std::string line;
    std::cout << "dear User enter your text\n";
    std::getline(std::cin, line);
    std::cout << to_upper_case(line) << std::endl;
    system("pause");
    return 0;


}