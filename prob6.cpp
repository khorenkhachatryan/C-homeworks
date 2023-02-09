//User needs to enter the array elemenets, and the programm will return the count of elements, that can divides on their index number without remand.
#include <iostream> 
int main() 
 {   
    int amount = 0;     
    std::cout << "please enter the element's amount your array\n"; 
    std::cin >> amount; 
    int * ptr = new int[amount];  
    std::cout << "now enter your elements\n"; 
    int elements = 0;     
    int count = 0; 
       
    for (int i = 1; i <= amount; i++) 
    { 
        std::cin >> elements; 
        ptr[i] = elements;  
    } 
    for(int i = 1; i <= amount; i++) 
    { 
       if (ptr[i] % i == 0) 
        { 
           count++; 
        }               
    } 
    std::cout << count << std::endl; 
    delete[] ptr; 
    system("pause"); 
    return 0; 
}

