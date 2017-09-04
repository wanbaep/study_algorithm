package com.wanbaep;

import java.util.ArrayList;
import java.util.List;

public class ArrayPairSum {
    public static void main(String[] args) {
        Integer k = 4;
        Integer[] arr = new Integer[6];
        arr[0] = 1;
        arr[1] = 1;
        arr[2] = 2;
        arr[3] = 3;
        arr[4] = 4;
        arr[5] = 2;

        for (int index : arr) {
            System.out.println(arr[index]);
        }

        List<Integer> seen = new ArrayList<>();
        List<Integer[]> output = new ArrayList<>();

        for (int index : arr) {
            Integer target = k - arr[index];
            if (!seen.contains(target)) {
                seen.add(arr[index]);
            } else {
                Integer[] out = new Integer[2];
                out[0] = Math.min(arr[index], target);
                out[1] = Math.max(arr[index], target);
                output.add(out);
            }
        }

        for (int i=0; i<output.size(); i++) {
            System.out.println("("+output.get(i)[0] + "," + output.get(i)[1] + ")");
        }
    }
}
