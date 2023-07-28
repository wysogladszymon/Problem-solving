def f(x:int, y:int):
    a = x+y
    if a % 3 != 0:
        print("NO")
    else:
        sum = int((x+y) // 3) 
        n = int(y - sum) 
        k = int(x - sum)
        if 2 * n + k == y and 2 * k + n == x and k >= 0 and n >=0 :
            print("YES")
        else: 
            print("NO")


n = int(input())
inputs = []
for i in range(n):
    inputs.append(input())

for i in range(n):
    x, y = map(int,inputs[i].split())
    f(x,y)