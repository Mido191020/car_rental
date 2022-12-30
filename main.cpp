#include <iostream>
#include <utility>
#include <fstream>
using namespace std;
//int price [ 10 ] ={100,200,300,500,200,250,400,600,900} ;
//string mark [10] = {"Hyundai","BMW","Mercedes","Audi","Tesla","Skoda","Kia","Toyota","Ford"};
//
//string model [10]= {"2019MD","22AS","2021DS","2018LA","209MW","2015Ps","2018PW","2017QW","2022SA"};
//
//string color [10]={"Red","black","yellow","Blue","Red","Brown","Silver","Black","grey"};
//string max_speed [10]={"190 Km/h ","180 Km/h","220 Km/h","200 Km/h","230 Km/h","160 Km/h","180 Km/h","140 Km/h","200 Km/h"};
//int date [10] = {2019,2022,2021,2017,2018,2021,2020,2015,2022};
class car{
    string name[13];
    string model2[13];
    string color2[13];
    string max_speed2[13];
    int date2[13]{};
    int price2[13]{};
    string mark [10] = {"Hyundai","BMW","Mercedes","Audi","Tesla","Skoda","Kia","Toyota","Ford"};
    string model [10]= {"2019MD","22AS","2021DS","2018LA","209MW","2015Ps","2018PW","2017QW","2022SA"};
    string color [10]={"Red","black","yellow","Blue","Red","Brown","Silver","Black","grey"};
    string maxs_peed [10]={"190 Km/h ","180 Km/h","220 Km/h","200 Km/h","230 Km/h","160 Km/h","180 Km/h","140 Km/h","200 Km/h"};
    int price [ 10 ] ={100,200,300,500,200,250,400,600,900} ;
    int date [10] = {2019,2022,2021,2017,2018,2021,2020,2015,2022};
public:
    car(){

        for (int i = 0; i < 10; i++) {
            name[i]=mark[i];
            model2[i]=model[i];
            color2[i]=color[i];
            max_speed2[i]=maxs_peed[i];
            price2[i]=price[i];
            date2[i]=date[i];
        }
    }
    void car_data() {
        int i = 0;
        fstream h;
        h.open("Hyundai.txt", ios::out);
        if (!h.is_open()) {
            cout << "File not created!";
        } else {
            h << "\t\t\tName : " << mark[i] << endl;
            h << "\t\t\tColor : " << color[i] << endl;
            h << "\t\t\tModel : " << model[i] << endl;
            h << "\t\t\tDate : " << date[i] << endl;
            h << "\t\t\tMaximum Speed : " << maxs_peed[i] << endl;
            h << "\t\t\tPrice : " << price[i] << "k" << endl;

            h.close();
        }
        i++;
        fstream b;
        b.open("BMW.txt", ios::out);
        if (!b) {
            cout << "File not created!";
        } else {
            b << "\t\t\tName : " << mark[i] << endl;
            b << "\t\t\tColor : " << color[i] << endl;
            b << "\t\t\tModel : " << model[i] << endl;
            b << "\t\t\tDate : " << date[i] << endl;
            b << "\t\t\tMaximum Speed : " << maxs_peed[i] << endl;
            b << "\t\t\tPrice : " << price[i] << "k" << endl;
            b.close();
        }

        i++;
        fstream m;
        m.open("Mercedes.txt", ios::out);
        if (!m) {
            cout << "File not created!";
        } else {
            m << "\t\t\tName : " << mark[i] << endl;
            m << "\t\t\tColor : " << color[i] << endl;
            m << "\t\t\tModel : " << model[i] << endl;
            m << "\t\t\tDate : " << date[i] << endl;
            m << "\t\t\tMaximum Speed : " << maxs_peed[i] << endl;
            m << "\t\t\tPrice : " << price[i] << "k" << endl;
            m.close();
        }

        i++;
        fstream a;
        a.open("Audi.txt", ios::out);
        if (!a) {
            cout << "File not created!" << endl;
        } else {
            a << "\t\t\tName : " << mark[i] << endl;
            a << "\t\t\tColor : " << color[i] << endl;
            a << "\t\t\tModel : " << model[i] << endl;
            a << "\t\t\tDate : " << date[i] << endl;
            a << "\t\t\tMaximum Speed : " << maxs_peed[i] << endl;
            a << "\t\t\tPrice : " << price[i] << "k" << endl;
            a.close();
        }

        i++;
        fstream t;
        t.open("Tesla.txt", ios::out);
        if (!t) {
            cout << "File not created!";
        } else {
            t << "\t\t\tName : " << mark[i] << endl;
            t << "\t\t\tColor : " << color[i] << endl;
            t << "\t\t\tModel : " << model[i] << endl;
            t << "\t\t\tDate : " << date[i] << endl;
            t << "\t\t\tMaximum Speed : " << maxs_peed[i] << endl;
            t << "\t\t\tPrice : " << price[i] << "k" << endl;
            t.close();
        }

        i++;
        fstream s;
        s.open("Skoda.txt", ios::out);
        if (!s) {
            cout << "File not created!";
        } else {
            s << "\t\t\tName : " << mark[i] << endl;
            s << "\t\t\tColor : " << color[i] << endl;
            s << "\t\t\tModel : " << model[i] << endl;
            s << "\t\t\tDate : " << date[i] << endl;
            s << "\t\t\tMaximum Speed : " << maxs_peed[i] << endl;
            s << "\t\t\tPrice : " << price[i] << "k" << endl;
            s.close();
        }

        i++;
        fstream k;
        k.open("kia.txt", ios::out);
        if (!k) {
            cout << "File not created!";
        } else {
            k << "\t\t\tName : " << mark[i] << endl;
            k << "\t\t\tColor : " << color[i] << endl;
            k << "\t\t\tModel : " << model[i] << endl;
            k << "\t\t\tDate : " << date[i] << endl;
            k << "\t\t\tMaximum Speed : " << maxs_peed[i] << endl;
            k << "\t\t\tPrice : " << price[i] << "k" << endl;
            k.close();
        }

        i++;
        fstream to;
        to.open("Toyota.txt", ios::out);
        if (!to) {
            cout << "File not created!";
        } else {
            to << "\t\t\tName : " << mark[i] << endl;
            to << "\t\t\tColor : " << color[i] << endl;
            to << "\t\t\tModel : " << model[i] << endl;
            to << "\t\t\tDate : " << date[i] << endl;
            to << "\t\t\tMaximum Speed : " << maxs_peed[i] << endl;
            to << "\t\t\tPrice : " << price[i] << "k" << endl;
            to.close();
        }

        i++;
        fstream f;
        f.open("Ford.txt", ios::out);
        if (!f) {
            cout << "File not created!";
        } else {
            f << "\t\t\tName : " << mark[i] << endl;
            f << "\t\t\tColor : " << color[i] << endl;
            f << "\t\t\tModel : " << model[i] << endl;
            f << "\t\t\tDate : " << date[i] << endl;
            f << "\t\t\tMaximum Speed : " << maxs_peed[i] << endl;
            f << "\t\t\tPrice : " << price[i] << "k" << endl;
            f.close();
        }
    }

        string get_name(int n) {
            return name[n - 1];
        }
        string get_color(int n) {
            return color[n - 1];
        }
        string get_model(int n) {
            return model[n - 1];
        }

        string get_max_speed(int n) {
            return maxs_peed[n - 1];
        }
        int get_price(int n) {
            return price[n - 1];
        }
        int get_date(int n) {
            return date[n - 1];
        }

    };
class lessee {

    string name;
    string address;
    string phone;
    string id;
    string license;
public:
    void set_name(string n) {
        name = std::move(n);
    }

    void set_address(string a) {
        address = std::move(a);
    }

    void set_phone(string p) {
        phone = std::move(p);
    }

    void set_id(string nid) {
        id = std::move(nid);
    }

    void set_license(string c) {
        license = std::move(c);
    }
    string get_name(){
        return name;
    }
    string get_address(){
        return address;
    }
    string get_phone(){
        return phone;
    }
    string get_id(){
        return id;
    }
    string get_license(){
        return license;
    }
};
void show_data_car(){
    car data;
    cout<<"-------------------------------------------------------------------------";
    for(int i=0;i<10;i++){
        cout<<"    "<<(i+1)<<"- "<<data.get_name()[i]<<"    "<<(i+1)<<"- "<<data.get_model()<<"    "<<(i+1)<<"- "<<data.get_color()[i]<<"    "<<(i+1)<<"- "<<data.get_max_speed()[i]<<"    "<<(i+1)<<"- "<<data.get_date()[i]<<data.get_price()[i]<<endl;

    }
    cout<<"----------------------------------------------------------------------";
}


//void car_data(){
//
//    int i=0;
//    fstream h;
//    h.open("Hyundai.txt",ios::in|ios::out);
//    if (!h) {
//        cout << "File not created!";
//    } else{
//        h<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        cout<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        h.close();
//    }
//
//    i++;
//    fstream b;
//    b.open("BMW.txt",ios::in|ios::out);
//    if (!b)
//    {
//        cout << "File not created!";
//    }
//    else
//    {
//        b<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        cout<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        b.close();
//    }
//
//    i++;
//    fstream m;
//    m.open("Mercedes.txt",ios::in|ios::out);
//    if (!m)
//    {
//        cout << "File not created!";
//    }
//    else
//    {
//        m<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        cout<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        m.close();
//    }
//
//    i++;
//    fstream a;
//    a.open("Audi.txt",ios::in|ios::out);
//    if (!a)
//    {
//        cout << "File not created!"<<endl;
//    }
//    else
//    {
//        a<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        cout<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        a.close();
//    }
//
//    i++;
//    fstream t;
//    t.open("Tesla.txt",ios::in|ios::out);
//    if (!t)
//    {
//        cout << "File not created!";
//    }
//    else
//    {
//        t<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        cout<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        t.close();
//    }
//
//    i++;
//    fstream s;
//    s.open("Skoda.txt",ios::in|ios::out);
//    if (!s)
//    {
//        cout << "File not created!";
//    }
//    else
//    {
//        s<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        cout<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        s.close();
//    }
//
//    i++;
//    fstream k;
//    k.open("kia.txt",ios::in|ios::out);
//    if (!k)
//    {
//        cout << "File not created!";
//    }
//    else
//    {
//        k<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        cout<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        k.close();
//    }
//
//    i++;
//    fstream to;
//    to.open("Toyota.txt",ios::in|ios::out);
//    if (!to)
//    {
//        cout << "File not created!";
//    }
//    else
//    {
//        to<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        cout<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        to.close();
//    }
//
//    i++;
//    fstream f;
//    f.open("Ford.txt",ios::in|ios::out);
//    if (!f)
//    {
//        cout << "File not created!";
//    }
//    else
//    {
//        f<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        cout<<mark[i]<<" "<<color[i]<<" "<<model[i]<<" "<<date[i]<<" "<<max_speed[i]<<" "<<price[i]<<"k"<<endl;
//        f.close();
//    }
//
//}



class rent:public car{
private:
    int days{};
    double price2=0;
    double rent_fee=0;


public:




    void data(char m) {



        lessee l;
        string name,address,phone,id,license;
        cout << "\t\t\t\tPlease enter your name"<<endl;
        cin>>name;
        l.set_name(name);
        cout << "\t\t\t\tPlease enter your address"<<endl;
        cin>>address;
        l.set_address(address);

        cout << "\t\t\t\tPlease enter your phone"<<endl;
        cin>>phone;
        l.set_phone(phone);

        cout << "\t\t\t\tPlease enter your id"<<endl;
        cin>>id;
        l.set_id(id);

        cout << "\t\t\t\tPlease enter your license"<<endl;
        cin>>license;
        l.set_license(license);

        cout << endl;
        do {
            cout << "\t\t\t\tPlease Select a Car" << endl;
            cout << "\t\t\t\tEnter 'A' for Tesla 2011." << endl;
            cout << "\t\t\t\tEnter 'B' for Hyundai 2015." << endl;
            cout << "\t\t\t\tEnter 'C' for Ford 2017." << endl;
            cout << "\t\t\t\tEnter 'D' for Kia 2018." << endl;
            cout << "\t\t\t\tEnter 'E' for BMW 2019." << endl;
            cout << "\t\t\t\tEnter 'F' for Mercedes 2012." << endl;
            cout << "\t\t\t\tEnter 'G' for TOYOTA 2013." << endl;
            cout << "\t\t\t\tEnter 'H' for FIAT 2016." << endl;
            cout << "\t\t\t\tEnter 'I' for SUZUKI 2020." << endl;
            cout << "\t\t\t\tEnter 'J' for SKODA 2014." << endl;

            cout << endl;

            cout << "\t\t\t\tChoose one of the Cars from these above options: ";
            cin >> m;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            if (m == 'A') {


                cout << "You have  chose Tesla model 2011" << endl;
                ifstream inA("A.txt");
                char line[100];
                while (inA) {
                    inA.getline(line, 100);
                    if (inA) cout << line << endl;
                }

            }
            if (m == 'B') {


                cout << "You have chose Hyundai model 2015" << endl;
                ifstream inB("B.txt");
                char line[100];
                while (inB) {
                    inB.getline(line, 100);
                    if (inB) cout << line << endl;

                }

            }
            if (m == 'C') {

                cout << "You have chose Ford model 2017" << endl;
                ifstream inC("C.txt");
                char line[100];
                while (inC) {
                    inC.getline(line, 100);
                    if (inC) cout << line << endl;
                }

            }
            if (m == 'D') {

                cout << "You have chose kia model 2018" << endl;
                ifstream inD("D.txt");
                char line[100];
                while (inD) {
                    inD.getline(line, 100);
                    if (inD) cout << line << endl;
                }

            }
            if (m== 'E') {

                cout << "You have chose BMW model 2019" << endl;
                ifstream inE("E.txt");
                char line[100];
            }


            if (m == 'F') {

                cout << "You have chose Mercedes model 2012" << endl;
                ifstream inF("F.txt");
                char line[100];
                while (inF) {
                    inF.getline(line, 100);
                    if (inF) cout << line << endl;
                }

            }
            if (m == 'G') {

                cout << "You have chose TOYOTA model 2013" << endl;
                ifstream inG("G.txt");
                char line[100];
                while (inG) {
                    inG.getline(line, 100);
                    if (inG) cout << line << endl;
                }

            }
            if (m == 'H') {

                cout << "You have chose FIAT model 2016" << endl;
                ifstream inH("H.txt");
                char line[100];
                while (inH) {
                    inH.getline(line, 100);
                    if (inH) cout << line << endl;
                }

            }
            if (m == 'I') {

                cout << "You have chose  SUZUKI model 2020" << endl;
                ifstream inI("I.txt");
                char line[100];
                while (inI) {
                    inI.getline(line, 100);
                    if (inI) cout << line << endl;
                }

            }
            if (m == 'J') {

                cout << "You have chose SKODA model 2014" << endl;
                ifstream inJ("J.txt");
                char line[100];
                while (inJ) {
                    inJ.getline(line, 100);
                    if (inJ) cout << line << endl;
                }

            }
            if (m != 'A' && m != 'B' && m != 'C' && m != 'D' && m != 'E' && m != 'F' &&
                m != 'G' && m != 'H' && m != 'I' && m!= 'J') {
                cout << "In valid Car Model and Please try again!" << endl;
            }
        } while (m != 'A' && m != 'B' && m != 'C' && m != 'D' && m != 'E' && m != 'F' &&
                 m != 'G' && m != 'H' && m != 'I' && m != 'J');
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Please see following information: " << endl;
        cout << "Number of days you wish to rent the car : ";
        cin >> days;
        cout << endl;


        double calc(m);{


            cout << "Calculating rent. Please wait......" << endl;

            if (m == 'A')
                price2 = days * price[0];
            if (m == 'B')
                price2 = days * price[1];
            if (m == 'C')
                price2 = days * price[2];
            if (m == 'D')
                price2 = days * price[3];
            if (m == 'E')
                price2 = days * price[4];
            if (m == 'F')
                price2 = days * price[5];
            if (m == 'G')
                price2 = days * price[6];
            if (m == 'H')
                price2 = days * price[7];
            if (m == 'I')
                price2 = days * price[8];
            if (m == 'J')
                price2 = days * price[9];


            if (rent_fee != 0) {
                price2 += rent_fee;
            }
            cout<<price2<<endl;
        }

    }

};




int main(){
    car c;
    cout<<c.get_name()<<endl;
    cout<<c.get_color()<<endl;
    cout<<c.get_date()<<endl;
    cout<<c.get_model()<<endl;
    cout<<c.get_max_speed()<<endl;
    cout<<c.get_price()<<endl;
    cout<<"---------------------------------"<<endl;
    lessee l;
    cout<<l.get_name()<<endl;
    cout<<l.get_id()<<endl;
    cout<<l.get_phone()<<endl;
    cout<<l.get_address()<<endl;
    cout<<l.get_license()<<endl;
    cout<<"---------------------------------"<<endl;
    c.car_data();
    cout<<"---------------------------------"<<endl;
    show_data_car();
    cout<<"---------------------------------"<<endl;
    car_data() ;
    cout<<"---------------------------------"<<endl;
//login();
    cout<<"---------------------------------"<<endl;
    rent r;
    char m;
    cin>>m;
    r.data(m);
    cout<<"---------------------------------"<<endl;


    return 0;
}





