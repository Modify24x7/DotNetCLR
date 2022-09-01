using System;
using System.Text;

/// <summary>
/// Name: Program
/// Description: Main class
/// Author: Gorav Gupta
/// </summary>

namespace ProxyGenerator
{
    class Program
    {
        static void Main(string[] args)
        {
            if (args.Length >= 2)
            {
                if (args[1].ToLower().Equals("true"))
                {
                    ProxyGenerator.AssemblyToHeader(args[0], true);
                }
                else if (args[1].ToLower().Equals("false"))
                {
                    ProxyGenerator.AssemblyToHeader(args[0], false);
                }
            }
            else
            {
                StringBuilder stringBuilder = new StringBuilder();
                stringBuilder.AppendLine("ProxyGenerator Beta v1.0");
                stringBuilder.AppendLine("Description: DotNet Assembly To Cpp Header Generator");
                stringBuilder.AppendLine("Author: Gorav Gupta");
                stringBuilder.AppendLine();
                stringBuilder.AppendLine("ProxyGenerator.exe assembly true");
                stringBuilder.AppendLine("ProxyGenerator.exe assembly false");
                stringBuilder.AppendLine();
                stringBuilder.AppendLine("true: generate type, methodinfo method in header file, compile time appear error, fix manually.");
                stringBuilder.AppendLine();
                stringBuilder.Append("false: generate type in header file");

                Console.WriteLine(stringBuilder.ToString());
                Console.ReadLine();
            }
        }
    }
}
