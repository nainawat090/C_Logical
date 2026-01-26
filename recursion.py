def table(a):
    print(a)
    if a==50:
        return 0
    return table(a+5)
print(table(5))