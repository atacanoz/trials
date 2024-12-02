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

    def Size(self):
        size = 0    
        last = self.head
        while last.next is not None:
            last = last.next
            size += 1
        return size
        

    def insertAtIndex(self, new_data, index):
        new_node = Node(new_data)
        last = self.head
        beforelast = last
        count = 0
        if index > self.Size():
            print("index out of range")
            return
        if index == 0:
            new_node.next = last
            self.head = new_node
            return
        
        while count != index:
            beforelast = last
            last = last.next
            count += 1

        new_node.next = last
        beforelast.next = new_node            


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
        last = self.head
        while last.next is not None:
            print(last.data, end= " ")
            last = last.next
        print(last.data)
        

    def search(self):
        pass

    def IndexOfValue(self):
        pass

    

llist = LinkedList()

llist.insertAtBeginning(10)
llist.insertAtBeginning(20)
llist.insertAtBeginning(30)
llist.insertAtBeginning(40)
llist.insertAtBeginning(50)
llist.insertAtEnd(60)
llist.insertAtEnd(31)
llist.insertAtIndex(15,0)
llist.insertAtIndex(98,-1)
llist.display()