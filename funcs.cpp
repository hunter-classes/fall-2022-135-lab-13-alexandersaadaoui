
#include <iostream>

std::string printRange(int left, int right){
    if(left > right){
        return "";
    }
    else if(left == right){
        return std::to_string(left);
    }
    return std::to_string(left) + " " + printRange(left + 1, right);
}

int sumRange(int left, int right){
    if (left <= right){
        return left + sumRange(left + 1, right);
    }
    return 0;
}

int sumArray(int *arr, int size){
	if(size == 0){
		return 0;
	}
    else{
	    return *(arr + size-1) + sumArray(arr, size-1);
	}
}


bool isAlphanumeric(std::string s){
    if(s.length() == 0){ 
        return true; 
    }
    else if(!(isalnum(s[0]))){ 
        return false; 
    }
    return isAlphanumeric(s.substr(1, s.length()));
}

bool nestedParens(std::string s){
    if (s == ""){
        return true;
    }
    else if (s.length()%2 != 0){
        return false;
    }
    
    int size = s.length();
    if(s[0] != '(' || s[size-1] != ')'){
        return false;
    }
    return nestedParens(s.substr(1, size-2));
}