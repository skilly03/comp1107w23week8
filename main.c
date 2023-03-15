#include <stdio.h>
#include "helpers.h"
#include <stdbool.h>
#include "canada.h"
#include <math.h>
#include <ctype.h>
#include <time.h>

int modulo_testing();

int integer_division_testing();

int float_cast_to_integer_division_testing();

float for_loop_testing();

float integer_float_addition();

string print_ascii_string_value();

void change_machine();

string rock_paper_scissors();

void vigenere_cipher();

string rock_paper_scissors_choices();

bool is_in_ascii_range(char ltr);

char vigenere_offset_letter(char msgLtr, char keyLtr);

void mario_wins_level();

int main(int argc, char *argv[])
{
    string testString = "hey I'm observable";

    printf("Choose one of the following options:\n");
    printf("0. Modulo Calculator\n");
    printf("1. Integer Division Calculator\n");
    printf("2. Float & Integer Calculator\n");
    printf("3. For Loop Counter\n");
    printf("4. Integer and Float Addition \n");
    printf("5. Print ASCII values of letters in a string\n");
    printf("6. Print the provinces of Canada\n");
    printf("7. Change Machine\n");
    printf("8. Rock Paper Scissors\n");
    printf("9. Vigenere Cipher\n");
    printf("10. Mario wins a level\n");

    int selection = get_int("What is your selection?\n");

    // TODO:: Write a 11 case switch statement to run the appropriate function.
    switch (selection)
    {
    case 0:
        modulo_testing();
        break;
    case 1:
        integer_division_testing();
        break;
    case 2:
        float_cast_to_integer_division_testing();
        break;
    case 3:
        for_loop_testing();
        break;
    case 4:
        integer_float_addition();
        break;
    case 5:
        print_ascii_string_value();
        break;
    case 6:
        print_provinces();
        break;
    case 8:
        rock_paper_scissors();
        break;
    case 9:
        vigenere_cipher();
        break;
    case 10:
        mario_wins_level();
    default:
        break;
    }

    return 0;
}

int modulo_testing()
{

    // TODO:: Get 2 ints and run the modulo calculation
    // TODO:: Print out the result using the commented out printf
    int x = get_int("Enter the dividend you want the remainder of\n");
    int y = get_int("Enter the divider you want the remainder of\n");

    int modulo = x % y;

    printf("The remainder of %d divided by %d is %d\n", x, y, modulo);
    return modulo;
}

int integer_division_testing()
{

    // TODO:: Get 2 ints and run the division calculation
    // TODO:: Print out the result using the commented out printf
    int x = get_int("Enter the dividend you want the remainder of\n");
    int y = get_int("Enter the divider you want the remainder of\n");

    int result = x / y;

    printf("The result of %d divided by %d is %d", x, y, result);

    return result;
}

int float_cast_to_integer_division_testing()
{

    // TODO:: Get 2 FLOATS and run the division calculation
    // TODO:: Print out the result using the commented out printf
    // You must use an explicit cast ie: (int)
    float x = get_float("Enter the dividend you want the remainder of\n");
    float y = get_float("Enter the divider you want the remainder of\n");

    float result = x / y;

    int int_result = (int)result;

    printf("The result of %f divided by %f is %f, once cast to an int the result is %d\n", x, y, result, int_result);

    return 1;
}

float for_loop_testing()
{
    float counter = get_float("What should be the initial value of the counter?\n");

    int loop_count = get_int("How many times should the loop run?\n");

    float increment = get_float("How much should the counter increment by?\n");

    bool is_positive = get_char("Should the counter decrement instead of incrementing? y / n \n") == 'n' ? true : false;

    // If is not positive then make your increment negative
    if (!is_positive)
    {
        increment = increment * -1;
    }

    // This will run the same amount of times as the int specified in loop_count
    for (int iterator = 0; iterator < loop_count; iterator++)
    {
        // Update the value of counter every time the loop runs
        counter = counter + increment;
    }

    printf("The final value of the counter is %f\n", counter);

    return counter;
}

float integer_float_addition()
{
    // TODO:: Get an int and a float and add them together, make sure the result comes out as a float
    //  TODO:: Get 2 FLOATS and run the division calculation
    //  TODO:: Print out the result using the commented out printf
    //  You must use an explicit cast ie: (int)
    int x = get_int("Enter an integer you want summed\n");
    float y = get_float("Enter an float you want summed\n");

    float result = x + y;
    printf("The result of %d plus %f is %f", x, y, result);

    return 1.0;
}

string print_ascii_string_value()
{
    // TODO:: Write a while loop that takes a string that you query from the user
    //        then print out each letter with their matching ascii value
    // TODO:: Also print out the characters position in the string
    string str = get_string("What string do you want to know the ASCII values of the letters of?");

    int strSize = strlen(str);

    int i = 0;

    // While loop will run until the iterator i is equal to the string length
    while (i < strSize)
    {
        // The first char of str can be accessed with str[0];
        //  printf statement for each letter
        int asciiVal = str[i];
        printf("The char at position %d is %c and the ASCII value is %d\n", i, str[i], asciiVal);
        i++;
    }
}

void change_machine()
{

    int coins[] = {25, 10, 5};
    int coinCounts[] = {0,
                        0,
                        0};

    // TODO: Get a float from the user and return the change needed for that amount IE: 2.95
    //       returns 3 quarters and 2 dimes.

    // Optional TODO::The government makes businesses round up the nickels for numbers ending in 3 and 8.
}

string rock_paper_scissors()
{   
    // TODO:: Query the user for an int between 1 and 3 for their choice of rock, paper scissors.
    //       Use a do while loop to guarantee their input is valid

    
    int number_choice;
    int ai_number_choice;
    
    do{
        number_choice = get_int("Make a choice:\n 1.Rock\n 2.Paper\n 3.Scisors\n");
        // While the number choice is smaller than 0 or the number choice is greater than 4 keep asking,
        // If both of these are false then we can stop looping.
    }while(number_choice < 0 || number_choice > 4);




    // Generates a pseudo random int between 0 and 29
    // Use this to determine the "AI" choice
    srand ( time(NULL) ); 
    int random = rand() % 30;

    ai_number_choice = (random + 10) / 10 ;

    string ai_choice = rock_paper_scissors_choices(ai_number_choice);
    string choice = rock_paper_scissors_choices(number_choice);

    // TODO:: Write the game logic with if checks and determine who won

    if (choice == ai_choice)
    {
        printf("Draw! You both played %s!", choice);
        return choice;
    }

    bool won;
    if (choice == "paper")
    {
        if (ai_choice == "scissors")
        {
            won = false;
        }
        else
        {
            won = true;
        }
    }

    if (choice == "paper")
    {
        if (ai_choice == "scissors")
        {
            won = false;
        }
        else
        {
            won = true;
        }
    }
    if (choice == "scissors")
    {
        if (ai_choice == "rock")
        {
            won = false;
        }
        else
        {
            won = true;
        }
    }

    if (won)
    {
        printf("You won! You chose %s, and the AI chose %s", choice, ai_choice);
    }
    else
    {

        printf("You lost! You chose %s, and the AI chose %s", choice, ai_choice);
    }

    return choice;


}

// Convenience function you can call
string rock_paper_scissors_choices(int choice)
{
    // No need to break out of cases when you return since no code runs after that.
    switch (choice)
    {
    case 1:
        return "rock";

    case 2:
        return "paper";

    case 3:
        return "scissors";

    default:
        break;
    }
}

void vigenere_cipher()
{
    string message = get_string("What is the message to encode? ");

    string key = get_string("What is your encoding key? ");

    // TODO:: Write the for loop for the vigenere cipher
     // strlen does not return the length including the terminating character
    int message_length = strlen(message) + 1; //adding one for the lack of terminating character.

    int keyLength = strlen(key);

    char encoded_message[message_length];

    for (int i = 0; i < message_length; i++)
    {
        //Using modulo with the key's length keeps the index in a range that exists for the key's char array.
        if (is_in_ascii_range(message[i]) && is_in_ascii_range(key[i % keyLength]))
        {
            encoded_message[i] = vigenere_offset_letter(message[i], key[i % keyLength]);
        }
        else
        {
            encoded_message[i] = message[i];
        }
    }

    printf("Your encoded message is %s\n", encoded_message);

}

// Convenience function you can call
char vigenere_offset_letter(char msgLtr, char keyLtr)
{
    // Determine if you need to offset by 97 or 65 to make the choice between 0 for 'a' and 25 for 'z'
    // Reminder upercase 'A' is ASCII 65 and lowercase 'a' is 97
    int capital_offset = islower(msgLtr) ? 97 : 65;

    // The key offset doesn't matter because you only offset by the characters value, doesn't matter if it's a capital letter
    int key_offset = tolower(keyLtr) - 97;

    // The letters position between 0 and 25
    int ltr_position = msgLtr - capital_offset;

    // Modulo the offset by 26 in case the value is more than 25 and we need to circle back,
    // Re-add the capital offset so the shifted message letter regains it's original case
    ltr_position = (ltr_position + key_offset) % 26 + capital_offset;

    return (char)ltr_position;
}

// Convenice function you can call
bool is_in_ascii_range(char ltr)
{
    // Only need to check if between 96 and 123 if you tolower the char
    int lowerLtr = tolower(ltr);

    if (lowerLtr > 96 && lowerLtr < 123)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void mario_wins_level(){
    /**If you have ever played Super Mario Bros., Mario has to climb stairs so he can take the flag down
     * the flag pole at the end of a level. You can see this here: https://www.youtube.com/watch?v=uEDoNp_lQjA
     * you want to write code that will ask how many stairs Mario should climb to finish the level. From this 
     * input you need to write code that will print the right pattern. 
     * Example: if the user chooses 6 the pattern will be 
     *          |>
     *     ##   |
     *    ###   |
     *   ####   |
     *  #####   |
     * ######   |
     *#######   #
     *
     * Extra example: user picks 2
     *       |>
     *  ##   |
     * ###   #
     * 
     * Make sure to check the range! The stairs can only be so low and the console can only print so many lines! **/

    get_int("How many stairs should mario climb to finish the level?");
}