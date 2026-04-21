class Solution {

    static int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    static int pour(int fromCap, int toCap, int d) {
        int from = fromCap;   // fill from jug
        int to = 0;           // empty to jug
        int step = 1;

        while (from != d && to != d) {

            // pour water
            int temp = Math.min(from, toCap - to);
            to += temp;
            from -= temp;
            step++;

            // check
            if (from == d || to == d) break;

            // if from becomes empty → refill
            if (from == 0) {
                from = fromCap;
                step++;
            }

            // if to becomes full → empty
            if (to == toCap) {
                to = 0;
                step++;
            }
        }

        return step;
    }

    public int minSteps(int m, int n, int d) {

        // case impossible
        if (d > Math.max(m, n)) return -1;
        if (d % gcd(m, n) != 0) return -1;

        return Math.min(pour(m, n, d), pour(n, m, d));
    }
}