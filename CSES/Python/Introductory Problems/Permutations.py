n = int(input())
list1 = []
list2 = []
if n ==1:
    print(1)
elif n  < 4:
    print ("NO SOLUTION")
else : 
    for x in range(1, n+1):
        if x % 2 == 0:
            list1.append(x)
        else:
            list2.append(x)

    list1.extend(list2)
    print(*list1)