void reverse(char *s) {
    // Your code goes here
    //*(s) = 's';
    //*(s + 1) = '\0';
    char *begin = s;
    char *end = s + strlen(s) - 1;
    while (begin < end){
        swap(*begin,*end);
        begin ++;
        end --;
    }
}