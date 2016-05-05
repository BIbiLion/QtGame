#ifndef CHARACTERIF_HH
#define CHARACTERIF_HH


class CharacterIF
{
public:

    virtual ~CharacterIF();

    /*
     * Precondition:
     *
     *
     * Postcondition:
     *
     *
    */
    virtual void accelerateX() = 0;

    virtual void accelerateY() = 0;

    /*
     *
     * Description:
     *  Alters the amount of HP a character has.
     *
    */
    void setHitpoints( int Points );

    /*
     *
     * Description:
     *  Returns the amount of HP a character has.
     *
    */
    unsigned int getHitpoints() const;

    /*
     * Description:
     * A function for providing gravity to a character.
     * Used as a function pointer.
     */
    void gravity();

private:
    /*
     * A character has the following internal variables:
     * Hitpoints_, MaxHitpoints_, Speed_
     *
    */

};

#endif // CHARACTERIF_HH
