using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace ConstructorDemo
{
    class Program
    {
        static void Main(string[] args)
        {
            Student myStudent = new Student("1234", "Colby", "Chavez", 100, 80, 90, "Comp Prog");

            // Outputs from values initilized construtor to default values
            // This displays the values as TBD, TBD, Undeclared, and Number Pending

            Console.WriteLine("My First name is {0}. \n", myStudent.FirstName);
            Console.WriteLine("My Last name is {0}. \n", myStudent.LastName);
            Console.WriteLine("My Student number is {0}. \n", myStudent.StudentNumber);
            Console.WriteLine("My Major is {0}. \n", myStudent.Major);
            Console.WriteLine("My Score 1 is {0}. \n", myStudent.Score1);
            Console.WriteLine("My Score 2 is {0}. \n", myStudent.Score2);
            Console.WriteLine("My Score 3 is {0}. \n", myStudent.Score3);
            Console.WriteLine("My Average is {0}. \n", myStudent.Average);

            myStudent.Major = "Computer Programming";

            Console.WriteLine("My Major is {0}.", myStudent.Major);
            Console.WriteLine("This was set after the constructor!");

            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
        }
    }
}
