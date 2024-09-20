#include "func.h"

std::string LCS(std::string s1, std::string s2)
{
    if (s1.size() < 5 && s2.size() < 5)
    {
        std::string result;
        int n1 = s1.length(), n2 = s2.length(), k = 0;;

        for (int i = 0, j = 0; i <= n1 - 1 && j <= n2 - 1 && k < (n1 + n2) / 2; i++, j++)
        {
            if (s1[i] != s2[j])
            {
                k++;
                i = k;
                j = k;
            }
            else
                result.push_back(s1[i]);
        }

        return result;
    }

    std::string l1 = "", l2 = "", r1 = "", r2 = "";
    
    l1 = s1.substr(0, s1.size() / 2);
    l2 = s2.substr(0, s2.size() / 2);
    r1 = s1.substr(s1.size() / 2, s1.size());
    r2 = s2.substr(s2.size() / 2, s2.size());

    std::string res1 = LCS(l1, r2), res2 = LCS(l2, r1);

    return res1 + res2 /*LCS(res1, res2)*/;
}

void findLargestCommonSubstring()
{
    system("cls");

    std::string str1, str2;
    std::cout << "Введите строки для определения их LSP\n>> ";
    std::cin >> str1;

    std::cout << ">> ";
    std::cin >> str2;
    std::cout << "\n";

    std::string result = LCS(str1, str2);

    if (result.length())
        std::cout << "Наибольшая общая подстрока: " << result << "\n\n";
    else
        std::cout << "Наибольшая общая подстрока не найдена" << "\n\n";

    system("pause");
}