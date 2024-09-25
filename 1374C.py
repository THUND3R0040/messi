t = int(input())


for i in range(t):
    n = int(input())
    s = input()
    x=0
    nb=0
    for j in range(n):
        if(s[j]=="("):
            nb+=1
        else:
            nb-=1
        if(nb<0):
            x+=1
            nb=0
    print(x)
            

            
        