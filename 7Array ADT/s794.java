import java.util.Scanner;

class Aarray {
    int[] A;
    int length;
    int size;

    Aarray(int sz) {
        A = new int[sz];
        length = 0;
        size = sz;
    }

    void Display() {
        System.out.println("Elements are ");
        for(int i = 0; i<length; i++)
        {
            System.out.print(A[i]+" ");
        }
    }

    void Append(int x) {
        if (length < size)
            A[length++] = x;
    }

    void Insert(int index, int x) {
        int i;
        if (index >= 0 && index <= length) {
            for (i = length; i > index; i--) {
                A[i] = A[i - 1];
            }
            A[index] = x;
            length++;
        }
    }

    int Delete(int index) {
        int x = 0;
        if (index >= 0 && index <= length) {
            x = A[index];
            for (int i = index; i < length - 1; i++) {
                A[i] = A[i + 1];
            }
            length--;
            return x;
        }

        return 0;
    }

    void swap(int x, int y) {
        int temp;
        temp = x;
        x = y;
        y = temp;
    }

    int LinearSearch(int key) {
        int i;
        for (i = 0; i < length; i++) {
            if (key == A[i])
                return i;
        }
        return -1;

    }

    int LinearSearch2(int key) {
        int i;
        for (i = 0; i < length; i++) {
            if (key == A[i]) {
                swap(A[i], A[i - 1]);
                return i - 1;
            }
        }
        return -1;
    }

    int LinearSearch3(int key) {
        int i;
        for (i = 0; i < length; i++) {
            if (key == A[i]) {
                swap(A[i], A[0]);
                return 0;
            }
        }
        return -1;
    }

    int BinarySearch(int key) {
        int l, h, mid;
        l = 0;
        h = length - 1;
        while (l <= h) {
            mid = (l + h) / 2;
            if (key == A[mid]) {
                return mid;
            } else if (key < A[mid]) {
                h = mid - 1;
            } else if (key > A[mid]) {
                l = mid + 1;
            }
        }
        return -1;
    }

    int RBinSearch(int a[], int l, int h, int key) {
        int mid;
        if (l < h) {
            mid = (l + h) / 2;
            if (key == a[mid]) {
                return mid;
            } else if (key < a[mid]) {
                return (RBinSearch(a, l, mid - 1, key));
            } else {
                return (RBinSearch(a, mid + 1, h, key));
            }

        }
        return -1;
    }

    int Get(int index) {
        if (index >= 0 && index < length) {
            return (A[index]);
        }
        return -1;
    }

    void Set(int index, int x) {
        if (index >= 0 && index < length) {
            A[index] = x;
        }
    }

    int Max() {
        int max = A[0];
        for (int i = 1; i < length; i++) {
            if (A[i] > max) {
                max = A[i];
            }
        }
        return max;
    }

    int Min() {
        int min = A[0];
        for (int i = 1; i < length; i++) {
            if (A[i] < min) {
                min = A[i];
            }
        }
        return min;
    }

    int Sum() {
        int Total = 0;
        for (int i = 0; i < length; i++) {
            Total += A[i];
        }
        return Total;
    }

    int RSum(int n) {
        if (n < 0)
            return 0;
        else
            return RSum(n - 1) + A[n];
    }

    void Reverse() {
        int[] B = new int[length];
        for (int i = length - 1, j = 0; i >= 0; i--, j++) {
            B[j] = A[i];
        }
        for (int i = 0; i < length; i++) {
            A[i] = B[i];
        }

    }

    void Reverse2() {
        int temp;
        for (int i = 0, j = length - 1; j > i; j--, i++) {
            // temp = A[i];
            // A[i]=A[j];
            // A[j]=temp;

            swap(A[i], A[j]);
        }
    }

    void Leftshift() {
        for (int i = 0; i < length; i++) {
            if (i == length - 1)
                A[i] = 0;
            else
                A[i] = A[i + 1];
        }

    }

    void Leftrotate() {
        int f = A[0];
        for (int i = 0; i < length; i++) {
            if (i == length - 1)
                A[i] = f;
            else
                A[i] = A[i + 1];
        }

    }

    void InsertSort(int x) {
        int i = length - 1;

        if (length == size)
            return;
        while (i > 0 && A[i] > x) {
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = x;
        length++;
    }

    int isSorted() {
        int i;
        for (i = 0; i < length - 1; i++) {
            if (A[i] > A[i + 1])
                return -1;
        }
        return 1;
    }

    void Rearrange() {
        int i, j;
        i = 0;
        j = length - 1;

        while (i < j) {
            while (A[i] < 0) {
                i++;
            }
            while (A[j] >= 0) {
                j--;
            }
            if (i < j)
                swap(A[i], A[j]);
        }

    }

}

public class s794 {
    public static void main(String[] args) {

        int size, ch, x, index, key;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Size");

        size = sc.nextInt();

        Aarray arr1 = new Aarray(size);

        do {
            System.out.println("\n\nMenu\n");
            System.out.println("1. Insert");
            System.out.println("2. Delete");
            System.out.println("3. Search");
            System.out.println("4. Sum");
            System.out.println("5. Display");
            System.out.println("6. Exit");

            System.out.println("Enter your choice ");
            ch = sc.nextInt();

            switch (ch) {
                case 1:
                    System.out.println("Enter an element to be added ");
                    x = sc.nextInt();

                    System.out.println("Enter at which index to to be added ");
                    index = sc.nextInt();

                    arr1.Insert(index, x);

                    break;

                case 2:
                    System.out.println("Enter index to be deleter ");
                    index = sc.nextInt();

                    arr1.Delete(index);

                    break;

                case 3:
                    System.out.println("Enter Elemnt to be searched");
                    key = sc.nextInt();

                    System.out.println("Found at index=" + arr1.LinearSearch(key));

                    break;
                case 4:
                    System.out.println("Sum= " + arr1.Sum());
                    break;
                case 5:
                    arr1.Display();
                    break;
                default:
                    break;
            }

        } while (ch < 6);
    }

}