int main() {
	
	
	char pass[] = "cdiiddwpgswgtg";
	for (int i = 0; i < 26; i++ ) {
		for (int j = 0; j < 25; j++)
			printf("%c", (pass[j] + i <= 'z') ? pass[j]  + i : pass[j] + i - 26);
		printf("\n");
	}
}
