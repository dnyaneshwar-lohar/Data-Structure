public class permutation {
    static int[] A = {0,0,0,0};
    static char[] res = new char[4];
    
    public static void perm(char[] s, int k) {
        if (k == s.length) {
            System.out.println(res);
        } 
        else {
            for (int i = 0; i < s.length; i++) {
                if (A[i] == 0) {
                    res[k] = s[i];
                    A[i] = 1;
                    perm(s, k + 1);
                    A[i] = 0;
                }
            }
        }

    }

    public static void main(String[] args) {
        char[] s = { 'A', 'B', 'C' ,'D'};
        perm(s,0);
    }

}