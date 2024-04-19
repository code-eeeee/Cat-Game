#include <iostream>
#include <vector>
#include <random>
using namespace std;

void story_chooser(int story_number, int cat_number){
  string plural;
  if (cat_number > 1){
    plural = "s";
  }
  if (story_number == 1){
    cout << "You were driving along a road when at a corner you see a cardboard box with a fuzzy little tail poking out.You walk closer,and you see" << cat_number << " kitten" << plural <<"!" << endl << endl;
  }else if(story_number == 2){
    cout << "Your cat gives birth to " << cat_number << ". However, your cat sadly passes away, so it is up to you to take care of the kitten" << plural << "." << endl << endl;
  }
  else if(story_number == 3){
    cout << "One day you see a hungry kitten in your yard. Out of sympathy, you run to the store to buy cat food for the kitten.It diligently eats from the bowl, and leaves. Next day, the kitten comes back with a friend. A week later, you are feeding " << cat_number << " cat" << plural << "." << endl << endl;
  }
} 
// With the cat number, it will print out a random story chosen in the main function with the right number of cats.


bool loop(string cat, string answer_20, string answer_21, string answer_22){
  vector<string> three_items = {"Salt", "Oil", "Sugar"};
  for(int i = 0; i < three_items.size(); i++){
    if (answer_20 == three_items[i] || answer_21 == three_items[i] || answer_22 == three_items[i]){
      
    } else{
      return false;
      break;
    }
  }
}

bool check(string input, string answer_slot, string answer_slot1){
  if (input == answer_slot || input == answer_slot1 ){

      
      return true;
  }else{
    
    return false;
  }
} 
// This function checks if the user input is the same as in the two answer slots. If it is, it returns true. If not it returns false

bool challenge(string cat, string choice){
  if (choice == "Unscramble"){
    
    string answer;
    cout << cat << " accidentally knocks falls into your pool. You have to save " << cat << ". Unscramble the word correctly or " << cat << " will lose a life: E L F E I N" << endl << endl; 
    
    cin >> answer;
    bool result = check(answer, "FELINE", "feline");
    if (result == true){
      cout << "You saved " << cat << "!" << endl << endl;
      return true;
    } else{
      cout << "You failed to save " << cat << ". " << cat << " lost a life." << endl << endl;
      return false;
    }
    
  } else if (choice == "Math_Problem"){
    
    string answer_2;
    
    cout << cat << " swallowed a plastic mouse from its food. You have to stop it from choking. " << cat << ". Solve the math problem or  " << cat << " will lose a life: 4 /(x^2*4*16)^1/2 = 2" << endl << "x = " << endl << endl; 
    
    cin >> answer_2;
    bool result = check(answer_2, "1/4", ".25");
    
    if (result){
      cout << "You saved " << cat << "!" << endl;
      return true;
    } else{
      cout << "You failed to save " << cat << ". " << cat << " lost a life." << endl << endl;
      return false;
    }
    
  } else if (choice == "T/F"){
  string answer_3;
  cout << "In a rush to get to work, you forgot to feed " << cat << ". Answer the question correctly to  save " << cat <<"'s life" << endl << "(True or False) Cats taste sweetness" << endl << endl; 
  cin >> answer_3;

  bool result = check(answer_3, "False", "false");
    if (result){
      cout << "You saved " << cat << "!" << endl;
      return true;
    } else{
      cout << "You failed to save " << cat << ". " << cat << " lost a life." << endl << endl;
      return false;
    }
    
  } else if (choice == "Complete_Word"){
    string answer_4;
    string answer_5;
    string answer_6;
     cout << "You decided to take a trip with your significant other and agreed to leave " << cat << " at you neighbors house. When you come back from the cruise, your elderly neighbor forgot where " << cat << " went. Fill in the blank to  find " << cat <<"." << endl << "(grumpy, love, sleepy) Cats _____ sleeping. They are always ______. However, if you wake them from their nap they become ______" << endl << endl;
    
    cin >> answer_4;
    cin >> answer_5;
    cin >> answer_6;

    bool result = check(answer_4, "love", "Love");
    bool result2 = check(answer_5, "sleepy", "Sleepy");
    bool result3 = check(answer_6, "grumpy", "Grumpy");
    
    if (result && result2 && result3){
      cout << "You saved " << cat << "!" << endl;
      return true;
    } else{
      cout << "You failed to save " << cat << ". " << cat << " lost a life." << endl << endl;
      return false;
    }
    
  }  else if (choice == "Copy"){
    
    string answer_7 = {};
    string answer_8 = {};
    string answer_9 = {};
    string ears = " /\\_/\\ ";
    string nose = "( o.o )";
    string mouth = " > ^ <";
    cout << cat << " is hurting another cat. Copy the art to save " << cat <<"." << endl << ears << endl << nose << endl << mouth << endl << "Hit enter after each line and use a aprostrophe '' for spaces" << endl << endl;

    /* /\_/\
    //( o.o )
    // > ^ <
     Art was made openly accessible by https://www.asciiart.eu/
    */
    
    cin >> answer_7;
    cin >> answer_8;
    cin >> answer_9;

    bool result = check(answer_7, "'/\\_/\\'", "'/\\_/\\'");
    bool result2 = check(answer_8, "('o.o')", "('o.o')");
    bool result3 = check(answer_9, "'>'^'<'", "'>'^'<'");
    

    if (result && result2 && result3){
      cout << "You saved " << cat << "!" << endl;
      return true;
    } else{
      cout << "Even if there is a space at the end, you have to type the astrophe" << endl << endl;
      cout << "You failed to save " << cat << ". " << cat << " lost a life." << endl << endl;
      return false;
    }
    
  } else if (choice == "Story"){
    
    string answer_10 = {};
    string answer_11= {};
    string answer_12 = {};
    cout << cat << " is very sick and needs to go to the vet. However, you have to present a new project at work. There is nobody at home who could take " << cat <<"? Do you take " << cat << " to the vet instead of going to work? (True or False) " << endl;  

    cin >> answer_10;
    bool result_1 = check(answer_10, "True" , "TRUE");
    if (!result_1){
      cout << "You failed to save " << cat << ". " << cat << " lost a life." << endl;
      return false;
    }

    cout << "Good job, you could have asked someone else to present your project. You go to the vet and they say that " << cat << " needs to drink more lactose and recommend that you give " << cat << " milk. Do you give " << cat << " milk when you come back home? (True or False)" << endl;
    
    cin >> answer_11;
    bool result_2 = check(answer_11, "False" , "false");
    if (!result_2){
      cout << "You failed to save " << cat << ". " << cat << " lost a life." << endl;
      return false;
    }
    
    cout << "Good job, you remember reading in a cat care guide that you should never feed cats milk because they are lactose tolerant. You call up your cousin and she prescribes medicine to give to " << cat << ". However, it is pouring raining outside. Do you run out to get " << cat << " medicine? (True or False)" << endl;
    
    cin >> answer_12;
    bool result_3 = check(answer_12, "False" , "false");
    if (!result_3){
      cout << "You failed to save " << cat << ". " << cat << " lost a life." << endl;
      return false;   
    }
    return true;
    
  } else if (choice == "List"){
    
    string answer_13;
    string answer_14;
    
     cout << "You need to give " << cat << " complete the list to wrestle " << cat << " in the bath. (The animals are in alphabetical order and each underscore represents a letter." << endl << endl;
    cout<< "[Cheetah, ______, Jaguar, Leopard, ____, Lynx, Panther, Tiger]"<< endl;
    
    cin >> answer_13;
    cin >> answer_14;
    bool result = check(answer_13,"Cougar" , "cougar");
    bool result2 = check(answer_14,"Lion" , "lion");
    
    if(result && result2){
      cout << "You saved " << cat << "!" << endl;
      return true;
    } else {
      cout << "You failed to save " << cat << ". " << cat << " lost a life." << endl;
      return false;
    }
    
  } else if (choice == "Word_Search"){
    string answer_15;
    string answer_16;
    string answer_17;
    cout << cat << " scratched your expensive furniture and you need to replace it before your family comes over. Complete the word search to replace the furniture. [Cat, Paw, Fish]" << endl << endl;
    cout << "01 02 03 04 05" << endl << "06 07 08 09 10" << endl << "11 12 13 14 15" << endl << "16 17 18 19 20" << endl << "21 22 23 24 25" << endl << "With this table, find the word below and match the corresponding numbers above. Separate each number by a comma. You should have 3 lines for 3 words in order of the words listed above. Ex. Now -> 05,09,13" << endl << endl;
    cout << "P K Z T N" << endl << "O A A O V"<< endl << "A C W I C" << endl << "F I S H O" << endl << "W N O C Q" << endl;

    /*P	K	Z	T	N
    O	A	A	O	V
    A	C	W	I	C
    F	I	S	H	O
    W	N	O	C	Q */
    // Word Search made openly accessible by https://puzzlemaker.discoveryeducation.com/word-search/result

    cin >> answer_15;
    cin >> answer_16;
    cin >> answer_17;

    bool result = check(answer_15, "12,08,04", "12,8,4");
    bool result2 = check(answer_16, "01,07,13", "1,7,13");
    bool result3 = check(answer_17, "16,17,18,19", "16,17,18,19");
    
    if (result && result2 && result3){
      cout << "You saved " << cat << "!" << endl;
      return true;
    } else {
      cout << "Next time you input the words in same order as they are listed" << endl;
      cout << "You failed to save " << cat << ". " << cat << " lost a life." << endl;
      return false;
      
    }  

  } else if (choice == "Baking"){
    string answer_18;
    string answer_19;
    string answer_20;
    string answer_21;
    string answer_22;
    string answer_23;
    
    
    cout << "There are no cat food at your house; however, " << cat << " is hungry. Bake a cake for " << cat <<". So, you go get your grandmother's cookbook for the cake recipe, but " << cat << " tore apart. Try to recreate the bread from memory using: Salt, Oil, Flour, Yeast, Sugar and Water." << endl << endl;
    cout << "You remember grandma putting a brown powder in the bowl and poured this liquid in it, and it was supposed to foam because it is alive. "<< endl;
    cout << "What liquid should you put in the bowl?" << endl;
    cin >> answer_18;
    cout << "What was the brown powder, you remembered?" << endl;
    cin >> answer_19;
    cout << "After you put " << answer_18 << " and " << answer_19 << " in the bowl, you are certain that you put everything but the main ingredient in the bowl. What 3 things should you add to the bowl>" << endl << endl;
    cin >> answer_20;
    cin >> answer_21;
    cin >> answer_22;
    cout << "After mixing the other ingredients, your little brother, who was 3 years younger, would come up and try to stick his hand into the mixing bowl. To remember how many cups of flour you need, grandma would say the number was when you would bake with grandma but your little brother was not born yet." << endl << "How many cups of flour do you put in?" << endl;
    cin >> answer_23;
    cout << "After letting the bread batter sit for an hour, you knead it and put it in the oven. " << cat << " is scratching your legs eager for food." << endl << endl;

    bool result = check(answer_18, "Water", "water");
    bool result2 = check(answer_19, "Yeast", "yeast");

    if (result && result2){
      bool ingredient_check = loop(cat, answer_20,answer_21,answer_22);
      if (ingredient_check && answer_23 == "3"){
        return true;
      } else {
        cout << "You failed to save " << cat << ". " << cat << " lost a life." << endl;
        return false;
      }
    } else {
      cout << "You failed to save " << cat << ". " << cat << " lost a life." << endl;
      return false;
    }
  }
} 
// 9 challenges that incorporates a cat and a random choice of the 9 challenges. The user has to input the answer to the challenge. If the user inputs the correct answer, they win the challenge and the cat is saved. If the user inputs the wrong answer, the cat loses a life .

string shop(int points){
  cout  << "Pick a powerup to see what it does!" << endl << endl;
  cout <<"(A) Extra Life: 10" << endl << endl << "(B) Cat Food: 5" << endl << endl << "(C) Immunity Collar: 8" << endl << endl << "Type Q to escape the shop" << endl << endl;
  string choice;
  cin >> choice;
  if(choice == "Q"){
    return "false";
  }

  if (choice == "A"){
    return "A";
  } else if(choice == "B"){
    return choice;
  } else if(choice == "C"){
    return choice;
  }
}
// Takes in how many points the user has and gives the user a choice of 3 powerups. Each powerup has a different effect on the user. The user choses which one and returns it back to the main function

int main() {
  int cat_number = 0;
  int multiplier = 1;
  int immunity = 0;
  int challenge_number = 3;
  vector<int> cat_lives = {};
  vector<string> cat_names = {};
  vector<int> points_till_next_level =  {};
  vector<int> level {};
  int purchase_points = 0;
  int max_maps = 9;
  vector<string> maps = {"Unscramble", "Math_Problem", "T/F", "Complete_Word", "Copy", "Story", "List", "Word_Search", "Baking"};
  bool alive = true;
  
  cout << "How many cats do you want to adopt?" << endl << endl;
  cin >> cat_number;
  random_device rd;
  mt19937 gen(rd());
  
  uniform_int_distribution<> story(1, 3);
  int story_number = story(gen);
  story_chooser(story_number, cat_number);



  for (int i = 0; i < cat_number; i++){
    string cat_name = "cat";
    cout << "What would you like to name cat number " << i + 1 << "?" << endl << endl;
    cin >> cat_name;
    cat_names.push_back(cat_name);
    points_till_next_level.push_back(0);
    level.push_back(0);
    cat_lives.push_back(3);
  }
  // Puts all the cat names in an ordered vector where other properties of the cat like lives and levels can be found by tbe index of the cat in the cat_names vector. Each cat starts with 0 points, Level 0, and 3 lives.
  
    vector<string> cat_queue = cat_names;
    int cat_turn = cat_number;

    //The cat_queue is all the cats in the game, and if one is selected for a challenge, it is removed from the vector so other cats can be chosen without repeats. The cat_turn is the number of cats that are in the game and one is removed after chosing a cat.

  while (alive) {
    
    uniform_int_distribution<> choose_victim(1, cat_turn);
    int index_cat_in_question = choose_victim(gen) - 1 ;
    //Choses the index of the cat
    int index_cat_in_main_array;
    string cat_in_question = cat_queue[index_cat_in_question];
    //Retrieves the name of the cat at that index
    cat_queue.erase(cat_queue.begin() + index_cat_in_question);
    cat_turn--;
    //Erases from vector and the number of cats left in the rotation

    for(int i = 0; i < cat_number; i++){
      if (cat_names[i] == cat_in_question){
        index_cat_in_main_array = i;
      }
    }
    //Retrieves the index of the cat in the main cat_names array

    uniform_int_distribution<> challenge_chooser(1, max_maps);
    int choice = challenge_chooser(gen) - 1;
    max_maps --;
    //Choses a random challenge from the 9 challenges. The max_maps is the number of challenges left in the rotation.
    
    
    int cat_in_question_lives = cat_lives[index_cat_in_main_array];
    bool result = challenge(cat_in_question, maps[choice]);
    maps.erase(maps.begin() + choice);
    //Retrieves the lives of the cat and calls the challenge function passing the name of the cat and map chosen. The map is then erased from the vector so it cannot be chosen again.

    if (result == false){
      if (immunity == 0){
        cat_lives[index_cat_in_main_array] -= 1;;
      } else {
        immunity --;
      }
      } 
    else{ 
      purchase_points += 10*multiplier;
      points_till_next_level[index_cat_in_main_array] += 10*multiplier;
      cout << cat_in_question << endl;
      multiplier = 1;
    }
    //If the challenge function returns false, the cat loses a life. If the challenge function returns true, the cat recieves points. However, if a cat has an immunity power-up, then no lives are lost and the immunity is decremented. 
    
    if(points_till_next_level[index_cat_in_main_array] / 15> level[index_cat_in_main_array]){
      level[index_cat_in_main_array] = points_till_next_level[index_cat_in_main_array] / 15;
      cout << cat_in_question << "'s Points: "<< points_till_next_level[index_cat_in_main_array] << endl;
      cout  << cat_in_question << " has leveled up!"<< endl << cat_in_question << " is now level " << level[index_cat_in_main_array] << endl ;
    }

    // If the number of points the cat has divided by 15 is more than the level of the cat,the cat levels up and its new level is set to the number of points the cat has divided by 15. The cat's level is also printed out.

    if (level[index_cat_in_main_array] >= 3){
      cout << "You reached the final level for " << cat_names[index_cat_in_main_array] << ". It is time to let " << cat_names[index_cat_in_main_array] << endl << ("You no longer have to solve problems for that cat") << endl << endl;
      cat_names.erase(cat_names.begin() + index_cat_in_main_array);
      cat_lives.erase(cat_lives.begin() + index_cat_in_main_array);
      cat_number --;
      if (cat_names.size() == 0){
        cout << "You have saved all the cats. You win!" << endl;
    break;
      }
    }

    // If the cat's level is 3 or more, the cat levels up and the cat is removed from the game. If there are no cats in the cat_names vector, the user wins.
    
    if (cat_turn == 0){
      cat_turn = cat_number;
      cat_queue = cat_names;
    }
    //If all the cats had their turn, the cat_turn is set to the number of cats and the cat_queue is set to the cat_names vector.

    if (max_maps == 0){
      max_maps = 9;
      maps = {"Unscramble", "Math_Problem", "T/F", "Complete_Word", "Copy", "Story", "List","Word_Search", "Baking"};
      
    }

    // The maps are reset if the max_maps is 0.
    
    for (int c = 0; c < cat_number; c++){
      if (cat_lives[c] == 0){
        cout << cat_names[c] << " has died. Try again"<< endl;
        alive = false;
      }
       cout << cat_names[c] << " has "<< cat_lives[c] << " lives."<< endl << endl;
    }

    //Checks to see if any of the cats have died and repeats through all the cats to display their lives. If any cat dies, the game ends.
    
    uniform_int_distribution<> shop_chance(1, 4);
    // Randomly choses a number from 1 to 4 and if the number is 1, the user is given a chance to enter the shop.
    int shop_result = shop_chance(gen);
    int close_out = false;
    if(shop_result == 1){
      cout << "You have " << purchase_points << " points. Would you like to buy something? (Y/N)" << endl;
      string shop_choice;
      cin >> shop_choice;
      if (shop_choice == "Y"){
        while (!close_out){
          // Continues displaying the shop until the user chooses to leave.
          string result = shop(purchase_points);
          if (result == "A"){
            if(purchase_points >= 10){
              purchase_points -= 10;
            cout << "Which cat would you like to give the life to?" << endl;
              string answer;
              cin >> answer;
              for (int i = 0; i < cat_number; i++){
                if (answer == cat_names[i]){
                  cat_lives[i] += 1;
                }
              }
            } else {
              cout << "You do not have enough points to buy this item." << endl;}
          } else if(result == "B") {
            if(purchase_points >= 5){
              purchase_points -= 5;
              multiplier++;
            }else {
                cout << "You do not have enough points to buy this item." << endl;}
          }else if(result == "C") {
            if(purchase_points >= 8){
              purchase_points -= 8;
              immunity += 1;
            }else {
                  cout << "You do not have enough points to buy this item." << endl;}
          }else if (result == "false"){
            close_out = true;
          }
    
        }
      }
      
    }

    
  }


  
}