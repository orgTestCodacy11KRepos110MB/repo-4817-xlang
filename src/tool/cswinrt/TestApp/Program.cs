﻿using System;
using Microsoft.VisualStudio.TestPlatform.TestExecutor;

namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {



            //UnitTestClient.CreateDefaultUI();
            //UnitTestClient.Run(args.ToString());

            var t = new UnitTestApp.UnitTest();
            t.TestAppTestShortString();

            //            while (true) { };

            Console.WriteLine("Press a key to continue: ");
            Console.ReadLine();
        }
    }
}