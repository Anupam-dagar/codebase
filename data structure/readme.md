## Ques for labtest2_ques1.c
It is the Indian Premium League season.A software is installed to check the tickets.Every ticket number consists of a class and a ticket number.The class is an uppercase letter from **A** to **Z**.The ticket number is an integer.The ticket numbers are thus of the form **A123**, **F453**,**D345** and so on, where **A**, **F** and **D** is the class number and **123**, **453** and **345** are ticket numbers.You are given a list of tickets sold, followed by a set of tickets which people entering the stadium possess.For every ticket, print **1** if the ticket is **valid** and **0** if the ticket is **invalid**.You must sort the tickets by using a **quick sort alogorithm**.Then you must read the query tickets and print the answer using a **Binary Search**.<br><br>
**Input Format:** The first line is n,the number of tickets.Then there are n lines, each line has a string which is a valid ticket number.Then a number q is entered, followed by q ticket numbers.<br>
**Output Format:** q lines, where every line prints whether the ticket is valid or not.<br><br>
**Constraints:**<br>
Number of elements in array <= 50000<br>
Number of queries <= 500000<br>
Input will consist of 1 character followed by 3 digits<br><br>
**Sample Input:**<br>
5<br>
A142<br>
B443<br>
A334<br>
A134<br>
C345<br>
3<br>
B443<br>
C112<br>
A134<br><br>
**Sample Output:**<br>
1<br>
0<br>
1<br>

## Ques for queueprelabtest.c
A quiz is underway. Before the quiz n students queue up outside CC-3 and enter one by one. On entering CC-3 they are informed about the room number at which they need to enter, and they go and queue up outside the room, waiting for the room to be opened at the start time of the quiz. There are a total of t rooms numbered 0, 1, 2, 3 and so on till t-1. The rooms are opened one by one in increasing order of room number starting from room number 0 and the students enter. Print the order in which the students enter the room. It is necessary to use queues for this question.<br><br>
**Input Format:** The first line is n and t, the number of students and the number of rooms. Then n lines follow stating the roll number and room number of the students in the same order as they are present in the queue outside CC-III.<br><br>
**Output Format:** n lines stating the roll number of students in the order they enter the rooms.<br><br>
**Constraints:**<br>
1 ≤ n, t ≤ 100<br><br>
**Sample Input:**<br>
10 3<br>
IIT2016032 0<br>
IIT2016012 1<br>
IIT2016105 1<br>
IIT2016018 2<br>
IIT2016015 1<br>
IIT2016010 0<br>
IIT2016021 0<br>
IIT2016088 1<br>
IIT2016055 1<br>
IIT2016008 1<br><br>
**Sample Output:**<br>
IIT2016032<br>
IIT2016010<br>
IIT2016021<br>
IIT2016012<br>
IIT2016105<br>
IIT2016015<br>
IIT2016088<br>
IIT2016055<br>
IIT2016008<br>
IIT2016018<br>
