@echo off
set APPDATA=C:\Users\20546\AppData\Roaming
set JAVA_HOME=C:\Program Files\Java\jdk-21.0.10
call "C:\Users\20546\Desktop\ghidra_12.0.4_PUBLIC\support\analyzeHeadless.bat" C:\Users\20546\Desktop\ios_cc4BX\ghidra_proj_xos XOS159 -process XOS159.dylib -noanalysis -scriptPath C:\Users\20546\Desktop\ios_cc4BX -postScript xos_export.java
echo EXITCODE=%ERRORLEVEL%
