package SinglyLinkedList;

public interface SinglyLinkedList {
	
	/** Prints all contents along with their respective position.
	 * 
	 *  Example:
	 *  printList(myList) ->
	 *  	0 | item1
	 *  	1 | item2
	 *  	2 | item3
	 */
	void printList();
	
	/** Returns length of the list.
	 * 
	 *  Note: does not count the last null node.
	 * @return
	 */
	int getLength();
	
	/** Removes node at designated position.
	 * 
	 * @param pos
	 * @return
	 */
	boolean remove(int pos);
	
	/** Replace node at position pos with input node.
	 * 
	 * @param pos
	 * @param node
	 * @return
	 */
	boolean replace(int pos, SNode node);
	
	/** Append a node to the end of the list.
	 * 
	 * @param node
	 * @return
	 */
	boolean append(SNode node);
}
