1177 - Group Reverse
Description
Group reversing a string means reversing a string by groups. For example
consider a string:
"TOBENUMBERONEWEMEETAGAINANDAGAINUNDERBLUEICPCSKY"
This string has length 48. We have divided into 8 groups of equal length and so
the length of each group is 6. Now we can reverse each of these eight groups
to get a new string:
"UNEBOTNOREBMEEMEWENIAGATAGADNAEDNUNIIEULBRYKSCPC"
Given the string and number of groups in it, your program will have to group
reverse it.
Input specification
The input file contains at most 101 lines of inputs. Each line contains one
positive integer G (G < 10) which denotes the number of groups followed by a
string whose length is a multiple of G. The length of the string is not greater
than 100. The string contains only alpha numerals. Input is terminated by a line
containing G = 0.
Output specification
For each line of input you must print one line of output which contains the group
reversed string.
Sample input
3 ABCEHSHSH
5 FA0ETASINAHGRI0NATWON0QA0NARI
0
Sample output
CBASHEHSH
ATE0AFGHANISTAN0IRAQ0NOW0IRAN
