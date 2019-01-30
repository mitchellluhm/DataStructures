package SinglyLinkedList;

public class SLinkedList implements SinglyLinkedList {
	
	public SNode head;
	
	public SNode tail;
	
	private int size;
	
	public SLinkedList() {}
	
	public SLinkedList(int data) {
		SNode node = new SNode(data);
		this.head = node;
		this.tail = node;
		this.size = 1;
	}
	
	public SLinkedList(SNode node) {
		this.head = node;
		this.tail = node;
		this.size = 1;
	}

	@Override
	public void printList() {
		SNode temp = this.head;
		int pos = 0;
		
		while (temp != null) {
			System.out.println(pos + " | " + temp.getData()); 
			pos++;
			temp = temp.getNext();
		}
		
	}
	
	public int getSize() {
		return this.size;
	}

	@Override
	public int getLength() {
		SNode temp = this.head;
		int pos = 0;
		
		while (temp != null) {
			pos++;
			temp = temp.getNext();
		}

		return pos;
	}

	@Override
	public boolean remove(int pos) {
		SNode temp = this.head;
		
		if (pos == 0) {
			// removing first node
			this.head = temp.getNext();
			this.size--;
			return true;
		}

		int i = 0;
		
		while (temp != null) {
			if (i == pos - 1) {
				// temp is right before to be removed node

				if (pos == this.getSize() - 1) {
					// update tail
					this.tail = temp;
					temp.setNext(null);
				} else {
					// do not update tail
					SNode removed_next = temp.getNext().getNext();
					temp.setNext(removed_next);
				}

				this.size--;
				return true;
			}
			i++;
			temp = temp.getNext();
		}

		return false;
	}

	@Override
	public boolean replace(int pos, SNode node) {
		SNode temp = this.head;
		
		if (pos == 0) {
			node.setNext(temp.getNext());
			this.head = node;
			
			return true;
		}

		int i = 0;
		
		while (temp != null) {
			if (i == pos - 1) {
				
				if (pos == this.getSize() - 1) {
					this.tail = node;
				} else {
					node.setNext(temp.getNext().getNext());
				}
				temp.setNext(node);

				return true;
			}
			temp = temp.getNext();
			i++;
		}
		return false;
	}

	@Override
	public void append(SNode node) {
		SNode temp = this.head;
		
		while (temp.getNext() != null) {
			temp = temp.getNext();
		}
		
		temp.setNext(node);
		this.tail = node;
		this.size++;
	}
	
	public void append(int data) {
		append(new SNode(data));
	}

}
