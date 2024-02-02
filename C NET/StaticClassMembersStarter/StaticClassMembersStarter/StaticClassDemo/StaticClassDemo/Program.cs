using StudentClassDemo;

namespace StaticClassDemo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Student myStudent = new Student();
            myStudent.SetMajor("Computer Programming");

            Student myOtherStudent = new Student();
            myStudent.SetMajor("Doing a Buisness");

            Console.WriteLine(myStudent.GetMajor());

            Console.Write("Press any key to continue...");
            Console.ReadKey();
        }
    }
}
