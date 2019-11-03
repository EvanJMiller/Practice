
# Given an array of strings, group anagrams together.
#
# Example:
#
# Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
# Output:
# [
#   ["ate","eat","tea"],
#   ["nat","tan"],
#   ["bat"]
# ]

def isAnagram(word1, word2):

    # First implementation without using sort:
    # for char in word1:
    #     idx = word2.find(char)
    #     if(idx == -1):
    #         return False
    #     word2 = word2[:idx] + word2[idx+1:]
    #
    # if(word2 == ""):
    #     return True
    # else:
    #     return False

    # # Second implementation using dictionaries / hashes
    # wordDict1 = {}
    # wordDict2 = {}
    #
    # # Create a dictionary for the frequency of each letter
    # for char in word1:
    #     if(char in wordDict1):
    #         wordDict1[char] = wordDict1[char] + 1
    #     else:
    #         wordDict1[char] = 1
    # # Create a second dictionary while also checking the first dictionary
    # for char in word2:
    #     if(char not in wordDict1):
    #         return False
    #     if(char in wordDict2):
    #         wordDict2[char] = wordDict2[char] + 1
    #     else:
    #         wordDict2[char] = 1
    #
    # # Compare letter counts
    # for letter in wordDict1.keys():
    #     if(wordDict1[letter] != wordDict2[letter]):
    #         return False
    # # Compare key counts
    # if(len(wordDict1.keys()) == len(wordDict2.keys())):
    #     return True

    # Third implementation using built in sorting
    return sorted(word1) == sorted(word2)


def findAnagrams(words):

    anagrams = []

    base = words[0]
    matches = []

    while(len(words)>0):
        base = words[0]
        matches = []
        matches.append(base)
        for word in words[1:]:
            print(word, base, isAnagram(word, base))
            if(isAnagram(word, base)):
                matches.append(word)
                words.remove(word)
        words = words[1:]
        anagrams.append(matches)

    print(anagrams)

    return anagrams

if __name__ == "__main__":

    words = ["tea", "ate", "bat", "tan", "nat", "eat", "ant"]

    print(isAnagram("tea", "ate"))

    findAnagrams(words)

    #matches = findAnagrams(words)