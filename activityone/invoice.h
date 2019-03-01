//
// Created by fernando on 18/02/19.
//

#ifndef ACTIVITYONE_INVOICE_H
#define ACTIVITYONE_INVOICE_H


class Invoice {
public:

    Invoice( void );

    Invoice( const int number,
             const std::string description,
             const int quantity,
             const float price );

    float getInvoiceAmount( void );

    void setNumber( int number );

    int getNumber( void );

    void setDescription( std::string description );

    std::string getDescription( void );

    void setQuantity( int quantity );

    int getQuantity( void );

    void setPrice( float price );

    float getPrice( void );

private:

    int number;
    std::string description;
    int quantity;
    float price;
};


#endif //ACTIVITYONE_INVOICE_H
