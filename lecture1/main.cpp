#include <iostream>
#include <bitset>
#include <string>
int main(){
    int A;
    int i;
    int b;
    std::cin>>A;
    std::cin>>i;
    std::cin>>b;
    std::string s = std::bitset<32>(A).to_string();
    s = s.substr(s.find("1"));
    std::cout<<s<<std::endl;
    if (i<=s.length()-1){
        if (s[i] == '0'){
            char f = s[i];
            s[i] = s[0];
            s[0] = f;

        }
        else{
            if ((abs(A)==abs(i)) || (abs(i)==abs(b)) || (abs(A)==abs(b))){
                std::cout<<"Code zero"<<std::endl;
            }
            else{
                double v = double((abs(A)+abs(i)+abs(b)))/3;
                std::cout<<v<<std::endl;
            }

        }
        std::cout<<s<<std::endl;



    }
    else{
        std::cout<<"ERROR"<<std::endl;
    }


    
return 0;





}
