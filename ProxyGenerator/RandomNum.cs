using System;
using System.Collections.Generic;
using System.Security.Cryptography;

/// <summary>
/// Name: RandomHelper, Random, RandomNum
/// Snip From ConfuserEx
/// </summary>

namespace ProxyGenerator
{
    public class RandomHelper
    {
        public static RandomNum Random { get; set; }

        static RandomHelper()
        {
            Random = new RandomNum();
        }
    }

    public class Random
    {
        public static string GetRandomString(int len)
        {
            char[] dictionary = "ABCEDFGHIJKLMNOPQRSTUVWXYZ0123456789".ToCharArray();

            string shit = "";
            for (int i = 0; i < len; i++)
            {
                shit += dictionary[RandomHelper.Random.Next(dictionary.Length)];
            }
            return "s" + shit.ToLower();
        }
    }

    public class RandomNum : RandomNumberGenerator
    {
        private static RandomNumberGenerator r;

        public RandomNum()
        {
            r = Create();
        }

        public override void GetBytes(byte[] buffer)
        {
            r.GetBytes(buffer);
        }

        public double NextDouble()
        {
            byte[] b = new byte[4];
            r.GetBytes(b);
            return (double)BitConverter.ToUInt32(b, 0) / uint.MaxValue;
        }

        public int Next(int minValue, int maxValue)
        {
            return (int)Math.Floor(NextDouble() * (maxValue - minValue)) + minValue;
        }

        public int Next()
        {
            return Next(0, int.MaxValue);
        }

        public int Next(int maxValue)
        {
            return Next(0, maxValue);
        }

        public byte NextByte()
        {
            return (byte)Next(byte.MaxValue);
        }

        public uint NextUInt32()
        {
            return (uint)Next() * 2;
        }

        public void Shuffle<T>(IList<T> list)
        {
            for (int i = list.Count - 1; i > 1; i--)
            {
                int k = Next(i + 1);
                T tmp = list[k];
                list[k] = list[i];
                list[i] = tmp;
            }
        }

        public override void GetNonZeroBytes(byte[] data)
        {
            r.GetNonZeroBytes(data);
        }
    }
}
