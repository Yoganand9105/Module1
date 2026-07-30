bool isBinaryPalindrome(int n) {
        int count=0;
        int i=n;
        while(i!=0){
            i=i>>1;
            count++;
        }
        int left=count-1;
        int right=0;
        while(left>right){
            int leftbit=(n>>left)&1;
            int rightbit=(n>>right)&1;
            if(leftbit!=rightbit) return false;
            left--;
            right++;
        }
        return true;
    }