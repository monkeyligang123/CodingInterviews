//����һ��������������������Ʊ�ʾ��1�ĸ��������и����ò����ʾ��
//���ּ�һȻ�������
class Solution {
public:
     int  NumberOf1(int n){
         int count = 0;
         while(n){
             count++;
             n=n&n-1;
         }
        return count;
     }
};