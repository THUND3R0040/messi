us = "abcdefgh"
while(int(input())):
    s = input()
    x = s[0]
    y = s[1]
    for i in range(1,15):
        ch = x + str(i)
        if(str(i)==y):
            continue
        print(ch)
    
    for c in ("abcdefgh"):
        ch = c+y
        if(c == x):
            continue
        print(ch)