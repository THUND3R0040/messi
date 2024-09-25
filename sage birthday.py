n = int(input())

ice = input().split()
ice = [int(i) for i in ice]

ice.sort()



for i in range(1,n,2):
    ice[i], ice[i-1] = ice[i-1], ice[i]
    

print((n//2)-1 if n%2==0 else (n//2))
print(" ".join([str(x) for x in ice]))