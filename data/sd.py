num = int(input("Enter the Elements"))
lst_1 = []
for i in range(num):
    lst_1.append(int(input()))

lst_2 = {}

for i in lst_1:
    if i in lst_2:
        lst_2[i] += 1
    else:
        list_2[i] = 1

lst_3 = []
for key, value in lst_2.items():
    lst_3.append((key, value))

print(lst_3)
