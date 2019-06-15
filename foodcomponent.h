#ifndef FOODCOMPONENT_H
#define FOODCOMPONENT_H
#include "QString"

class FoodComponent
{
    virtual QString getName() = 0 ;
    virtual void setName(QString name ) = 0 ;
    virtual double getPrise() = 0 ;
    virtual void setPrise() = 0 ;

};

class Food : public FoodComponent{
private :
    int FoodId ;
    QString FoodName ;
    double Prise ;
    QString Category ;

public :
    Food(int id , QString Foodname , double prise , QString cat): FoodId(id) , FoodName(getName()) , Prise(getPrise()) , Category(Category) {}
    int  getId ();
    void setId(int id );
    void setCategory(QString Category);
    void AddFood(int FoodId ,QString FoodName , double Prise , QString Category );
    void UpdateFood(int FoodId ,QString FoodName , double Prise , QString Category);
    void DeleteFood(int id);
}

#endif // FOODCOMPONENT_H
