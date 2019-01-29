
public class SNode {
	
	/* Node class for singly-linked list */
	
	private int data;

	private SNode next;
	
	public SNode() {
		this.data = 0;
	}
	
	public SNode(int data) {
		this.data = data;
	}
	
	public int getData() {
		return data;
	}
	
	public void setData(int data) {
		this.data = data;
	}
	
	public SNode getNext() {
		return next;
	}
	
	public void setNext(SNode next) {
		this.next = next;
	}
}