#include <iostream>
#include <fstream>
#include <string>

void writing_function(std::string str)
{
    std::ofstream writing;
    writing.open("string.txt");
    if(writing.is_open())
    {
        writing << str;
    }
    writing.close();
}

std::string taking_and_changing_function(std::string written_text)
{
    std::fstream taking_and_changing;
    taking_and_changing.open("string.txt");
    if(taking_and_changing.is_open())
    {
        
        while(!taking_and_changing.eof())
        {
            std::getline(taking_and_changing, written_text);              
        
            if(written_text[0] <= 'z' && written_text[0] >= 'a')
            {
                written_text[0] -= 32;    
            }
            for(int i = 1; i <= written_text.size(); ++i)
            {
                if((written_text[i] == ' ') && (written_text[i+1] <= 'z' && written_text[i+1] >= 'a'))
                {
                    written_text[i+1] -= 32;   
                }
            }
        }
    }
    return written_text;
}

void changed_text_writing_function(std::string just_changed_text)
{
    std::ofstream new_writing;
    new_writing.open("string.txt");
    if(new_writing.is_open())
    {
        new_writing << just_changed_text;
    }
    new_writing.close();
}

int main()
{
    std::string str;
    std::cout << "enter the text\n";
    std::getline(std::cin, str);
    writing_function(str);
    std::string written_text;
    std::string just_changed_text = taking_and_changing_function(written_text);

    changed_text_writing_function(just_changed_text);
    system("pause");
    return 0;
}