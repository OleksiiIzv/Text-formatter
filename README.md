A text formatting utility written in the C programming language. 
Text formatting is done similarly to the groff/troff utilities.

Example commands:
* .HE - formats selected text as a header
* .FO - formats selected text as a footer
* .CE - centers selected text
* .LS - changes line spacing
* .FI - formats selected text

An example of how the utility works:

Input:
* .HE "Page #"
* .CE 3
* This text is centered
   .SP 2
* Hello, world!

Output:
* Page 1

                   This text is centered



                       Hello, world!
