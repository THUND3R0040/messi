t = int(input())
rt = ""
testUp = 0
testLow = 0
while(t):
    rt=[]
    testUp = 0
    testLow = 0
    s=input()
    for i in range(len(s)-1,-1,-1):
        
        if(s[i]=='b'):
            testLow +=1 
        elif(s[i]=='B'):
            testUp += 1
        elif(s[i].isupper() and testUp ):
            testUp -= 1
        elif(s[i].islower() and testLow):
            testLow -= 1
        else:
            rt.append(s[i])

    print(*rt[::-1],sep="")


    t-=1