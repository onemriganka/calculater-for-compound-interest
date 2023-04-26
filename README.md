# calculater-for-compound-interest
This code will help you to do compound interest problem, the code is written in c.

In this program, we first declare the variables principal, rate, time, interest, and amount. We then prompt the user to input the values of principal, rate, and time using printf and scanf.

We then calculate the compound interest using the formula interest = principal * pow((1 + rate/100), time) - principal. This formula takes the principal, rate, and time as inputs and returns the compound interest.

Finally, we calculate the total amount using the formula amount = principal + interest. We then output the results using printf.

Note that we have used the pow function from the math.h library to calculate the power of (1 + rate/100) to the time value.
