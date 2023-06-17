struct pattern_node
{
    int is_omitted;
    int has_category;
    char* category;
    int has_identifier;
    char identifier[64];
    int has_type;
    char* type;
    int has_value;
    char* value;

    int is_matched;
    int table_length;
    char match_identifiers[2][1000][64];

    int children_count;
    struct pattern_node* children[1000];
};


/*@ requires \valid(pattern) && \valid(code);
    assigns pattern->table_length;
    assigns pattern->match_identifiers[0..1]
                        [\old(pattern->table_length)]
                        [0..\max(strlen(pattern_identifier), 63)];
    ensures strncmp(pattern->match_identifiers[0][pattern->table_length],
                    pattern->identifier, 63);
    ensures strncmp(pattern->match_identifiers[1][pattern->table_length],
                    pattern->identifier, 63);
    ensures pattern->table_length = \old(pattern->table_length) + 1;
*/
void add_identifier(struct pattern_node *pattern, struct program_node *code)
{
    strncpy(pattern->match_identifiers[0][pattern->table_length], pattern->identifier, 63);
    strncpy(pattern->match_identifiers[1][pattern->table_length], code->identifier, 63);
    pattern->table_length++;
}