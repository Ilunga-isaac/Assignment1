
//Author : BEYA ILUNGA ISAAC


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections;
using System.Collections.Specialized;
using System.Diagnostics;
using System.Threading;

namespace Assgnment2
{
    class Program
    {
        static void Main(string[] args)
        {
       
            var cpuFrequency = new PerformanceCounter();
            cpuFrequency.CategoryName = "Processor Information";

            cpuFrequency.CounterName = "Processor Frequency";
            cpuFrequency.InstanceName = "0,0";
            Console.Write("B: La fréquence du processeur 0 est: ");
            Console.WriteLine(cpuFrequency.NextValue());
            
            DateTime startTime = DateTime.Now;
            int i, c = 0;
            for (i = 0; i < 1000000000; i++)
            {
                c++;
            }
            DateTime stopTime = DateTime.Now;
            TimeSpan duration = stopTime - startTime;
            Console.Write("E: la boucle a pris : {0} milliseconds\n", duration.TotalMilliseconds);

            int idpid = System.Diagnostics.Process.GetCurrentProcess().Id;
            Console.Write("le pid de mon processus actuel est: "+ idpid+"\n\n");

            string userName = System.Security.Principal.WindowsIdentity.GetCurrent().Name;
            Console.Write("F: Le nom d'utilisateur actuel est: " + userName + "\n");

            Process process = Process.Start("notepad.exe");
            // Attends une seconde
            int idNotpad = System.Diagnostics.Process.GetCurrentProcess().Id;
            Console.Write("H I : Le pid du processus Notpad est: " + idNotpad + "\n\n");

            Console.Write("J: Le programme attend 5 sec\n");
            Thread.Sleep(5000);
            // Fin du bloc-notes.
            process.Kill();
            Console.Write("Le programme Notpad a été fermé après 5 sec\n");

            
        }
    }
}
