#include <iostream>

const int MAX_BINARY_DIGITS_TO_GENERATE = 100;

void permutation(int16_t number, int16_t current,int16_t buffer[],
                    bool used[]){
    if(current== number){
        //base case 
        for(int i=0;i<number;i++){
             std::cout<<buffer[i]<<'\t';   
        }
      std::cout<<"\n";    
    }else{
        //recursive case
        for(int16_t variant=0;variant<number; variant++){
            if(not used[variant]){//cutting recursive tree
                buffer[current] = variant;
                used[variant] = true;
                permutation(number, current + 1, buffer, used);
                used[variant] = false;
            }
        }
       
    }
}

int main(){
    int16_t n;
    std::cout<<"Enter number permitations"<<"\n";
    std::cin>>n;
    
    if(n> 20){
        std::cout<<"too big"<<'\t';   
    }
    else if(n<=0){
        std::cout<<"too small"<<'\t';   
    }
    else{
        int16_t buffer[n];
        //suspect that used will be initialized by zeros (to be interpreted by zeros)
        bool used[n] = {false};
        permutation(n, 0, buffer, used);
    }
    
    return 0;
}