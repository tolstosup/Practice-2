#include "func.h"

//std::string LCS(std::string s1, std::string s2)
//{
//    if (s1.size() < 5 && s2.size() < 5)
//    {
//        std::string result;
//        int n1 = s1.length(), n2 = s2.length(), k = 0;;
//
//        for (int i = 0, j = 0; i <= n1 - 1 && j <= n2 - 1 && k < (n1 + n2) / 2; i++, j++)
//        {
//            if (s1[i] != s2[j])
//            {
//                k++;
//                i = k;
//                j = k;
//            }
//            else
//                result.push_back(s1[i]);
//        }
//
//        return result;
//    }
//
//    std::string l1 = "", l2 = "", r1 = "", r2 = "";
//    
//    l1 = s1.substr(0, s1.size() / 2);
//    l2 = s2.substr(0, s2.size() / 2);
//    r1 = s1.substr(s1.size() / 2, s1.size());
//    r2 = s2.substr(s2.size() / 2, s2.size());
//
//    std::string res1 = LCS(l1, r2), res2 = LCS(l2, r1);
//
//    return res1 + res2 /*LCS(res1, res2)*/;
//}

//std::vector<char> LCS(std::string x, std::string y)
//{
//    if (x.empty() || y.empty()) 
//    {
//        return {};
//    }
//    if (x.back() == y.back()) 
//    {
//        std::vector<char> result = LCS(x.substr(0, x.size() - 1), y.substr(0, y.size() - 1));
//        result.push_back(x.back());
//        return result;
//    }
//    else 
//    {
//        std::vector<char> left = LCS(x.substr(0, x.size() - 1), y);
//        std::vector<char> right = LCS(x, y.substr(0, y.size() - 1));
//        return (left.size() > right.size()) ? left : right;
//    }
//}

std::string LCS(const std::string text1, const std::string text2) 
{
    int m = text1.length();
    int n = text2.length();

    std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));

    for (int i = 1; i <= m; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            if (text1[i - 1] == text2[j - 1]) 
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else 
            {
                dp[i][j] = std::max<int>(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    int len = dp[m][n];
    std::string result;

    int i = m, j = n;
    while (i > 0 && j > 0) 
    {
        if (text1[i - 1] == text2[j - 1]) 
        {
            result = text1[i - 1] + result;
            i--;
            j--;
        }
        else if (dp[i - 1][j] > dp[i][j - 1]) 
        {
            i--;
        }
        else 
        {
            j--;
        }
    }

    return result;
}

void findLargestCommonSubstring()
{
    system("cls");

    std::string str1, str2;
    std::cout << "Введите строки для определения их LCS\n>> ";
    std::cin >> str1;

    std::cout << ">> ";
    std::cin >> str2;
    std::cout << "\n";

    std::cout << "Наибольшая общая подстрока: " << LCS(str1, str2) << "\n\n";

    system("pause");
}