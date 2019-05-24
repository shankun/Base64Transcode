#!/usr/bin/env python3
# -*- coding: utf-8 -*-

r"""
将XX.7z加密成base64文本，内容附加到系统剪贴板
"""
import base64
import os
import win32clipboard as wclb 
import win32con
from datetime import date
import traceback

def setClpText(srcStr): # 写入剪切板
    wclb.OpenClipboard()
    try:
        wclb.EmptyClipboard() 
        #wclb.SetClipboardText(win32con.CF_TEXT, srcStr)
        wclb.SetClipboardText(srcStr)
    except:  
        traceback.print_exc()  
    finally:  
        wclb.CloseClipboard()


def main():
    print(r'''请将需要转码的文件打包成 G:\tmp.7z ，
然后在cmd里执行G:\base85Encode.py
base85字符串就会在系统剪贴板里了。''')
    fSrc = r"G:\\tmp.7z"
    with open(fSrc, "rb") as fin:
        binBuffer = fin.read()
    b85encBuffer = str(base64.b85encode(binBuffer), "utf-8")
    setClpText(b85encBuffer)

    os.remove(fSrc)
    sCmd = r'G:\runEditor.bat'
    print(sCmd)
    os.system(sCmd)


if __name__ == '__main__':
    main()
