#include "common.h"

#include "class/idol.h"
#include "class/subgroup.h"


int main()
{
    Idol chika("Chika", 16);
    cout << chika.get_name('r') << endl;
    cout << chika.get_old() << endl;
    chika.set_three_dimensions(85, 85, 85);
    //vector<int> t = chika.get_three_dimensions();
    for(auto i : chika.get_three_dimensions())
        cout << i << endl;
    Idol you("You", 16);
    Idol ruby("Ruby", 16);
    Subgroup CYaRon(chika, you, ruby);

    cout << CYaRon.get_member(2).get_grade() << endl;
    return 0;
}