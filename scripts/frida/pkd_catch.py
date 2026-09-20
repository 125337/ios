# -*- coding: utf-8 -*-
# 直接附加 pkd (活着时), 装谓词求值链 hook, 捕崩溃元凶
import sys
import time
import threading
import frida

HOOK_SRC = r"""
'use strict';
var FOUND = { plugin: null, rule: null, reason: null, lastOp: null };

function desc(o) {
  try {
    if (o === null || o === undefined) return 'nil';
    var r = ObjC.object(o);
    var s = r.toString();
    return s.substring(0, 1000);
  } catch (e) { return '<unprintable ' + e.message + '>'; }
}

function report(tag) {
  console.log('\n########## CAUGHT ' + tag + ' ##########');
  console.log('plugin=' + FOUND.plugin);
  console.log('rule=' + FOUND.rule);
  console.log('lastUTIOp=' + FOUND.lastOp);
  console.log('reason=' + FOUND.reason);
}

function installHooks() {
  // 1) 哪个插件在匹配
  try {
    var PKDPlugIn = ObjC.classes.PKDPlugIn;
    Interceptor.attach(PKDPlugIn['- match:discoveryInstanceUUID:server:'].implementation, {
      onEnter: function (args) {
        var self = ObjC.object(args[0]);
        try {
          FOUND.plugin = desc(self.pluginIdentifier());
          console.log('[match] ' + FOUND.plugin);
        } catch (e) {
          FOUND.plugin = '<no id: ' + e.message + '>';
        }
      }
    });
    console.log('[*] hook PKDPlugIn ok');
  } catch (e) { console.log('hook PKDPlugIn fail: ' + e.message); }

  // 2) NSUTIPredicateOperator 求值参数
  try {
    var NSUTI = ObjC.classes.NSUTIPredicateOperator;
    Interceptor.attach(NSUTI['- performPrimitiveOperationUsingObject:andObject:'].implementation, {
      onEnter: function (args) {
        var self = ObjC.object(args[0]);
        var op = 'unknown';
        try { op = desc(self.operatorType()); } catch (e) {}
        FOUND.lastOp = desc(args[2]) + ' <OP:' + op + '> ' + desc(args[3]);
        console.log('[utiop] ' + FOUND.lastOp.substring(0, 300));
      }
    });
    console.log('[*] hook NSUTIPredicateOperator ok');
  } catch (e) { console.log('hook NSUTI fail: ' + e.message); }

  // 3) NSException 捕获
  try {
    Interceptor.attach(ObjC.classes.NSException['- raise'].implementation, {
      onEnter: function (args) {
        var exc = ObjC.object(args[0]);
        FOUND.reason = desc(exc.name()) + ': ' + desc(exc.reason());
        console.log('\n!!! EXCEPTION RAISE !!!');
        console.log(FOUND.reason);
        console.log('stack:\n' + desc(exc.callStackSymbols()).substring(0, 2000));
      }
    });
    console.log('[*] hook NSException.raise ok');
  } catch (e) { console.log('hook NSException fail: ' + e.message); }

  // 未捕获异常兜底
  try {
    var h = new ObjC.Block({ retType: 'void', argTypes: ['object'], implementation: function (exc) {
      FOUND.reason = desc(exc.name()) + ': ' + desc(exc.reason());
      report('uncaughtHandler');
    }});
    var setHandler = new NativeFunction(
      Module.getGlobalExportByName('NSSetUncaughtExceptionHandler'), 'void', ['pointer']);
    setHandler(h);
    console.log('[*] uncaught handler installed');
  } catch (e) { console.log('uncaught handler fail: ' + e.message); }

  // 4) EXConcreteExtension evaluate
  try {
    var EXC = ObjC.classes.EXConcreteExtension;
    Interceptor.attach(EXC['+ _evaluateActivationRuleWithoutWorkarounds:withExtensionItemsRepresentation:'].implementation, {
      onEnter: function (args) {
        FOUND.rule = desc(args[2]);
        console.log('[evalRule] ' + FOUND.rule.substring(0, 500));
      }
    });
    console.log('[*] hook EXConcreteExtension ok');
  } catch (e) { console.log('hook EXConcrete fail: ' + e.message); }

  // 5) abort 前 dump
  try {
    Interceptor.attach(Module.getGlobalExportByName('abort'), {
      onEnter: function () {
        report('ABORT');
        send('PKD_ABOUT_TO_ABORT');
      }
    });
    console.log('[*] hook abort ok');
  } catch (e) { console.log('hook abort fail: ' + e.message); }

  console.log('[*] all pkd hooks installed');
}

function waitObjC(n) {
  try {
    if (ObjC && ObjC.available) { installHooks(); return; }
  } catch (e) {
    console.log('[wait] ObjC not ready (' + n + '): ' + e.message);
  }
  if (n > 40) { console.log('[!] ObjC never became available'); return; }
  setTimeout(function () { waitObjC(n + 1); }, 100);
}

waitObjC(0);
"""

device = frida.get_usb_device(timeout=15)


def on_message(msg, data):
    if msg['type'] == 'send':
        print('[script] %s' % msg['payload'], flush=True)
    elif msg['type'] == 'error':
        print('[script-err] %s' % msg.get('description', msg), flush=True)
    else:
        print('[script?] %s' % msg, flush=True)


def attach_with_retry():
    for attempt in range(60):
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
                print('[*] pkd hooked (pid=%d). 让用户再点一次分享。' % pid, flush=True)
                return session, script, pid
            except Exception as e:
                print('  attach fail: %s' % e, flush=True)
        time.sleep(1)
    return None, None, None


def on_detached(reason, crash):
    print('[!] pkd detached: reason=%s' % reason, flush=True)
    if crash is not None:
        try:
            print('[!] crash: %s' % crash.summary, flush=True)
            print('[!] crash report:\n%s' % crash.report, flush=True)
        except Exception:
            pass
    print('[*] waiting for pkd respawn...', flush=True)
    threading.Thread(target=reattach_loop, daemon=True).start()


def reattach_loop():
    time.sleep(2)
    attach_with_retry()


session, script, pid = attach_with_retry()
if session is None:
    print('[!] pkd not found in 60s', flush=True)
else:
    # 清理 gating 残留: kill 挂起的 pkd, 让 launchd 正常拉起新的
    print('[*] killing stale pkd pid=%d to clear gating residue...' % pid, flush=True)
    try:
        device.kill(pid)
        print('[*] killed. waiting for fresh pkd...', flush=True)
        time.sleep(3)
    except Exception as e:
        print('  kill fail: %s' % e, flush=True)
    session, script, pid = attach_with_retry()
    if session is None:
        print('[!] fresh pkd not found in 60s', flush=True)

stop = threading.Event()
try:
    stop.wait()
except KeyboardInterrupt:
    pass
