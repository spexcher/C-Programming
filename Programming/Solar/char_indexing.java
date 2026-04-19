public class char_indexing {
    public static void main(String[] args) {
        String s = "Solar Student";
        //
        // 012345678
        // System.out.println(s.charAt(7));

        System.out.println(s.length());
        for (int i = 0; i < s.length(); i = i + 1) {
            if (i == s.length() - 1)
                System.out.println(s.charAt(i));
            else
                System.out.print(s.charAt(i) + "   ");
        }

        // S o l a r S t u d e n t(#STOP)
    }
}
