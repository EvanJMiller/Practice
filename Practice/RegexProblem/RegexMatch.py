
# Iterative approach where the patten is acting like a consumer of the string
# Poisitons in the string, pattern advance as long as the pattern holds
# Check at the end to see if it's at the end of both the string and the pattern
# Otherwise the pattern doesn't match the string exactly
def isMatch(s, p):
    i = 0
    j = 0
    isValid = True
    while(isValid and i < len(s) and j < len(p)):
        if (s[i] == p[j]):
            j = j + 1
            i = i + 1
        elif (i > 0 and p[j-1] == s[i] and p[j] == "*"):
            i = i + 1
        elif (i > 0 and p[j - 1] != s[i] and p[j] == "*"):
            j = j + 1
        elif (i > 0 and p[j] == "."):
            j = j + 1
            i = i + 1
        else:
            isValid = False

    return i == len(s) and j == len(p)

if __name__ == "__main__":
    s = "aword"
    p = "aword"
    print(isMatch(s, p))
    s = "soooomething"
    p = "so*mething"
    print(isMatch(s, p))
    s = "soooomethingelse"
    p = "so*m.t.i.gelse"
    print(isMatch(s, p))
    s = "notamatch"
    p = "nota.....a"
    print(isMatch(s, p))