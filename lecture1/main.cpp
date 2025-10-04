#include <iostream>
#include <bitset>

int main() {
    short A;
    int i;
    std::cin >> A;
    std::cin >> i;
    if (i<0 || i>7){
        std::cout<<"Error"<<std::endl;
    }
    else{
        std::bitset<8>bit(A);
        std::cout << bit <<"\n";
        int biti = 1 & (A>>i); 
        std::cout << biti<<"\n";
        if (biti==0){
            unsigned int bit0 = A&1;
            A ^=(1<<i);
            A ^= 1;
            std::bitset<8>s(A);
            std::cout<<s<<std::endl;


        }
        else{
            int v;
            int b;
            int c;
            std::cin>>v;
            std::cin>>b;
            std::cin>>c;
            if (abs(v)==abs(b)||abs(v)==abs(c)||abs(c)==abs(b)){
                std::cout<<"Code zero"<<std::endl;
            }
            else{
                double z = static_cast<double>(abs(v)+abs(b)+abs(c))/3;
                std::cout<<z<<std::endl;
            }
        }
    }

}





