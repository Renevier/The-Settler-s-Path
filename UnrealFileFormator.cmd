@echo off
RD /S /Q "%cd%\Saved"
RD /S /Q "%cd%\DerivedDataCache"
RD /S /Q "%cd%\Intermediate"
RD /S /Q "%cd%\Binaries"
RD /S /Q "%cd%\.vs"
del /f "%cd%\*.sln"
del /f "%cd%\.idea"
