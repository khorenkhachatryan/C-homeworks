//User must be enter the number, function will show the amount of ones and zeros in bitsystem.
#include <iostream>
void amount(unsigned int binar_number) {
    int tmp = 0;
    int amount_ones = 0;
    int amount_zeros = 0;
    for (int i = 0; i < 32; i++) {
        tmp = binar_number & 1;
        if (tmp == 1) {
            amount_ones++;
        }
        else {
            amount_zeros++;
        }
        binar_number = ( binar_number >> 1);
    }   
    std::cout << "the amount of ones are " << amount_ones << "\n";
    std::cout << "the amount of zeros are " << amount_zeros << "\n";
}
int main() {
        unsigned int  binar_number = 0;
        std::cout << "please enter your number , and the programm "
        << "will show the count of zeros and ones in bitsystem\n";
        std::cin >> binar_number;
        amount(binar_number);
        system("pause");
    return 0;
}