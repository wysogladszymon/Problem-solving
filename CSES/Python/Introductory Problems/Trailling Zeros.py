def f(n : int) -> int:
    i = int(5)
    ans = int(0)
    while i <= n:
        ans += n //i
        i*=5
    return ans
n = int(input())
print(int(f(n)))
    