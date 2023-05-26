#include <iostream>

using namespace std;

class InputPassword{
    public:
    InputPassword(std::string aLmao){
        string lmao;
        aLmao = lmao;
        int yes = 0;
        int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    for(int i = 0; i < 10; i++){
        lmao.find(numbers[i]);
        if(lmao.find(numbers[i]) == true){
            yes++;
        } else {
            yes+0;
        }
    }

    //for(int i = 0; i < 10; i++){
        if(yes<1){
            cout << "bad password" << endl;
        } else {
            cout << "good password" << endl;
        }
    //}

    }
};

int main(){

    int choose;
    string password;

    cout << "do you want to check password, type in 1 for yes and click enter, type in another key for no" << endl;
    cin >> choose;

    if(choose == 1){
        cout << "type in password: ";
        cin >> password;
    } else {
        return 0;
    }

    InputPassword newPass(password);


    return 0;
}