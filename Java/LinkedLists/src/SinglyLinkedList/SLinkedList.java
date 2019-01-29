package SinglyLinkedList;

public class SLinkedList {
	
	public SNode head;
	
	public SLinkedList() {
		this.head = new SNode();
	}
	
	public SLinkedList(int data) {
		this.head = new SNode(data);
	}

}
