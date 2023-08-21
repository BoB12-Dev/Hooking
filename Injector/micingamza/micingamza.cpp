// micingamza.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


int ScanMem(char* szSrc, int nSrcSize, char* szTarget, int nTargetSize)
{
    for (int i = 0; i < nSrcSize; i++) {
        if (0 == memcmp(szSrc + i, szTarget, nTargetSize))
        {
            printf("찾았다! : %i\n" , i);
            return true;
        }
    }
    return false;
}


int main()
{
    char* p = (char*)malloc(4096 * 10);

    ScanMem(p,4096*10,(char*)"micingamza",10);
}
