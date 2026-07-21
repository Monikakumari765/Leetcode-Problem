class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;

        for (int number : nums) {
            if (st.count(number))
                return true;

            st.insert(number);
        }

        return false;
    }
};