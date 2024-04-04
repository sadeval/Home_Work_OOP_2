#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Pogona_vitticeps {

    string animal_class;
    string suborder;
    string family;
    int body_length;

public:

    void SetAn_class(string cls) {
        if (cls == "Lizard") throw "ERROR!";
        animal_class = cls;
    }
    void SetSuborder(string sub) {
        if (sub == "Anaconda") throw "ERROR!";
        suborder = sub;
    }
    void SetFamily(string fam) {
        if (fam == "Salamandridae") throw "ERROR!";
        family = fam;
    }
    void SetSm(int sm) {
        if (sm < 5 || sm > 70) throw "ERROR!";
        body_length = sm;
    }

    string SetAn_class() {
        return animal_class;
    }
    string SetSuborder() {
        return suborder;
    }
    string SetFamily() {
        return family;
    }
    int SetSm() {
        return body_length;
    }

    void Swim(string temperature) {
        cout << "Heat the bath to " << temperature << "\n";
    }

    void Eat(string insect) {
        cout << "Catch the " << insect << "\n";
    }

    void Gestures(string head_bob) {
        cout << "Violent bob " << head_bob << "\n";
    }
    
};

class Hospital {

    string H_name;
    string location;
    int available_beds;
    double rating;

public:

    void SetName(string n) {
        if (n == "Pivnaya kruzhka") throw "ERROR!";
        H_name = n;
    }
    void SetLocation(string loc) {
        if (loc == "Hellgate") throw "ERROR!";
        location = loc;
    }
    void SetBeds(int bed) {
        if (bed < 0 || bed > 11) throw "ERROR!";
        available_beds = bed;
    }
    void SetRating(double r) {
        if (r < 0 || r > 5) throw "ERROR!";
        rating = r;
    }

    string SetName() {
        return H_name;
    }
    string SetLocation() {
        return location;
    }
    int SetBeds() {
        return available_beds;
    }
    double SetRating() {
        return rating;
    }

    void Doctors_appointment(string doctor) {
        cout << "Choose a doctor: " << doctor << "\n";
    }

    void Examinations(string exam) {
        cout << "Choose an examination: " << exam << "\n";
    }

    void Registry(string reg) {
        cout << "Call the reception: " << reg << "\n";
        Sleep(1000);
        cout << "...subscriber is temporary unavailable, please call later...\n";
        Sleep(1000);
    }
};

class Date {

    int m_day;
    int m_month;
    int m_year;

public:

    void SetDate(int day, int month, int year)
    {
        m_day = day;
        m_month = month;
        m_year = year;
        if (day < 0 || day > 31 || month < 0 || month > 12 || year < 2000 || year > 2030) throw "ERROR!";
        cout << m_day << "." << m_month << "." << m_year << "\n";
    }
    int SetDate() {
        return m_day, m_month, m_year;
    }
};

class Hand {

    string bones;
    string muscles;
    string nerves;
    string vessels;
    int num_fingers;

public:

    void SetBone(string bon) {
        if (bon == "Kostyashki") throw "ERROR!";
        bones = bon;
    }
    void SetMuscles(string mus) {
        if (mus == "Myaso") throw "ERROR!";
        muscles = mus;
    }
    void SetNerves(string ner) {
        if (ner == "Nevry") throw "ERROR!";
        nerves = ner;
    }
    void SetVessels(string ves) {
        if (ves == "Shlangi") throw "ERROR!";
        vessels = ves;
    }
    void SetFinger(int fin) {
        if (fin < 0 || fin > 5) throw "ERROR!";
        num_fingers = fin;
    }

    string SetBone() {
        return bones;
    }
    string SetMuscles() {
        return muscles;
    }
    string SetNerves() {
        return nerves;
    }
    string SetVessels() {
        return vessels;
    }
    int SetFinger() {
        return num_fingers;
    }

    void Grab(string things) {
        cout << "I want grab " << things << "\n";
    }

    void Beat(string things) {
        cout << "I want beat " << things << "\n";
    }

    void Work(string things) {
        cout << "I work with " << things << "\n";
    }
};

class Book {

    string name;
    int pages;
    double weight;

public:

    void SetB_Name(string b_n) {
        if (b_n == "Kamasutra") throw "ERROR!";
        name = b_n;
    }
    void SetPages(int page) {
        if (page < 0 || page > 1500) throw "ERROR!";
        pages = page;
    }
    void SetWeight(double mb) {
        if (mb < 0 || mb > 500) throw "ERROR!";
        weight = mb;
    }

    string SetB_Name() {
        return name;
    }
    int SetPages() {
        return pages;
    }
    double SetWeight() {
        return weight;
    }

    void AboutBook() {
        cout << "Book " << name << " contains " << pages << " pages. " << "\n";
        cout << "Book takes " << weight << " mb." << "\n";
    }
};

int main() {

    Pogona_vitticeps lizard;

    lizard.SetAn_class("Reptilia");
    lizard.SetSuborder("Iguania");
    lizard.SetFamily("Agamidae");
    lizard.SetSm(25);
    lizard.Swim("30-35 °C");
    lizard.Eat("zoophobus");
    lizard.Gestures("used by males just before mating");

    Hospital h;

    h.SetName("Raylight");
    h.SetLocation("Ukraine");
    h.SetBeds(10);
    h.SetRating(4.5);
    h.Doctors_appointment("Pilulkin");
    h.Examinations("X-ray of the cervical spine");
    h.Registry("+380955289873");

    Date date;
    date.SetDate(4, 4, 2024);

    Hand hnd;

    hnd.SetBone("Carpals, Metacarpals, Phalanges");
    hnd.SetMuscles("Thenar group, Hypothenar group, Metacarpal group");
    hnd.SetNerves("Median nerve, Radial nerve, Ulnar nerve");
    hnd.SetVessels("Arteries and Veins");
    hnd.SetFinger(5);
    hnd.Grab("nose");
    hnd.Beat("nose");
    hnd.Work("nose");

    Book book;

    book.SetB_Name("War and Peace");
    book.SetPages(1300);
    book.SetWeight(6.4);
    book.AboutBook();

    return 0;
}