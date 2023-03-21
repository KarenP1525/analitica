#include <iostream>

using namespace std;

class Paciente{
    public:
        Paciente(string _nombre, int _telefono);
        string getNombre();
        void setNombre(string _nombre);
        int getTelefono();
        void setTelefono(int _telefono);
    protected:
        string nombre;
        int telefono;
};
class Cita:public Paciente{
    public:
        Cita(string _nombre, int _telefono, double _hora);
        double getHora();
        void setHora(double _hora);
    protected:
        double hora;

};
class Agenda:public Cita{
    public:
        Agenda(string _nombre, int _telefono, double _hora);

};
Paciente::Paciente(string _nombre, int _telefono){
            nombre=_nombre;
            telefono=_telefono;
            
        }
string Paciente::getNombre(){
            return nombre;

        };
void Paciente::setNombre(string _nombre){
            nombre=_nombre;
        };
int Paciente::getTelefono(){
            return telefono;
        };
void Paciente::setTelefono(int _telefono){
            telefono=_telefono;
        };
Cita::Cita(string _nombre, int _telefono, double _hora):Paciente(_nombre, _telefono){
            hora=_hora;
        };
double Cita::getHora(){
            return hora;
        };
void Cita::setHora(double _hora){
            hora=_hora;
        };
Agenda::Agenda(string _nombre, int _telefono, double _hora):Cita(_nombre, _telefono,_hora){
        };


int main(){
    
    string nombre;
    int telefono;
    double hora;

    cout<<"\nDame el nombre del paciente: ";
    cin>>nombre;
    cout<<"\nDame el telefono del paciente ";
    cin>>telefono;
    cout<<"\nDame la hora de la cita del paciente ";
    cin>>hora;

    
    Agenda UnaAgenda(nombre, telefono,hora);
    
    cout<<"\nEl nombre del paciente es: "<<UnaAgenda.getNombre();
    cout<<"\nEl teléfono del paciente es: "<<UnaAgenda.getTelefono();
    cout<<"\nLa hora de la cita del paciente es: "<<UnaAgenda.getHora()<<endl;


    UnaAgenda.setTelefono(443330293);
    UnaAgenda.setHora(12);
    
    cout<<"\nEl teléfono actualizado del paciente es: "<<UnaAgenda.getTelefono();
    cout<<"\nLa hora actualizada es: "<<UnaAgenda.getHora();
;
}