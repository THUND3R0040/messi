t = int(input())

for i in range(t):
    n,k = map(int,input().split())  
    s=k
    if(k%n==0):
        print(k//n)
    elif(k<n):
        print(1 if n%k==0 else 2)
    else:
        print((k//n)+1)
        
    