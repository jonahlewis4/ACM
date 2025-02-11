//
// Created by Jonah on 2/10/25.
//

#include <vector>
#include <iostream>
#include <cmath>
int n = 1000;
int square_root_n = std::floor(std::sqrt(n));
int main(){
    std::vector<bool> primes(n + 1, true);
    for(int i = 2; i <= square_root_n; i++){
        //skip the current number if it is composite.
        if(!primes[i])
        {
            continue;
        }
        for(int j = i * i; j <= n; j += i){
            primes[j] = false;
        }
    }




    //postprocessing
    std::vector<int> primesV;
    for(int i = 2; i <= n; i++){
      if(primes[i]){
          primesV.push_back(i);
      }
    }

    for(const int prime : primesV){
        std::cout<<prime<<" ";
    }
    std::cout<<std::endl;
}