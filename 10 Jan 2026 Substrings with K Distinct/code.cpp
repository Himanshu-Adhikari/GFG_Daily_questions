class Solution {
public:
    int n;
    vector<int> aux;

    int rec(string &nums, int k) {
        aux = vector<int>(26, 0);
        int res = 0, sz = 0;
        for (int i = 0, j = 0; i < n; i++) {
            if (aux[nums[i] - 'a'] == 0) sz++;
            aux[nums[i] - 'a']++;
            while (sz > k) {
                aux[nums[j] - 'a']--;
                if (aux[nums[j] - 'a'] == 0) sz--;
                j++;
            }
            res += (i - j + 1);
        }
        return res;
    }

    int countSubstr(string &s, int k) {
        n = s.size();
        return rec(s, k) - rec(s, k - 1);
    }
};
