#include <iostream>
#include <stdio.h>
#include <chrono>
#include <ctime>
#include <process.h> // For _beginthreadex
#include <iomanip>   // For std::setw
#include <windows.h> // For Sleep function
#include <time.h>
#include <thread>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

void wait(int seconds)
{
  clock_t endwait;
  endwait = clock() + seconds * CLOCKS_PER_SEC;
  while (clock() < endwait)
  {
  }
}

// The Function to Ask for Gender
void ask()
{
  printf("Please select your gender by entering the respective number\n");
  printf("1.Male\n");
  printf("2.Female\n");
  printf("3.Prefer not to say\n");
}

void firstwait()
{
  printf("Evaluating...\n");
  for (int n = 10; n > 0; n--)
  {
    if (n == 8)
    {
      printf("Umm...\n");
    }
    if (n == 6)
    {
      printf("I didn't know what else I could do so\n");
    }
    if (n == 4)
    {
      printf("Welp!\n");
    }
    if (n == 1)
    {
      printf("This is it, let's process your details\n");
    }
    Sleep(2000);
  }
}

void secondwait()
{
  printf("Please Wait...\n");
  for (int n = 10; n > 0; n--)
  {
    if (n == 8)
    {
      printf("Wait...\n");
    }
    if (n == 6)
    {
      printf("Just a moment\n");
    }
    if (n == 4)
    {
      printf("Thoda aur\n");
    }
    if (n == 2)
    {
      printf("Bas thoda aur\n");
    }
    Sleep(2000);
  }
  system("cls");
}

void finalwait(int age, int gender)
{
  printf("Well...\n");
  for (int n = 10; n > 0; n--)
  {
    if (n == 8 && gender == 2)
    {
      system("cls");
      printf("It seems you've grown up, Lady!...\n");
      Sleep(2000);
    }
    else if (n == 8 && gender == 1)
    {
      system("cls");
      printf("It seems you've grown up BOIII!...\n");
      Sleep(2000);
    }
    else if (n == 8 && gender == 3)
    {
      system("cls");
      printf("Since you're confused about your gender or preferred not to say, Making ME confused\n");
      Sleep(3000);
      printf("Let's call you, Not LADY or BOIII, but, LADY & BOIII...\n");
      Sleep(3000);
    }
    if (n == 5)
    {
      printf("You will be %d years of age now, Hoorrayyy!\n", age);
      Sleep(2000);
    }
  }
  Sleep(1000);
  system("cls");
}

// Function to return Gender by Integer Input
int gendr(int g)
{
  if (g == 1 || g == 2 || g == 3)
  {
    return g;
  }
  else
  {
    Sleep(1000);
    system("cls");
    printf("The Entered value does not match any choices\n");
    Sleep(1000);
    ask();
    cin >> g;
    gendr(g);
  }
}

// Taking Day
int takingday(int *counter)
{
  int dobb;
  *counter += 1;
  printf("Enter DD ");
  scanf("%d", &dobb);
  if (dobb > 0 && dobb <= 31)
  {
    if (*counter > 3)
    {
      printf("Huhhh");
      Sleep(1000);
      system("cls");
    }
    return dobb;
  }
  else if (*counter == 1)
  {
    Sleep(2000);
    printf("Hmmm");
    Sleep(1000);
    printf("m");
    Sleep(1000);
    printf("m\n");
    Sleep(1000);
    system("cls");
    printf("What are you? ");
    Sleep(1000);
    printf("A fuckin Moron?!\n");
    Sleep(2000);
    printf("Enter the day right idiot\n");
    // Clear the input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
    takingday(counter);
  }
  else if (*counter == 2)
  {
    Sleep(2000);
    printf("^_^");
    Sleep(1000);
    system("cls");
    printf("FUCKIN MORON!\n");
    Sleep(2000);
    printf("Enter a valid damn Value!\n");
    Sleep(2000);
    printf("Enter the day fuckin right\n");
    // Clear the input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
    takingday(counter);
  }
  else if (*counter == 3)
  {
    Sleep(2000);
    printf("^_^+");
    Sleep(1000);
    system("cls");
    printf("You're fuckin with me right?\n");
    Sleep(2000);
    printf("You can't be serious!\n");
    Sleep(2000);
    printf("LAST CHANCE!! Enter the day\n");
    // Clear the input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
    takingday(counter);
  }
  else if (*counter == 4)
  {
    Sleep(2000);
    printf(":D");
    Sleep(1000);
    system("cls");
    printf("FuCK oFf\n");
    Sleep(1000);
    system("cls");
    Sleep(1000);
    printf("FUCK ");
    Sleep(1000);
    printf("OFF!!");
    Sleep(2000);
    exit(0);
  }
}

// Taking Month
int takingmonth(int *counter)
{
  int dob2;
  *counter += 1;

  printf("Enter MM: ");
  if (scanf("%d", &dob2) == 1 && dob2 > 0 && dob2 <= 12)
  {
    if (*counter > 3)
    {
      printf("Huhhh\n");
      Sleep(1000);
      system("cls");
    }
    return dob2;
  }
  else
  {
    if (*counter == 1)
    {
      Sleep(2000);
      printf(":D\n");
      Sleep(1000);
      system("cls");
      printf("Guess I'm not coming to your party\n");
      Sleep(2000);
      system("cls");
      exit(0);
    }
    else if (*counter > 2)
    {
      Sleep(2000);
      printf("Hmmm\n");
      Sleep(1000);
      printf("You had already done it, and now again?\n");
      *counter = 0;
      Sleep(1000);
      printf("Enter the month right\n");
      Sleep(2000);
      system("cls");

      // Clear the input buffer
      int c;
      while ((c = getchar()) != '\n' && c != EOF)
        ;
      takingmonth(counter);
    }
    else if (*counter == 2)
    {
      Sleep(2000);
      printf("Hmmm\n");
      Sleep(1000);
      printf("Might wanna enter a valid month?\n");
      Sleep(2000);
      printf("Enter the month\n");
      Sleep(2000);
      system("cls");
      // Clear the input buffer
      int c;
      while ((c = getchar()) != '\n' && c != EOF)
        ;
      takingmonth(counter);
    }
  }
}

// Taking year
int takingyear(int *counter, int year)
{
  int dob3;
  *counter += 1;
  printf("Enter YYYY ");
  scanf("%d", &dob3);
  if (year - dob3 >= 18 && dob3 > 1900)
  {
    return dob3;
  }
  else if (*counter == 1)
  {
    Sleep(2000);
    printf(":D");
    Sleep(1000);
    system("cls");
    printf("Guess I'm not coming into your party\n");
    Sleep(2000);
    system("cls");
    exit(0);
  }
  else if (year - dob3 <= 0)
  {
    Sleep(2000);
    printf("What are you? A Sperm?");
    *counter = 0;
    Sleep(3000);
    system("cls");
    printf("Enter the year right\n");
    // Clear the input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
    takingyear(counter, year);
  }
  else if (year - dob3 <= 17)
  {
    system("cls");
    printf("You seem like a kid\n");
    Sleep(3000);
    printf("Well okay!\n");
    return dob3;
    Sleep(2000);
  }
  else if (dob3 < 1900)
  {
    Sleep(2000);
    printf("I don't believe you're that old?");
    *counter = 0;
    Sleep(2000);
    system("cls");
    printf("Enter the year right please\n");
    // Clear the input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;
    takingyear(counter, year);
  }
}

int daysInMonth(int month, int year)
{
  if (month == 2)
  {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
      return 29; // Leap year
    }
    else
    {
      return 28;
    }
  }
  else if (month == 4 || month == 6 || month == 9 || month == 11)
  {
    return 30;
  }
  else
  {
    return 31;
  }
}

// Define the countdown function
unsigned int __stdcall countdowntimer(void *params)
{
  int *target_params = static_cast<int *>(params);

  int target_year = target_params[0];
  int target_month = target_params[1];
  int target_day = target_params[2];
  int target_hour = target_params[3];
  int target_minute = target_params[4];
  int target_second = target_params[5];

  // Get the current time
  auto now = chrono::system_clock::now();
  time_t now_time = chrono::system_clock::to_time_t(now);

  // Get the current time tm structure
  struct tm *now_tm = localtime(&now_time);

  // Calculate the time until the target date and time
  int years_until_target = target_year - (now_tm->tm_year + 1900);
  int months_until_target = target_month - (now_tm->tm_mon + 1);
  int days_until_target = target_day - now_tm->tm_mday;
  int hours_until_target = target_hour - now_tm->tm_hour;
  int minutes_until_target = target_minute - now_tm->tm_min;
  int seconds_until_target = target_second - now_tm->tm_sec;

  if (seconds_until_target < 0)
  {
    minutes_until_target--;
    seconds_until_target += 60;
  }
  if (minutes_until_target < 0)
  {
    hours_until_target--;
    minutes_until_target += 60;
  }
  if (hours_until_target < 0)
  {
    days_until_target--;
    hours_until_target += 24;
  }
  if (days_until_target < 0)
  {
    months_until_target--;
    days_until_target += daysInMonth(now_tm->tm_mon + 1, now_tm->tm_year + 1900);
  }
  if (months_until_target < 0)
  {
    years_until_target--;
    months_until_target += 12;
  }

  // Convert to seconds
  int total_seconds_until_target =
      years_until_target * 365 * 24 * 3600 + months_until_target * 30 * 24 * 3600 +
      days_until_target * 24 * 3600 + hours_until_target * 3600 +
      minutes_until_target * 60 + seconds_until_target;

  // Start the countdown
  for (int seconds = total_seconds_until_target; seconds > 0; --seconds)
  {
    int years = seconds / (365 * 24 * 3600);
    int months = (seconds % (365 * 24 * 3600)) / (30 * 24 * 3600);
    int days = (seconds % (30 * 24 * 3600)) / (24 * 3600);
    int hours = (seconds % (24 * 3600)) / 3600;
    int minutes = (seconds % 3600) / 60;
    int secs = seconds % 60;

    // Move the cursor to the top of the console
    cout << "\033[1;1H";

    // Display the countdown
    if (years >= 1)
    {
      cout << setw(2) << setfill('0') << years << "y " << setw(2) << setfill('0') << months << "m "
           << setw(2) << setfill('0') << days << "d " << setw(2) << setfill('0') << hours << "h "
           << setw(2) << setfill('0') << minutes << "m " << setw(2) << setfill('0') << secs << "s remaining.\r";
      cout.flush();
    }
    else if (months >= 1)
    {
      cout << setw(2) << setfill('0') << months << "m "
           << setw(2) << setfill('0') << days << "d " << setw(2) << setfill('0') << hours << "h "
           << setw(2) << setfill('0') << minutes << "m " << setw(2) << setfill('0') << secs << "s remaining.\r";
      cout.flush();
    }
    else if (days >= 1)
    {
      cout << setw(2) << setfill('0') << days << "d " << setw(2) << setfill('0') << hours << "h "
           << setw(2) << setfill('0') << minutes << "m " << setw(2) << setfill('0') << secs << "s remaining.\r";
      cout.flush();
    }
    else
    {
      cout << setw(2) << setfill('0') << hours << "h "
           << setw(2) << setfill('0') << minutes << "m " << setw(2) << setfill('0') << secs << "s remaining.\r";
      cout.flush();
    }

    // Wait for one second using Sleep (Windows-specific)
    Sleep(1000);
  }
  system("cls");
  printf("Many many returns of the day!\n");
  wait(1);
  printf("And?\n");
  wait(2);
  printf("DHER ");
  wait(1);
  printf("SARA ");
  wait(1);
  printf("PYAAR!\n");
  wait(2);
  printf("H");
  Sleep(100);
  printf("A");
  Sleep(100);
  printf("P");
  Sleep(100);
  printf("P");
  Sleep(100);
  printf("Y");
  Sleep(100);
  printf(" ");
  Sleep(400);
  printf("B");
  Sleep(100);
  printf("I");
  Sleep(100);
  printf("R");
  Sleep(100);
  printf("T");
  Sleep(100);
  printf("H");
  Sleep(100);
  printf("D");
  Sleep(100);
  printf("A");
  Sleep(100);
  printf("Y");
  Sleep(100);
  printf("!");
  Sleep(100);
  printf("!");
  Sleep(100);
  printf("!\n");
  Sleep(1000);

  cout << "Playing Happy Birthday\n";

  // Assuming sample02.mp3 is in the same directory as the executable
  PlaySound(TEXT("HBD.wav"), NULL, SND_FILENAME | SND_SYNC);

  // Sleep for a while to allow the sound to play (adjust as needed)
  Sleep(800);

  return 0;
}

int main()
{
  int var = 0;
  int *counter = &var;
  system("color 0a");
  string name;
  int age, gender;
  int dob[3];
  printf("Enter your name:\n");
  scanf("%s", &name);
  Sleep(1000);
  printf("Hi %s, let's know more about you\n", name);
  printf("Enter your DOB:\n");
  dob[0] = takingday(counter);
  dob[1] = takingmonth(counter);

  int target_year, target_month, target_day, target_hour, target_minute, target_second;
  time_t now = time(0);
  tm *lt = localtime(&now);
  int year = lt->tm_year + 1900;
  int month = lt->tm_mon + 1;
  int day = lt->tm_mday;

  dob[2] = takingyear(counter, year);
  system("cls");
  ask();
  cin >> gender;
  int ge = gendr(gender);

  age = year - dob[2];
  printf("Ok...\n");
  Sleep(2000);

  system("cls");
  // flash dob on the screen for a moment
  cout << dob[0] << " " << dob[1] << " " << dob[2] << "\n";
  Sleep(3000);

  printf("Thank You\n");
  Sleep(2000);
  system("cls");

  target_year = year;
  target_month = dob[1];
  target_day = dob[0];
  target_hour = 00;
  target_minute = 00;
  target_second = 00;

  if (target_month < month && target_day < day)
  {
    target_year++;
    printf("Looks like it's time to your Birthday");
    age++;
    wait(3);
    system("cls");
  }
  else if (target_month == month && target_day <= day)
  {
    target_year++;
    printf("Looks like it's time to your Birthday");
    age++;
    wait(3);
    system("cls");
  }

  // Call the firstwait Function
  firstwait();
  // Call the secondwait Function
  secondwait();
  // call the finalwait Function
  finalwait(age, ge);
  // system("cls");
  system("cls");
  printf("Let's begin the count down!\n");
  wait(2);
  system("cls");
  // Prepare parameters for the thread function
  int target_params[] = {target_year, target_month, target_day, target_hour, target_minute, target_second};

  // Create a thread using Windows API
  HANDLE hThread = (HANDLE)_beginthreadex(nullptr, 0, &countdowntimer, target_params, 0, nullptr);

  if (hThread)
  {
    // Wait for the countdown thread to finish before continuing with main function
    WaitForSingleObject(hThread, INFINITE);

    // Close the thread handle
    CloseHandle(hThread);
  }

  wait(1);
  printf("Enjoy the day, ");
  wait(1);
  printf("Signing Out");
  wait(1);
  printf("!");
  Sleep(200);
  printf("!");
  Sleep(200);
  printf("! ");
  Sleep(1000);
  printf(">.<\n");
  wait(3);
  return 0;
}