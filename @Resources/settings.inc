[Variables] 
LANGUAGE=EN

; Activate Windows text location measurements

; 2560 x 1080 21:9 screen
; X=1599
; Y=943

; 1920 x 1080 16:9 screen
; X=2207
; Y=943

W=#SCREENAREAWIDTH#
H=#SCREENAREAHEIGHT#

Xratio = 0.862109375
Yratio = 0.873148148148148148148148148148148148

FirstLineX=(#W# * #Xratio#)
FirstLineY=(#H# * #Yratio#)

