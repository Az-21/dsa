// https://www.hackerrank.com/challenges/sparse-arrays

#include <vector>
#include <iostream>

int main()
{
  int queryLength, stringLength;
  std::vector<int> matchesList;
  std::vector<std::string> queryList, stringList;

  // Input
  std::cin >> stringLength;
  for(size_t i = 0; i < stringLength; i++)
  {
    std::string input;
    std::cin >> input;
    stringList.push_back(input);
  }

  std::cin >> queryLength;
  for(size_t i = 0; i < queryLength; i++)
  {
    std::string input;
    std::cin >> input;
    queryList.push_back(input);
  }

  // Query
  for(std::string query : queryList)
  {
    int matches = 0;
    for(int i = 0; i < stringLength; i++)
    {
      if(query == stringList[i]) { matches++; }
      //stringList.erase(stringList.begin() + i); // Remove matched element from list
    }

    matchesList.push_back(matches);
  }

  // Output
  for(int matches : matchesList)
  {
    std::cout << matches << std::endl;
  }

}