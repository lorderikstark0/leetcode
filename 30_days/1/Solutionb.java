import java.util.*;

class Solutionb {
    public boolean isHappy(int n) {
        Set<Integer> seen = new HashSet<>();
        while (n != 1 && !seen.contains(n)) {
            seen.add(n);
            n = squareSum(n);
        }
        return n == 1;
    }
    private int squareSum(int n) {
        int sum = 0;
        while(n>0) {
            int digit = n%10;
           // System.out.println(digit);
            sum += (digit*digit); 
            n=n/10;
        }
        return sum;
    }
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        int n =sc.nextInt();
        Solutionb p =new Solutionb();
        System.out.println(p.isHappy(n));
        sc.close();
    }
}