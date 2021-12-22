#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;

vector<int> findUniqueNumbers(vector<int> values)
{
    vector<int> uniqueValues;

    vector<int>::iterator begin = values.begin();
    vector<int>::iterator end = values.end();
    vector<int>::iterator current;

    for(current = begin ; current != end ; current++)
    {
        int val = *current;
        bool foundBefore = false;
        bool foundAfter = false;
        if (std::find(begin, current, val) != current)
        {
            foundBefore = true;
        }
        else if (std::find(current + 1, end, val) != end)
        {
            foundAfter = true;
        }

        if(!foundBefore && !foundAfter)
            uniqueValues.push_back(val);
    }
    return uniqueValues;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hi start" << endl;
    std::vector<int> numbers = {1, 2, 3, 1, 2, 5, 4, 6};
    vector<int> result = findUniqueNumbers(numbers);
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << endl;
    cout << "hi end" << endl;
    
    return 0;
}