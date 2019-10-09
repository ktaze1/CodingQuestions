class Node:

    # Constructor
    def __init__(self, value):
        self.value = value
        self.right = None
        self.left = None
    
def leftViewBTUtil(root, level, maxLevel):

    if root is None:
        return

    if maxLevel[0] < level:
        print("% d \t" %(root.value))
        maxLevel[0] = level
    
    leftViewBTUtil(root.left, level + 1, maxLevel)
    leftViewBTUtil(root.right, level + 1, maxLevel)

def leftView(root):
    maxLevel = [0]
    leftViewBTUtil(root, 1, maxLevel)


root = Node(12) 
root.left = Node(10) 
root.right = Node(20) 
root.right.left = Node(25) 
root.right.right = Node(40) 
  
leftView(root) 
