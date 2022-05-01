#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    for (int i = 0 ; i < data.size(); i++){
      int lastIndex = data.size()-1;
      while(lastIndex > i || data[i] + data[lastIndex] <= sum){
        if (data[i] + data[lastIndex] == sum){
          return std::make_pair(i,lastIndex);
        }
        lastIndex--;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment