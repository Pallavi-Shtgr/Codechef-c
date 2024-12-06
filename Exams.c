In Chefland, there are X schools, and each school has Y students.
The year end results are in and a total of Z students passed the exams.
Assuming that all students appeared for the exams, find whether the number of students who passed in Chefland was strictly greater than 50%.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of three space-separated integers 
X,Y and Z as mentioned in the statement.


  #include <stdio.h>

// Function to check if the number of students who passed is strictly greater than 50%
int check_pass_percentage(int X, int Y, int Z) {
    int total_students = X * Y;
    return Z > (total_students / 2);
}

int main() {
    // Input the number of test cases
    int T;
    scanf("%d", &T);

    // Process each test case
    for (int i = 0; i < T; ++i) {
        // Input the values for X, Y, and Z
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);

        // Check and print the result for each test case
        if (check_pass_percentage(X, Y, Z)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
