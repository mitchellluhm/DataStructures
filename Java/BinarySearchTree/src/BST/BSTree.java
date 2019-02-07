package BST;

public class BSTree<T> {
	
	private TreeNode<T> head;
	
	BSTree(TreeNode<T> node) {
		this.head = node;
	}
	
	BSTree() {
		this.head = null;
	}
	
	public TreeNode<T> getHead() {
		return this.head;
	}
	
	public TreeNode<T> Search(TreeNode<T> element) {
		// TODO Auto-generated method stub
		return null;
	}

	public void recInsert(TreeNode<T> node, TreeNode<T> element) {
		
		if (node == null) {
			node = element;
		} else {
			Object v = node.getValue();
			Object e = element.getValue();
			System.out.println(v + " : v");
			System.out.println(v.getClass().getName().equals("java.lang.Integer"));
			
			if (v.getClass().getName().equals("java.lang.Integer")) {
				if (Compare((int) v, (int) e)) {
					// go right
					if (node.getRight() == null) {
						node.setRight(element);
					} else {
						recInsert(node.getRight(), element);
					}
				} else {
					if (node.getLeft() == null) {
						node.setLeft(element);
					} else {
						recInsert(node.getLeft(), element);
					}
				}
			}
			
			/*
			if (e <= v) {
				// explore left side
				recInsert(node.getLeft(), element);
			} else {
				// explore right side
				recInsert(node.getRight(), element);
			}
			*/
		}
	}

	private boolean Compare(int v, int e) {
		if (e <= v) {
			// explore left side
			System.out.println("going left compare");
			return false;
		} else {
			System.out.println("going right compare");
			return true;
		}
	}

	public void Insert(TreeNode<T> element) {
		if (this.head == null) {
			this.head = element;
		} else {
			recInsert(this.head, element);
		}
		
	}

	public boolean Remove(TreeNode<T> element) {
		// TODO Auto-generated method stub
		return false;
	}

	public static void main(String[] args) {
		BSTree<Integer> t = new BSTree<Integer>(new TreeNode<Integer>(5));
		t.Insert(new TreeNode<Integer>(2));
		
		System.out.println(t.getHead().getLeft().getValue());
		
	}

}
