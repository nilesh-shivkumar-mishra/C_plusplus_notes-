def fibonacci(n):
    a, b = 0, 1
    result = [a]
    for i in range(1, n):
        a, b = b, a + b
        if a <= n:
            result.append(a)
    return result

n = int(input("Enter a number: "))
print(fibonacci(n))
