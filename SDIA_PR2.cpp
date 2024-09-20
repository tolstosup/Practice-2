#include "func.h"

int main()
{
    void (*func[8])() = {findClosestPointPair, multiplyBigValues, findMedian, quickPowerAlgorithm, findLargestCommonSubstring, calculateConvexHull, divideArrayMinDiffSum, divideArraySegmentsMinDiffSum};
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char ch = '1';

    while (ch != '9')
    {
        system("cls");

        std::cout << "МЕНЮ\n\n1. Поиск ближайшей пары точек\n2. Умножение больших чисел (Алгоритм Карацубы)\n3. Алгоритм нахождения медианы\n4. Быстрый алгоритм возведения в степень\n5. Алгоритм нахождения наибольшей общей подстроки (LCS)\n6. Алгоритм вычисления выпуклой оболочки (Convex Hull)\n7. Разделение массива на две группы с минимальной разницей сумм\n8. Алгоритм разделения массива на k групп с минимальной разницей сумм\n9. Выход\n>> ";
        ch = _getch();

        system("cls");

        if (ch > '0' && ch < '9')
        {
            (func[ch - 49])();
        }
    }

    return 0;
}