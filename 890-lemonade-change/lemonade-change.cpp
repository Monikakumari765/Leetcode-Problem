class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        //  two variables 
        int five = 0;
        int ten = 0;

        for(int bill : bills) 
        {
            //  if the  customer give $5 
            if(bill == 5) 
            {
            five++;
            }

            //  if customer give $10
            else if (bill == 10)
            {
                // need $5 to give
                if(five == 0){
                    return false;
                }
                    five--;
                    ten++;

                }
                // if customer give 20 
                else{
                    //  we firstly prefer $5 ,$5, $5 or $5 ,$10
                    if(ten > 0 && five > 0)
                    {
                        five--;
                        ten--;
                    }
                    // this is for $5,$5,$5
                    else if (five >= 3)
                    {
                        five = five - 3;
                    }
                    // otherwise we can't give $15 change 
                    else {
                        return false;
                    }
                } 

            }
              return true;
        }
    };
