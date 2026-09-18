# -*- coding: utf-8 -*-
# Frida 追踪 runner v3：attach 模式 + cmd.txt 命令通道
#   用法：微信打开后运行本脚本；PC 端往 cmd.txt 写 REPL 命令（如 arm("kp喊爸爸.silk", 23740)），
#   轮询线程读出写入 frida stdin 执行。
import subprocess, os, time, threading, sys

LOG = r"C:\Users\20546\Desktop\ios_cc4BX\scripts\frida\trace.log"
SCRIPT = sys.argv[1] if len(sys.argv) > 1 else r"C:\Users\20546\Desktop\ios_cc4BX\scripts\frida\voice_test.js"
CMD = r"C:\Users\20546\Desktop\ios_cc4BX\scripts\frida\cmd.txt"

if os.path.exists(CMD):
    os.remove(CMD)

with open(LOG, "w", encoding="utf-8", errors="replace") as out:
    p = subprocess.Popen(
        ["frida", "-U", "-n", "WeChat", "-l", SCRIPT],
        stdin=subprocess.PIPE,
        stdout=out,
        stderr=subprocess.STDOUT)
    print("[runner] frida pid=%d attach WeChat" % p.pid, flush=True)

    def cmd_watcher():
        while p.poll() is None:
            try:
                if os.path.exists(CMD):
                    with open(CMD, "r", encoding="utf-8") as f:
                        line = f.read().strip()
                    os.remove(CMD)
                    if line:
                        print("[runner] >> %s" % line, flush=True)
                        p.stdin.write((line + "\n").encode("utf-8"))
                        p.stdin.flush()
            except Exception as e:
                print("[runner] cmd err: %s" % e, flush=True)
            time.sleep(0.4)

    threading.Thread(target=cmd_watcher, daemon=True).start()
    p.wait()
    print("[runner] frida exited rc=%d" % p.returncode, flush=True)
