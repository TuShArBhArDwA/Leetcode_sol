class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.length();
        vector<int> index_pairs(n, 0);
        deque<int> stack_start_ind;

        for (int char_ind = 0; char_ind < n; ++char_ind) {
            char char_s = s[char_ind];
            if (char_s == '(') {
                stack_start_ind.push_back(char_ind);
            } else if (char_s == ')') {
                int start_ind = stack_start_ind.back();
                stack_start_ind.pop_back();
                index_pairs[char_ind] = start_ind;
                index_pairs[start_ind] = char_ind;
            }
        }

        string res;
        int cur_ind = 0;
        int cur_dir = 1;

        while (cur_ind < n) {
            char char_s = s[cur_ind];
            if (char_s == '(' || char_s == ')') {
                cur_ind = index_pairs[cur_ind];
                cur_dir *= -1;
            } else {
                res.push_back(char_s);
            }
            cur_ind += cur_dir;
        }

        return res;
    }
};