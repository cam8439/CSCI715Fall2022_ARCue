// See https://aka.ms/new-console-template for more information
// USE THIS VERSION FOR WINDOWS
using System.Media;
using System.Net;

using (var client = new WebClient())
{
    //Make sure that the sound file is updated and accurate
    SoundPlayer sound = new SoundPlayer("Singring.wav");

    var s = client.DownloadString(@"https://www.cs.rit.edu/~cam8439/syncTime.txt");
Console.WriteLine(s);
    var J = DateTimeOffset.FromUnixTimeMilliseconds(long.Parse(s));
    var K = DateTimeOffset.Now;
    Console.WriteLine(J.TimeOfDay);
    Console.WriteLine(K.TimeOfDay);
    while (K.TimeOfDay < J.TimeOfDay)
    {
        K = DateTimeOffset.Now;
    }
    Console.WriteLine(J - DateTime.Now);
    sound.PlaySync();
}