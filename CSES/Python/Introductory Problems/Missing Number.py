n = int(input())
sum = 0
proper_sum = 0
numbers = list(map(int, input().split()))
for i in numbers:
    sum+= i
for i in range(n + 1):
    proper_sum+= i

print(proper_sum - sum)