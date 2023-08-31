

1-  print six digitis after point
printf("%.6f\n", num);
2- print long value 
printf("%ld\n", longvalue);

3- for using file in c 

	FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");  // open file in write mode 
	reuslt = 120;
    fprintf(fptr, "%d\n", result);	// for write in feile 
    fclose(fptr);					// then close file 