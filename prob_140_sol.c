long result = 0;
 long[,] start = new long[,] { {  0, -1 },
                               {  0,  1 },
                               { -3, -2 },
                               { -3,  2 },
                               { -4, -5 },
                               { -4,  5 },
                               {  2, -7 },
                               {  2,  7 } };
List<long> nuggets = new List<long>();
 
for (int j = 0; j < start.GetLength(0); j++) {
    long k = start[j, 0];
    long b = start[j, 1];
 
    for (int i = 0; i < 30; i++) { 
        long knew = -9 * k + -4 * b + -14;
        long bnew = -20 * k + -9 * b + -28;
        k = knew;
        b = bnew;
        if (k > 0 && !nuggets.Contains(k))
            nuggets.Add(k);
    }
}
 
nuggets.Sort();
for (int i = 0; i < 30; i++)
    result += nuggets[i];
