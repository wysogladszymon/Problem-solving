n = int(input())
inputs = []
for i in range(n):
    inputs.append(input())

for i in range(n):
    y, x = map(int, inputs[i].split())
    if y > x:
        if y % 2 == 0:
            print(y*y -x +1)
            continue
        else:
            print((y-1)*(y-1) + x)
            continue
    else:
        if x % 2 == 0:
            print((x-1) * (x-1) + y)
            continue
        else:
            print(x* x + 1 - y) 

