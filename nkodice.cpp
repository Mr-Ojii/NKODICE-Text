#include <iostream>
#include <string>
#include <ctime>

int main(int argc,char* argv[]) {
    int dice=5;

    if(argc>1){
        dice = std::atoi(argv[1]);
        
        if(dice < 1)
        {
            std::cerr << "無効な引数です。ダイス数を5とします。" << std::endl;
            dice = 5;
        }
    }

    std::string tmplist[dice];

    std::string list[] = {"う","お","こ","ち","ま","ん"};
    int listnum[6]={0,0,0,0,0,0};


    srand(time(NULL));

    for(int i=0;i<dice;i++){
        int tmp = rand()%6;
        tmplist[i]=list[tmp];
        listnum[tmp]++;
    }

    for(int i=0;i<dice;i++){
        std::cout << tmplist[i];
    }
    std::cout << std::endl;

    if(listnum[0]>0&&listnum[3]>0&&listnum[5]>0) {
        std::cout << "UNCHI" << std::endl;
    }

    if(listnum[0]>0&&listnum[2]>0&&listnum[5]>0) {
        std::cout << "UNKO" << std::endl;
    }

    if(listnum[4]>0&&listnum[2]>0&&listnum[5]>0) {
        std::cout << "MANKO" << std::endl;
    }

    if(listnum[1]>0&&listnum[4]>0&&listnum[2]>0&&listnum[5]>0) {
        std::cout << "OMANKO" << std::endl;
    }

    if(listnum[3]>0&&listnum[2]>0&&listnum[5]>0) {
        std::cout << "CHINKO" << std::endl;
    }

    if(listnum[3]>1&&listnum[5]>1) {
        std::cout << "CHINCHIN" << std::endl;
    }

    if(listnum[1]>0&&listnum[3]>1&&listnum[5]>1) {
        std::cout << "OCHINCHIN" << std::endl;
    }

    return 0;
}