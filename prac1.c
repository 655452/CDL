#include <stdio.h>

int main() {
    FILE *file = fopen(__FILE__, "r");
    if (file == NULL) {
        printf("File not found or cannot be opened.\n");
        return 1;
    }

    int single_line_comment_count = 0;
    int multi_line_comment_count = 0;
    int inside_single_line_comment = 0;
    int inside_multi_line_comment = 0;
    char prev = '\0';
    char c;

    while ((c = fgetc(file)) != EOF) {
        if (!inside_single_line_comment && !inside_multi_line_comment && c == '/' && prev == '/') {
            inside_single_line_comment = 1;
            single_line_comment_count++;
        } else if (!inside_single_line_comment && !inside_multi_line_comment && c == '/' && prev == '*') {
            inside_multi_line_comment = 1;
        } else if (inside_single_line_comment && c == '\n') {
            inside_single_line_comment = 0;
        } else if (inside_multi_line_comment && c == '/' && prev == '*') {
            inside_multi_line_comment = 0;
            multi_line_comment_count++;
        }
        prev = c;
    }

    fclose(file);


// kjsakjs
/* hjajnjdc */
//jsjjc
/* hsans */
// hjdsjkjk
//jnjjnjnjn
/*  huhushbbh */
/* hhjsxjsjksjk*/
/* hjhhjbhjjn */
//jjjkkjkjj
/*njjnjnjnjnbhhbh*/


// kjsakjs
/* hjajnjdc */
//jsjjc
/* hsans */
// hjdsjkjk
//jnjjnjnjn
/*  huhushbbh */
/* hhjsxjsjksjk*/
/* hjhhjbhjjn */
//jjjkkjkjj
/*njjnjnjnjnbhhbh*/



//jjjkkjkjj
/*njjnjnjnjnbhhbh*/
    printf("Single-line comments: %d\n", single_line_comment_count);
    printf("Multi-line comments: %d\n", multi_line_comment_count);
//jjjkkjkjj
/*njjnjnjnjnbhhbh*/

//jjjkkjkjj
/*njjnjnjnjnbhhbh*/
//jjjkkjkjj
/*njjnjnjnjnbhhbh*/
//jjjkkjkjj
/*njjnjnjnjnbhhbh*/
//jjjkkjkjj
/*njjnjnjnjnbhhbh*/
//jjjkkjkjj
/*njjnjnjnjnbhhbh*/
//jjjkkjkjj
/*njjnjnjnjnbhhbh*/
//jjjkkjkjj
/*njjnjnjnjnbhhbh*/

//jjjkkjkjj
/*njjnjnjnjnbhhbh*/
//jjjkkjkjj
/*njjnjnjnjnbhhbh*/

//jjjkkjkjj
/*njjnjnjnjnbhhbh*/
//jjjkkjkjj
/*njjnjnjnjnbhhbh*/
//jjjkkjkjj
/*njjnjnjnjnbhhbh*/



    return 0;
}
