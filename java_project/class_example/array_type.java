public class array_type {
    public static void main(String[] args) {
        //1.1D array
        //syntax:
        //datatype[] arrayName=new Datatype[size];
        //datatype[] arrayName={values....},{values....},{values....};
        //dataType[] arrayName=new dataType[]{values...};

        //2.2D array
         //datatype[][] arrayName=new Datatype[noofrows][noofcolumn];
        //datatype[][] arrayName={values....};
        //dataType[][] arrayName=new dataType[]{values...};

       
        for(int row=0;row<matrix3.length; row++){
            for(int col=0; col<matrix3.length; col++){
                System.out.println(matrix3[row][col]);
            }
        }


    }
}
