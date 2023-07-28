CONST_MOD = int(1e9 +7)
def f(n:int)->int:
    i = int(0)
    ans = int(1)
    while i < n:
        ans = (ans * 2) % CONST_MOD
        i +=1
    return ans % CONST_MOD

n = int(input())
print(f(n))