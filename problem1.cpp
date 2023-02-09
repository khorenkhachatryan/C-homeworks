// User must enter some number, if the last and most significant bits are equal, function will return true.
#include <iostream>

bool is_equal( unsigned int binar_num1 ) {
  unsigned int binar_num2 = binar_num1;
  binar_num2 >>= 31;
  int not_or_result = (binar_num1 ^ binar_num2);
  not_or_result &= 1;
    if (not_or_result == 0) {
         return true; 
      }
     else {
         return false;   
      }  
}
int main () {
  unsigned int  binar_num1 ;
  std::cout << "please enter the number\n";
  std::cin >> binar_num1;
  std::cout << std::endl;
  std::cout << is_equal(binar_num1) << std::endl;
system("pause");
return 0;  
}