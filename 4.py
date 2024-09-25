x = list(map(int,input().split()))
n = x[0]
q = x[1]
tab = [0]*n
for i in range(q):
    m = list(map(int,input().split()))
    if(len(m)==3):
        l = m[1]
        r = m[2]
        s=0
        for j in range(l-1,r):
            s+=tab[j]
        print(s) 
    else:
        l = m[1]
        r = m[2]
        p = m[3]
        k = m[4]
        v = m[5]
        
        for j in range(l-1,r):
            if((j+1)%p==k):
                c = j
                break
        for j in range(c,r,p):
            tab[j] += v
                
