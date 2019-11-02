

def optimalUtilization(maxTravelDist, forwardRouteList, returnRouteList):

    # currentMaxRoute = route 1 ID, route 2 ID, combined distance of routes
    currentMaxRoute = [0, 0, 0]

    # List of routes that match the travel distance exactly
    optimalRoutes = []

    # Check to see if the route lists are populated, if not
    # return a list containing an empty set
    if(len(forwardRoutes) == 0 or len(returnRoutes) == 0):
        return [[]]

    # Iterate over the forward routes
    for fr in forwardRouteList:
        for rr in returnRouteList:
            routeDistance = fr[1] + rr[1]
            if routeDistance == maxTravelDist:
                optimalRoutes.append([fr[0], rr[0]])
            elif routeDistance < maxTravelDist and routeDistance > currentMaxRoute[2]:
                currentMaxRoute = [fr[0], rr[0], routeDistance]


    # If no routes were possible, return a list with an empty set
    if (len(optimalRoutes) == 0 and currentMaxRoute[2] == 0):
        return [[]]
    # If no optimal routes were found, return the closest match
    if(len(optimalRoutes) == 0):
        #print(currentMaxRoute)
        return [currentMaxRoute[0], currentMaxRoute[1]]
    else:
        #Otherwise return the set of
        return optimalRoutes

if __name__ == "__main__":
    maxTravelDist = 20
    forwardRoutes = [[1, 8], [2, 7], [3, 14]]
    returnRoutes = [[1, 5], [2, 10], [3, 14]]

    print(optimalUtilization(maxTravelDist, forwardRoutes, returnRoutes))

    maxTravelDist = 20
    forwardRoutes = [[1, 8], [2, 15], [3, 9]]
    returnRoutes = [[1, 8], [2, 11], [3, 12]]

    print(optimalUtilization(maxTravelDist, forwardRoutes, returnRoutes))

    maxTravelDist = 10
    forwardRoutes = [[1, 3], [2, 5], [3, 7], [4, 10]]
    returnRoutes = [[1, 20], [2, 30], [3, 40], [4, 50]]

    print(optimalUtilization(maxTravelDist, forwardRoutes, returnRoutes))