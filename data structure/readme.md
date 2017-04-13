## Ques for labtest2_ques1.c
It is the Indian Premium League season.A software is installed to check the tickets.Every ticket number consists of a class and a ticket number.The class is an uppercase letter from **A** to **Z**.The ticket number is an integer.The ticket numbers are thus of the form **A123**, **F453**,**D345** and so on, where **A**, **F** and **D** is the class number and **123**, **453** and **345** are ticket numbers.You are given a list of tickets sold, followed by a set of tickets which people entering the stadium possess.For every ticket, print **1** if the ticket is **valid** and **0** if the ticket is **invalid**.You must sort the tickets by using a **quick sort alogorithm**.Then you must read the query tickets and print the answer using a **Binary Search**.<br><br>
**Input Format:** The first line is n,the number of tickets.Then there are n lines, each line has a string which is a valid ticket number.Then a number q is entered, followed by q ticket numbers.<br>
**Output Format:** q lines, where every line prints whether the ticket is valid or not.<br><br>
Sample Input:<br>
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
Sample Output:<br>
1<br>
0<br>
1<br>
