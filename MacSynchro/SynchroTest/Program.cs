//USE THIS VERSION FOR MAC
using System.Net;
using System.Diagnostics;

using (var client = new WebClient())
{
    var s = client.DownloadString(@"https://www.cs.rit.edu/~cam8439/syncTime.txt");
    if (s == "-1"){
        Console.WriteLine("no sync time yet.");
        return;
    }
    Console.WriteLine(s);
    var J = DateTimeOffset.FromUnixTimeMilliseconds(long.Parse(s));
    var K = DateTimeOffset.Now;
    Console.WriteLine(J.TimeOfDay);
    Console.WriteLine(K.TimeOfDay);
    //Console.WriteLine(J-K);
    while(K.TimeOfDay < J.TimeOfDay)
    {
        K = DateTimeOffset.Now;
    }
    Console.WriteLine(J - DateTime.Now);
    Process.Start( new ProcessStartInfo { FileName = @"/Users/claire/Desktop/SynchroTest/cmd.exe", UseShellExecute = true } );
}