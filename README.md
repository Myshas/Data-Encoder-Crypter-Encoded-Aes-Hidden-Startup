# Data Encoder Crypter Encoded AES Hidden Startup
![resim](https://user-images.githubusercontent.com/104153626/164758152-daed2e03-b8d3-4b82-8214-dac757e9a4f6.png)

## Functionalities
* Compatible with both 32-bit and 64-bit systems.
* Provision for customized error messages.
* Choice of injector selection.
* Facilitates simulated messages.
* Binder functionality ("Run Once Run Startup").
* Loader mode customization.
* Notification system.
* Ensures a single instance of the program.
* Countermeasures against Window Manager.
* Evasion against submission.
* Incorporation of execution delay.
* Implementation of advanced runtime features.
* Exclusive exemption from Windows Defender.
* Infusion of memory bombardment techniques.
* Shields against file deletion.
* Manipulation of timestamp attributes.
* Reinforcement of program name.
* Region-based exclusions.
* Disruption of crypters.
* Concealment of startup initiation.
* Replication of assembly.
* Integration of certificates.
* Extensions supported: hta/html/src/pif/com/exe.
* Compatibility with .NET Framework versions 2.5, 3.0, 4.0, and 4.5.

## Results
![resim](https://user-images.githubusercontent.com/104153626/164761269-f0d7d7e5-5144-4467-ae42-c3da5cc59add.png)


## Insights 
#1 String Handling

    Including clear strings in the binary or memory can considerably simplify reverse engineering efforts. When subjected to string detection scans, altering the strings each time they are detected becomes necessary.

#2 Diverse Crypter Approaches

    - Decrypt strings at the current stack location. While the stack might be overwritten upon returning from functions, decryption in the main function retains the decrypted string in the stack's lifetime, thus revealing it.
    - Inapplicable in both Usermode and Kernelmode.
    - Exhibits substantial overhead.
    - Requires compiler optimizations.
    - Susceptible to default brute force attacks.

Why Choose Crypter?

skCrypter offers seamless compatibility with both Usermode and Kernelmode, regardless of compiler optimization settings (validated with msvsc++19). The computational overhead is minimal, and the string's storage remains in a fixed, controllable address that can be erased without leaving traces (utilizing a built-in function). Encryption is randomized with every compilation and fortified against standard brute force tactics.


## Usage Instructions
How to Employ:

1. Compile xtea.cpp to generate xtea.exe.
   - Place the file you intend to encrypt (for crypter usage) onto xtea.exe.
   - The outcome will be an encrypted file.

2. Compile shellcode_generator.c to yield shellcode_generator.exe.
   - Deposit the file (encrypted using xtea) onto shellcode_generator.exe.
   - This process generates shellcode.h, housing the byte representation of the encrypted file.

3. Ensure shellcode.h and runPE.h reside in the same directory as file.cpp.
   - Compile file.cpp to forge file.exe.
   - Executing file.exe will decrypt and execute the file from the initial step.

file.exe incorporates the encrypted bytes of an executable within itself. Upon execution, it decrypts and executes these bytes in memory, employing the runPE technique. No trace is left on the hard drive as a result of its execution.

## Media
![resim](https://user-images.githubusercontent.com/104153626/164758164-80e470c3-f736-4fb5-8554-709e79cb9e63.png)
