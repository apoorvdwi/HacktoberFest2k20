class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class SingledLinkedList:
    def __init__(self):
        self.head = None
        self.tail = None
        return

    def insert(self, item):
        # Add an item at the end of the list
        if not isinstance(item, Node):
            item = Node(item)
        
        if self.head is None:
            self.head = item
        else:
            self.tail.next = item
        
        self.tail = item
        return

    def display(self):
        current_node = self.head
        
        while current_node:
            yield current_node.data
            current_node = current_node.next

    def unordered_search(self, value):
        # Search the linked list for the node that has this value.
        
        current_node = self.head
        
        node_id = 1
        
        while current_node:
            if current_node.data == value:
                yield node_id
            node_id += 1
            current_node = current_node.next

    def get_item_by_id(self, item_id):
        current_id = 1
        current_node = self.head
        
        while current_node:
            if item_id == current_id:
                return current_node.data
            current_id += 1
            current_node = current_node.next

    def remove_list_item_by_id(self, item_id):
        # Remove the list item with the item id.
        
        current_id = 1
        current_node = self.head
        previous_node = None
        
        while current_node:
            if current_id == item_id:
                # if this is the first node (head)
                if previous_node is not None:
                    previous_node.next = current_node.next
                else:
                    self.head = current_node.next
                    # we don't have to look any further
                    return

            # needed for the next iteration
            previous_node = current_node
            current_node = current_node.next
            current_id = current_id + 1
        
        return
