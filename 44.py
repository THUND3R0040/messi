N = int(input())
key_set = set()
for i in range(N):
    ch = input()
    if ch == "ask":
        print(len(key_set))
    else:
        if ch[0] == "t":
            key_set.add(ch[6:])
        else:
            key_set.discard(ch[3:])