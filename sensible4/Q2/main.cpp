/*
 * Write a method that finds, efficiently with respect to time used,
 * all numbers that occur exactly once in the input vector.
 * For example, for vector "numbers" containing {1, 2, 1, 3},
 * "findUniqueNumbers(numbers)" should return a vector containing {2, 3}
 */

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;

vector<int> findUniqueNumbers(const vector<int> &numbers){
    // throw std::logic_error("Waiting to be implemented");

    vector<int> copyVector;
    for(int i = 0; i < numbers.size(); i++){
        copyVector.push_back(numbers[i]);
    }
    sort(copyVector.begin(), copyVector.end());

    //cout << "ordered vector: ";
    //for(int i = 0; i < numbers.size(); i++){
    //    cout << copyVector[i] << " ";
    //}
    //cout << "\n\n";

    vector<int> result;
    for(int i = 1; i < copyVector.size(); i++){
        if(copyVector[i] != copyVector[i - 1] && copyVector[i] != copyVector[i + 1]){
            result.push_back(copyVector[i]);
        }
    }
    return result;
}

int main()
{
    vector<int> numbers = {1, 2, 1, 3, 5, 4, 6, 6, 6};
    vector<int> result = findUniqueNumbers(numbers);
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << endl;
}
