# push-swap
This project will make you sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you’ll have to manipulate various types of algorithms and choose the most appropriate solution (out of many) for an optimized data sorting.

To sort between 5 and 100 elements I used the following algorithm:
-Divide the elements in the stack in 5 partitions;
-Send the elements of one partition before sending the ones from the next partition. The smallest elements get pushed to stack B first.
-After stack A is empty keep pushing the max element in stack B until its empty.
-Stack A should be sorted in less than 800 moves

To sort more than 100 elements I used the Radix algorithm adapted to the problem we have in hands:
-We're gonna keep pushing elements to stack B by checking them bit to bit and push them back to stack A.
-I use the elements value in binary to make the comparisons;
-Start comparing the least significant from each element in stack A and check if it's 1 or 0;
-Push the element to stack B if the bit is 0;
-Rotate stack A if the bit is 1;
-After pushing all the elements that have the current bit set to 0 push them back to to stack A;
-Go to next bit and do the same thing;
-Stop when no element in stack A has the current bit set to 1;
-Stack A should be sorted in less than 7000 moves
