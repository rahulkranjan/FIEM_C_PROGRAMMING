def maxWater(lst,n):
    total_water = 0

    for i in range(0,n-1):

        left = lst[i]
        for j in range(i):
            left = max(left,lst[j])

        right = lst[i]
        for j in range(i+1,n):
            right = max(right, lst[j])

        total_water = total_water + (min(left,right)-lst[i])

    return total_water            


if __name__ == '__main__':
    lst = [3,0,2,0,5]
    # lst = []
    # x = int(input("Enter the number of elements:"))

    # for i in range(x):
    #     y = input("Enter the element :")
    #     lst.append(y)

    n = len(lst)


    print(maxWater(lst,n))


    