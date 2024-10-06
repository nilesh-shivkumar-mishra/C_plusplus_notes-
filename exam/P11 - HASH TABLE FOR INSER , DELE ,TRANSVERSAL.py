# Python program to demonstrate working of HashTable 
hashTable = [[] for _ in range(10)]

def checkPrime(n):
    if n == 1 or n == 0:
        return 0
    for i in range(2, n//2):
        if n % i == 0:
            return 0
    return 1

def getPrime(n):
    if n % 2 == 0:
        n = n + 1
    while not checkPrime(n):
        n += 2
    return n

def hashFunction(key):
    capacity = getPrime(10)
    return key % capacity

def insertData(key, data):
    index = hashFunction(key)
    if hashTable[index] and hashTable[index][0] == key:
        hashTable[index] = [key, data]
    else:
        while hashTable[index] and hashTable[index][0] != key:
            index = (index + 1) % capacity
        hashTable[index] = [key, data]

def removeData(key):
    index = hashFunction(key)
    if hashTable[index] and hashTable[index][0] == key:
        hashTable[index] = None
    else:
        while hashTable[index] and hashTable[index][0] != key:
            index = (index + 1) % capacity
        if hashTable[index]:
            hashTable[index] = None

insertData(123, "apple")
insertData(432, "mango")
insertData(213, "banana")
insertData(654, "guava")
print(hashTable)
removeData(123)
print(hashTable)
