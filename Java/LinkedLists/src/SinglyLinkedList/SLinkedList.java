package SinglyLinkedList;

public class SLinkedList implements SinglyLinkedList {
	
	public SNode head;
	
	public SLinkedList() {}
	
	public SLinkedList(int data) {
		this.head = new SNode(data);
	}
	
	public SLinkedList(SNode node) {
		this.head = node;
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
			this.head = temp.getNext();
			
			return true;
		}

		int i = 0;
		
		while (temp != null) {
			if (i == pos - 1) {
				SNode removed_next = temp.getNext().getNext();
				temp.setNext(removed_next);

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
				node.setNext(temp.getNext().getNext());
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
	}
	
	public void append(int data) {
		append(new SNode(data));
	}

}
