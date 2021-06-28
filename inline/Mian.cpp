
// The inline specifier is a hint to the compiler, and the compiler is free to ignore the hint. Most compilers impose a variety of restrictions on which functions can be expanded inline. The restrictions vary from one compiler to another. 
// For example, most compilers cannot expand a recursive function.
// Inline functions are most often used for extremely simple functions. For example, all standard containers have a member function empty, 
// which returns true if the container is empty. Some containers might implement the function as the following inline function:

//inline bool empty(  ) const { return size( ) != 0; }
