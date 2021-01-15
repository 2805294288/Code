//�������Ѷ�ά�����е�ÿһ�����ֶ�����һ�顣
bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target) {
     int i=0,j=0;
     for(i=0;i<matrixSize;i++){
         for(j=0;j<* matrixColSize;j++){
             if(matrix[i][j]==target){
                return true;  
             }
         }
     }
     return false;
}
//�����棺�����һ�����бȽ����С�ڵ���������ֲ��ҡ�
bool findNumberIn2DArray(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if (matrixSize == 0 || *matrixColSize == 0)
        return false;
    int mid = 0;
    for (int i = 0; i < matrixSize; i++) {
        if (target <= matrix[i][(*matrixColSize) - 1]) {
            int start = 0, end = *matrixColSize - 1;
            while (start <= end) {
                mid = (start + end) / 2;
                if (target < matrix[i][mid])
                    end = mid - 1;
                else if (target > matrix[i][mid])
                    start = mid + 1;
                else
                    return true;
            }
        }
    }
    return false;
}