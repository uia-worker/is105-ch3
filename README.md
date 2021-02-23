# is105-ch3
Alle kommandoer i dette dokumentet, som hører til en kommandofortolker (Terminal 2.9.4 på macOS, Git-bash MINGW64_NT_10.0-19041, Developer PowerShell for VS 2019 og Linux 4.19.104-microsoft-standard på MS Windows 10), presenteres med $ foran kommandoet.
Developer PowerShell for VS 2019 er for å kunne kompilere rene MS Windows programmer.

## Windows 10 
![Windows timeline](https://upload.wikimedia.org/wikipedia/commons/thumb/1/17/Suite_des_versions_de_Windows.svg/800px-Suite_des_versions_de_Windows.svg.png)
Se i [Hybrid kernel](https://en.wikipedia.org/wiki/Hybrid_kernel):
> One prominent example of a hybrid kernel is the Microsoft Windows NT kernel that powers all operating systems in the Windows NT family, up to and including Windows 10 and Windows Server 2019, and powers Windows Phone 8, Windows Phone 8.1, and Xbox One.
![Windows 2000 architecture](https://upload.wikimedia.org/wikipedia/commons/thumb/5/5d/Windows_2000_architecture.svg/468px-Windows_2000_architecture.svg.png "Windows 2000 architecture")

## macOS 
![Unix timeline](https://upload.wikimedia.org/wikipedia/commons/thumb/c/cd/Unix_timeline.en.svg/790px-Unix_timeline.en.svg.png "Unix timeline")
![Mac OS X architecture](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f2/Diagram_of_Mac_OS_X_architecture.svg/556px-Diagram_of_Mac_OS_X_architecture.svg.png)

20.3.0 (16. desember 2020): macOS 11.2 beta, iOS 14.4 beta, iPadOS 14.4 beta, watchOS 7.3 beta and tvOS 14.4 beta.

macOS navnet er nå "Big Sur"

I Terminal (Versjon 2.9.4 (421.1.1))
```
$ uname -v
Darwin Kernel Version 18.5.0: Mon Mar 11 20:40:32 PDT 2019; root:xnu-4903.251.3~3/RELEASE_X86_64
```
XNU kernel sies også å være hybrid, men [Linus Torvalds](https://www.realworldtech.com/forum/?threadid=65915&curpostid=65936) er ikke enig:
> As to the whole "hybrid kernel" thing - it's just marketing. It's "oh, those microkernels had good PR, how can we try to get good PR for our working kernel? Oh, I know, let's use a cool name and try to imply that it has all the PR advantages that that other system has

## GNU/Linux
Ubuntu Linux (eksempler er for en virtualisert versjon: Linux 4.19.104-microsoft-standard #1 SMP)
(1) For å få tilgang til Windows 10 filsystemet fra Ubuntu Linux kommandofortolker bruk 
```
$ cd /mnt/c
```
(2) GCC (GNU Compiler Collection) er ikke installert som standard
```
$ gcc
Command 'gcc' not found, but can be installed with:
sudo apt install gcc
```


# Diverse lenker
[Om svchost](https://docs.microsoft.com/en-us/windows/application-management/svchost-service-refactoring)

[Windows Subsystem for Linux kernel](https://docs.microsoft.com/en-us/windows/wsl/kernel-release-notes)

[4.19.104-microsoft-standard](https://github.com/microsoft/WSL2-Linux-Kernel/releases/tag/4.19.104-microsoft-standard)

[Executable file formats](https://en.wikipedia.org/wiki/Comparison_of_executable_file_formats)

[Portable Operating System Interface (POSIX)](https://en.wikipedia.org/wiki/POSIX)
