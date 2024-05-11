//#include<iostream>
//using namespace std;
//
//int main()
//{
//    short int grapesFahadWillEat, grapesKashifWillEat, grapesHamzaWillEat , greenGrapesBox, purpleGrapesBox, blackGrapesBox;
//
//    cout << "Enter amount of grapes the Fahad will eat: ";
//    cin >> grapesFahadWillEat;
//    
//    cout << "Enter amount of grapes the Kashif will eat: ";
//    cin >> grapesKashifWillEat;
//
//    cout << "Enter amount of grapes the Hamza will eat: ";
//    cin >> grapesHamzaWillEat;
//    
//    cout << "Enter amount of green grapes box: ";
//    cin >> greenGrapesBox;
//    
//    cout << "Enter amount of purple grapes box: ";
//    cin >> purpleGrapesBox;
//
//    cout << "Enter amount of black grapes box: ";
//    cin >> blackGrapesBox;
//
//    int totalAmountOfGrapesToBeEaten = grapesFahadWillEat + grapesKashifWillEat + grapesHamzaWillEat;
//    int totalNoOfBoxes = greenGrapesBox + purpleGrapesBox + blackGrapesBox;
//    int checks = 0;
//
//    if (totalAmountOfGrapesToBeEaten > totalNoOfBoxes)
//    {
//        cout << "No"; 
//    }
//    else 
//    {
//        if (grapesFahadWillEat <= greenGrapesBox)
//        {
//            greenGrapesBox = greenGrapesBox - grapesFahadWillEat;
//            totalNoOfBoxes = totalNoOfBoxes - grapesFahadWillEat;
//            checks = checks + 1;
//        }
//        int checkForKashif = greenGrapesBox + purpleGrapesBox;
//        if (grapesKashifWillEat <= checkForKashif);
//        {
//            totalNoOfBoxes = totalNoOfBoxes - grapesKashifWillEat;
//            checkForKashif = checkForKashif - grapesKashifWillEat;
//            checks = checks + 1;i
//        }
//
//        int checkForHamza = checkForKashif + blackGrapesBox;
//        if (grapesHamzaWillEat <= checkForHamza)
//        {
//            checks = checks + 1;
//        }
//    }
//
//    if (checks == 3)
//    {
//        cout << "Yes";
//    }
//    else
//    {
//        cout << "No";
//    }
//    
//
//    cout << endl;
//    return 0;
//}