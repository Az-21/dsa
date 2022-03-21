// https://www.hackerrank.com/challenges/array-left-rotation

#include <vector>
#include <iostream>

int main()
{
  int length;
  int shift;
  std::vector<int> list;

  // Input
  std::cin >> length >> shift;
  for(size_t i = 0; i < length; i++)
  {
    int input;
    std::cin >> input;
    list.push_back(input);
  }

  // Shift Operation
  for(int i = 0; i < shift; i++)
  {
    list.insert(list.begin() + length, list.front()); // Copy front to last
    list.erase(list.begin() + 0); // Pop first
  }

  // Output
  for(size_t i = 0; i < length; i++)
  {
    std::cout << list[i] << " ";
  }

  std::cout << std::endl;
}