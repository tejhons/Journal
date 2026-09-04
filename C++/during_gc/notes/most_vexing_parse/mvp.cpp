#define PROGRAM_NOT_COMPILED true

int main(){
  /* Just using as an example...
   * Obviously types are not defined in program.
   * Nor can this program be compiled properly */

  /* What is the most vexing parse? (In my own words) 
   * - The most vexing parse is a parsing ambiguity in 
   *   C++ where object construction is mistaken for a 
   *   function declaration by the compiler.
   */

  /* Why does it happen? 
   * - This happens because the C++ rule is that when 
   *   the syntax is ambiguous (e.g. this situation), 
   *   it will always get resolved in favor of the 
   *   function declaration, even if this is not the 
   *   programmers intent. 
   */

  /* How can the issue be fixed?
   * This can be fixed in three different ways:
   *
   * - Solution 1: By adding an extra set of parentheses around the argument.
   *
   * - Solution 2: Establishing the object before hand with a named variable. 
   *
   * - Solution 3: Using brace {} initialization instead of parentheses. 
   */

  /* --- Mini demo below --- */

  //Let's say the next line below causes your mvp.
  Doubler d(MyInt(i)); //causes mvp bug

  /* --- Below would be the solutions fixing it --- */

  //Solution 1
  Doubler d((MyInt(i)));

  //Solution 2
  MyInt mi(i);
  Doubler d(mi);

  //Solution 3 (You could choose either of these, they all work!)
  Doubler d{MyInt(i)}; //fixed
  
  Doubler d(MyInt{i}); //fixed
  
  Doubler d{MyInt{i}}; //fixed

  return 0;
}
