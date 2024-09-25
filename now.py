

for _ in range(int(input())):
    n,k = map(int,input().split())
    if(n==1):
        print("YES")
        continue
    strongest = n*n
    alien = k
    if(alien<strongest):
        print("NO")
    else:   
        print("YES")