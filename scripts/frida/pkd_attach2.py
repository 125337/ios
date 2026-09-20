# -*- coding: utf-8 -*-
# 通用 attach 脚本: 附加 pkd 并加载指定 hook 源码模块
import sys
import time
import threading
import frida
import importlib

SRC_MODULE = sys.argv[1] if len(sys.argv) > 1 else 'pkd_hook_src'
mod = importlib.import_module(SRC_MODULE)
HOOK_SRC = mod.HOOK_SRC

device = frida.get_usb_device(timeout=15)


def on_message(msg, data):
    if msg['type'] == 'send':
        print('[script] %s' % msg['payload'], flush=True)
    elif msg['type'] == 'error':
        print('[script-err] %s' % msg.get('description', msg), flush=True)
    else:
        print('[script?] %s' % msg, flush=True)


def on_detached(reason, crash):
    print('[!] pkd detached: reason=%s' % reason, flush=True)
    if crash is not None:
        try:
            print('[!] crash summary: %s' % crash.summary, flush=True)
        except Exception:
            pass
    print('[*] waiting for pkd respawn, will reattach...', flush=True)
    threading.Thread(target=attach_with_retry, daemon=True).start()


def attach_with_retry():
    for attempt in range(1200):
        try:
            procs = device.enumerate_processes()
        except Exception as e:
            print('enumerate fail: %s' % e, flush=True)
            time.sleep(2)
            continue
        pkd = [p for p in procs if p.name.lower() == 'pkd']
        if pkd:
            pid = pkd[0].pid
            print('[*] found pkd pid=%d, attaching...' % pid, flush=True)
            try:
                session = device.attach(pid)
                session.on('detached', on_detached)
                script = session.create_script(HOOK_SRC)
                script.on('message', on_message)
                script.load()
                print('[*] pkd hooked (pid=%d), ready.' % pid, flush=True)
                return True
            except Exception as e:
                print('  attach fail: %s' % e, flush=True)
        time.sleep(0.5)
    print('[!] pkd not found in retry window', flush=True)
    return False


attach_with_retry()

stop = threading.Event()
try:
    stop.wait()
except KeyboardInterrupt:
    pass
