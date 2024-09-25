
t = int(input())







for i in range(t):
    n = int(input())
    ans=0
    el = list(map(int, input().split()))
    for i in range(n-1):
        if(el[i]-el[i+1]>0):
            diff = el[i]-el[i+1]
            el[i+1] = el[i+1]+diff
            bin1 = bin(diff)
            len = bin1[2:].__len__()
            ans = max(ans,len)
    
    print(ans)

    
            

    
    