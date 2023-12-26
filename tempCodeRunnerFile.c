


#include "datastructure/production.h"
#include <stdio.h>
#include <stdlib.h>
#include "unit_tests/test.h"
#include "calculation/parsing_table/table.h"
#include "predictive_parser/p_parser.h"

char** get_grammar_from_user(int num_productions){
    char** grammar = malloc(sizeof(int *) * num_productions);
    for(int i=0; i < num_productions; ++i){
        grammar[i] = malloc(sizeof(char) * 100);
        scanf("%s", grammar[i]);
    }
    return grammar;
}

int get_productions_count(){
    int num_productions;
    scanf("%d", &num_productions);
    return num_productions;
}

void run_tests(){
    char grammar_string[5][50] = {"E->TA", "A->+TA|.", "T->FB", "B->*FB|.", "F->(E)|i"};
    // char grammar_string[6][50] = {"S->aBDh", "B->cC", "C->bC|.", "D->EF", "E->g|.", "F->f|."};
    //char grammar_string[4][50] = {"S->ACB|Cbb|Ba", "A->da|BC", "B->g|.", "C->h|."};
    //    test_first(grammar_string, 5);
    //    printf("----------------------------------------\n");
    //    test_follow(grammar_string, 5);
    production** p = malloc(sizeof(production) * 5);
    for(int i=0; i<5; ++i){
        p[i] = parse_production_from_string(grammar_string[i]);
    }
    table t = create_parsing_table(p, 5);
    predictive_parse("i+i*i", t, p);
    predictive_parse("(i)", t, p);
    //print_table(t);
}

int main() {
    printf("Predictive Parser\n");
    printf("Enter number of productions:");
    const int num_productions = get_productions_count();
    char **grammar = get_grammar_from_user(num_productions);
    production** p = get_production_from_string_collection(grammar, num_productions);
  /*  for(int i=0; i<num_productions; ++i){
        print_production(p[i]);
    }*/
    //run_tests();
    table t = create_parsing_table(p, 5);
    while(true){
        printf("Enter string:");
        char str[100];
        scanf("%s", str);
        predictive_parse(str, t, p);
        char c;
        scanf("%c", &c);
        if(c == 'n') break;
    }
    return 0;
}