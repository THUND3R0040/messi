m = list(map(int,input().split()))
n = m[0]
X = m[1]
res = 0
p = [0]*n
t = [0]*n
c = [""]*n
for i in range(n):
    m = input().split()
    c[i] = m[0]
    p[i] = int(m[1])
    t[i] = int(m[2])
for i in range (n):
    if i==0:
        res += p[0]
        if c == 'R':
            if res < t[0]:
                res += (t[0] - res)
            else:
                if (res // t[0])%2==0:
                    res+=t[0]*((res//t[0])+1)-res
        else:
            if res >= t[0]:
                if (res // t[0])%2==1:
                    res+=t[0]*((res//t[0])+1)-res
    else:
        res += p[i] - p[i-1]
        if c[i] == 'R':
            if res < t[i]:
                res += (t[i] - res)
            else:
                if (res // t[i])%2==0:
                    res+=t[i]*((res//t[i])+1)-res
        else:
            if res >= t[i]:
                if (res // t[i])%2==1:
                    res+=t[i]*((res//t[i])+1)-res
print(res+X-p[n-1])
                