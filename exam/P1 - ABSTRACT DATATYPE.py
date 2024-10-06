#code A1 
'''from sys import maxsize 

# Function to create a stack. It initializes size of stack as 0
def createStack():
    stack = []
    return stack

# Stack is empty when stack size is 0
def isEmpty(stack):
    return len(stack) == 0

# Function to add an item to stack. It increases size by 1
def push(stack, item):
    stack.append(item)
    print(item + " pushed to stack ")

# Function to remove an item from stack. It decreases size by 1
def pop(stack):
    if (isEmpty(stack)):
        return str(-maxsize -1) # return minus infinite
    return stack.pop()

# Function to return the top from stack without removing it
def peek(stack):
    if (isEmpty(stack)):
        return str(-maxsize -1) # return minus infinite
    return stack[len(stack) - 1]

stack = createStack()
push(stack, str(10))
push(stack, str(20))
push(stack, str(30))
print(pop(stack) + " popped from stack")'''

#code 1A1
'''# Python program to demonstrate stack implementation using list

# Create an empty stack
stack = []

# append() function to push elements into the stack
stack.append('a')
stack.append('b')
stack.append('c')

print('Initial stack:')
print(stack)

# pop() function to pop elements from stack in LIFO order
print('\nElements popped from stack:')
print(stack.pop())  # pops 'c'
print(stack.pop())  # pops 'b'
print(stack.pop())  # pops 'a'

print('\nStack after elements are popped:')
print(stack)  # prints an empty stack'''

#code 1A4
'''class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class Stack:
    # Initializing a stack.
    # Use a dummy node, which is
    # easier for handling edge cases.
    def __init__(self):
        self.head = Node("head")
        self.size = 0

    # String representation of the stack
    def __str__(self):
        cur = self.head.next
        out = ""
        while cur:
            out += str(cur.value) + "->"
            cur = cur.next
        return out[:-3]

    # Get the current size of the stack
    def getSize(self):
        return self.size

    # Check if the stack is empty
    def isEmpty(self):
        return self.size == 0

    # Get the top item of the stack
    def peek(self):
        # Sanitary check to see if we
        # are peeking an empty stack.
        if self.isEmpty():
            raise Exception("Peeking from an empty stack")
        return self.head.next.value

    # Push a value into the stack.
    def push(self, value):
        node = Node(value)
        node.next = self.head.next
        self.head.next = node
        self.size += 1

    # Remove a value from the stack and return.
    def pop(self):
        if self.isEmpty():
            raise Exception("Popping from an empty stack")
        remove = self.head.next
        self.head.next = self.head.next.next
        self.size -= 1
        return remove.value

# Driver Code
if __name__ == "__main__":
    stack = Stack()
    for i in range(1, 11):
        stack.push(i)
    print(f"Stack: {stack}")
    for _ in range(1, 6):
        remove = stack.pop()
        print(f"Pop: {remove}")
        print(f"Stack: {stack}")'''
#code 1B
'''# Python program to demonstrate queue implementation using list

# Initializing a queue
queue = []

# Adding elements to the queue
queue.append('a')
queue.append('b')
queue.append('c')

print("Initial queue:")
print(queue)

# Removing elements from the queue
print("\nElements dequeued from queue:")
print(queue.pop(0))  # dequeues 'a'
print(queue.pop(0))  # dequeues 'b'
print(queue.pop(0))  # dequeues 'c'

print("\nQueue after removing elements:")
print(queue)  # prints an empty queue'''
#code 1C
# Declaring a list with integer and string elements
my_list = [10, 20, 30, "New Delhi", "Mumbai"]

# Printing list
print("List elements are: ", my_list)

# Adding elements
my_list.append(40)
my_list.append(50)
my_list.append("Chennai")

# Printing list after adding elements
print("List elements: ", my_list)

# Removing elements
my_list.pop()  # removes "Chennai"
# Printing list
print("List elements: ", my_list)

# Removing elements
my_list.pop()  # removes 50
# Printing list
print("List elements: ", my_list)
