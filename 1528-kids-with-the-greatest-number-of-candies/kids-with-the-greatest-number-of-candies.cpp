class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

    //   find the maximum value among candies 
       int maxCandies = * max_element(candies.begin() , candies.end());
        vector<bool>result; //for true or false 

    //   for checking we use for loop
    for( int i =0; i < candies.size(); i++)
    {
        if(candies[i] + extraCandies >= maxCandies){
            result.push_back(true); //for end value to be true
             } else {
                result.push_back(false); //for end value to be false 
             }

        }
    return result;

    }
};