// Classes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>


class Personnage
{
public:
    Personnage() { std::cout << "constructeur par defaut" << std::endl; }; //constructeur par defaut
    // constructeur de copie par defaut sinon
    Personnage(Personnage& P) // constructeur de copie personnaliser
    {
        m_pdv = P.m_pdv;
        m_vitessedep = P.m_vitessedep;
        m_level = P.m_level;
        m_x = P.m_x;
        m_y = P.m_y;
        m_namePerso = P.m_namePerso;
        std::cout << "constructeur de copie" << std::endl;
    }
    Personnage(unsigned int PDV, unsigned int VITESSE, unsigned int LEVEL, unsigned int X, unsigned int Y, std::string name) : m_pdv(PDV), m_vitessedep(VITESSE), m_level(LEVEL), m_x(X), m_y(Y), m_namePerso(name)  // constructeur personalisé
    {
        /*m_pdv = PDV;
        m_vitessedep = VITESSE;
        m_level = LEVEL;
        m_x = X;
        m_y = Y;*/
        // liste d'initialisation



        std::cout << "constructeur personaliser" << std::endl;
    }

    void seDeplacer(unsigned int x, unsigned int y)
    {
        m_x += x;
        m_y += y;
    }

    void incrementlvl(unsigned int x, unsigned int y)
    {
        m_level++;
    }

    unsigned int getLevel() { return m_level; }
    unsigned int getPDV() { return m_pdv; }
    unsigned int getVitesse() { return m_vitessedep; }
    unsigned int getPositionX() { return m_x; }
    unsigned int getPositionY() { return m_y; }
    std::string getNamePerso() { return m_namePerso; }

    void SetName(std::string name) { m_namePerso = name; }

private :
    unsigned int m_pdv, m_vitessedep, m_level;
    unsigned int m_x, m_y;
    std::string m_namePerso;

};


int main()
{

    Personnage joueur1(100, 10, 1, 12, 14,"Goat" );
    Personnage joueur2(joueur1);
    std::cout << joueur2.getLevel() << std::endl;
    joueur1.SetName("the goat");
    std::cout << joueur1.getNamePerso() << std::endl;
    std::cout << joueur2.getNamePerso() << std::endl;

    return 0;
}

// get pour obtenir/avoir acces aux donnés
// set pour les modifier
