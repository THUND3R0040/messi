l = list(map(int, input().split()))
n = l[0]
a = l[1]
b = l[2]
c = l[3]
s = 0
for i in range(n+1):
    for j in range(n+1):
        k = (n - a*i - b*j) / c
        if k >= 0 and k == int(k):
            s = max(s, i+j+int(k))
print(s)