#include <iostream>

const int MAX_BINARY_DIGITS_TO_GENERATE = 100;

void generate_binary_number(int digits_left_to_genarate){
    static int digits_combination [MAX_BINARY_DIGITS_TO_GENERATE];
    static int top = 0;
    if(digits_left_to_genarate == 0){
        //base case 
        for(int i=0;i<top;i++){
             std::cout<<digits_combination[i];   
        }
      std::cout<<"\n";    
    }else{
        //reruscive case
        digits_combination[top++] = 1;
        generate_binary_number(digits_left_to_genarate - 1);
        top--;
        digits_combination[top++] = 0;
        generate_binary_number(digits_left_to_genarate - 1);
        top--;
    }
}

int main(){
    int n;
    std::cin>>n;
    generate_binary_number(n);
    return 0;
}