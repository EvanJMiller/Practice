# The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this:
# (you may want to display this pattern in a fixed font for better legibility)
#
# P   A   H   N
# A P L S I I G
# Y   I   R

from pprint import pprint as pp

def convertToZigZag(string, numrows):
    mat = []
    for i in range(0, numrows):
        mat.append([])
        for j in range(0, int(len(string)/(numrows) * 2)):
            mat[i].append(0)

    row = 0
    col = 0
    dir = 0
    pp(mat)
    for i in range(0, len(string)):
        mat[row][col] = string[i]

        if(dir == 0):
            if(row == numrows-1):
                row = row - 1
                col = col + 1
                dir = 1
            else:
                row = row + 1
        elif(dir == 1):
            if(row == 0):
                dir = 0
                row = row + 1
            else:
                row = row - 1
                col = col + 1

    for i in range(0, numrows):
        printRow(mat[i])


def printRow(row):
    s = ""
    for char in row:
        if(char == 0):
            s += "  "
        else:
            s += char + " "
    print(s)

def convertFromZigZag(string, numrows):
    pass

if __name__ == "__main__":

    string = "PAYPALISHIRING"
    numrows = 4

    convertToZigZag(string, numrows)