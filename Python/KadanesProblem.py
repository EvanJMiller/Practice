#Given an array arr of N integers.
# Find the contiguous sub-array with maximum sum.

def maxSum(arr):
    max = arr[0]
    sum = 0
    for i in range(0, len(arr)):

        if(sum > 0 and arr[i] < 0 and sum > max):
            max = sum

        elif(sum < 0 and sum > max):
            max = sum
        else:
            sum = sum + arr[i]

if __name__ == "__main__":
    arr = [1, 2, 3, 4, -2, 4, 4, -4, 13, -2]
    maxSum(arr)