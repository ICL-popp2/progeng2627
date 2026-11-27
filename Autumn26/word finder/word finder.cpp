#include <iostream>
#include <vector>

std::string row_word (int r, const std::vector<std::string>& grid){
    return grid[r];
}

std::string col_word (int c, const std::vector<std::string>& grid){
    std::string op;
    for (int i = 0; i < grid.size(); i++){
        op.push_back(grid[i][c]);
    }
    return op;
}

int contains_word (std::string word, std::string check){
    if (word.size() > check.size()){
        return -1;
    }

    for (int i = 0; i <= check.size() - word.size(); i++){
        if (word == check.substr(i, word.size())){
            return i;
        }
    }
    return -1;
}

void found(std::string word, std::vector<std::string>& words){
    for (int i = 0; i < words.size(); i++){
        if (word == words[i]){
            words.erase(words.begin() + i);
            return;
        }
    }
}

void find_words(
    const std::vector<std::string>& grid, 
    const std::vector<std::string>& words,
    std::vector<std::string>& solution,
    std::vector<std::string>& not_found
){
    //set up solution and not_found
    solution.clear();
    std::string sol;
    for (int j = 0; j < grid[0].size(); j++){
        sol.push_back('#');
    }
    for (int i = 0; i < grid.size(); i++){
        solution.push_back(sol);
    }
    not_found = words;

    //check all rows
    for (int i = 0; i < grid.size(); i++){
        for (int j = 0; j < words.size(); j++){
            int index = contains_word(words[j], row_word(i, grid));
            if (index != -1){
                found(words[j], not_found);
                for (int l = 0; l < words[j].size(); l++){
                    solution[i][index + l] = words[j][l];
                }
            }
        }
    }

    //check all columns
    for (int i = 0; i < grid[0].size(); i++){
        for (int j = 0; j < words.size(); j++){
            int index = contains_word(words[j], col_word(i, grid));
            if (index != -1){
                found(words[j], not_found);
                for (int l = 0; l < words[j].size(); l++){
                    solution[index + l][i] = words[j][l];
                }
            }
        }
    }
}



int main(){

    std::vector<std::string> grid = {
        "xappleg",
        "dzeazkg",
        "zwazzbx",
        "dxnqzoy",
        "qyueytp",
        "pythtyg"
    };

    std::vector<std::string> words = {"peanut", "bot", "mango", "apple", "cinnamon"};
    std::vector<std::string> solution;
    std::vector<std::string> not_found;

    find_words(grid, words, solution, not_found); 

    std::vector<std::string> expected_solution = {
        "#apple#",
        "##e####",
        "##a##b#",
        "##n##o#",
        "##u##t#",
        "##t####"
    };

    std::vector<std::string> expected_not_found = {"mango", "cinnamon"};

    if( (solution == expected_solution) && (not_found == expected_not_found) ){
        std::cout << "test passed" << std::endl;
    }
    else{
        std::cout << "test failed" << std::endl;
    }

    std::cout << "solution:" << std::endl;
    for(int i = 0; i < solution.size(); i++){
        std::cout << solution[i] << std::endl;
    }

    std::cout << "not found:" << std::endl;
    for(int i = 0; i < not_found.size(); i++){
        std::cout << not_found[i] << std::endl;
    }

}