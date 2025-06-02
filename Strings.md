Slicing Strings: 

* Initializing: = 
* Concatenating: + 
* Reading: cin or getline(cin, str)
* Indexing: str[i];
* Slicing: str1.substr(3,2)  --> ==where the substring starts and how many characters long it is== 
* Length: str.length()
* Comparing: , !=, < ==(note --> < and > is comparing it's alphabetical order )==
* Searching: str.find(s)

```
int main() {
	string str  "abcdbcdefg";
		cout << str.find("de") << endl;
			if(str.find("xyz") == string::npos)
				cout << "Not found" << endl;
			else
				cout << "Found" << endl;
			cout << str.find("cd");
			cout << str.find("cd", 3); //starts searching for the string at index 3 and continues to the end
		
			return 0;
	
	
```


str.find returns the first position where the string occurs 
