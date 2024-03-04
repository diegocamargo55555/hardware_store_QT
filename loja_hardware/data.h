#ifndef DATA_H
#define DATA_H
#include <QDialog>
#include <QFile>
#include <QApplication>


extern int carrinho = 0;
extern QString carrinho_text = QStringLiteral("carrinho R$: %1").arg(carrinho);



struct lista_de_produtos
{
    float price;
    QString name;
};


//
void bubble_sort_decrescente(lista_de_produtos a[], int total, QVector< QVector< QPixmap > > &image_array)
{
    int tpm = 0;
    QString tpm_name ="";
    QVector< QVector< QPixmap > > tpm_image;
    tpm_image.resize(10);
    for (int i = 0; i < tpm_image.size(); i++)
    {
        tpm_image[i].resize(10);
    }

    for (int i = 0; i < total; i++)
    {
        for (int j = i+1; j < total; j++)
        {
            if (a[i].price < a[j].price)
            {
                tpm = a[i].price;
                tpm_name = a[i].name;
                tpm_image[0][0] = image_array[0][i];

                image_array[0][i] = image_array[0][j];
                a[i].price = a[j].price;
                a[i].name = a[j].name;

                image_array[0][j] = tpm_image[0][0];
                a[j].price = tpm;
                a[j].name = tpm_name;
            }
        }
    }
}







#endif // DATA_H

