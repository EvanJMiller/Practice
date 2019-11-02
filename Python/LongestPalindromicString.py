
def longestPalindromicString(s):

    #Keep track of the longest_palindrome palindrom substr
    longest_palindrome = "";
    for i in range(1, len(s)):
        substr = "";
        isValid = True;
        j = 1
        #While the current sub string is valid and is contained within the string
        while (isValid and i - j > 0 and i + j < len(s)):
            isValid = s[i-j] == s[i+j]; # Grow the substr as long as its still a value palindrome
            substr = s[i-j:i + j+1]; # Use j as a pivot around s[i]
            if isValid and len(substr) > len(longest_palindrome):
                longest_palindrome = substr
            j = j + 1
    return longest_palindrome;

if __name__ == "__main__":
    s = "a1232b"
    pal = longestPalindromicString(s)
    print(pal)