word = str(input())
counter = 0
ans = 0
a = word[0]
for sign in word:
    if sign == a :
        counter +=1
    else : 
        counter = 1
    a = sign
    ans = max(ans,counter)
print(ans) 