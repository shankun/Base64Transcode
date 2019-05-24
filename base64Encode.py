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
然后在cmd里执行G:\base64Encode.py
base64字符串就会在系统剪贴板里了。''')
    fin = open("G:\\tmp.7z", "rb")
    strdate = date.today().strftime("%Y%m%d")
    fPath = "G:\\" + strdate
    fPath = fPath + "_Bak.txt"
    with open(fPath, 'wb') as fout:
        base64.encode(fin, fout)
    
    fin.close()   
    with open(fPath, 'r', encoding='utf-8') as f:
        setClpText(f.read())

    os.remove(fPath)
    sCmd = r'G:\runEditor.bat'
    print(sCmd)
    os.system(sCmd)

def decode(s): # 把bytes字节流变为str字符串
    try:
        return s.decode('utf-8')
    except UnicodeDecodeError:
        return s.decode('gbk')


if __name__ == '__main__':
    main()
