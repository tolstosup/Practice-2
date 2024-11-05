#include "func.h"

void output(std::vector<int> a)
{
    for (int ai : a)
        std::cout << ai << " ";
}

bool compare(int a, int b)
{
    if (a > b)
        return true;
    return false;
}

std::pair<std::vector<int>, std::vector<int>> divide(std::vector<int> arr)
{
    std::sort(arr.begin(), arr.end(), &compare);

    int halfSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        halfSum += arr[i];
    }
    halfSum /= 2;

    std::vector<int> arr_first, arr_second;
    int sum1 = 0, sum2 = 0;

    for (int val : arr)
    {            
        if (sum1 <= sum2 || sum2 >= halfSum) 
        {
            arr_first.push_back(val);
            sum1 += val;
        }
        else 
        {
            arr_second.push_back(val);
            sum2 += val;
        }
    }

    return { arr_first, arr_second };
}


void divideArrayMinDiffSum()
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

    std::pair<std::vector<int>, std::vector<int>> res = divide(input);

    std::cout << "\nA = ";
    output(res.first);
    std::cout << "\nB = ";
    output(res.second);
    std::cout << "\n\n";

    system("pause");
}