# AMCAT 23280666855807

def validatePart(part):
    print(part, part >= 1, part <= 10**6)
    return part >= 1 and part <= 10 ** 6


def minimumTime(numOfParts, parts):
    # Check that the number of parts matches the length of the list
    if (numOfParts != len(parts)):
        return None

    # Constrain on numOfParts
    if (numOfParts < 2 or numOfParts > 10 ** 6):
        return 0

    # Minimize Time by combining smaller parts first
    # First step is to minimize the parts
    parts.sort()
    total_time = 0  # Running total time

    # Check to see if the list only contains one element
    if (len(parts) == 1 and validatePart(parts[0])):
        return 0

    # Check to see if the list containts two elements
    if (len(parts) == 2 and validatePart(parts[0]) and validatePart(parts[1])):
        return parts[0] + parts[1]
    # Loop through the list combining the smallest parts
    while (len(parts) > 1):
        # Check parts for constraints
        if (not validatePart(parts[0]) or not validatePart(parts[1])):
            return 0
        total_time = total_time + parts[0] + parts[1]
        parts[1] = parts[0] + parts[1]
        parts = parts[1:]
    return total_time

if __name__ == "__main__":
    print("Hello World")
    #minimumTime(4, [8, 4, 6, 12])
    print(minimumTime(6, [1, 2, 5, 10, 35, 89]))


