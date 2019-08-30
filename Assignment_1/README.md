<h1> Advanced Algorithms Assignment 1</h1>
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
    <li>We would be giving the header files too. In case of the dynamic array question, there are STL classes which do essentially the same functionality.
    <li>With respect to the language, we are using g++ to compile. g++ is used for C++, but compiles C code too. There are some differences between gcc and g++, so we recommend that you use g++ too.<br>
    (This line can be changed. We are testing on ubuntu 18.04 with g++ version 7.4.0. Make sure it works on that, some of you maybe using OS/compiler specific features.)</li>
    <li>Discussion between yourselves is fine, but not copying. We would be running a plagiarism detection script</li>
    <li>There might be small changes to the assignment, so pull the code from the repo to make sure you're up to date.</li>
    <li>Deadline - 11:59 PM on Sunday, Sep 8th, 2019</li>
    <li>Submission - Would be through a google form.</li>
    <li>What to submit - TBD. (Implementation files and a report)</li>
    <li>The report should be a maximum of 1 page (in IEEE format http://ieeeauthorcenter.ieee.org/wp-content/uploads/Transactions-instructions-only.pdf) for each data structure. Write an explanation of your approach and any findings. e.g. theoretical proof and time taken for your actual implementation, whether they match etc. <strike>The report can contain citations to other papers, for e.g. if you're implementing dijkstra's algorithm, there are many ways to do it. You wouldn't be implementing every single method,so you can take the results of other implementations and compare it with that.</strike> (The striked out part seemed like it would be too much work, but you're free to do it if you're interested)</br>
    You can plot graphs in python if you want. </br>
    The 1 page is only an upper limit. Brief answers that contain everything are preferred. Don't fill up pages for the sake of it.</li>
    <li>If you have any queries, put it up in the query form -> https://docs.google.com/forms/d/e/1FAIpQLSfm8FUjHU-LBQV8Y-zyN71br2pxadWCVgXQOzE13f6WEwJ5uA/viewform?vc=0&c=0&w=1. This is to reduce the number of mails we would get as keeping track of all of them is hard. It also reduces the number of similar questions asked.</br>
    To view the response sheet -> https://docs.google.com/spreadsheets/d/1QOkqklgx9INQT6t9Uj-sON3Hq-BJ0-S0fDAjy0taOCc/edit#gid=0</li> 
    <li>Contacting Teaching Assistants<br>
        Arvind Srinivasan - arvind.srini.8@gmail.com<br> 
        Neelesh C A - neeleshca26@gmail.com 
    </li>
</ul>
<h2>Dynamic Array</h2>
    <ul>
        <li>The implementation of dynamic array would be similar to what was done in theory class. The interface class has more details</li>
        <li>The factor of expansion of the table size and the load factor should be customizable. This part should be written in your report, i.e. whether there's a difference or not and any reason for it. It might depend on the architecture of your computer/other things you are not aware of so the results may not match with others.</li>
        <li>The skeletal implementation provided is just for your reference since it's the first time. You can have it however you want as long as it implements all the functions in the interface. The file name must be "dynamic_array_implementation.cpp" and the class name must be "dynamic_array_implementation".</li> 
    </ul>
<h2>Splay Tree</h2>
    <ul>
        <li>Since there are different ways to implement the splay tree, to ensure consistency, we have specified the method to be followed in the header file.</li>
        <li>For your report, you can consider different sequence of operations, i.e. completely random, more probability for some range of data etc. (This isn't an exhaustive list)</li>
    </ul>