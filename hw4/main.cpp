int main()
{

    Student *stu = new Student[10];
    Student *someone;

    someone = stu;

    int count = 0;

    while(count < N)
    {
        
        getline(cin, someone -> name);
        getline(cin, someone -> student_ID);

        for(int i = 0; i < 5; i++)
        {

            cin >> someone -> homework_score[i];

        }

        cin >> someone -> midterm_score;
        cin >> someone -> finalexam_score;

        someone -> semester_score = someone -> calculateScore();

        cin.get();

        count++;
        someone++;

    }

    for(int i = 0; i < N - 1; i++)
    {

        for(int j = 0; j < N - i - 1; j++)
        {

            if(stu[j].semester_score <= stu[j + 1].semester_score)
            {

                if(stu[j].semester_score == stu[j + 1].semester_score)
                {

                    if(stu[j].student_ID > stu[j + 1].student_ID)
                    {

                        Student temp;
                        temp = stu[j + 1];
                        stu[j + 1] = stu[j];
                        stu[j] = temp;

                    }

                }
                else
                {

                    Student temp;
                    temp = stu[j];
                    stu[j] = stu[j + 1];
                    stu[j + 1] = temp;

                }

            }

        }

    }

    for(int i = 0; i < N; i++)
    {

        cout << stu[i].name << " (" << stu[i].student_ID << ") " << stu[i].semester_score << endl;

    }

}
