//#include <iostream>
//#include <vector>
//
//int bad_substr(int n);
//
//int main() {
//	int n = 0;
//	std::cin >> n;
//
//	std::cout << bad_substr(n);
//
//	return 0;
//}
//
//int bad_substr(int n) {
//    if (n == 0)
//        return 1;
//    if (n == 1) {
//        return 3;
//    }
//
//    int count_a = 1;
//    int count_b = 1;
//    int count_c = 1;
//
//    int total_count = count_a + count_b + count_c;
//
//    for (int i = 2; i <= n; ++i) {
//        int new_count_a = total_count;
//        int new_count_b = count_b + count_c;
//        int new_count_c = total_count;
//
//        count_a = new_count_a;
//        count_b = new_count_b;
//        count_c = new_count_c;
//
//        total_count = count_a + count_b + count_c;
//    }
//
//    return total_count;
//}