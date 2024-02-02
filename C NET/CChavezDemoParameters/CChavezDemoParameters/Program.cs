namespace CChavezDemoParameters
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //  2.3.	In main add:
            //  Pass by value
            Console.WriteLine("Pass by value test:");
            int testVal1 = 1;
            Console.WriteLine("Original value: {0}", testVal1);
            Test(testVal1);
            Console.WriteLine("Returned value: {0}", testVal1);

            //  3.2.	In main add:
            //  Pass in a reference type
            Console.WriteLine("\nPass in a reference type test:");
            int[] testArray = { 1, 1, 1 };
            Console.WriteLine("Original value: {0}", testArray[0]);
            TestArray(testArray);
            Console.WriteLine("Returned value: {0}", testArray[0]);

            //  4.2.	In main add:
            //  Out parameter test
            Console.WriteLine("\nOut parameter test:");
            //  int testVal2 = 2;
            //  Console.WriteLine("Original value: {0}", testVal2);
            //  4.5.Change code to: SWAP LINES 26 and 27 for 29 and 30 ensure line 27/30 is commented out.
            int testVal2;
            //  Console.WriteLine("Original Value: {0}", testValue2);
            TestOut(out testVal2);
            Console.WriteLine("Returned value: {0}", testVal2);

            //  5.2.In main add:
            //  Ref parameter test
            Console.WriteLine("\nRef parameter test:");
            int testVal3 = 3;
            Console.WriteLine("Original value: {0}", testVal3);
            TestRef(ref testVal3);
            Console.WriteLine("Returned value: {0}", testVal3);

            //  6.2.In main add:
            //  Optional parameter passed by position
            Console.WriteLine("\nCalling TestOptional with a parameter");
            TestOptional(4);

            //  6.4.In Main Add:
            //  Optional parameter passed with no parameters
            Console.WriteLine("\nCalling TestOptional with no parameter");
            TestOptional();

            //  7.2.In main add:
            //  Multiple parameters
            Console.WriteLine("\nTestMultiple all three set");
            TestMultiple(1, 2, 3);

            //  7.4.In main add:
            //Multiple parameters, not all set
            Console.WriteLine("\nTestMultiple set just first 2");
            TestMultiple(1, 2);

            //  7.6.In main add:
            //Multiple parameters with named parameter
            Console.WriteLine("\nTestMultiple set just first 2");
            TestMultiple(1, cValue: 3);

            //  8.2.In main add:
            //Overload test string method
            Console.WriteLine("\nTest overloaded method with string");
            TestOverloaded("Test with string");

            //Overload test numeric method
            Console.WriteLine("\nTest overloaded method with numbers");
            TestOverloaded(5, 5.5);


        }
        //  2.2.	Add the following method:
        public static void Test(int aValue)
        {
            aValue = 111;
            Console.WriteLine("In Test Value is {0}", aValue);
        }
        //  3.1.	Add the following method:
        public static void TestArray(int[] anArray)
        {
            anArray[0] = 111;
            Console.WriteLine("In Test Value is {0}", anArray[0]);
        }
        //  4.1.	Add the following method:
        public static void TestOut(out int aValue)
        {
            aValue = 222;
            Console.WriteLine("In TestOut Value is {0}", aValue);
        }

        //  5.1.	Add the following method:
        public static void TestRef(ref int aValue)
        {
            aValue = 333;
            Console.WriteLine("In TestRef Value is {0}", aValue);
        }

        //  6.1.	Add the following method:
        public static void TestOptional(int aValue = 444)
        {
            Console.WriteLine("In TestOptional Value is {0}", aValue);
        }

        //  7.1.	Add the following method:
        public static void TestMultiple(int aValue, int bValue = 222, int cValue = 333)
        {
            Console.WriteLine("Inside TestMultiple -"
                + "Values: "
                + "{0}, {1}, {2}", aValue, bValue, cValue);
        }

        //  8.1.	Add the following methods:
        public static void TestOverloaded(string strParam)
        {
            Console.WriteLine("String overload called with a value of {0}", strParam);
        }

        public static void TestOverloaded(int intParam, double dblParam)
        {
            Console.WriteLine("Numeric overload called with values of {0} and {1}", intParam, dblParam);
        }


    }



}
