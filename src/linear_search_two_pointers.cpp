#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.
    int firstIndex = 0;
    int lastIndex = arr.size() - 1;
    while (firstIndex <= lastIndex){
      if (search_elem == arr[firstIndex]){
        return firstIndex;
      }
      if (search_elem == arr[lastIndex]){
        return lastIndex;
      }
      firstIndex++;
      lastIndex--;
    }
    return std::nullopt;
  }

}  // namespace assignment