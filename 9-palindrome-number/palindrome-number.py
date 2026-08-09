class Solution:
    def isPalindrome(self, x: int) -> bool:

        # Convert number into string
        s = str(x)


        # Reverse the string and compare
        return s == s[::-1]