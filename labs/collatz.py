c = 2**68
def odd(k):
    l = (k * 3)  + 1
    return l
def even(k):
    l = k/2
    return l
while(True):
    print(f"\n§§§§§§§§§§§§§§§§§§§§§first: {c}")
    a = c
    while(True):
        if a%2 == 0:
            a = even(a)
            print(f"Second: {a}")
        else:
            a = odd(a)
            print(f"third: {a}")
        if a == 1:
            print("Proved")
            break
    c+=1

    
    