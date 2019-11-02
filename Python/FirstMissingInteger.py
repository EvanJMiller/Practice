
import random


def findFirstMissingPositiveInteger(list):

    checks = []
    for i in range(0, len(list)):
        checks.append(0)

    for i in range(0, len(list)):
        if(list[i] > 0):
            checks[list[i]-1] = 1

    for i in range(0, len(checks)):
       if(checks[i] != 1):
            return i+1
        
    return -1

if __name__ == "__main__":

    random_numbers = []
    for i in range(0, 100):
        random_numbers.append(random.randrange(-5, 20))

    print(random_numbers, len(random_numbers))
    result = findFirstMissingPositiveInteger(random_numbers)
    print(result)