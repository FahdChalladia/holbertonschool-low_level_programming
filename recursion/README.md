<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>C - Recursion</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f7f7f7;
            color: #333;
            margin: 0;
            padding: 20px;
        }
        h1 {
            color: #FF6347;
        }
        h2 {
            color: #4682B4;
        }
        h3 {
            color: #32CD32;
        }
        p {
            font-size: 18px;
            line-height: 1.6;
        }
        ul {
            list-style-type: none;
        }
        li {
            background-color: #f2f2f2;
            margin: 10px 0;
            padding: 10px;
            border-radius: 5px;
        }
        .task-heading {
            font-weight: bold;
            color: #8A2BE2;
        }
        .task-description {
            color: #696969;
        }
        .task-number {
            color: #FF6347;
        }
    </style>
</head>
<body>

    <h1>C - Recursion</h1>
    <p>Welcome to the <strong>C - Recursion</strong> project! This repository contains a set of tasks that help you understand and implement recursion in C.</p>

    <h2>General:</h2>
    <ul>
        <li>
            <h3>What is Recursion?</h3>
            <p>Recursion is a method where a function calls itself to solve a smaller instance of a problem. It helps break down complex problems into manageable sub-problems.</p>
        </li>
        <li>
            <h3>How to Implement Recursion</h3>
            <p>1. **Base Case**: Define a condition where the recursion stops.</p>
            <p>2. **Recursive Case**: The function calls itself with modified parameters to move towards the base case.</p>
        </li>
        <li>
            <h3>When to Implement Recursion</h3>
            <p>Recursion is useful when the problem can be broken down into smaller, similar sub-problems, such as traversing trees, solving divide-and-conquer problems, and generating sequences (e.g., factorials).</p>
        </li>
        <li>
            <h3>When Not to Implement Recursion</h3>
            <p>Avoid recursion when it leads to deep recursion, causing stack overflow, or when an iterative solution is more efficient.</p>
        </li>
    </ul>

    <h2>TASKS:</h2>
    <ul>
        <li>
            <p class="task-number">0. <span class="task-heading">puts_recursion.c</span></p>
            <p class="task-description">Function that prints a string, followed by a new line.</p>
        </li>
        <li>
            <p class="task-number">1. <span class="task-heading">print_rev_recursion.c</span></p>
            <p class="task-description">Function that prints a string in reverse.</p>
        </li>
        <li>
            <p class="task-number">2. <span class="task-heading">strlen_recursion.c</span></p>
            <p class="task-description">Function that returns the length of a string.</p>
        </li>
        <li>
            <p class="task-number">3. <span class="task-heading">factorial.c</span></p>
            <p class="task-description">Function that returns the factorial of a given number.</p>
        </li>
        <li>
            <p class="task-number">4. <span class="task-heading">pow_recursion.c</span></p>
            <p class="task-description">Function that returns the value of x raised to the power of y.</p>
        </li>
        <li>
            <p class="task-number">5. <span class="task-heading">sqrt_recursion.c</span></p>
            <p class="task-description">Function that returns the natural square root of a number.</p>
        </li>
        <li>
            <p class="task-number">6. <span class="task-heading">is_prime_number.c</span></p>
            <p class="task-description">Function that returns 1 if the input integer is a prime number, otherwise returns 0.</p>
        </li>
    </ul>

</body>
</html>
