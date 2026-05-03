public class char_indexing {
    public static void main(String[] args) {
        String s = "Solar Student";
        //
        // 012345678
        // System.out.println(s.charAt(7));
        int n = s.length();
        System.out.println(n);
        for (int i = 0; i < n; i++) {
            if (i == n - 1)
                System.out.println(s.charAt(i));
            else
                System.out.print(s.charAt(i) + "   ");
        }

        // S o l a r S t u d e n t(#STOP)
    }
}


