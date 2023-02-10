// We have a some text into text.txt file, programm will return the sam text, but written in great words.
#include <iostream>
#include <fstream>
#include <string>
int main()
{
    std::string line;
    std::fstream file;
    file.open("text.txt");
    if (file.is_open())
    {
        std::getline(file, line , '\n');
    }
    for(int i = 0; i < line.size(); i++)
    {
        if(line[i] >= 97 && line[i] <= 122)
        {
           line[i] = line[i] - 32;
        }
    }
    std::cout << line << std::endl; 
    file.close();

    system("pause");
    return 0;

}
