int visit(int);

int visit(int num){
	if(printf("%d",num) == EOF){
		return EOF;
	}
}