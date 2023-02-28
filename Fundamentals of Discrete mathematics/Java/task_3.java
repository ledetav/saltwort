public class task_3 {
    public static void main(String[] args) {
        int count = 0;
        
        for (int num = 0; num < 1000000; num++) {
            String numStr = Integer.toString(num);
            boolean hasDuplicate = false;
            
            for (int i = 1; i < numStr.length(); i++) {
                if (numStr.charAt(i - 1) == numStr.charAt(i)) {
                    hasDuplicate = true;
                    break;
                }
            }
            
            if (!hasDuplicate) {
                count++;
            }
        }
        
        System.out.println(count);
    }
}

