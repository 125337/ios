# -*- coding: utf-8 -*-
# pkd hook 源码 v6 - dump PKDPlugIn 方法表 + matchDictionary 打印插件标识和 rule
HOOK_SRC = r"""
'use strict';
var _getClass = new NativeFunction(Module.getGlobalExportByName('objc_getClass'), 'pointer', ['pointer']);
var _copyMethodList = new NativeFunction(Module.getGlobalExportByName('class_copyMethodList'), 'pointer', ['pointer', 'pointer']);
var _selName = new NativeFunction(Module.getGlobalExportByName('sel_getName'), 'pointer', ['pointer']);
var _methodImp = new NativeFunction(Module.getGlobalExportByName('method_getImplementation'), 'pointer', ['pointer']);
var _getInstMethod = new NativeFunction(Module.getGlobalExportByName('class_getInstanceMethod'), 'pointer', ['pointer', 'pointer']);
var _sel = new NativeFunction(Module.getGlobalExportByName('sel_registerName'), 'pointer', ['pointer']);
var _msgSend = new NativeFunction(Module.getGlobalExportByName('objc_msgSend'), 'pointer', ['pointer', 'pointer'], { variadic: true });
var _free = new NativeFunction(Module.getGlobalExportByName('free'), 'void', ['pointer']);

function S(name) { return _sel(Memory.allocUtf8String(name)); }
function C(name) { return _getClass(Memory.allocUtf8String(name)); }

function nsstrSafe(obj, selName) {
  try {
    var getClass = new NativeFunction(Module.getGlobalExportByName('object_getClass'), 'pointer', ['pointer']);
    var c = getClass(obj);
    if (c.isNull()) return '<no class>';
    if (_getInstMethod(c, S(selName)).isNull()) return '<no sel ' + selName + '>';
    var r = _msgSend(obj, S(selName));
    if (r.isNull()) return 'nil';
    var u = _msgSend(r, S('UTF8String'));
    if (u.isNull()) return '<null utf8>';
    return u.readUtf8String();
  } catch (e) { return '<err ' + e.message + '>'; }
}

// 1) dump PKDPlugIn 方法表
var cls = C('PKDPlugIn');
console.log('PKDPlugIn @ ' + cls);
if (!cls.isNull()) {
  try {
    var _methodName = new NativeFunction(Module.getGlobalExportByName('method_getName'), 'pointer', ['pointer']);
    var countPtr = Memory.alloc(8);
    var methods = _copyMethodList(cls, countPtr);
    var n = countPtr.readU32();
    var out = [];
    for (var i = 0; i < n; i++) {
      var m = methods.add(i * Process.pointerSize).readPointer();
      var sel = _methodName(m);
      out.push(_selName(sel).readUtf8String());
    }
    _free(methods);
    console.log('=== PKDPlugIn methods (' + n + ') ===');
    console.log(out.join('\n'));
  } catch (e) { console.log('dump fail: ' + e.message); }
}

// 2) hook matchDictionary: 打印插件标识 + rule
function isBad(v) {
  return v.indexOf('<no sel') !== -1 || v.indexOf('<err') !== -1 || v.indexOf('<no class') !== -1 || v === 'nil' || v === '<null utf8>';
}

function pluginIdentity(self) {
  var parts = [];
  var li = nsstrSafe(self, 'launchdIdentifier');
  if (!isBad(li)) parts.push('launchd=' + String(li).substring(0, 100));
  var fid = nsstrSafe(self, 'fileID');
  if (!isBad(fid)) parts.push('fileID=' + String(fid).substring(0, 60));
  try {
    var ip = _msgSend(self, S('infoPlist'));
    if (!ip.isNull()) {
      var getKey = new NativeFunction(Module.getGlobalExportByName('sel_registerName'), 'pointer', ['pointer']);
      var bidPtr = _msgSend(ip, S('objectForKey:'), Memory.allocUtf8String('CFBundleIdentifier'));
      if (!bidPtr.isNull()) {
        var u = _msgSend(bidPtr, S('UTF8String'));
        if (!u.isNull()) parts.push('bundleID=' + u.readUtf8String());
      }
    }
  } catch (e) {}
  return parts.join('  ');
}

var p = _methodImp(_getInstMethod(cls, S('matchDictionary:pattern:discoveryInstanceUUID:')));
if (!p.isNull()) {
  Interceptor.attach(p, {
    onEnter: function (args) {
      var rule = nsstrSafe(args[2], 'description');
      var idStr = pluginIdentity(args[0]);
      console.log('\n[RULE] ' + idStr);
      console.log('rule: ' + String(rule).substring(0, 600));
    }
  });
  console.log('[*] matchDictionary hooked (with identity probe)');
}

// 3) objc_exception_throw + abort (抓崩溃)
try {
  Interceptor.attach(Module.getGlobalExportByName('objc_exception_throw'), {
    onEnter: function (args) {
      var exc = args[0];
      console.log('\n!!! THROW !!! ' + nsstrSafe(exc, 'reason'));
      send('PKD_OBJC_THROW');
    }
  });
  Interceptor.attach(Module.getGlobalExportByName('abort'), {
    onEnter: function () { send('PKD_ABOUT_TO_ABORT'); }
  });
  console.log('[*] throw/abort hooks ok');
} catch (e) { console.log('hook throw fail: ' + e.message); }

console.log('[*] ready');
"""
