﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StaticClassDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            
            string doAnother;
            do
            {
                Student st = new Student();
                string firstName = GetInput("First Name");
                st.SetFirstName(firstName);
                string lastName = GetInput("Last Name");
                st.SetLastName(lastName);

                Console.WriteLine("Majors: ");
                for(int i=0;i<Student.majors.Length;++i)
                {
                    Console.WriteLine((i+1).ToString()+Student.majors[i]);
                }
                int majorIndex = int.Parse(GetInput("Major"))-1;
                st.SetMajor(Student.majors[majorIndex]);
                string studentNum = GetInput("Student Number");
                st.SetStudentNumber(studentNum);

                int score1 = int.Parse(GetInput("Score 1"));
                st.SetScore1(score1);
                int score2 = int.Parse(GetInput("Score 2"));
                st.SetScore1(score1);
                int score3 = int.Parse(GetInput("Score 3"));
                st.SetScore1(score1);

                Console.WriteLine(st.GetSummary());

                doAnother = GetInput("\nDo another (y/n)");
            } while (doAnother == "y");
        }

        private static string GetInput(string prompt)
        {
            Console.Write(prompt);
            return Console.ReadLine();
        }
    }
}
