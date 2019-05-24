#!/usr/bin/env python3
# -*- coding: utf-8 -*-

r"""
从中转文件读取文本，解码后生成XX.7z，再解压缩
"""
import os
import base64
import time


def main():
    strTmpFile = r"F:\tmplain.txt"
    fzip = r'F:\tmp.7z'

    try:
        with open(strTmpFile, "r") as fin:
    	    b85Buffer = fin.read()
    	    decBuffer = base64.b85decode(b85Buffer)
    	    with open(fzip, "wb") as zipFile:
                zipFile.write(decBuffer)

    except IOError as e:
        print("*** file open error:", e)

    os.remove(strTmpFile)
    b = input('Would you like to unzip it? (y or n): ')
    if b == 'y':
        zipcmd = '\"C:\\Program Files\\7-Zip\\7z.exe\" x -r -aoa -bb -oF:\ ' + fzip
        print(zipcmd)
        os.popen(zipcmd)
    input('press Enter to finish.')
    #print('DONE, Bye!')
    #time.sleep(3) # 延迟3秒后删除压缩文件
    if b == 'y':
        os.remove(fzip)

if __name__ == '__main__':
    main()
