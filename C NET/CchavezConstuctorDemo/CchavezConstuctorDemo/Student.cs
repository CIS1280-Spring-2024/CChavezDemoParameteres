using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConstructorDemo
{
    class Student
    {

        //-------------------------------------
        //Constructors
        //-------------------------------------

        // Empty constructor
        public Student():this("Number Pending")
        {
            //  not needed from this cahining 
            //  Major = "Undeclared";
            //  FirstName = "TBD";
            //  LastName = "TBD";
            //  StudentNumber = "Number Pending";
        }

        // Single varable constructor
        public Student(string sId) : this(sId, "TBD", "TBD")
        {
            //  not needed from this chaining
            //  StudentNumber = sId;
            //  Major = "Undeclared";
            //  FirstName = "TBD";
            //  LastName = "TBD";
        }

        public Student(string sId, string firstName, string lastName):this(sId,firstName,lastName,-1,-1,-1,"Undeclared")
        {
            //  not needed from chaining
            //  StudentNumber = sId;
            //  Major = "Undeclared";
            //  FirstName = "TBD";
            //  LastName = "TBD";
        }

        // Overloaded Constructor
        public Student(string sId, string firstName, string lastName, int s1, int s2, int s3, string maj)
        {
            StudentNumber = sId;
            FirstName = firstName;
            LastName = lastName;
            score1 = s1;
            score2 = s2;
            score3 = s3;        
            Major = maj;
            CalcAverage();
        }
        //-------------------------------------
        //Properties
        //-------------------------------------
        public string Major { get; set; }

        private int score1;

        public int Score1
        {
            get { return score1; }
            set { score1 = value; CalcAverage(); }
        }
        private int score2;

        public int Score2
        {
            get { return score2; }
            set { score2 = value; CalcAverage(); }
        }

        private int score3;

        public int Score3
        {
            get { return score3; }
            set { score3 = value; CalcAverage(); }
        }

        public string FirstName { get; set; }
        public string LastName { get; set; }
        public string StudentNumber { get; set; }
        public double Average { get; private set; }

        //-------------------------------------
        //Instance Methods
        //------------------------------------
        public void CalcAverage()
        {
            Average = (score1 + score2 + score3) / 3.0;
        }

        //-------------------------------------
        //  Destructors 
        //------------------------------------
        ~ Student()
        {
            //  destructores trigger when the object is garbage collected.
            // this currently does not tigger in the code
            Console.WriteLine($"the student {FirstName} {LastName} has been removed from the system");
        }

        // you can't do this 
        //protected override void Finalize()
        //{
        //    try
        //    {
        //        // Cleanup statements...
        //    }
        //    finally
        //    {
        //        base.Finalize();
        //    }
        //}

    }
}
