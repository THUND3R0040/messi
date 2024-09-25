t=int(input())
while t>0:
    n=int(input())
    s=input()
    count={}
    for i in range(n):
        count[s[i]]=count.get(s[i],0)+1
    l,r=0,n-1
    secret = 0
    while l<r:
        length=r-l+1
        if length%2==0:
            if sorted(s[l:l+length//2]) == sorted(s[l+length//2:r+1]):
                secret+=1
                l+=1
                r-=1
            else:
                if count[s[l]]>count[s[r]]:
                    r-=1
                else:
                    l+=1
        else:
            if count[s[l]]>count[s[r]]:
                r-=1
            else:
                l+=1
    print(secret)
    t-=1