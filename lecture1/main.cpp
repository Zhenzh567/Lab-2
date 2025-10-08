#include <iostream>
#include <bitset>

int main() {
    short A;
    int i;
    std::cin >> A;
    std::cin >> i;
    if (i < 0 || i>7) {
        std::cout << "Error" << std::endl;
    }
    else {
        std::bitset<8>bit(A);
        std::cout << bit << "\n";
        int biti = 1 & (A >> i);
        std::cout << biti << "\n";
        if (biti == 0) {
            unsigned int bit0 = A & 1;
            A ^= (bit0 << i);
            A ^= biti;
            std::bitset<8>s(A);
            std::cout << s << std::endl;


        }
        else {
            int v;
            int b;
            int c;
            std::cin >> v;
            std::cin >> b;
            std::cin >> c;
            if (abs(v) == abs(b) || abs(v) == abs(c) || abs(c) == abs(b)) {
                std::cout << "Code zero" << std::endl;
            }
            else {
                if (abs(v) > abs(b) && abs(v) > abs(c) && abs(b) > abs(c)) {
                    std::cout << b << std::endl;
                }
                if (abs(v) > abs(b) && abs(v) > abs(c) && abs(c) > abs(b)) {
                    std::cout << c << std::endl;
                }
                if (abs(c) > abs(b) && abs(c) > abs(v) && abs(v) > abs(b)) {
                    std::cout << v << std::endl;
                }
                if (abs(c) > abs(b) && abs(c) > abs(v) && abs(b) > abs(v)) {
                    std::cout << b << std::endl;
                }
                if (abs(b) > abs(v) && abs(b) > abs(c) && abs(v) > abs(c)) {
                    std::cout << v << std::endl;
                }
                if (abs(b) > abs(v) && abs(b) > abs(c) && abs(c) > abs(v)) {
                    std::cout << c << std::endl;
                }
            }
        }
    }

}





