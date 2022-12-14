# CSCI715Fall2022_ARCue
Unreal Engine 4 Project and related code for CSCI 715 Applications in VR, Team ARCue
- Liam Dougherty
- Gerrit Krot
- Chengyi Ma
- Claire Murray
- Xiaoyu Tongyang

## Documentation
The full documentation for this project can be found [here.](https://docs.google.com/document/d/1UTZH48rtPZ9HsK4P2X-H4GGpyfv475Bsl0pUCfOTyZQ/edit?usp=sharing)

## Node Server
The code for the Node.js server is in a separate repo, found [here.](https://github.com/cam8439/715ARCueNodeServer)

## Music Synchronizer
The music synchronizer code can be found in the directories "MacSynchro" and "WindowsSynchro". They are operating system dependent. Please note that if
you are cloning this project, you may have to adjust where the audio file path in `cmd.exe` points to, as well as the path to `cmd.exe` in `Program.cs`.
Other adjustments may be necessary to run the code properly.

Additionally, if you are using Mac, you may need to give `cmd.exe` execute permissions. This can be accomplished easily through the command line by using `chmod +x cmd.exe` from the project directory.
