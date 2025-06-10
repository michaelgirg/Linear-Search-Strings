// This is my solution to the problem. While there are more efficient and concise ways to implement this,
// I intentionally kept it simple for learning purposes.
// This version is great for beginners who want to understand how linear search works step by step.
// Use this as a reference, but I encourage you to improve upon it and write your own optimized version.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool containsTarget(std::vector<std::string> container, std::string target) 
{
  if (container.size() <= 0 || target.length() <= 0) {
    return false;
  }

  for (int i = 0 ; i < container.size(); i++ ) {
    if (target == container[i]) {
      return true;
    }
  }
  return false; 
}

/*
This function performs a linear search to check if the target string exists in the container vector.
It first ensures both the container and target are non-empty.
It then loops through each element and compares it to the target.
If a match is found, it returns true.
If the loop completes with no match, it returns false.
The search is case-sensitive.
*/
