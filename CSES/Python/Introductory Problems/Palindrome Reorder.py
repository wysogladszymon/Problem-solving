def f(n : str) -> str:
    list1 = [0] * 26
    
    for c in n:
        list1[ord(c) - ord('A')] +=1
    unod = int(0)
    for i in list1:
        if i % 2 != 0:
            unod +=1
        if unod > 1 :
            return "NO SOLUTION"
    sign = ''
    ans = ""
    for i , j in enumerate(list1):
        if j % 2 != 0:
            sign = chr(ord('A')+i)
        ans += (j //2) * chr(ord('A')+i)
    if sign != '':
        ans+= sign
    list1.reverse()
    for i , j in enumerate(list1):
        ans+= (j //2) * chr(ord('Z') - i)
    return ans

n = str(input())
print(f(n))