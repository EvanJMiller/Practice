
# Problem: Given a string you need to print longest possible substring that has exactly M unique characters.
# If there are more than one substring of longest possible length, then print any one of them.

def findSubstringsWithDistinctChars(k, str):
    matches = []
    distinct_chars = []
    substr = ""

    for i in range(0, len(str)):

        substr = str[i]
        distinct_chars = [str[i]]
        match = True
        j = i + 1
        while(match and j < len(str)):

            if(len(distinct_chars) == 0):
                distinct_chars.append(str[j])

            elif(str[j] in distinct_chars):
                substr += str[j]

            elif(len(distinct_chars) < k):
                distinct_chars.append(str[j])
                substr += str[j]
            else:
                match = False
                distinct_chars = []

            j = j + 1

            if(len(distinct_chars) == k):
                matches.append(substr)


    return matches

if __name__ == "__main__":

    results = findSubstringsWithDistinctChars(3, "aabbcc")
    print(results)