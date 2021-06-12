
class Student
{
private:
    string name;
    int mark1;
    int mark2;

public:
    Student()
    {
        this->name = "";
        this->mark1 = 0;
        this->mark2 = 0;
    }

    Student(string na, float ma1, float ma2)
    {
        this->name = na;
        this->mark1 = ma1;
        this->mark2 = ma2;
    }

    int GetMarks(int marknumber)
    {
        if (marknumber == 1)
        {
            return this->mark1;
        }
        return this->mark2;
    }
    float calc_total()
    {
        return this->mark1 + this->mark2;
    }
};
