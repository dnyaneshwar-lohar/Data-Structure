public class find_dupli_using_bitwise {
    public static void main(String[] args) {
        String x = "finding";
        long H = 0,a = 0;
        for (int i = 0; i < x.length(); i++)
        {
            a=1;
            a=a<<(x.charAt(i)-97);
            if((H&a)>0){
                System.out.println(x.charAt(i)+" duplicated");
            }
            else
            {
                H=H|a;
            }
        }
    }
    
}
