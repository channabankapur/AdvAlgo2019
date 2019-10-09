<h1> Advanced Algorithms Assignment 2</h1>
<h2>General Guidelines</h2>
<ul>
    <li>This repo contains the header file and a test file. You will only have to write the implementation file(s)</li> 
    <li>include folder contains the header file(s)</li>
    <li>src folder contains the implementation file(s)</li>
    <li>test folder contains the test file(s)</li>
    <li>An interface is used in java, but a similar concept is there in C++ called pure virtual functions. An interface is used to specify what methods should be implemented. If a method isn't implemented, there is a compilation error if you try to make an object of that class. The concept of interfaces isn't really important right now, just think of it as a way to know what functions you have to write, and that since the implementation is a separate class, you can write that however you want. The only things that have to match are the function prototypes.</li> 
    <li>The testing framework is taken from here -> https://github.com/onqtam/doctest<br>
    The given tests are known as unit tests. Each test is meant to test only a single functionality at a time. Looking at the code should give you a better idea. You don't have to write any tests yourself, but something like this is done for production code. We have given a sanity check test, which tests really simple functionality, just to check if the bare minimum works, and that there are no compilation issues.<br> 
    You can compile the test and run it like it's any other C++ file, i.e. <br>g++ filename.cpp<br>./a.out
    </li>
    <li>All STL libraries are allowed for this assignment</li>  
    <li>With respect to the language, we are using g++ to compile. g++ is used for C++, but compiles C code too. There are some differences between gcc and g++, so we recommend that you use g++ too.<br>
    We are testing on ubuntu 18.04 with g++ version 7.4.0. Make sure it works on that, some of you maybe using OS/compiler specific features.</li>
    <li>Discussion between yourselves is fine, but not copying. We would be running a plagiarism detection script</li>
    <li>There might be small changes to the assignment, so pull the code from the repo to make sure you're up to date.</li>
    <li>Deadline - TBD</li>
    <li>Submission - Would be through a google form.</li>
    <li>What to submit - TBD. (Implementation files and a report)</li>
    <li>The report should be a maximum of 1 page (in IEEE format http://ieeeauthorcenter.ieee.org/wp-content/uploads/Transactions-instructions-only.pdf) for each problem given here.</br>
    The 1 page is only an upper limit. Brief answers that contain everything are preferred. Don't fill up pages for the sake of it.</li>
    <li>If you have any queries, put it up in the query form -> https://docs.google.com/forms/d/e/1FAIpQLSfm8FUjHU-LBQV8Y-zyN71br2pxadWCVgXQOzE13f6WEwJ5uA/viewform?vc=0&c=0&w=1. This is to reduce the number of mails we would get as keeping track of all of them is hard. It also reduces the number of similar questions asked.</br>
    To view the response sheet -> https://docs.google.com/spreadsheets/d/1QOkqklgx9INQT6t9Uj-sON3Hq-BJ0-S0fDAjy0taOCc/edit#gid=0</li> 
    <li>Contacting Teaching Assistants<br>
        Arvind Srinivasan - arvind.srini.8@gmail.com<br> 
        Neelesh C A - neeleshca26@gmail.com 
    </li>
</ul>
<h2>Problem 1 - Survival of the fittest</h2>
    Time limit - 2 seconds</br>
    <p>There are 3 kinds of units in an arena. There are  'a' archers, 'p' pikemen and 'k' knights. The arena is large enough that the probability of two individuals meeting is equal. The archer kills the pikeman, the pikeman kills the knight and the knight kills the archer, if they meet. Only different units kill each other. Given enough time, what is the probability that each unit would be the only kind left alive.</p>
    <b>Input</b></br>
    The input consists of three integers, a, p and k. (1<=a,p,k<=100) which is the original number of archers, pikemen and knights respectively.</br>
    <b>Output</b></br>
    The output consists of three integers, the probabilities of archers, pikemen or knights being the only surviving units respectively. The answer will be considered correct if the error is within 10^-9.</br>
    The input will be given as function arguments. The output will be returned as a vector from the function. There will be no  STDIN or STDOUT interaction.</br>
    Sample input 1</br>
    1 1 1</br>
    Sample output 1</br>
    0.333333333333 0.333333333333 0.333333333333</br>
    Sample input 2</br>
    1 1 2</br>
    Sample output 2</br>
    0.133333333333 0.533333333333 0.333333333333</br>
    An explanation of the output would require going into the solution, hence it is not there.

