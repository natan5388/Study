#NoEnv  ; Recommended for performance and compatibility with future AutoHotkey releases.
#Warn  ; Enable warnings to assist with detecting common errors.
SendMode Input  ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%  ; Ensures a consistent starting directory.
#SingleInstance Force
#Persistent

RButton::	
	If (A_TimeSincePriorHotkey < 150) ;Periodo de 150ms para que novo click aconteça
		Return
	Click Right
	KeyWait, RButton 
Return
