class Solution {
public:
    string thou(int n){
        string res = "";
        while(n != 0){
            res += 'M';
            n = n - 1000;
        }
        return res;
    }
    string hun(int n){
        string res = "";
        if(n < 400){
            while(n != 0){
                res += 'C';
                n = n - 100;
            }
        }
        else if(n == 400){
            res += "CD";
        }
        else if(n == 500){
            res += 'D';
        }
        else if(n > 500 && n <900){
            res += 'D';
            n = n - 500;
            while(n != 0){
                res += 'C';
                n = n - 100;
            }
        }
        else if(n == 900){
            res += "CM";
        }
        return res;
    }
    string ten(int n){
        string res = "";
        if(n < 40){
            while(n != 0){
                res += 'X';
                n = n - 10;
            }
        }
        else if(n == 40){
            res += "XL";
        }
        else if(n == 50){
            res += 'L';
        }
        else if(n > 50 && n <90){
            res += 'L';
            n = n - 50;
            while(n != 0){
                res += 'X';
                n = n-10;
            }
        }
        else if(n == 90){
            res += "XC";
        }
        return res;
    }
    string one(int n){
        string res = "";
        if(n < 4){
            while(n != 0){
                res += 'I';
                n = n -1;
            }  
        }
        else if(n == 4){
            res += "IV";
        }
        else if(n == 5){
            res += 'V';
        }
        else if(n > 5 && n <9){
            res += 'V';
            n = n - 5;
            while(n != 0){
                res += 'I';
                n  = n-1;
            }
        }
        else if(n == 9){
            res += "IX";
        }
        return res;
    }
    string intToRoman(int num) {
        string d = to_string(num);
        int n = pow(10,d.length()-1);
        string res = "";
        for(int  i = 0;i<d.length();i++){
            int s = d[i] - '0';
            int o = s*n;
            if(o >= 1000){
                res += thou(o);
            }
            if(o > 99 && o <1000){
                res += hun(o);
            }
            if(o > 9 && o < 100){
                res += ten(o);
            }
            if(o > 0 && o < 10){
                res += one(o);
            }
            n = n/10;
        }
        return res;
    }
};