# include <iostream>
# include <array>
# include <cmath>
using namespace std;

class numpy {
public:
    float pi = 3.141592653589793;

    // RAD2DEG
    float rad2deg (float rad) {
        return (rad/pi)*180.0;
    }

    //ABSOLUT
    float abs (float num) {
        if (num < 0) {
            num = (-num);
            cout << num << endl;
        }
        else {
            cout << num << endl;
        }
        return num;
    }

    //ARANGE
    void arange (float a) {
        cout << "[";
        for (float i = 0; i < (a-1); i++) {
            cout << i << ", ";
        }
        cout << a-1 << "]" << endl;
    }
    void arange (int a, int b) {\
        cout << "[";
        for (int i=a; i< (b-1); i++) {
            cout << i << ", ";
        }
        cout << b-1 << "]" << endl;
    }

    void arange (float a, float b, float c) {
        cout << "[";
        for (a; a <(b-c); a=a+c) {
            cout << a << ", ";
        }
        cout << a ;
        cout << "]" << endl;
    }

    //LINSPACE
    void linspace (float a, float b, int c) {
        float d, e, f = 0;
        d = (b-a)/(c-1);
        cout << "[";
        while (f < (c-1)) {
            cout << a << ", ";
            a = a + d;
            f++;
        }
        cout << b << "]" << endl;
    }

    void linspace (float a, float b) {
        float c, d;
        int e = 0;
        c = (b-a)/49;

        cout << "[";
        while (e <49) {
            cout << a << ", ";
            a = a + c;
            e++;
        }
        cout << b << "]" << endl;
    }

};

int main()
{
    // jangan memodifikasi bagian ini
    numpy np;
    cout << np.pi << endl;
    cout << np.rad2deg(np.pi) << endl;
    cout << np.rad2deg(np.pi/2) << endl;
    cout << np.rad2deg(0.7853981633974483) << endl;
    np.abs(-19);
    np.abs(27);
    np.arange(1,5,0.3);
    np.arange(5,21);
    np.arange(7);
    np.linspace(11,15,20);
    np.linspace(0,10);
}
