int compare(double num1,double num2);
int compare(double num1,double num2){
	if(num1 < num2){
		return -1;
	}
	if(num1 == num2){
		return 0;
	}
	if(num1 > num2){
		return 1;
	}
}
