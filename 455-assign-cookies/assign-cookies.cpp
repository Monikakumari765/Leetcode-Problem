class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

   //   for soting both the array 
   sort(g.begin(), g.end());
   sort(s.begin(), s.end());

    //  create two pointer 
   //  i represent the current child 
   //  j is representing the current cookies 

   int i =0; 
   int j =0;

  while(i < g.size() && j < s.size()) {
    if(s[j]>=g[i])
    {
        i++;

    }
     j++;
    }
    return i;

  }

};

