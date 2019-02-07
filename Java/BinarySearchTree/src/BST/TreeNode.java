package BST;

public class TreeNode<U> {
	
	private U value;
	private TreeNode<U> left;
	private TreeNode<U> right;
	
	TreeNode(U value) {
		this.value = value;
		this.setLeft(null);
		this.setRight(null);
	}

	public U getValue() {
		return value;
	}

	public void setValue(U value) {
		this.value = value;
	}

	public TreeNode<U> getLeft() {
		return left;
	}

	public void setLeft(TreeNode<U> left) {
		this.left = left;
	}

	public TreeNode<U> getRight() {
		return right;
	}

	public void setRight(TreeNode<U> right) {
		this.right = right;
	}

}
