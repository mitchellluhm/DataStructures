package BST;

public class TreeNode {
	
	private int value;
	private TreeNode left;
	private TreeNode right;
	
	TreeNode(int value) {
		this.setValue(value);
		this.setLeft(null);
		this.setRight(null);
	}

	public int getValue() {
		return value;
	}

	public void setValue(int value) {
		this.value = value;
	}

	public TreeNode getLeft() {
		return left;
	}

	public void setLeft(TreeNode left) {
		this.left = left;
	}

	public TreeNode getRight() {
		return right;
	}

	public void setRight(TreeNode right) {
		this.right = right;
	}

}
