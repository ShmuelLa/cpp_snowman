#include "snowman.hpp"
#include <cstring>
#include <iostream>
#include <array>
#include <stdexcept>
#include <exception>
using namespace std;

namespace ariel { 
    string snowman (int input) {
        const int negative_check = 0;
        const int input_length = 8;
        if (input <= negative_check || to_string(input).length() != input_length) {
            throw invalid_argument("Invalid input, please insert a non-negative 8-digit integer");
        }
        const int limb_length = 4;
        const int divider = 10;
        const int H = 7;
        const int N = 6;
        const int L = 5;
        const int R = 4;
        const int X = 3;
        const int Y = 2;
        const int T = 1;
        const int B = 0;
        int tmp_input = input;
        array<int, input_length> pos = {};
        array<string, limb_length> hats = {"      \n _===_\n", "  ___ \n .....\n", "   _  \n  /_\\ \n", "  ___ \n (_*_)\n"};
        array<string, limb_length> nose = {",", ".", "_", " "};
        array<string, limb_length> left_eye = {"(.", "(o", "(O", "(-"};
        array<string, limb_length> right_eye = {".)", "o)", "O)", "-)"};
        array<string, limb_length> left_arm = {" ", "\\", " ", " "};
        array<string, limb_length> left_arm2 = {"<", " ", "/", " "};
        array<string, limb_length> right_arm = {" \n", "/\n", " \n", " \n"};
        array<string, limb_length> right_arm2 = {">\n", " \n", "\\\n", " \n"};
        array<string, limb_length> torso = {"( : )", "(] [)", "(> <)", "(   )"};
        array<string, limb_length> base = {" ( : )", " (\" \")", " (___)", " (   )"};
        for (int i=0; i<input_length; i++) {
            pos.at(i) = tmp_input % divider;
            tmp_input /= divider;
        }
        return string(hats.at(pos.at(H)-1) + left_arm.at(pos.at(X)-1) + left_eye.at(pos.at(L)-1) + nose.at(pos.at(N)-1) 
                        + right_eye.at(pos.at(R)-1) + right_arm.at(pos.at(Y)-1) + left_arm2.at(pos.at(X)-1) 
                        + torso.at(pos.at(T)-1) + right_arm2.at(pos.at(Y)-1) + base.at(pos.at(B)-1) + "\n");
    }
}

// int main() {
//     const int test = 24232222;
//     cout << ariel::snowman(test);
// }