class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None 

    def insertAtBeginning(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head 
        self.head = new_node  # head points to the new node 

    def insertAtEnd(self, new_data):
        new_node = Node(new_data)
        
        if self.head is None:
            self.head = new_node
            return
        
        last = self.head
        
        while last.next is not None:
            last = last.next

        last.next = new_node
        

    def insertAtIndex(self):
        pass

    def deleteFromBeginning(self):
        pass

    def deleteFromEnd(self):
        pass

    def deleteByValue(self):
        pass

    def deleteAtIndex(self):
        pass

    def traverse(self):
        pass

    def display(self):
        pass

    def search(self):
        pass

    def IndexOfValue(self):
        pass

    

