import sys

n = int(sys.stdin.readline().strip())

A = []
B = []
sa = 0
for _ in range(n):
    b = list(map(int, sys.stdin.readline().split()))
    A.append(b[0])
    sa += b[0]
    B.append(b[1])





B.sort(reverse=True)
sb=0

RT  = ["A"]*n



for i in range(n):
     if(abs(sa-sb)<=500):
          break
     else:
          RT[i] = "G"
          sb+=B[i]
          sa=sa-(1000-B[i])


print(*RT,sep="")





     