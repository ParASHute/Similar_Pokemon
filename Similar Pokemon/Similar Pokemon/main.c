#include <stdio.h>
#include <stdlib.h>
// 입력받고 순서 짜고 맞춰서 계산 떄려 진행하고
int Pdoing, Cdoing;
int cHP = 100 ,cSF = 10, cNF = 10, cSD = 10, cND = 10, cSP = 10;
int pHP = 100 ,pSF = 10, pNF = 10, pSD = 10, pND = 10, pSP = 10;
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
int computer_act(int com){
    com = rand()%4;
    return com + 1;
}
int who_fst(int c, int p){
    while(1){
        int com = rand()%10;
        int per = rand()%10;
        if(com * c > per * p){
            return -1;
            break;
        }
        if(com * c < per * p){
            return 1;
            break;
        }
    }
}
//int critycal(int cri){ //( 거기서 걸리면 공격력 + 주사위 통해서 나온 딜 ) * 1.5 + ( 주사위 에서 나온 딜 * 2.0 )
//    int r = rand()%100;
//    if(r < 10){ //100까지 난수 선언 후 10 이하로 설정
//
//    }
//}
int defence(int def){ //내 방어력에 * 각 방어에 대한 난수 선언(10 * 난수)
    int r = rand()%10;
    return def * r;
}
int demage(int dem){ //내 방어력에 * 각 방어에 대한 난수 선언(10 * 난수)
    int r = rand()%10;
    return dem * r;
}
//int combat(){
//
//}
//int stage_clear(){
//
//}
int main() {
    char a;
    printf("게임을 시작 하시려면  'A'를 입력해 주세요 : ");
    scanf("%c",&a);
    getchar();
    if(a == 'a' || a == 'A'){
        printf("---------------------------------------------------게임을 시작하기전 주의 사항---------------------------------------------------\n");
        printf("이제막 코딩으로 뭔가를 만들어 보겠다고 시작한 취직이 급해진 학부생의 개인 프로젝트입니다.\n");
        printf("총 10번의 전투를 치루며, 전투 방식은 포켓몬과 유사합니다. 하지만, 기술은 4가지가 고정이며, 1개의 물리공격, 1개의 특수 공격, 1개의물리방어, 1특수방어입니다.\n");
        printf("난수 생성에 따라 공방이 이뤄 지며, 우선권은 랜덤하게 가져가며 단계가 올라갈수록 확률은 떨어 집니다.\n");
        printf("컴퓨터의 공방은 난수에 따라 달라지며, 처음엔 50퍼샌트 부터 시작해 단계가 진행 될수록 공격이 나올 확률이 올라갑니다.\n");
        printf("한번의 전투가 끝나면 원하는 스탯(HP, 물공, 특공, 특방, 스피드 중 택 1) 한가지를 +10 할수 있습니다.\n");
        printf("--------------------------------------------------------------------------------------------------------------------------\n");
        printf("주의 사항을 다 읽었으면 한번더 A를 입력해 주십시요 : ");
        scanf("%c",&a);
        getchar();
        if(a == 'a' || a == 'A'){
            for(int i = 0 ;i < 10; i++){
                printf("stage %d\n",i+1);
                while(1){
                    int turn = 0, Player = 0, Computer = 0;
                    printf("내 HP : %d   컴퓨터의 HP : %d\n",pHP,cHP);
                    if(who_fst(cSP, pSP) > 0){
                        if(Pdoing == 1){
                            if(Cdoing == 1){
                                cHP -= demage(pNF);
                                if(cHP < 0) break;
                                pHP -= demage(cNF);
                            }
                            if(Cdoing == 2){
                                cHP -= demage(pNF);
                                if(cHP < 0) break;
                                pHP -= demage(cSF);
                            }
                            if(Cdoing == 3){
                                int dill = demage(pNF) - defence(cND);
                                if(dill > 0) cHP -= dill;
                                else;
                            }
                            if(Cdoing == 4){
                                cHP -= demage(pNF);
                            }
                        }
                        if(Pdoing == 2){
                            if(Cdoing == 1){
                                cHP -= demage(pSF);
                                if(cHP < 0) break;
                                pHP -= demage(cNF);
                            }
                            if(Cdoing == 2){
                                cHP -= demage(pSF);
                                if(cHP < 0) break;
                                pHP -= demage(cSF);
                            }
                            if(Cdoing == 3){
                                cHP -= demage(pSF);
                            }
                            if(Cdoing == 4){
                                int dill = demage(pSF) - defence(cSD);
                                if(dill > 0) cHP -= dill;
                                else;
                            }
                        }
                        if(Pdoing == 3){
                            if(Cdoing == 1){
                                int dill = demage(cNF) - defence(pND);
                                if(dill > 0) pHP -= dill;
                                else;
                            }
                            if(Cdoing == 2){
                                pHP -= demage(cSF);
                            }
                            if(Cdoing == 3){
                                
                            }
                            if(Cdoing == 4){
                                
                            }
                        }
                        if(Pdoing == 4){
                            if(Cdoing == 1){
                                pHP -= demage(cNF);
                            }
                            if(Cdoing == 2){
                                int dill = demage(cSF) - defence(pSD);
                                if(dill > 0) pHP -= dill;
                                else;
                            }
                            if(Cdoing == 3){
                                
                            }
                            if(Cdoing == 4){
                                
                            }
                        }
                    }
                    else{
                        if(Pdoing == 1){
                            if(Cdoing == 1){
                                
                            }
                            if(Cdoing == 2){
                                
                            }
                            if(Cdoing == 3){
                                
                            }
                            if(Cdoing == 4){
                                
                            }
                        }
                        if(Pdoing == 2){
                            if(Cdoing == 1){
                                
                            }
                            if(Cdoing == 2){
                                
                            }
                            if(Cdoing == 3){
                                
                            }
                            if(Cdoing == 4){
                                
                            }
                        }
                        if(Pdoing == 3){
                            if(Cdoing == 1){
                                
                            }
                            if(Cdoing == 2){
                                
                            }
                            if(Cdoing == 3){
                                
                            }
                            if(Cdoing == 4){
                                
                            }
                        }
                        if(Pdoing == 4){
                            if(Cdoing == 1){
                                
                            }
                            if(Cdoing == 2){
                                
                            }
                            if(Cdoing == 3){
                                
                            }
                            if(Cdoing == 4){
                                
                            }
                        }
                    }
                    if(cHP < 0 || pHP < 0) break;
                }
                if(pHP < 0) printf("패배 하였습니다. 게임을 다시 시작해 주십쇼");
                if(cHP < 0){
                    pHP = 100;
                    cHP = 100;
                    printf("승리 하였습니다. 다음 스태이지를 진행 하시려면 'a'를 입력해 주십시오 : "); // 하기전에 +능력치 고르고
                    scanf("%c",&a);
                    if(a == 'a') continue;
                    else break;
                }
            }
        }
        else{
            printf("게임을 종료 합니다.\n");
            return 0;
        }
    }
}
