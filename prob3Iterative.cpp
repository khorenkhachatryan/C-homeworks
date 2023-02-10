//Binary search with iterative method 
#include <iostream> 
    int binary_search(int* ptr , int size, int num) 
    {    
        int first_index = 0; 
        int last_index = (size-1); 
        if (size <= 0)  
        { 
            return -1; 
        } 
        while (first_index <= last_index) 
        { 
            int midle_index =  first_index + (last_index - first_index) / 2; 
            if(num == ptr[midle_index]) 
            {  
                return midle_index; 
            } 
            if(num > ptr[midle_index]) 
            { 
                 first_index = midle_index + 1; 
            } 
            if (num < ptr[midle_index]) 
            { 
                last_index = midle_index - 1; 
            } 
       } 
        return -1; 
    }
       
    int main()  
    {    
        int size = 0; 
        int element = 0; 
        int num = 0; 
        std::cout << "enter the amount of your array's elemenets\n"; 
        std::cin >> size; 
        std::cout << "enter your elements\n"; 
        int * ptr = new int[size]; 
        for(int i = 0; i < size; i++ ) 
        { 
             
            std::cin >> element; 
            ptr[i] = element; 
        } 
        std::cout << "now enter the element, which index you need to known\n"; 
        std::cin >> num; 
        std::cout << "the index is "  << binary_search(ptr, size , num) << std::endl; 
        delete [] ptr; 
        system("pause"); 
        return 0; 
    }

