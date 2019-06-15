#ifndef ORDERCONTROL_H
#define ORDERCONTROL_H
#include "QString"
#include "QDate"

class OrderControl
{
 
    virtual void getPrise() = 0 ;
    virtual bool getStaus() = 0 ;
    virtual QDate getDate() = 0 ;
    virtual void setDate(QDate date) = 0 ;
    virtual void Cancel(int id);

    
};

class Order : Food
{
    int OrderId ;
    //QString Food ;
   // QString Kellner;
    QDate Date;
    int Qty;
    double TotalPrise;
    int TischNr;
    bool Status ;


public:
    Order() {}
    void OrderAufnehmen(int orderid, QString Fname ,QDate date ,int qty ,double tprise , int tNr );
    void OrderAufnehmen(int orderid, QString Fname ,QDate date ,int qty ,double tprise , int tNr );
    void DeleteOrder(int id );
    void CancelOrder(int id );
    bool IsHierEssenOder();
};

#endif // ORDERCONTROL_H
