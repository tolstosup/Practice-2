//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int count_weight(std::vector<int> knapsack, int S);
//
//int main() {
//	int S = 0, N = 0;
//	std::cin >> S >> N;
//
//	std::vector<int> knapsack;
//	for (int i = 0; i < N; i++) {
//		int temp = 0;
//		std::cin >> temp;
//		knapsack.push_back(temp);
//	}
//
//	std::cout << count_weight(knapsack, S);
//
//	return 0;
//}
//
//int count_weight(std::vector<int> knapsack, int S) {
//	std::vector<int> dp(S + 1, 0);
//
//	for (int i = 0; i < knapsack.size(); ++i) {
//		for (int j = S; j >= knapsack[i]; --j) {
//			dp[j] = std::max(dp[j], dp[j - knapsack[i]] + knapsack[i]);
//			std::cout << dp[j] << " ";
//		}
//		std::cout << std::endl;
//	}
//
//	for (int i = 0; i < dp.size(); i++) {
//		std::cout << dp[i] << " ";
//	}
//	std::cout << std::endl;
//
//	return dp[S];
//}