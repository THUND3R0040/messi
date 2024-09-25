    
n = int(input())

ice = input().split()
ice = [int(i) for i in ice]

ice.sort(reverse=False)

rt = [0]*n

j=0
for i in range(1,n,2):
    rt[i] = ice[j]
    j+=1
    
x=0 
for i in range(0,n,2):
    rt[i] = ice[j]
    j+=1


for i in range(1,n-1):
    if(rt[i]<rt[i+1] and rt[i]<rt[i-1]):
        x+=1

print(x)
print(*rt,sep=" ")
    
      




