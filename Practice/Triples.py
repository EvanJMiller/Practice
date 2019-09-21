#Given an array of distinct integers.
# The task is to count all the triplets such that sum of two elements equals the third element.

def findTriplets(a):
    triples = set([])
    singles = {}
    doubles = {}
    triples = {}

    # Brute Force O(n^3)
    for i in range(0, len(a)-1):
        for j in range(0, len(a) - 1):
            for k in range(0, len(a) - 1):
                if(a[i] + a[j] == a[k] and i!=j and j!=k and i!=k):
                    triples.add(a[i], a[j], a[k])

    print(triples)

if __name__ == "__main__":
    a = [1, 3, 4, 5, 6, 2]
    findTriplets(a)