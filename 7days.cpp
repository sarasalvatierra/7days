// =====================================================================================================================
// 
//
// =====================================================================================================================


#include <iostream>
#include <string>
#include <iomanip>
 
 
using namespace std;
 
int main()
{
   for (;;)
   {
   
      
   	// --------------------------------------------------------------------------------------------------------------
      // 
      // --------------------------------------------------------------------------------------------------------------
   
      const int Health = 220; 
      const int Choice = 30;
      int Spend = 150, Food = 5, Cleaning = 15, Bill = 15;
      
      int Monday = 0;
      int Tuesday = 1;
      int Wednesday = 2;
      int Thursday = 3;
      int Friday = 4;
      int Saturday = 5;
      int Sunday = 6;
         
      // --------------------------------------------------------------------------------------------------------------
      // 
      // --------------------------------------------------------------------------------------------------------------
         
         
      cout << "Welcome mate, this is the begin of the end of the world while corona is introduce to us. ";
      cout << "You will spend this time with your crazy roommate in college. ";
      cout << "So let's get started, what is your name? " << endl;
      string YourName;
      cin >> YourName;
   
   
      cout << "Are you sure that your name is: " << endl;
      cout << YourName << "? " << "Type Yes or No" << endl;
      string NameTrue;
      cin >> NameTrue;
      
      if (NameTrue == "Yes")
         cout << "Sick name mate!" << endl;
            
      if (NameTrue == "No")
         continue;
   
      cout << "Bet then. " << YourName << " Let's Begin your adventure! " << endl;
      cout << "Press 'Enter/Return' to continue:" << endl;
   
      cin.get();
      cin.get();
   
      cout << "Remember this is Corona time " << YourName << ", so you must choose wisely while you can..." << endl;
      cout << "Press 'Enter/Return' to continue:" << endl;
   
      cin.get();
   	
      cout << "Well before we get going, what is your age if you don't mind: " << endl;
      int AgeNumber = 0;
      cin >> AgeNumber;
      cin.get();
   	
   
      cout << "Since you are " << AgeNumber << ", know that your objective is to survive 7 days of Corona virus in college, while living with your interesting roommate. ";
      cout << "Again choose wisely or you will loose your health..." << endl;
      cout << "Press 'Enter/Return' to continue:" << endl;
   
      cin.get();
   	
   
      cout << "You will have 220 health, you will lose 10 per answer or per bad answer.";
      cout << " If you can't make it to the end of the week with at least some health, means you died. " << endl;
      cout << "So, Good Luck " << YourName <<"."<< endl;
   
   
      cout << "Now " << YourName << " you will get some questions: " << endl;
       
      // --------------------------------------------------------------------------------------------------------------
      // 
      // --------------------------------------------------------------------------------------------------------------
      
      cout << "\nIt is Monday! You will have 3 picks today. Choose wisely!" ;
      cout << "\nThe items below are your daily picks. How would you like you start your day mate? ";
      for (Monday = 1; Monday <= 3; Monday++){
      
         string Question = "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 ";
         string Answer;
         cout << "\n1. Eat, \n2. Go to class (zoom), \n3. Do homework, \n4. Text friends, \n5. Call friends, \n6. Play video games, \n7. Workout, \n8. Clean room (only on M,W,F), \n9. Read(Books), \n10. Party, \n11. Netflix and chill, \n12. Fight roommate, \n13. Sleep ?" << endl;
         cin >> Answer;
      
      
         if (Answer == "1")
            cout << "\nYou have chosen to eat. Let's continue your day! ";
         
         if (Answer == "2")
            cout << "\nYou have chosen to go to your online class on zoom. Let's continue your day! " ;
         
         if (Answer == "3")
            cout << "\nYou have chosen to do your homework. Let's continue your day! " ;
         
         if (Answer == "4")
            cout << "\nYou have chosen to text your friends. Let's continue your day! " ;
         
         if (Answer == "5")
            cout << "\nYou have chosen to call your friends. Let's continue your day! " ;
         
         if (Answer == "6")
            cout << "\nYou have chosen to play video games. Let's continue your day! " ;
         
         if (Answer == "7")
            cout << "\nYou have chosen to workout. Let's continue your day! " ;
         
         if (Answer == "8")
            cout << "\nYou have chosen to clean your room. Let's continue your day! " ;
         
         if (Answer == "9")
            cout << "\nYou have chosen to read books. Let's continue your day! " ;
         
         if (Answer == "10")
            cout << "\nYou have chosen to go party. Have fun! Let's continue your day! " ;
         
         if (Answer == "11")
            cout << "\nYou have chosen to go to your online class on zoom. Let's continue your day! " ;
         
         if (Answer == "12")
            cout << "\nYou have chosen to fight with your roommate. Really unnecessary, But let's continue your day! " ;
         
         if (Answer == "13")
            cout << "\nYou have chosen to sleep in. Brilliant! Let's continue your day! " ;
         
      }
      cout << "\nGood picks mate! You have reached your maximum picks of the day." << endl;
      cout << "\nTill the next day my friend..." << endl;
      cout << "\nHealth(220) " << " - " << " Choice (30) " << " = " << Health - Choice << endl;
      cout << "Press 'Enter/Return' to continue:" << endl;
      cin.get();
      cin.get();
      
      // --------------------------------------------------------------------------------------------------------------
      // 
      // --------------------------------------------------------------------------------------------------------------   
      
      cout << "\nIt is Tuesday! Glad you made it this far. Again, you will have 3 picks today. Choose wisely!" ;
      cout << "\nThe items below are your daily picks. How would you like you start your day mate? ";
      for (Tuesday = 2; Tuesday <= 4; Tuesday++){
      
         string Question = "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 ";
         string Answer;
         cout << "\n1. Eat, \n2. Go to class (zoom), \n3. Do homework, \n4. Text friends, \n5. Call friends, \n6. Play video games, \n7. Workout, \n8. Read(Books), \n9. Party, \n10. Netflix and chill, \n11. Fight roommate, \n12. Sleep ?" << endl;
         cin >> Answer;
      
      
         if (Answer == "1")
            cout << "\nYou have chosen to eat. Let's continue your day! ";
         
         if (Answer == "2")
            cout << "\nYou have chosen to go to your online class on zoom. Let's continue your day! " ;
         
         if (Answer == "3")
            cout << "\nYou have chosen to do your homework. Let's continue your day! " ;
         
         if (Answer == "4")
            cout << "\nYou have chosen to text your friends. Let's continue your day! " ;
         
         if (Answer == "5")
            cout << "\nYou have chosen to call your friends. Let's continue your day! " ;
         
         if (Answer == "6")
            cout << "\nYou have chosen to play video games. Let's continue your day! " ;
         
         if (Answer == "7")
            cout << "\nYou have chosen to workout. Let's continue your day! " ;
         
         if (Answer == "8")
            cout << "\nYou have chosen to read books. Let's continue your day!  " ;
         
         if (Answer == "9")
            cout << "\nYou have chosen to go party. Have fun! Let's continue your day! " ;
         
         if (Answer == "10")
            cout << "\nYou have chosen to watch Netflix. Enjoy! Let's continue your day! " ;
         
         if (Answer == "11")
            cout << "\nYou have chosen to fight with your roommate. Really unnecessary, But let's continue your day! " ;
         
         if (Answer == "12")
            cout << "\nYou have chosen to sleep in. Brilliant! Let's continue your day! " ;
         
      }
      cout << "\nGood picks mate! You have reached your maximum picks of the day." << endl;
      cout << "\nTill the next day my friend..." << endl;
      cout << "\nHealth(190) " << " - " << " Choice (30) " << " = " << Health - Choice - Choice << endl;
      cout << "Press 'Enter/Return' to continue:" << endl;
      cin.get();
      cin.get();
   
          
   	// --------------------------------------------------------------------------------------------------------------
      // 
      // --------------------------------------------------------------------------------------------------------------
      
      cout << "\nIt is Wednesday! Glad you still here! Again, you will have 3 picks today. Choose wisely!" ;
      cout << "\nThe items below are your daily picks. How would you like you start your day mate? ";
      for (Wednesday = 3; Wednesday <= 5; Wednesday++){
      
         string Question = "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 ";
         string Answer;
         cout << "\n1. Eat, \n2. Go to class (zoom), \n3. Do homework, \n4. Text friends, \n5. Call friends, \n6. Play video games, \n7. Workout, \n8. Read(Books), \n9. Party, \n10. Netflix and chill, \n11. Fight roommate, \n12. Clean room (only on M,W,F), \n13. Sleep ?" << endl;
         cin >> Answer;
      
      
         if (Answer == "1")
            cout << "\nYou have chosen to eat. Let's continue your day! ";
         
         if (Answer == "2")
            cout << "\nYou have chosen to go to your online class on zoom. Let's continue your day! " ;
         
         if (Answer == "3")
            cout << "\nYou have chosen to do your homework. Let's continue your day! " ;
         
         if (Answer == "4")
            cout << "\nYou have chosen to text your friends. Let's continue your day! " ;
         
         if (Answer == "5")
            cout << "\nYou have chosen to call your friends. Let's continue your day! " ;
         
         if (Answer == "6")
            cout << "\nYou have chosen to play video games. Let's continue your day! " ;
         
         if (Answer == "7")
            cout << "\nYou have chosen to workout. Let's continue your day! " ;
         
         if (Answer == "8")
            cout << "\nYou have chosen to read books. Let's continue your day!  " ;
         
         if (Answer == "9")
            cout << "\nYou have chosen to go party. Have fun! Let's continue your day! " ;
         
         if (Answer == "10")
            cout << "\nYou have chosen to watch Netflix. Enjoy! Let's continue your day! " ;
         
         if (Answer == "11")
            cout << "\nYou have chosen to fight with your roommate. Really unnecessary, But let's continue your day! " ;
            
         if (Answer == "12")
            cout << "\nYou have chosen to clean your room. Let's continue your day! " ;
            
         if (Answer == "13")
            cout << "\nYou have chosen to sleep in. Brilliant! Let's continue your day! " ;
         
      }
      cout << "\nGood picks mate! You have reached your maximum picks of the day." << endl;
      cout << "\nTill the next day my friend..." << endl;
      cout << "\nHealth(160) " << " - " << " Choice (30) " << " = " << Health - Choice - Choice - Choice << endl;
      cout << "Press 'Enter/Return' to continue:" << endl;
      cin.get();
      cin.get();
   
   	// --------------------------------------------------------------------------------------------------------------
      // 
      // --------------------------------------------------------------------------------------------------------------
      
      cout << "\nIt is Thursday! Glad you still here! Again, you will have 3 picks today. Choose wisely!" ;
      cout << "\nThe items below are your daily picks. How would you like you start your day mate? ";
      for (Thursday = 4; Thursday <= 6; Thursday++){
      
         string Question = "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 ";
         string Answer;
         cout << "\n1. Eat, \n2. Go to class (zoom), \n3. Do homework, \n4. Text friends, \n5. Call friends, \n6. Play video games, \n7. Workout, \n8. Read(Books), \n9. Party, \n10. Netflix and chill, \n11. Fight roommate, \n12. Sleep ?" << endl;
         cin >> Answer;
      
      
         if (Answer == "1")
            cout << "\nYou have chosen to eat. Let's continue your day! ";
         
         if (Answer == "2")
            cout << "\nYou have chosen to go to your online class on zoom. Let's continue your day! " ;
         
         if (Answer == "3")
            cout << "\nYou have chosen to do your homework. Let's continue your day! " ;
         
         if (Answer == "4")
            cout << "\nYou have chosen to text your friends. Let's continue your day! " ;
         
         if (Answer == "5")
            cout << "\nYou have chosen to call your friends. Let's continue your day! " ;
         
         if (Answer == "6")
            cout << "\nYou have chosen to play video games. Let's continue your day! " ;
         
         if (Answer == "7")
            cout << "\nYou have chosen to workout. Let's continue your day! " ;
         
         if (Answer == "8")
            cout << "\nYou have chosen to read books. Let's continue your day!  " ;
         
         if (Answer == "9")
            cout << "\nYou have chosen to go party. Have fun! Let's continue your day! " ;
         
         if (Answer == "10")
            cout << "\nYou have chosen to watch Netflix. Enjoy! Let's continue your day! " ;
         
         if (Answer == "11")
            cout << "\nYou have chosen to fight with your roommate. Really unnecessary, But let's continue your day! " ;
         
         if (Answer == "12")
            cout << "\nYou have chosen to sleep in. Brilliant! Let's continue your day! " ;
         
      }
      cout << "\nGood picks mate! You have reached your maximum picks of the day." << endl;
      cout << "\nTill the next day my friend..." << endl;
      cout << "\nHealth(130) " << " - " << " Choice (30) " << " = " << Health - Choice - Choice - Choice - Choice << endl;
      cout << "Press 'Enter/Return' to continue:" << endl;
      cin.get();
      cin.get();
   
      // -----------------------------------------------------------------------------------------------------------------
      // 
      // -----------------------------------------------------------------------------------------------------------------
   	
      cout << "\nIt is Friday! Glad you still here! Again, you will have 3 picks today. Choose wisely!" ;
      cout << "\nThe items below are your daily picks. How would you like you start your day mate? ";
      for (Friday = 5; Friday <= 7; Friday++){
      
         string Question = "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 ";
         string Answer;
         cout << "\n1. Eat, \n2. Go to class (zoom), \n3. Do homework, \n4. Text friends, \n5. Call friends, \n6. Play video games, \n7. Workout, \n8. Read(Books), \n9. Party, \n10. Netflix and chill, \n11. Fight roommate, \n12. Clean room (only on M,W,F), \n13. Sleep ?" << endl;
         cin >> Answer;
      
      
         if (Answer == "1")
            cout << "\nYou have chosen to eat. Let's continue your day! ";
         
         if (Answer == "2")
            cout << "\nYou have chosen to go to your online class on zoom. Let's continue your day! " ;
         
         if (Answer == "3")
            cout << "\nYou have chosen to do your homework. Let's continue your day! " ;
         
         if (Answer == "4")
            cout << "\nYou have chosen to text your friends. Let's continue your day! " ;
         
         if (Answer == "5")
            cout << "\nYou have chosen to call your friends. Let's continue your day! " ;
         
         if (Answer == "6")
            cout << "\nYou have chosen to play video games. Let's continue your day! " ;
         
         if (Answer == "7")
            cout << "\nYou have chosen to workout. Let's continue your day! " ;
         
         if (Answer == "8")
            cout << "\nYou have chosen to read books. Let's continue your day!  " ;
         
         if (Answer == "9")
            cout << "\nYou have chosen to go party. Have fun! Let's continue your day! " ;
         
         if (Answer == "10")
            cout << "\nYou have chosen to watch Netflix. Enjoy! Let's continue your day! " ;
         
         if (Answer == "11")
            cout << "\nYou have chosen to fight with your roommate. Really unnecessary, But let's continue your day! " ;
            
         if (Answer == "12")
            cout << "\nYou have chosen to clean your room. Let's continue your day! " ;
         
         if (Answer == "13")
            cout << "\nYou have chosen to sleep in. Brilliant! Let's continue your day! " ;
         
      }
      cout << "\nGood picks mate! You have reached your maximum picks of the day." << endl;
      cout << "\nTill the next day my friend..." << endl;
      cout << "\nHealth(100) " << " - " << " Choice (30) " << " = " << Health - Choice - Choice - Choice - Choice - Choice << endl;
      cout << "Press 'Enter/Return' to continue:" << endl;
      cin.get();
      cin.get();
      
      
      // --------------------------------------------------------------------------------------------------------------------------
      // 
      // --------------------------------------------------------------------------------------------------------------------------
   
      cout << "\nIt is Saturday! Glad you still here! Again, you will have 3 picks today. Choose wisely!" ;
      cout << "\nThe items below are your daily picks. How would you like you start your day mate? ";
      for (Saturday = 6; Saturday <= 8; Saturday++){
      
         string Question = "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 ";
         string Answer;
         cout << "\n1. Eat, \n2. Go to class (zoom), \n3. Do homework, \n4. Text friends, \n5. Call friends, \n6. Play video games, \n7. Workout, \n8. Read(Books), \n9. Party, \n10. Netflix and chill, \n11. Fight roommate, \n12. Sleep ?" << endl;
         cin >> Answer;
      
      
         if (Answer == "1")
            cout << "\nYou have chosen to eat. Let's continue your day! ";
         
         if (Answer == "2")
            cout << "\nYou have chosen to go to your online class on zoom. Let's continue your day! " ;
         
         if (Answer == "3")
            cout << "\nYou have chosen to do your homework. Let's continue your day! " ;
         
         if (Answer == "4")
            cout << "\nYou have chosen to text your friends. Let's continue your day! " ;
         
         if (Answer == "5")
            cout << "\nYou have chosen to call your friends. Let's continue your day! " ;
         
         if (Answer == "6")
            cout << "\nYou have chosen to play video games. Let's continue your day! " ;
         
         if (Answer == "7")
            cout << "\nYou have chosen to workout. Let's continue your day! " ;
         
         if (Answer == "8")
            cout << "\nYou have chosen to read books. Let's continue your day!  " ;
         
         if (Answer == "9")
            cout << "\nYou have chosen to go party. Have fun! Let's continue your day! " ;
         
         if (Answer == "10")
            cout << "\nYou have chosen to watch Netflix. Enjoy! Let's continue your day! " ;
         
         if (Answer == "11")
            cout << "\nYou have chosen to fight with your roommate. Really unnecessary, But let's continue your day! " ;
         
         if (Answer == "12")
            cout << "\nYou have chosen to sleep in. Brilliant! Let's continue your day! " ;
         
      }
      cout << "\nGood picks mate! You have reached your maximum picks of the day." << endl;
      cout << "\nTill the next day my friend..." << endl;
      cout << "\nHealth(70) " << " - " << " Choice (30) " << " = " << Health - Choice - Choice - Choice - Choice - Choice - Choice << endl;
      cout << "Press 'Enter/Return' to continue:" << endl;
      cin.get();
      cin.get();
   
      // ----------------------------------------------------------------------------------------------------------------------------------
      // 
      // ----------------------------------------------------------------------------------------------------------------------------------
      
      cout << "\nIt is Sunday! Glad you still here! Again, you will have 3 picks today. Choose wisely!" ;
      cout << "\nThe items below are your daily picks. How would you like you start your day mate? ";
      for (Sunday = 7; Sunday <= 9; Sunday++){
      
         string Question = "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 ";
         string Answer;
         cout << "\n1. Eat, \n2. Go to class (zoom), \n3. Do homework, \n4. Text friends, \n5. Call friends, \n6. Play video games, \n7. Workout, \n8. Read(Books), \n9. Party, \n10. Netflix and chill, \n11. Fight roommate, \n12. Sleep ?" << endl;
         cin >> Answer;
      
      
         if (Answer == "1")
            cout << "\nYou have chosen to eat. Let's continue your day! ";
         
         if (Answer == "2")
            cout << "\nYou have chosen to go to your online class on zoom. Let's continue your day! " ;
         
         if (Answer == "3")
            cout << "\nYou have chosen to do your homework. Let's continue your day! " ;
         
         if (Answer == "4")
            cout << "\nYou have chosen to text your friends. Let's continue your day! " ;
         
         if (Answer == "5")
            cout << "\nYou have chosen to call your friends. Let's continue your day! " ;
         
         if (Answer == "6")
            cout << "\nYou have chosen to play video games. Let's continue your day! " ;
         
         if (Answer == "7")
            cout << "\nYou have chosen to workout. Let's continue your day! " ;
         
         if (Answer == "8")
            cout << "\nYou have chosen to read books. Let's continue your day!  " ;
         
         if (Answer == "9")
            cout << "\nYou have chosen to go party. Have fun! Let's continue your day! " ;
         
         if (Answer == "10")
            cout << "\nYou have chosen to watch Netflix. Enjoy! Let's continue your day! " ;
         
         if (Answer == "11")
            cout << "\nYou have chosen to fight with your roommate. Really unnecessary, But let's continue your day! " ;
         
         if (Answer == "12")
            cout << "\nYou have chosen to sleep in. Brilliant! Let's continue your day! " ;
         
      }
      cout << "\nGood picks mate! You have reached your maximum picks of the day." << endl;
      cout << "\nTill the next day my friend..." << endl;
      cout << "\nHealth(40) " << " - " << " Choice (30) " << " = " << Health  - Choice - Choice - Choice - Choice - Choice - Choice - Choice << endl;
      cout << "Press 'Enter/Return' to continue:" << endl;
      cin.get();
      cin.get();
      
      // ---------------------------------------------------------------------------------------------------------------------------------------------
      // 
      // ---------------------------------------------------------------------------------------------------------------------------------------------
      
      cout << "\nOne last question before you are officially crown Champ." << endl;
         	
      string LastQuestion = "2019";
      string LastAnswer;
      			
      cout << "When did Corona started ? Month & Year." << endl;
      cout << "\nCheck again your health, so make sure you answer the question right." <<endl;
      cout << "\nHealth(10) " << " - " << " Choice (10) " << " = " << Health  - Choice - Choice - Choice - Choice - Choice - Choice - Choice << endl;
      cin >> LastAnswer;
      if (LastAnswer == LastQuestion)
         cout << "WOW!!Did not expect you to get it right! \nCongrats to you! You made it through the week of survival. CHEERS!!!" << endl;
      
      else
      {
         cout << "You failed! \nBut you have been through a lot, so will let it slide... \nCorrect answer is: November 2019. \nCHEERS!!!" << endl;
      }
      
      // ------------------------------------------------------------------------------------------------------------------------------
      // 
      // ------------------------------------------------------------------------------------------------------------------------------
      
      cin.get();
   			
      string Restart = "yes";
      string AnswerToRestart;
      			
      cout << "Would you like to restart the game?" << endl;
      cin >> AnswerToRestart;
      if (AnswerToRestart == Restart)
         continue;
      
      else
      {
         cout << "Say less then, peace out! Thanks for playing mate. " << endl;
         break;
      }
   		
   	
      cin.get();
      cin.get();
   
   }
 
   cout << "Feel free to press Any Key to quit ;)" << endl;
   cin.get();
   cin.get();
   return 0;
 
}

// ===========================================================================================================
