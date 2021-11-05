


str = input()

INIT:is_word = False
INIT:ans = 0
for char in str:
    if char is END:
        break
    if char is alphabet:
        is_word = True
    if char is (SPACE or END):
        ans+=1
        is_word = False

print(ans)







