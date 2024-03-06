#include <QDialog>
#include <QFile>
#include <QApplication>

struct lista_de_produtos
{
    float price;
    QString name;
};

void bubble_r (lista_de_produtos a[], int total, QVector< QVector< QPixmap > > &image_array){

    if (total > 1){

        int tpm = 0;
        QString tpm_name ="";
        QVector< QVector< QPixmap > > tpm_image;
        tpm_image.resize(10);
        for (int i = 0; i < tpm_image.size(); i++)
        {
            tpm_image[i].resize(10);
        }

        for (int i = 0; i < total-1; ++i)
        {
            if (a[i].price < a[i+1].price)
            {
                tpm = a[i].price;
                tpm_name = a[i].name;
                tpm_image[0][0] = image_array[0][i];

                image_array[0][i] = image_array[0][i+1];
                a[i].price = a[i+1].price;
                a[i].name = a[i+1].name;

                image_array[0][i+1] = tpm_image[0][0];
                a[i+1].price = tpm;
                a[i+1].name = tpm_name;
            }
        }
        bubble_r(a, total-1,image_array);
    }
}

void bubble_decrescente(lista_de_produtos a[], int total, QVector< QVector< QPixmap > > &image_array)
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
/*
void bubble_r (int *v, int n){
 if (n > 1){
    for (int i = 0; i < n-1; i++)
        if (v[i] > v[i+1])
            troca (&v[i], &v[i+1]);
 bubble_r(v, n-1);
 }
}
*/


