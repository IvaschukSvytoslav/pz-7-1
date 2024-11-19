using System;

namespace Lecture8.Example1
{
    class Program
    {
        static void Swap<T>(ref T lhs, ref T rhs)
        {
            T temp;
            temp = lhs;
            lhs = rhs;
            rhs = temp;
        }

        static void Main(string[] args)
        {
            // Обмін даними типу double
            double x = 1.5;
            double y = 2.8;

            Swap<double>(ref x, ref y);

            Console.WriteLine($"x={x} y={y}");

            // Обмін даними типу string
            string first = "Hello";
            string second = "World";

            Swap<string>(ref first, ref second);

            Console.WriteLine($"first={first} second={second}");

            Console.ReadKey();
        }
    }
}
