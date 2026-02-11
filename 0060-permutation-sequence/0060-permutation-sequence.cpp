class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> numbers;
        int fact = 1;

        for (int i = 1; i < n; i++)
            fact *= i;

        for (int i = 1; i <= n; i++)
            numbers.push_back(i);

        k--;
        string ans = "";

        while (true) {
            ans += to_string(numbers[k / fact]);
            numbers.erase(numbers.begin() + k / fact);

            if (numbers.empty())
                break;

            k = k % fact;
            fact = fact / numbers.size();
        }

        return ans;
    }
};
