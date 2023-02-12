#include <iostream>
#include <vector>

int main(void) {
    int num_to_sum,sum=0,i=1;
    std::vector <int> result;
    std::cin>>num_to_sum;
    while(sum!=num_to_sum){
        if(sum<num_to_sum){
            result.push_back(i);
            sum+=i;
        }else{
            sum-=result[result.size()-2];
            result.erase(result.end()-2);
            continue;
        }
        ++i;
    }
    std::cout<<result.size()<<std::endl;
    for(auto &it : result){
        std::cout<<it<<" ";
    }

    return 0;
}


