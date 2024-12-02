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
        if self.head is None:
            return 0
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
        if self.head is None:
            print("list is already empty")
        else:
            self.head = self.head.next

    def deleteFromEnd(self):
        if self.head is None:
            print("list is already empty")

        elif self.head.next is None:
            self.head = None

        else:
            last = self.head
            while last.next is not None:
                prev = last
                last = last.next
            prev.next = None

    def deleteByValue(self,value):
        if self.head == None:
            print("empty")

        elif self.head.data == value:
            self.head = self.head.next

        else:
            last = self.head
            prev = last
            while last is not None:
                if last.data == value:
                    prev.next = last.next
                    return
                prev = last 
                last = last.next 
              
            print("value is not in the list")
                    
    def deleteAtIndex(self,index):
        if self.head is None:
            print("empty")
        elif self.Size() < index:
            print(f"index out of range size: {self.Size()}")
        elif index == 0:
            self.head = self.head.next
        else:
            last = self.head
            prev = last
            count = 0
            while count != index:
                prev = last
                last = last.next
                count += 1
            prev.next=last.next
            last = None
        
    def display(self):
        if self.head == None:
            print("list is empty")
            return
        last = self.head
        while last is not None:
            print(last.data, end= " ")
            last = last.next
        
    def search(self):
        pass

    def IndexOfValue(self,value):
        pass

    def traverse(self):
        pass

llist = LinkedList()

llist.insertAtBeginning(10)
llist.insertAtBeginning(20)
llist.insertAtBeginning(30)
llist.insertAtBeginning(40)
llist.insertAtBeginning(50)
llist.deleteAtIndex(0)



llist.display()