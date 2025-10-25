#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "请输入 n 的值: ";
    std::cin >> n;

    double maxValue = 0;

    for (int l = 0; l <= n / 3; ++l) {
        int e = (n - 3 * l) / 2;
        if (3 * l + 2 * e == n) {
            double currentValue = std::pow(3, l) + std::pow(2, e);
            if (currentValue > maxValue) {
                maxValue = currentValue;
            }
        }
    }

    std::cout << "满足条件的 pow(3, l) + pow(2, e) 的最大值是: " << maxValue << std::endl;

    return 0;
}

