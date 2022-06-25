Dim msg, sapi
ip=InputBox(" ")
Set sapi=CreateObject("sapi.spvoice")
sapi.Speak ip