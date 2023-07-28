def f(n:int):
    list1 = []
    list2=[]
    if(n % 4 == 1 or n % 4 == 2):
        print("NO")
        return
    elif n % 4 ==0:
        list1 = [x for x in range(1,n+1) if x%4 == 1 or x%4 == 0]
        list2 = [x for x in range(1,n+1) if x%4 == 2 or x%4 == 3]
    elif n % 4 ==3 : 
        list1 = [x for x in range(4,n + 1) if x % 4 == 0 or x % 4 == 3]
        list2 = [x for x in range(4,n + 1) if x % 4 == 1 or x % 4 == 2]
        list1.extend([1,2])
        list2.append(3)
    
    print( f"YES \n{len(list1)} \n",*list1, f"\n{len(list2)}\n", *list2)

n = int(input())
f(n)
