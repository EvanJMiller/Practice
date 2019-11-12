import random
from math import pow

def estimatePi(samples):

    # circle equation : x^2 + y^2 = r
    # plot 10,000 points x {0, 1}, y{0, 1}
    # if x, y within radius
    #   sum += 1
    # divide sum by sample size by 4

    sum = 0
    for i in range(0, samples):
        x = random.random()
        y = random.random()
        if((pow(x, 2) + pow(y, 2)) < 1):
            sum += 1
    return round(4* (sum/samples), 3)


if __name__ == "__main__":

    pi = estimatePi(100000)
    print(pi)





