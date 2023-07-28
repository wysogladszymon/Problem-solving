n = int(input())
X = list(map(int, input().split()))
ans = 0
for i in range(1, n):
    if X[i - 1] > X[i] :
        ans+= X[i - 1] - X[i]
        X[i] = X[i-1]
print(ans)  

         