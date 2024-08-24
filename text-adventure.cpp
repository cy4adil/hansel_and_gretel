#include <iostream>

int main() {
    std::cout << "\n===========================\n";
    std::cout << "A Story of Hansel & Gretel\n";
    std::cout << "===========================\n\n";

    std::cout << "A poor woodcutter was living in the forest in his tiny house with his two children Hansel and Gretel.\n";
    std::cout << "A poor man's wife was passed away, due to which he used to stay sad all the time.\n";
    std::cout << "One day, He decided to marry again and He found a rich woman and marry her.\n";
    std::cout << "A woman was tired of the poor life she was living and espacially with woodcutter's children.\n";
    std::cout << "One night, Hansel and Gretel were sleeping peacefully when they heard a loud voice of their step mother talking to their father.\n";
    std::cout << "She said: I am tired of this poor life, How can you provide for your big family when you earn a very little amount. We need to get rid of these children so that some burden will be off of your shoulders.\n";
    std::cout << "She said: Lets take the kids tomorrow morning and leave them in the forest. Upon which a father agreed.\n";
    std::cout << "Hansel and Gretel were listening to this conversation and they got scared.\n\n";

    std::cout << "There were two thoughts running in Hansel's mind:\n";
    std::cout << "What thouht you would choose if you were a Hansel?\n";
    
    char choice1;

    for(int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' ; i++){
        std::cout << "Enter A if you think Hansel should go back to sleep and let the parents do what they want.\n";
        std::cout << "Enter B if you think Hansel should get up and do something to come back home after parents leave them.\n";
        std::cin >> choice1;
    }

    switch (choice1) {
        case 'A':
            std::cout << "\nHansel told Gretel not worry about anything and they both went for a nice sleep.\n";
            std::cout << "Next morning, Father and his wife took the children and left them into the forest with some food and fire.\n";
            std::cout << "Kids were waiting for them to come back but no one came back. As the night begin, wolves started howling.\n";
            std::cout << "Both Hansel and Gretel got scared and started running to save themselves.\n";
            std::cout << "And suddenly a pack of wolves came into scene and surrounded Hansel and Gretel and suddenly wolves attacked the children and killed Hansel and Gretel.\n";
            std::cout << "\n====================================\n";
            std::cout << "============== The End =============\n";
            std::cout << "====================================\n";
            return 0;

        case 'B':
            std::cout << "\nHansel went outside the house and started collecting pabbles into his pocket.\n";
            break;
        default:
            std::cout << "\nNo valid option selected. Story is end. Goodbye!\n";
            return 0; 
    }

    std::cout << "\n\n";
    std::cout << "Next morning, Father and his wife took the children.\n";
    std::cout << "As they all were going deep in forest, Hansel was dropping pabbles to keep the track of the path they were coming from.\n";
    std::cout << "After covering a long distance, parents left the kids into the forest with some food and fire and told them that they will be back shortly.\n";
    std::cout << "Kids were waiting for them to come back but no one came back. As the night begin, wolves started howling.\n";
    std::cout << "\nBeing Hansel and a big brother, what would you do?\n";

    char choice2;

    for (int i = 0; i < 3 && choice2 != 'A' && choice2 != 'B' ; i++) {
        std::cout << "Enter A if you would start running to find safe place and take Gretel with you.\n";
        std::cout << "Enter B if you would stay besides the fire and wait for a sunrise.\n";
        std::cin >> choice2;
    }

    switch (choice2) {
        case 'A':
            std::cout << "Both Hansel and Gretel got scared and started running to save themselves.\n";
            std::cout << "And suddenly a pack of wolves came into scene and surrounded Hansel and Gretel and suddenly wolves attacked the children and killed Hansel and Gretel.\n";
            std::cout << "\n====================================\n";
            std::cout << "============== The End =============\n";
            std::cout << "====================================\n";
            return 0;
            
        case 'B':
            std::cout << "On the next day, after a sunrise, Hansel and Gretel left the spot and started following the shinning pabbles in the sunlight.\n";
            break;

        default:
            std::cout << "\nNo valid option selected. Story is end. Goodbye!\n";
            return 0;
    }

       std::cout << "The moment they recognize an area near their house, they started running and went straight to the house.\n";
       std::cout << "The father was cutting the wood when he saw his kids running towards him. He immedietely ran towards them and hug them crying.\n";
       std::cout << "The father started aplogizing to the kids and told them that he will never let them go away from his sight again.\n";
       std::cout << "His wife was watching the scene from the house window.\n";
       std::cout << "In the night, she again told him to take the kids again to the forest and this time leave them far far away, otherwise divorce her.\n";
       std::cout << "Being a father what would you do?\n";

       char choice3;

       for (int i = 0 ; i < 3 && choice3 != 'A' && choice3 != 'B' ; i++) {
        std::cout << "Enter A if you would divorce her at the spot.\n";
        std::cout << "Enter B if you agree with her and choose her over your kids.\n";
        std::cin >> choice3;
       }

       switch (choice3)
       {
       case 'A':
        /* code */
        std::cout << "After listening to her choices, woodcutter got angry on her, and said how cruel you are.\n";
        std::cout << "In my entire life I would have never imagined of living my life without my kids, but because of you I left my kids to die in the forest.\n";
        std::cout << "You have no idea how miserable and painful time I was spending without my kids, my heart was about to burst into pieces thinking that I left my own kids in forest and some animal would have killed them already.\n";
        std::cout << "You have no idea how much relief I am feeling inside of me after seeing my kids again. You can never even imagine this feeling because you don't have any kids.\n";
        std::cout << "I would never leave my kids again in the forest rather I would like to leave you and throw you out of my life.\n";
        std::cout << "You want a divorce? I will give you a divorce, just get lost and never come again into my life. I will send you divorce papers to your parent's house.\n";
        std::cout << "Finally, woodcutter divorced his wife and started living a beautiful and happy life with his two little kids.\n";
        std::cout << "Enjoying every moment of life, woodcutter saw upto the sky and thanked Allah for making a right decision and that his kids are safe and sound with them.\n";

        break;
        
        case 'B':
            std::cout << "After woodcutter got agreed with his wife, his wife locked the kids door so that this time Hansel would not be able to do any smart move until the sunrise.\n";
            std::cout << "The next day, a woodcutter and his wife took the kids into the forest again and this time, they left them very deep into the forest.\n";
            std::cout << "This time as Hansel was not able to keep the track of the path, both kids got killed by wild animals in the forest.\n";
            std::cout << "As few days past, the woodcutter went crazy in a sorrow of his lost kids as this time kids never returned.\n";
            std::cout << "In a deep sorrow and grief, his life started to get drained and he went very ill.\n";
            std::cout << "Looking at his condition, his wife left him as he was of no use now.\n";
            std::cout << "Finally, woodcutter was left with nothing but a poor health and a deep grief.\n";
            std::cout << "And on the other hand, poor Hansel and Gretel lost their lives.\n";
            break;
       default:
            std::cout << "No Valid option selected. Story ended, Goodbye!\n";
            return 0;
       }
    std::cout << "\n====================================\n";
    std::cout << "============== The End =============\n";
    std::cout << "====================================\n";
    return 0;
}