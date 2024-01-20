public class check_anagram_bitwise {
    public static void main(String[] args) {
        String A = "decimial";
        String B = "medicaal";

        long HA = 0, HB = 0, Aa = 0, Ba = 0;
        int LA = 0;
        int LB = 0; 

        for (; LA != A.length() && LB != B.length(); LA++, LB++)
        {
            Aa=1;
            Ba=1;
            Aa = Aa<<(A.charAt(LB)-97);
            Ba = Ba<<(B.charAt(LB)-97);
            HA = HA|Aa;
            HB = HB|Ba;

        }

        if (HA == HB && LA == LB && A.length() == B.length() ) {
            System.out.println("Anagram");
        }
        else
        {
            System.out.println("Not Anagram");
        }
    }
}
