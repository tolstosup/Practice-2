#include "func.h"

int find(std::vector<int> array, int value) 
{
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] == value)
            return i;
    }
    return -1;
}

std::pair<std::vector<int>, std::vector<int>> partition(std::vector<int> arr, int pivot) 
{
    std::vector<int> left, right;
    for (int i = 0; i < arr.size(); i++) 
    {
        if (arr[i] < pivot)
            left.push_back(arr[i]);
        else if (arr[i] > pivot)
            right.push_back(arr[i]);
    }
    return { left, right };
}

int median(std::vector<int> arr, int k);

int medianOfMedians(std::vector<int> arr) 
{
    int n = arr.size();
    if (n == 1) 
    {
        return arr[0];
    }

    std::vector<int> medians;
    for (int i = 0; i < n; i += 5) 
    {
        std::vector<int>::iterator itEnd = arr.begin() + std::min<int>(i + 5, n);
        std::sort(arr.begin() + i, itEnd);
        medians.push_back(arr[i + (itEnd - arr.begin() - i) / 2]);
    }

    return median(medians, medians.size() / 2);
}

int median(std::vector<int> arr, int k) 
{
    int pivot = medianOfMedians(arr);

    std::pair<std::vector<int>, std::vector<int>> partitions = partition(arr, pivot);
    int smallerCount = partitions.first.size();
    int equalCount = arr.size() - partitions.second.size();

    if (k < smallerCount) 
    {
        return median(partitions.first, k);
    }
    else if (k < equalCount) 
    {
        return pivot;
    }
    else 
    {
        return median(partitions.second, k - equalCount);
    }
}

void findMedian()
{
	system("cls");

	std::vector<int> input; //= {11, 6, 10, 2, 15, 8, 1, 7, 14, 3, 12, 4, 5, 13, 9};
	std::cout << "Введите массив в формате (A1, A1, ..., An) для нахождения его медианы\n>> ";
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

	std::cout << "\nМедиана введенного массива: " << median(input, input.size() / 2) << "\n\n";

	system("pause");
}
