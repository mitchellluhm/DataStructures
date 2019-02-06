package BST;

public class BSTree implements BinarySearchTree {
	
	private TreeNode head;
	
	BSTree(int value) {
		this.head = new TreeNode(value);
	}
	
	BSTree(TreeNode node) {
		this.head = node;
	}
	
	BSTree() {
		this.head = null;
	}
	
	public TreeNode getHead() {
		return this.head;
	}
	
	@Override
	public int Search(int element) {
		// TODO Auto-generated method stub
		return 0;
	}
	
	public void recInsert(TreeNode node, int element) {
		
		if (node == null) {
			node = new TreeNode(element);
		} else {
			int v = node.getValue();
			System.out.println(v + " : v");
			
			if (element <= v) {
				// explore left side
				recInsert(node.getLeft(), element);
			} else {
				// explore right side
				recInsert(node.getRight(), element);
			}
		}
	}

	@Override
	public void Insert(int element) {
		
		if (this.head == null) {
			this.head = new TreeNode(element);
		} else {
			recInsert(this.head, element);
		}

	}

	@Override
	public boolean Remove(int element) {
		// TODO Auto-generated method stub
		return false;
	}
	
	public static void main(String[] args) {
		BSTree t = new BSTree(5);
		t.Insert(2);
		
		System.out.println(t.getHead().getLeft());
		
	}

}
