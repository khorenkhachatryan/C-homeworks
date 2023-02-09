//User must be enter a text or string, and the programm turns symbol places.
#include <iostream> 
#include <cstring> 
int main() 
{
    char str1[20] = " ";
    char str2[20] = " ";
    std::cin >> str1;
    int j = 0;
    for (int i = strlen(str1) - 1; i >= 0; --i)
    {
        str2[j] = str1[i];
        ++j;
    }
    std::cout << "str2 = " << str2 << std::endl;


    system("pause");
    return 0;
}