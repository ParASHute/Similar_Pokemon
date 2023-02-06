#include <stdio.h>
int act(int d){
    while(1){
        printf("1.물리 공격 2.특수 공격 3.물리 방어 4.특수 방어\n");
        printf("행동을 선택해 주십시오 : ");
        scanf("%d", &d);
        if(d == 1 || d == 2 || d == 3|| d == 4)break;
        else printf("옳은 선택지가 아닙니다.\n");
    }
    return d;
}
int main() {
    char a;
    int doing;
    int cHP = 100 ,cSF = 10, cNF = 10, cSD = 10, cND = 10;
    int pHP = 100 ,pSF = 10, pNF = 10, pSD = 10, pND = 10;
    printf("게임을 시작 하시려면  'A'를 입력해 주세요 : ");
    scanf("%c",&a);
    getchar();
    if(a == 'a' || a == 'A'){
        printf("--게임을 시작하기전 주의 사항--\n");
        printf("이제막 코딩으로 뭔가를 만들어 보겠다고 시작한 취직이 급해진 학부생의 개인 프로젝트입니다.\n");
        printf("총 10번의 전투를 치루며, 전투 방식은 포켓몬과 유사합니다. 하지만, 기술은 4가지가 고정이며, 1개의 물리공격, 1개의 특수 공격, 1개의물리방어, 1특수방어입니다.\n");
        printf("난수 생성에 따라 공방이 이뤄 지며, 우선권은 랜덤하게 가져가며 단계가 올라갈수록 확률은 떨어 집니다.\n");
        printf("컴퓨터의 공방은 난수에 따라 달라지며, 처음엔 50퍼샌트 부터 시작해 단계가 진행 될수록 공격이 나올 확률이 올라갑니다.\n");
        printf("한번의 전투가 끝나면 원하는 스탯(HP, 물공, 특공, 특방, 스피드 중 택 1) 한가지를 +10 할수 있습니다.\n");
        printf("주의 사항을 다 읽었으면 한번더 A를 입력해 주십시요 : ");
        scanf("%c",&a);
        getchar();
        if(a == 'a' || a == 'A'){
            for(int i = 0 ;i < 10; i++){
                printf("stage %d\n",i+1);
                while(1){
                    switch(act(doing)){
                        case 1 :{
                            ;
                        }
                        case 2:{
                            ;
                        }
                        case 3:{
                            ;
                        }
                        case 4:{
                            ;
                        }
                    }
                }
            }
        }
    }
    else{
        printf("게임을 종료 합니다.\n");
        return 0;
    }
}
