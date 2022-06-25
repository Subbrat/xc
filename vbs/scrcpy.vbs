Set shell=CreateObject("wscript.shell")
Shell.Run("cmd.exe")
Set wshShell =wscript.CreateObject("WScript.Shell")
wscript.sleep 900
wshshell.sendkeys "f:"
wshshell.sendkeys "{enter}"
wshshell.sendkeys "cd exeuti\scr"
wshshell.sendkeys "{enter}"
wshshell.sendkeys "scrcpy --always-on-top --window-width 340 --window-x 1025 --window-y 35 --window-title Device -S"
wshshell.sendkeys "{enter}"