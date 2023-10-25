class Array:
    A = []
    size = 0
    length = 0
    def __init__(self,l,sz,len) -> None:
        self.A = l
        self.size = sz
        self.length = len
        for i in range(sz-len):
            self.A.append(None)

    def Display(self):
        print('\nElements are:')
        for i in range(self.length):
            print(self.A[i],end=' ')
        print()

    def Append(self,x):
        if(self.length<self.size):
            self.A[self.length] = x
            self.length += 1

    def Insert(self, index, x):
        if(index >= 0 and index <= self.length):
            for i in range(self.length,index,-1):
                self.A[i] = self.A[i-1]
            self.A[index] = x
            self.length +=1

    def Delete(self, index):
        if (index >= 0 and index <= self.length):
            x = self.A[index]
            for i in range(index,self.length-1):
                self.A[i] = self.A[i+1]
            self.length -= 1
            return x
    
    def Swap(self,a,b):
        return [b,a]
    
    def LinearSearch(self, key):
        for i in range(self.length):
            if(self.A[i] == key):
                return i
        return -1
    
    def BinarySearch(self,key):
        l=0
        h=self.length -1
        while(l<=h):
            mid = int((l+h)/2)
            if (key == self.A[mid]):
                return mid
            elif (key < self.A[mid]):
                h = mid-1
            elif(key > self.A[mid]):
                l = mid+1
        return -1

    def RBinarySearch(self,A,l,h,key):
        if(l<=h):
            mid = int((l+h)/2)
            if(key == A[mid]):
                return mid
            elif (key<A[mid]):
                return (self.RBinarySearch(A,l,mid-1,key))
            else:
                return (self.RBinarySearch(A,mid+1,h,key))
        return -1

    def Get(self,index):
        if(index >= 0 and index < self.length):
            return(self.A[index])
        return -1
    
    def Set(self,index,x):
        if(index >= 0 and index < self.length):
            self.A[index] = x

    def Max(self):
        max=self.A[0]
        for i in range(self.length):
            if self.A[i] > max:
                max = self.A[i]
        return max

    def Min(self):
        min = self.A[0]
        for i in range(self.length):
            if (self.A[i]<min):
                min = self.A[i]

    def Sum(self):
        sum=0
        for i in range(self.length):
            sum += self.A[i]
        return sum

    def Rsum(self,n):
        if (n<00):
            return 0
        else:
            return self.A[n] + self.Rsum(n-1)
# sz = int(input('Enter size of Array:'))

# len = int(input('Enter length of Array:'))
    
arr = Array([2,3,5,6,8],10,5)

arr.Display()

# print(arr.LinearSearch(5))
print(arr.RBinarySearch(arr.A,0,arr.length,6))
print(arr.Rsum(arr.length-1))

print(arr.Max())
