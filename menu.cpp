#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    const int n=70;
    char s[n];
    ofstream fout("menu.txt");
    fout<<"\t\t\tWELCOME TO GRILL IN !\n\n";
	fout<<"\t\t\t****MENU CARD****\n\n\n";
    fout<<"      Veg Soup:-                      Starters:-             \n";
    fout<<"|Items:              Price: |   |Items:             Price:  |\n";
    fout<<"|1.Tomatoe Soup      Rs.70/-|   |4.Veg Manchurian   Rs.150/-|\n";
    fout<<"|2.Spinach Soup      Rs.80/-|   |5.Veg Pattice      Rs.195/-|\n";
    fout<<"|3.Hot & Sour Soup   Rs.90/-|   |6.Veg Roll         Rs.170/-|\n";
    fout<<"\n\n";
    fout<<"      Indian Breads:-                 Vegetables:-           \n";
    fout<<"|Items:              Price: |   |Items:             Price:  |\n";
    fout<<"|7.Simple Chapati    Rs.20/-|   |10.Butter Paneer   Rs.400/-|\n";
    fout<<"|8.Garlic Naan       Rs.30/-|   |11.Special Kofta   Rs.350/-|\n";
    fout<<"|9.Simple Naan       Rs.25/-|   |12.Dal fry         Rs.300/-|\n";
    fout<<"\n\n";
    fout<<"      Rice:-                          Deserts:-              \n";
    fout<<"|Items:              Price: |    |Items:             Price: |\n";
    fout<<"|13.Jeera Rice       Rs.70/-|    |16.Raso Gulla 	    Rs.50/-|\n";
    fout<<"|14.Lemon Rice       Rs.85/-|    |17.Raas malai      Rs.70/-|\n";
    fout<<"|15.Manchurian Rice  Rs.90/-|    |18.Gulab jamun     Rs.40/-|\n";
    
fout.close();
ifstream fin("menu.txt");
while(fin)
{
    fin.getline(s,n);
    cout<<s<<endl;
}
fin.close();
}
