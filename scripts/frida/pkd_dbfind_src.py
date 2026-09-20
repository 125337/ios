# -*- coding: utf-8 -*-
# pkd hook 源码 v5 - 全量 SQLite 接口 hook 抓数据库文件路径
HOOK_SRC = r"""
'use strict';
var done = false;

function tryDbPath(db) {
  if (done || db.isNull()) return;
  try {
    var f = new NativeFunction(Module.getGlobalExportByName('sqlite3_db_filename'),
        'pointer', ['pointer', 'pointer']);
    var p = f(db, Memory.allocUtf8String('main'));
    if (!p.isNull()) {
      var s = p.readUtf8String();
      if (s && s.length > 0) {
        done = true;
        console.log('[DB PATH] ' + s);
        send('PKD_DB_PATH: ' + s);
      }
    }
  } catch (e) {}
}

function hookFn(name, cb) {
  try {
    var addr = Module.getGlobalExportByName(name);
    if (!addr || addr.isNull()) { console.log('[-] ' + name + ' not found'); return; }
    Interceptor.attach(addr, { onEnter: cb });
    console.log('[*] hook ' + name + ' ok');
  } catch (e) { console.log('[-] hook ' + name + ' fail: ' + e.message); }
}

hookFn('sqlite3_prepare_v2', function (args) { tryDbPath(args[0]); });
hookFn('sqlite3_prepare_v3', function (args) { tryDbPath(args[0]); });
hookFn('sqlite3_prepare16_v2', function (args) { tryDbPath(args[0]); });
hookFn('sqlite3_prepare16_v3', function (args) { tryDbPath(args[0]); });
hookFn('sqlite3_exec', function (args) { tryDbPath(args[0]); });
hookFn('sqlite3_open_v2', function (args) { try { tryDbPath(args[3]); } catch (e) {} });
hookFn('sqlite3_step', function (args) {
  // 从 stmt 反查 db 句柄
  try {
    if (done) return;
    var dbh = new NativeFunction(Module.getGlobalExportByName('sqlite3_db_handle'),
        'pointer', ['pointer']);
    var db = dbh(args[0]);
    tryDbPath(db);
  } catch (e) {}
});
hookFn('sqlite3_close', function (args) { tryDbPath(args[0]); });

console.log('[*] all sqlite hooks ready');
"""
