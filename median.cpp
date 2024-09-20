#include "func.h"

//int find(std::vector<int> array, int value)
//{
//	for (int i = 0; i < array.size(); i++)
//	{
//		if (array[i] == value)
//			return i;
//	}
//}
//
//std::pair<std::vector<int>, std::vector<int>> partition(std::vector<int> array, int p)
//{
//	std::vector<int> tempL, tempR;
//	for (int i = 0; i < array.size(); i++)
//	{
//		if (array[i] < p)
//			tempL.push_back(array[i]);
//		else if (array[i] > p)
//			tempR.push_back(array[i]);
//	}
//	tempL.push_back(p);
//
//	return { tempL, tempR };
//}
//
//std::vector<int> merge(std::vector<int> L, std::vector<int> R)
//{
//	std::vector<int> result;
//
//	for (int i = 0; i < L.size(); i++)
//	{
//		result.push_back(L[i]);
//	}
//
//	for (int i = 0; i < R.size(); i++)
//	{
//		result.push_back(R[i]);
//	}
//
//	std::sort(result.begin(), result.end());
//	return result;
//}
//
//std::vector<int> firstTour(std::vector<int> array)
//{
//	std::vector<int> C, temp;
//	for (int i = 0; i < array.size() + 1; i++)
//	{
//		if (i % 5 == 0 && i != 0)
//		{
//			std::sort(temp.begin(), temp.end());
//			C.push_back(temp[temp.size() / 2]);
//			temp.clear();
//		}
//		if(i < array.size())
//			temp.push_back(array[i]);
//	}
//
//	return C;
//}
//
//int median(std::vector<int> array, int index)
//{
//	
//	std::vector<int> C = firstTour(array);
//
//	int p = median(C, C.size());
//
//	std::pair<std::vector<int>, std::vector<int>> part = partition(array, p);
//
//	std::vector<int> merged = merge(part.first, part.second);
//
//	int j = find(merged, p), i = array.size()/2;
//
//	if (j == i)
//		return p;
//	else if (j > i)
//		return median(part.first, i);
//	else
//		return median(part.second, i - j);
//}

int find(std::vector<int> array, int value) 
{
    for (int i = 0; i < array.size(); i++) \
    {
        if (array[i] == value)
            return i;
    }
    return -1;
}

std::pair<std::vector<int>, std::vector<int>> partition(std::vector<int> arr, int pivot) 
{
    std::vector<int> left, right;
    for (int i = 0; i < arr.size(); i++) {
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
    if (n == 1) {
        return arr[0];
    }

    std::vector<int> medians;
    for (int i = 0; i < n; i += 5) {
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

    if (k < smallerCount) {
        return median(partitions.first, k);
    }
    else if (k < equalCount) {
        return pivot;
    }
    else {
        return median(partitions.second, k - equalCount);
    }
}

void findMedian()
{
	system("cls");

	std::vector<int> data = {11, 6, 10, 2, 15, 8, 1, 7, 14, 3, 12, 4, 5, 13, 9};
	std::cout << "Введите массив для нахождения медианы";

	std::cout << "\nМедиана введенного массива: " << median(data, data.size() / 2) << "\n\n";

	system("pause");
}
