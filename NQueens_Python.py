class NQueens:
    def Nqueens(self,k,n,x)->None:
        for i in range(n):
            if(self.Place(k,i,x)==True):
                x[k] = i
                if (k == n-1):
                        print(x)
                self.Nqueens(k+1,n,x)
        return
    def Place(self,k,ind,x)->bool:
        for i in range(k):
            if (x[i] == ind or abs(x[i] - ind) == abs(i - k)): 
                return False
        return True

def main():
    n=int(input("Enter the value of n\n"))
    x=[None]*n
    print("The combinations are")
    nqueens=NQueens()
    nqueens.Nqueens(0,n,x)
    

if __name__ == "__main__":
    main()
