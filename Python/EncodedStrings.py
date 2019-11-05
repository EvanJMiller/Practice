# Problem:
# Given the mapping a = 1, b = 2, ... z = 26, and an encoded message, count the number of ways it can be decoded.
#
# For example, the message '111' would give 3, since it could be decoded as 'aaa', 'ka', and 'ak'.
#
# You can assume that the messages are decodable. For example, '001' is not allowed.


import string
from pprint import pprint as pp

def getNumEncodings():

    encoding = 1
    encodings = {}
    for char in string.ascii_lowercase:
        encodings[str(encoding)] = char
        encoding = encoding + 1

    return encodings

def prependTo(s, arr):

    if(len(arr) == 0):
        return [s]
    for i in range(0, len(arr)):
        arr[i] = s + arr[i]
    return arr


# Approach
# Recursively build possible encodings
# Prepend the encoding with the list of all possible encodings of the substring
def getPossibleEncodings(s):

    possibleEncodings = []
    encodings = getNumEncodings()

    encodings1 = []
    encodings2 = []

    if(s == ''):
        return []

    # If the string has at least one more character
    if(len(s) > 1):
        encodings1 = prependTo(encodings[s[0]], getPossibleEncodings(s[1:]))
    elif(len(s) == 1):
        return [encodings[s]]

    # If the string has at least 2 more characters and is a valid encoding
    if(len(s) >= 2 and int(s[0:2]) <= 26):
        encodings2 = prependTo(encodings[s[0:2]], getPossibleEncodings(s[2:]))
    elif (len(s) == 2 and int(s[0:2]) <= 26):
        return [encodings[s[0:2]]]

    return encodings1 + encodings2


if __name__ == "__main__":

    s = "111"
    results = getPossibleEncodings(s)
    pp(results)

    s = "122514121"
    results = getPossibleEncodings(s)
    pp(results)