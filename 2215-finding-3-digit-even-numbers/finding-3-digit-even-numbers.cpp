class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
          vector<int> ans;
          int number;

        // we use three nested loop 
        for(int i =0; i < digits.size(); i++){
           if(digits[i]==0)
           continue;
           //first element 0 nhi ho sakta isliye continue 

           //second loop for reapeat
           for(int j = 0; j < digits.size(); j++){
           if(j == i ) //same position ko dubara repeat nhi karna h 
           continue;
           
           //third loop for 
           for(int k =0; k < digits.size(); k++){
           if(k == i || k == j) // or gate 
           continue;

           if(digits[k] % 2 != 0)
           continue;
               //last digit not to be odd
           
           int number  = digits[i] * 100 + digits[j] * 10 + digits[k];
           ans.push_back(number);
           }
        }
    }

   sort(ans.begin(), ans.end()); // for ascending order
   ans.erase(unique(ans.begin(), ans.end()),ans.end()); // dublicate hatane ke liye 

  return ans;
}
};