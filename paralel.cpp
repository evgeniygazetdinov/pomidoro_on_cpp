#include <iostream>
#include <cassert>


uint64_t ant_recursive(int i, int j){
    // assert(n >=0);
    if(j==1 or j == 1){
        return 1;
    }else{
        return ant_recursive(i,j-1) + ant_recursive(j,i-2);
    }

}

uint64_t ant_dynamic(int n){
    
    uint64_t result;
    uint64_t *fib =  new uint64_t[n+1];
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2;i<=n;i++){
        fib[i] = fib[i-1] + fib[i-2];

    }
}

int main(){
    int n;
    std::cin>> n;
    ant_dynamic(n);

    return 0;
}