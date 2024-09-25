#include "func.h"

int main()
{
    void (*func[9])() = {findClosestPointPair, multiplyBigValues, findMedian, quickPowerAlgorithm, findLargestCommonSubstring, calculateConvexHull, divideArrayMinDiffSum, divideArraySegmentsMinDiffSum, asimpCompl};
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string ch = " ";

    while (ch != "10")
    {
        system("cls");

        std::cout << "МЕНЮ\n\n1. Поиск ближайшей пары точек\n2. Умножение больших чисел (Алгоритм Карацубы)\n3. Алгоритм нахождения медианы\n4. Быстрый алгоритм возведения в степень\n5. Алгоритм нахождения наибольшей общей подстроки (LCS)\n6. Алгоритм вычисления выпуклой оболочки (Convex Hull)\n7. Разделение массива на две группы с минимальной разницей сумм\n8. Алгоритм разделения массива на k групп с минимальной разницей сумм\n9. Тестирование\n10. Выход\n>> ";
        std::cin >> ch;
        std::cin.ignore();

        system("cls");

        if (ch != "10")
        {
            (func[std::stoi(ch) - 1])();
        }
    }

    return 0;
}