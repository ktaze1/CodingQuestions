AMAZON INTERVIEW DOC

Must do Questions:


	K largest elements from a big file or array
	Reverse a Linked List in groups of given size
	Implement a stack with push(), pop() and min() with O(1) time
	Add two numbers represented by linked lists
	Convert a Binary Tree to Double Linked List
	Stock span problem
	Next larger element
	Edit distance
	Maximum of all subarray of size k
	Pythagorean triplets
	Print a binary tree in vertical order 
	Level order traversal
	Smallest window in a string containing all the characters of another string
	Find the number of islands
	Detect and remove loop in a linked list
	Check if a binary tree is Binary Search Tree or not
	Boolean Parenthesization  
	Arrange given numbers to form the biggest number
	Implement LRU cache
	Maximum difference between node and it’s ancestor in Binary Tree


Interview Experiences:
	20 MCQ:

	C Language ++++
	
    Algorithms +++
	
    Finite Automata ?
	
    Operating System ++++
	
    Networking ++
	
    Puzzles
	
    OOP +++
	
    Software Development Concepts +++
	


    Coding Questions:
	
    Find nodes of tree as seen from the left view of the binary tree
	
    Rotate the given matrix by 90°
	
    Reverse k alternate nodes of linked list x2
	
    Form string with first character of given string (There may be some whitespaces) x2
	
    Given 2 linked lists constructed another linked list containing the sum of those 2 linked lists.
	
    Given 2 linked lists constructed another linked list containing the sum of those 2 linked lists.
	
    Given a float number 7.64, convert it into the string WITHOUT using any inbuilt function/library.
	
    Given the inorder and preorder traversals of a Binary Tree, output the postorder traversal of it.
	
    Consider a coordinate system consisting of n coordinates from (x1,y1)…..(xn,yn). Also there are two values ymin and ymax given to you. You have to return min(D) where D is x^2 + y^2 for all y lying between ymin and ymax inclusive. If there is no such y then return -1.
	
    Given a number n and a number k. You have to find the next bigger number from n which is obtained after exaclty k swaps.
	
    Given two strings, find whether they are anagrams of each other.
	
    Given a n-ary tree, Convert it into an array and return it. Construct the same n-ary tree from that array again.  ((DFS is better here as reconstruction is necessary)
	
    Count substrings with exactly K distinct chars
	
    Path With Maximum Score
	
    Longest Palindromic Substring
	
    Movies on Flight
	
    Substrings of size K with K distinct chars 
	
    Most Common Word
	
    Find Pair With Given Sum
	
    Distance Between Nodes in BST
	
    K Closest Points to Origin
	
    Find Pair With Max Appeal Sum
	
    Two Sum - Unique Pairs 
	
    Favorite Genres
	
    Critical Connections
	
    Search a 2D Matrix II
	
    Subtree of Another Tree 
	
    Merge Two Sorted Lists 
	
    Copy List with Random Pointer




Interview Round 1:

	Given n coins for two players playing a game. Each player picks coins from the given n coins in such a way that he can pick 1 to 5 coins in one turn and the game continues for both the players. The player who picks the last coin looses the game. You have to tell that for given n coins who looses the game? 

	Given a number n, find the number just greater than n using same digits as that of n

	Given a binary tree. Modify it in such a way that after modification you can have a preorder traversal of it using only right pointers. During modification you can use right as well as left pointers. Write complete code and dry run it for some test cases.
	
    Given 2 linked lists. Find out if they intersect or not. If yes, find intersection point. Write complete code for it. I could not remember the simple way: find the length of the lists and simply move forward the shorter list by difference of the lengths and find the intersection point. Instead, I joined the end of first list at the end of the 2nd list and then went for cycle finding by Floyd Cycle finding Algorithm.
	
    Add two numbers represented by linked lists
	
    iterative and recursive code to reverse a linked list
	
    Write a function to check whether a binary tree is a sub-tree of another binary tree (Check for all corner cases).  Which data structure would you use to keep records of stock market? I asked him to clarify the problem statement. He then asked me : Suppose you have to maintain the stock values of various companies during various periods and return minimum stock value of a particular company over a given period of time.I answered segment tree (Probably the correct answer was queue data structure).
    
    However the interviewer proceeded with questions on segment tree.
    He asked me to write a code for
    a) Creating a segment tree
    b) Performing range minimum query in a segment tree
    c) Updating the segment tree
    He asked me to analyze the time complexity for building the segment tree and performing the range minimum query in the segment tree.
    He then asked me: If you are to maintain the stock value of a company for the past 6 months. Then you have to update the segment tree every day by deleting a stock value and inserting a new stock value. How would you do that?
    Here I got stuck and could not perform the updation in better than O(n) time
	Given an array of numbers find all such triplets that satisfy the given condition. Condition: a[i] < a[j] < a[k] where I < j < k.
	Given two trees check if they are mirror images of each other or not.
	What is semaphore and what do you mean by a deadlock.
	Given an array of +ve as well as -ve numbers, find out whether it is possible or not to convert it to 0 by adding/subtracting operations on all the elements.
	Given a binary Tree where the structure of each node contains an extra “next” pointer (initially all NULL), modify the binary tree such that all the nodes at the same level gets connected by utilizing these given extra pointers.
	Given a string find the length of longest substring which has none of its character repeated
	Write a function flatten() which flattens this link list to a single link list with all the elements in sorted order as:   x2
	Check if a linked list is palindrome or not.
	Given an array of n integers(positive or negative). Find the maximum sum of subsequence of the array and also total number such arrays possible having the maximum sum.
	Given a distance n. A person standing at position 0 has to reach n. He can either take 1 step or 2 steps at a time. In how many ways he can reach there.
	He asked me the worst case complexities of Quick sort and Merge sort.
	write the code for level-order traversal of a tree.
	Find the square root of a number. 1- Babylonian method . 2- Binary Search

Interview Round 2:

	Given in facebook find an efficient way to find the mutual friends between you and one of your given friends.
    Hint: hashing, dictionary data structure implementation
	For two very long numbers given, find the product of these numbers in an efficient way.
    Hint: using binary multiplication effectively.
	Given a sorted array of 0’s and 1’s. Find out the no. of 0’s in it. Write recursive, iterative versions of the code and check for all test cases.
	Spiral level order traversal without using extra variable for detecting level (using one stack and one queue) and few other implementations as well.
	a) He asked me to speak something about myself and my technical achievements.
    b) How to store a binary tree in a file & then read back.(It is not necessarily a BST)
    First I answered that I would store level-order traversal of the tree.
    He then asked me how I would maintain the nodes at various levels (which I was unable to answer). So, I changed my approach and told that: I would store in-order and pre-order traversals of the tree from which the original tree can be easily retrieved.
    But then he told me to optimize my approach (As this approach would require twice the original space to store the data in the nodes). I could not further optimize my approach (However the better approach was to use parenthesization
	Given a BST, replace each node with the sum of the values of all the nodes that are greater than that node. Only constraint being that I was not allowed to use any global or static variable.
	Given an array of numbers find the maximum count of duplets and triplets such that there sum is a multiple of three.
    Number that has appeared once can’t be included anywhere else.  
	Given the stock prices of 10 days find the best possible buy sell pair.
	Write a code to find the Diameter of the given a binary tree
	Given a number design the algorithm to find the next greater number which contains exactly same digits.
	Given n appointments with the start time, end time and a boolean variable hasConfilct, we have to set the boolean variable hasConflict of those appointments that conflict with the other appointments.
    Example:  Appointment1: (2:00-3:00)
    Appointment2: (2:30-3:30)
    Appointment3: (4:00-6:00)
    I have to set the hasConflict of Appointment 1 and 2 as true. Initially, I did it in O(n^2). But then he asked me to optimize the solution.
	Given that at Amazon.in the details page of an item shows only one field that is dynamically picked up from the database, we have to improve the performance according to the line:
    “80% of the users visit details page of 20% of products.”
    I said we could store these 20% on the web server so that we don’t have to fetch the item details from database everytime. He asked me where and how will i store it. I answered Main memory and will use BST to store it. Then after a lot of discussion(about 30 mins) on how will the get and put operations be used, he was satisfied with the solution.
	Given a linked list placed in memory, what problems can arise if simultaneous operations are performed on the list. From here he started asking about threads because the answer was related to it.
	When a single threaded application is converted to multi-threaded applications, what kind of changes operating system has to make?
	What steps are taken when the os shifts from one-thread execution to another?
	.Given an array of 0s and 1s sorted. Find the first occurrence of 1 
	Given an infinite array of 0s and 1s.(sorted) .Find the first occurence of 1
	Given a matrix sorted in ascending order both row and column wise. Search an element.
	Given a tree, print the max sum path from root to leaf.
	Given a tree,print spirally the column order of a tree. ???
	Implement a stack using array. 
	You are given an array . You have to create a stack when the user wants to do so and delete a stack when the user says.You wont be given the number of stacks that will be created.
