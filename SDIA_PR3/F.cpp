#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

std::vector<int> generatePyramids(int max_m);
int minPyramidsDP(int m, const std::vector<int>& pyramids);

int main() {
    int T;
    std::cin >> T;

    std::vector<int> test_cases(T);
    int max_m = 0;

    for (int i = 0; i < T; i++) {
        std::cin >> test_cases[i];
        max_m = std::max(max_m, test_cases[i]);
    }

    std::vector<int> pyramids = generatePyramids(max_m);

    for (int m : test_cases) {
        std::cout << minPyramidsDP(m, pyramids) << std::endl;
    }

    return 0;
}

std::vector<int> generatePyramids(int max_m) {
    std::vector<int> pyramids;
    int n = 1;
    while (true) {
        int p = (n * (n + 1) * (n + 2)) / 6;
        if (p > max_m) {
            break;
        }
        pyramids.push_back(p);
        n++;
    }
    return pyramids;
}

int minPyramidsDP(int m, const std::vector<int>& pyramids) {
    std::vector<int> dp(m + 1, std::numeric_limits<int>::max());
    dp[0] = 0;

    for (int p : pyramids) {
        for (int j = p; j <= m; j++) {
            dp[j] = std::min(dp[j], dp[j - p] + 1);
        }
    }

    return dp[m];
}