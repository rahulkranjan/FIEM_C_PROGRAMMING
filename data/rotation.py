def rotation(lst, n):
    lst2 = []

    for item in range(len(lst) - n, len(lst)):
        lst2.append(lst[item])

    for item in range(0, len(lst) - n):
        lst2.append(lst[item])

    return lst2


r_num = int(input("Enter the number of rotation: "))
lst1 = [1, 2, 3, 4, 5, 6]

print(rotation(lst1, r_num))
