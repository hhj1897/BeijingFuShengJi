# Microsoft Developer Studio Project File - Name="Beijing" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=Beijing - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "Beijing.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "Beijing.mak" CFG="Beijing - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "Beijing - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "Beijing - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "Beijing - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "Beijing - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "Beijing - Win32 Release"
# Name "Beijing - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\AskDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\BankDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\Beijing.cpp
# End Source File
# Begin Source File

SOURCE=.\Beijing.rc
# End Source File
# Begin Source File

SOURCE=.\BeijingDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\BuyCardDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\BuyDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\HospitalDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\HouseDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\LoadDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\NameDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\NotebookDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ProductNewsDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\ProductType.cpp
# End Source File
# Begin Source File

SOURCE=.\RecordDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\RecordType.cpp
# End Source File
# Begin Source File

SOURCE=.\ReturnDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\SellDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\AskDlg.h
# End Source File
# Begin Source File

SOURCE=.\BankDlg.h
# End Source File
# Begin Source File

SOURCE=.\Beijing.h
# End Source File
# Begin Source File

SOURCE=.\BeijingDlg.h
# End Source File
# Begin Source File

SOURCE=.\BuyCardDlg.h
# End Source File
# Begin Source File

SOURCE=.\BuyDlg.h
# End Source File
# Begin Source File

SOURCE=.\HospitalDlg.h
# End Source File
# Begin Source File

SOURCE=.\HouseDlg.h
# End Source File
# Begin Source File

SOURCE=.\LoadDlg.h
# End Source File
# Begin Source File

SOURCE=.\NameDlg.h
# End Source File
# Begin Source File

SOURCE=.\NotebookDlg.h
# End Source File
# Begin Source File

SOURCE=.\ProductNewsDlg.h
# End Source File
# Begin Source File

SOURCE=.\ProductType.h
# End Source File
# Begin Source File

SOURCE=.\RecordDlg.h
# End Source File
# Begin Source File

SOURCE=.\RecordType.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\ReturnDlg.h
# End Source File
# Begin Source File

SOURCE=.\SellDlg.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\02.bmp
# End Source File
# Begin Source File

SOURCE=.\res\04.bmp
# End Source File
# Begin Source File

SOURCE=.\res\1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\2.bmp
# End Source File
# Begin Source File

SOURCE=.\res\22.bmp
# End Source File
# Begin Source File

SOURCE=.\res\29.bmp
# End Source File
# Begin Source File

SOURCE=.\res\3.bmp
# End Source File
# Begin Source File

SOURCE=.\res\50.bmp
# End Source File
# Begin Source File

SOURCE=.\res\6.bmp
# End Source File
# Begin Source File

SOURCE=.\res\7.bmp
# End Source File
# Begin Source File

SOURCE=.\res\Beijing.ico
# End Source File
# Begin Source File

SOURCE=.\res\Beijing.rc2
# End Source File
# Begin Source File

SOURCE=.\res\beijingm.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bitmap6.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bmp00001.bmp
# End Source File
# Begin Source File

SOURCE=.\res\bmp00002.bmp
# End Source File
# Begin Source File

SOURCE=.\res\hospital.bmp
# End Source File
# Begin Source File

SOURCE=.\res\notebook.bmp
# End Source File
# Begin Source File

SOURCE=".\res\安定门1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\安定门2.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\八角村.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\北京站1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\朝阳门1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\朝阳门2.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\复兴门1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\公主坟1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\建国门1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\建国门2.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\木樨地1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\苹果圆1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\苹果圆2.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\前门1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\前门2.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\前门3.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\王府井1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\王府井2.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\王府井3.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\五棵松1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\西单1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\西单2.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\西单3.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\西单4.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\西直门1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\西直门2.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\西直门3.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\西直门4.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\宣武门1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\宣武门2.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\雍和宫1.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\雍和宫2.bmp"
# End Source File
# Begin Source File

SOURCE=".\res\雍和宫3.bmp"
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
