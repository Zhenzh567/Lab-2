#include <iostream>
int main(){
    int N;
    std::cin>>N;
    if (N>=0){
        switch(N){
            case 102:std::cout<<"Республика Башкортостан";break;
            case 11:std::cout<<"Республика Коми";break;
            case 13:std::cout<<"Республика Мордовия";break;
            case 15:std::cout<<"Северная Осетия";break;
            case 116:
            case 716:std::cout<<"Република Татарстан";break;
            default:std::cout<<"Информация временно недоступна"<<std::endl;



        }
    }
    else{
        std::cout<<"error"<<std::endl;
    }




return 0;
}