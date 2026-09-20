# -*- coding: utf-8 -*-
# gating 接管版: 拦截 pkd 启动, 挂起状态下装 hook, 放行后抓崩点
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
  if (n > 50) { console.log('[!] ObjC never became available'); return; }
  setTimeout(function () { waitObjC(n + 1); }, 100);
}

waitObjC(0);
"""

device = frida.get_usb_device(timeout=15)
lock = threading.Lock()
handled = set()


def on_message(msg, data):
    if msg['type'] == 'send':
        print('[script] %s' % msg['payload'], flush=True)
    elif msg['type'] == 'error':
        print('[script-err] %s' % msg.get('description', msg), flush=True)
    else:
        print('[script?] %s' % msg, flush=True)


def handle_pkd(child):
    pid = child.pid
    print('[*] PKD gated pid=%s — attaching while suspended...' % pid, flush=True)
    try:
        session = device.attach(pid)
        session.on('detached', on_detached)
        script = session.create_script(HOOK_SRC)
        script.on('message', on_message)
        script.load()
        print('[*] hooks installed, resuming pkd', flush=True)
        device.resume(pid)
        print('[*] pkd released — match loop will run under hooks', flush=True)
    except Exception as e:
        print('  attach fail: %s — resuming anyway' % e, flush=True)
        try:
            device.resume(pid)
        except Exception:
            pass


def on_child_added(child):
    with lock:
        if child.pid in handled:
            try:
                device.resume(child.pid)
            except Exception:
                pass
            return
        handled.add(child.pid)
    ident = child.identifier or ''
    print('[child-added] pid=%s ident=%s' % (child.pid, ident), flush=True)
    if 'pkd' in ident.lower() or child.path.endswith('/pkd'):
        handle_pkd(child)
    else:
        try:
            device.resume(child.pid)
        except Exception as e:
            print('  resume fail: %s' % e, flush=True)


def on_detached(reason, crash):
    print('[!] pkd detached: reason=%s' % reason, flush=True)
    if crash is not None:
        try:
            print('[!] crash summary: %s' % crash.summary, flush=True)
        except Exception:
            pass


device.on('child-added', on_child_added)

# 清理旧 gating 残留: resume 全部卡住的进程
try:
    device.disable_spawn_gating()
    print('[*] old gating disabled', flush=True)
    for p in device.enumerate_pending_spawn():
        print('[*] resuming pending pid=%s ident=%s' % (p.pid, p.identifier), flush=True)
        try:
            device.resume(p.pid)
        except Exception as e:
            print('  resume fail: %s' % e, flush=True)
except Exception as e:
    print('[*] no stale gating: %s' % e, flush=True)

device.enable_spawn_gating()
print('[*] gating re-armed. 让用户点一次分享。', flush=True)

stop = threading.Event()
try:
    stop.wait()
except KeyboardInterrupt:
    pass
