Topics: +character string
        +string object as an array
        +recursive track
        +lab

+ A character string is an array that ends in the null character(\0).
  E.g Creating a character array
+ Way one with an initialization list.
  * char hello[] = {'h', 'e', 'l', 'l', 'o','\0'};
+way two: With a string literal
  * char hello[]  = "hello";
Note: char array is the only array that would display it's content when its name is called out with a cout statement given that it ends(contains) the null character.
  E.g cout<< hello; //"hello"
