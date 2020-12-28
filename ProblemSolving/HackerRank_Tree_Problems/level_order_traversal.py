def levelOrder(root):
    #Write your code here
    queue = []
    queue.append(root)
    while len(queue):
        root = queue.pop(0)
        print(root.info,end=" ")
        if root.left:
            queue.append(root.left)
        if root.right:
            queue.append(root.right)
