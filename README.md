A text formatting utility written in the **C programming language**. 
Text formatting is done similarly to the `groff`/`troff` utilities.
A `.mak` file is used to build the program.

## Example commands:
* `.HE` - formats selected text as a header
* `.FO` - formats selected text as a footer
* `.CE` - centers selected text
* `.LS` - changes line spacing
* `.FI` - formats selected text

## An example of how the utility works:

**Input:**
```text
.HE "Page #"
.CE 3
This text is centered
.SP 2
Hello, world!

**Output:**
```text
Page 1

                   This text is centered



                       Hello, world!
