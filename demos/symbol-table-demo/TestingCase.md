# Data Structure
 + HashTable
    + function: storing symbols with scope
    + key: scopeNum_identifierName     `e.g. 2_a` 
    + value: a structure of symTabRecord 
        ```
        struct SymTabRecord {
            char name[IDMAXLENGTH]; // name of identifier
            int scope;  // scope num
            char type;  // consider later
            int location; // consider later
            int isVar;  // consider later
        };
        ```
    
 + Stack
    + function: saving scope number
     
 
# test case

```
{               # open scope 
    a b         # insert a b 
    {           # open scope
        a bb    # insert a bb
    }           # close scope
    a bb        # insert a bb
}               # close scope
```
+ { : open a scope
+ } : close a scope
+ a-z: identifier
