#include "func.h"

bool compareVal(int a, int b)
{
    if (a > b)
        return true;
    return false;
}

std::vector<std::vector<int>> segments(std::vector<int> arr, unsigned int n)
{
    std::sort(arr.begin(), arr.end(), &compareVal);

    std::vector<std::vector<int>> dividedArrays(n);
    std::vector<int> currentSums(n, 0);

    for (int val : arr)
    {
        int minIndex = 0;
        for (int i = 1; i < n; i++)
        {
            if (currentSums[i] < currentSums[minIndex])
            {
                minIndex = i;
            }
        }
        dividedArrays[minIndex].push_back(val);
        currentSums[minIndex] += val;
    }

    return dividedArrays;
}

void divideArraySegmentsMinDiffSum()
{
    system("cls");

    std::vector<int> input; //= {11, 6, 10, 2, 15, 8, 1, 7, 14, 3, 12, 4, 5, 13, 9};
    std::cout << "¬ведите массив в формате (A1, A1, ..., An) дл€ нахождени€ его медианы\n>> ";
    std::string data = "";
    getline(std::cin, data);
    data += ",";

    std::string temp = "";
    for (int i = 0; i < data.size(); i++)
    {
        if (isdigit(data[i]))
            temp += data[i];
        else if (data[i] == ',')
        {
            input.push_back(std::stoi(temp));
            temp = "";
            i++;
        }
    }

    uint n = 0;
    std::cout << "¬ведите на сколько частей\n>> ";
    std::cin >> n;

    std::vector<std::vector<int>> result = segments(input, n);
    for (auto subarray : result)
    {
        output(subarray);
        std::cout << std::endl;
    }
    
    system("pause");
}