// ═══════════════════════════════════════════════════════════════
// voice_test.js — MioPlugin 语音包 Frida 调试脚本
//
// 用法（PC 端，微信已打开）:
//   frida -U -n WeChat -l voice_test.js > trace.log 2>&1
//   （附加成功后 PC 终端/trace.log 里能看到实时追踪日志，Ctrl+D 退出）
//
// 功能:
//   [追踪] CMessageMgr 语音/发送相关方法全量日志——录一条真实语音,
//          松手后的完整调用序列会实时打印（解决 2652 三连 vs 2662 无三连之谜）
//   [REPL] PC 端 REPL 里可调用:
//     rpc.exports.files()                 → 列出语音包目录
//     rpc.exports.send({ rel:'xx.silk', ms:23740, dl:9, dtVoice:1,
//                        triple:0, saveVoice:1, resend:1 })  → 发送测试
//     rpc.exports.state()                 → 最近发送结果
// ═══════════════════════════════════════════════════════════════
'use strict';

// 注：通过 frida CLI（REPL）注入时 ObjC 桥为预定义全局，无需 require

if (!ObjC.available) {
    console.log('[!] ObjC 不可用');
} else {
    // ─────────── 追踪：CMessageMgr ───────────
    var MGR = ObjC.classes.CMessageMgr;
    var PAT = /voice|record|upload|send|resend|addmsg|addlocal|update/i;
    var methods = MGR.$ownMethods.filter(function (m) { return PAT.test(m.toLowerCase()); });
    console.log('[T] CMessageMgr 追踪方法数: ' + methods.length);

    methods.forEach(function (mm) {
        try {
            var imp = MGR[mm].implementation;
            Interceptor.attach(imp, {
                onEnter: function (args) {
                    try {
                        var line = '[T] ' + mm;
                        for (var i = 2; i <= 3; i++) {
                            try {
                                var o = new ObjC.Object(args[i]);
                                if (o && !o.isNull()) {
                                    var cn = o.$className;
                                    if (cn === 'CMessageWrap') {
                                        var v = o.$ivars;
                                        line += ' | wrap{lid=' + v['m_uiMesLocalID'] + ' st=' + v['m_uiStatus'] +
                                                ' dl=' + v['m_uiDownloadStatus'] + ' fw=' + v['m_bForward'] + '}';
                                    } else {
                                        line += ' | ' + cn + ':' + String(o).substring(0, 50);
                                    }
                                }
                            } catch (e) {}
                        }
                        if (STACK_PAT.test(mm)) {
                            line += '\n    栈: ' + stackStr(this.context);
                        }
                        console.log(line);
                    } catch (e) {}
                }
            });
        } catch (e) {
            console.log('[T] hook失败 ' + mm + ': ' + e);
        }
    });

    // ─────────── 调用栈工具 ───────────
    function stackStr(ctx) {
        try {
            return Thread.backtrace(ctx, Backtracer.ACCURATE).map(function (a) {
                var m = Process.findModuleByAddress(a);
                if (m) return m.name + "+0x" + a.sub(m.base).toString(16);
                return a.toString();
            }).join(" <- ");
        } catch (e) { return "bt-err:" + e; }
    }
    var STACK_PAT = /AddMsg:MsgWrap:|UpdateVoiceMessage|SaveMesVoice/;

    // ─────────── 语音模块核心 C 函数 hook（log41 栈实锤的枢纽）───────────
    // WeChat+0x14b3dc = 三连②③共同经过的"完成+上传启动"枢纽
    // WeChat+0x14b064 = 录音回调→AddMsg 入口
    // WeChat+0x14d7c5 / +0x14ea25 = ②/③ 的直接调用者
    try {
        var WM = Process.findModuleByName("WeChat");
        var hubAddrs = [
            ['hub0x14b3dc', 0x14b3dc],
            ['rec0x14b064', 0x14b064],
            ['fin0x14d7c5', 0x14d7c5],
            ['fin0x14ea25', 0x14ea25]
        ];
        hubAddrs.forEach(function (h) {
            try {
                var addr = WM.base.add(h[1]);
                Interceptor.attach(addr, {
                    onEnter: function (args) {
                        var line = '[C] ' + h[0] +
                            ' x0=' + this.context.x0 + ' x1=' + this.context.x1 +
                            ' x2=' + this.context.x2 + ' x3=' + this.context.x3;
                        // x1 常是 wrap 或选择器——尝试识别
                        for (var i = 0; i < 3; i++) {
                            try {
                                var o = new ObjC.Object(this.context['x' + i]);
                                if (o && !o.isNull() && o.$className) {
                                    line += ' | x' + i + '=' + o.$className;
                                    if (o.$className === 'CMessageWrap') {
                                        var v = o.$ivars;
                                        line += '{lid=' + v['m_uiMesLocalID'] + ' st=' + v['m_uiStatus'] + ' dl=' + v['m_uiDownloadStatus'] + '}';
                                    }
                                }
                            } catch (e) {}
                        }
                        console.log(line);
                    }
                });
                console.log('[C] ' + h[0] + ' hooked @' + addr);
            } catch (e) { console.log('[C] ' + h[0] + ' hook失败: ' + e); }
        });
    } catch (e) { console.log('[C] 模块获取失败: ' + e); }

    // ─────────── 录音劫持（armed 后生效）───────────
    // 原理：真实松手①(fixTime) 时录音文件已写完 → 覆盖为语音包数据+回填时长
    //       → ②③照常走真实上传管线 → 发出的就是语音包内容
    var armed = null;
    try {
        var uvFTM = ObjC.classes.CMessageMgr['- UpdateVoiceMessage:MsgWrap:fixTime:'];
        Interceptor.attach(uvFTM.implementation, {
            onEnter: function (args) {
                if (!armed) return;
                try {
                    var cfg = armed; armed = null; // 一次性
                    var wrap = new ObjC.Object(args[3]);
                    var v = wrap.$ivars;
                    if (v['m_uiMessageType'] !== 34) { console.log('[劫持] 非语音消息跳过'); return; }
                    var p = ObjC.classes.CMessageWrap.getPathOfAudio_(wrap);
                    var d = ObjC.classes.NSData.dataWithContentsOfFile_(packDir() + '/' + cfg.rel);
                    if (!d || d.isNull()) { console.log('[劫持] 语音包读取失败: ' + cfg.rel); return; }
                    if (d.bytes().readU8() !== 0x02) {
                        var pfx = Memory.alloc(1); pfx.writeU8(0x02);
                        var m = ObjC.classes.NSMutableData.data();
                        m.appendBytes_length_(pfx, 1);
                        m.appendData_(d);
                        d = m;
                    }
                    d.writeToFile_atomically_(p, true);
                    wrap.setValue_forKey_('<msg><voicemsg voicelength="' + cfg.ms + '" voiceformat="4" /></msg>', 'm_nsContent');
                    console.log('[劫持] 已替换 ' + p + ' ← ' + cfg.rel + ' (' + d.length() + '字节, ' + cfg.ms + 'ms)');
                } catch (e) { console.log('[劫持] 异常: ' + e); }
            }
        });
        console.log('[劫持] 劫持钩子就绪（REPL 执行 arm("文件名", 时长ms) 后下一次录音生效）');
    } catch (e) { console.log('[劫持] 安装失败: ' + e); }

    globalThis.arm = function (rel, ms) {
        armed = { rel: rel, ms: ms };
        return 'armed: ' + rel + ' ' + ms + 'ms（下一次录音松手时替换）';
    };
    globalThis.disarm = function () { armed = null; return 'disarmed'; };
    globalThis.packs = listFiles;

    // ─────────── 工具 ───────────
    var _docsDir = null;
    function docsDir() {
        if (_docsDir) return _docsDir;
        try {
            // iOS 无 NSHomeDirectory 导出（line159 TypeError 教训），用 NSProcessInfo 的 HOME 环境变量
            var home = ObjC.classes.NSProcessInfo.processInfo().environment().objectForKey_('HOME');
            _docsDir = home.toString() + '/Documents';
        } catch (e) {
            _docsDir = ObjC.classes.NSBundle.mainBundle().bundlePath().toString() + '/Documents';
        }
        return _docsDir;
    }
    function packDir() { return docsDir() + '/Mio助手/语音包'; }

    function listFiles() {
        var fm = ObjC.classes.NSFileManager.defaultManager();
        var out = [];
        var walk = function (dir, depth) {
            var names = fm.contentsOfDirectoryAtPath_error_(dir, NULL);
            if (!names) return;
            for (var i = 0; i < names.count(); i++) {
                var n = names.objectAtIndex_(i).toString();
                if (n.charAt(0) === '.') continue;
                var full = dir + '/' + n;
                var isDir = ObjC.classes.NSFileManager.defaultManager()
                    .fileExistsAtPath_isDirectory_(full, NULL) ? 'dir?' : '';
                var isD = Memory.alloc(8); isD.writeU8(0);
                fm.fileExistsAtPath_isDirectory_(full, isD);
                if (isD.readU8()) { if (depth < 2) walk(full, depth + 1); }
                else out.push(full.replace(packDir() + '/', ''));
            }
        };
        walk(packDir(), 0);
        return out;
    }

    // ─────────── 发送实现 ───────────
    var lastState = 'idle';

    function doSend(cfg) {
        var logs = [];
        var L = function (s) { logs.push(s); console.log('[SEND] ' + s); };

        var center = ObjC.classes.MMServiceCenter.defaultCenter();
        var mgr = center.getService_(ObjC.classes.CMessageMgr);
        var data = ObjC.classes.NSData.dataWithContentsOfFile_(packDir() + '/' + cfg.rel);
        if (!data || data.isNull()) { L('文件读取失败: ' + cfg.rel); return 'read-fail'; }
        L('数据: ' + data.length() + ' 字节');

        // 0x02 前缀
        var head = data.bytes().readU8();
        if (head !== 0x02) {
            var pfx = Memory.alloc(1); pfx.writeU8(0x02);
            var m = ObjC.classes.NSMutableData.data();
            m.appendBytes_length_(pfx, 1);
            m.appendData_(data);
            data = m;
            L('补 0x02 前缀 → ' + data.length() + ' 字节');
        }

        var wrap = ObjC.classes.CMessageWrap.alloc().initWithMsgType_(34);
        wrap.setValue_forKey_(cfg.chat, 'm_nsToUsr');
        wrap.setValue_forKey_(cfg.from, 'm_nsFromUsr');
        // ★整型一律走 KVC（setValue_forKey_ 的 number→解箱路径正确）；
        //   $ivars 直写整型 ivar 会把指针塞进基本类型内存（dylib 时代的崩溃老坑）
        wrap.setValue_forKey_(1, 'm_uiStatus');
        wrap.setValue_forKey_('', 'm_nsMsgSource');
        wrap.setValue_forKey_('<msg><voicemsg voicelength="' + cfg.ms +
            '" voiceformat="4" /></msg>', 'm_nsContent');
        wrap.setValue_forKey_(parseInt(Date.now() / 1000), 'm_uiCreateTime');
        wrap.setValue_forKey_(cfg.dl !== undefined ? cfg.dl : 9, 'm_uiDownloadStatus');
        wrap.setValue_forKey_(0, 'm_bForward');
        wrap.setValue_forKey_(1, 'm_bNew');
        wrap.setValue_forKey_(1, 'm_uiImgStatus');

        var ext = ObjC.classes.CExtendInfoOfVoiceMsg.alloc().init();
        ext.setValue_forKey_(4, 'm_uiVoiceFormat');
        ext.setValue_forKey_(cfg.ms, 'm_uiVoiceTime');
        ext.setValue_forKey_(cfg.endFlag !== undefined ? cfg.endFlag : 0, 'm_uiVoiceEndFlag');
        ext.setValue_forKey_(cfg.fwdFlag || 0, 'm_uiVoiceForwardFlag');
        if (cfg.dtVoice) ext.setValue_forKey_(data, 'm_dtVoice');
        if (cfg.refWrap) ext.setValue_forKey_(wrap, 'm_refMessageWrap');
        wrap.setValue_forKey_(ext, 'm_extendInfoWithMsgType');

        L('组合: dl=' + cfg.dl + ' dtVoice=' + (cfg.dtVoice ? 1 : 0) +
          ' triple=' + (cfg.triple ? 1 : 0) + ' saveVoice=' + (cfg.saveVoice ? 1 : 0) +
          ' resend=' + (cfg.resend ? 1 : 0));

        // ★objc_msgSend 直调（mgr 是 MMServiceWrapper NSProxy，桥的方法查找看不见转发方法）
        var msgSend4 = new NativeFunction(Module.getGlobalExportByName('objc_msgSend'),
            'void', ['pointer', 'pointer', 'pointer', 'pointer']);
        var sel_registerName = new NativeFunction(Module.getGlobalExportByName('sel_registerName'),
            'pointer', ['pointer']);
        var SEL_AddLocal2 = sel_registerName(Memory.allocUtf8String('AddLocalMsg:MsgWrap:'));
        var SEL_Save = sel_registerName(Memory.allocUtf8String('SaveMesVoice:MsgWrap:'));
        var SEL_UVM = sel_registerName(Memory.allocUtf8String('UpdateVoiceMessage:MsgWrap:'));
        var chatNs = ObjC.classes.NSString.stringWithString_(cfg.chat);

        msgSend4(mgr.$handle, SEL_AddLocal2, chatNs.$handle, wrap.$handle);
        var lid = wrap.$ivars['m_uiMesLocalID'];
        L('AddLocalMsg(2参) 完成 localID=' + lid);

        // 正式路径写文件（双保险；SaveMesVoice 理论上会从 dtVoice 写）
        var p = null;
        try { p = ObjC.classes.CMessageWrap.getPathOfAudio_(wrap).toString(); } catch (e) {}
        if (p) {
            var ok = data.writeToFile_atomically_(p, true);
            L('文件 ' + (ok ? '写入' : '写入失败') + ': ' + p);
            try { wrap.setValue_forKey_(p, 'm_nsVoicePath'); } catch (e) {}
        }

        if (cfg.saveVoice) {
            msgSend4(mgr.$handle, SEL_Save, chatNs.$handle, wrap.$handle);
            L('SaveMesVoice 已调 (WCRefine ③)');
        }
        if (cfg.submit !== 0) {
            // ④⑤：st 1→2、dl 9→1，UpdateVoiceMessage 提交上传（WCRefine 实测收尾）
            wrap.setValue_forKey_(2, 'm_uiStatus');
            wrap.setValue_forKey_(1, 'm_uiDownloadStatus');
            msgSend4(mgr.$handle, SEL_UVM, chatNs.$handle, wrap.$handle);
            L('UpdateVoiceMessage 已调 (st=2, dl=1, 提交上传)');
        }
        if (cfg.resend) {
            mgr.ResendMsg_MsgWrap_(cfg.chat, wrap);
            L('ResendMsg 已调');
        }

        lastState = 'localID=' + lid;
        return logs.join('\n');
    }
    globalThis.sendB = function (chat, from, rel, ms, dl) {
        // ★直接在当前线程同步执行——主线程调 SaveMesVoice 会内部 dispatch_sync 死锁被 watchdog 杀
        //  （WCRefine 也是在自己的后台队列跑发送链的）
        try {
            return doSend({ chat: chat, from: from, rel: rel, ms: ms,
                            dl: dl !== undefined ? dl : 9,
                            dtVoice: 1, saveVoice: 1, submit: 1, resend: 0 });
        } catch (e) { return 'ERR: ' + e.stack; }
    };

    // ─────────── 分步发送（主队列调度版，防 JS 线程崩溃）───────────
    globalThis._st = null; // {mgr, chatNs, wrap}
    globalThis._st1result = '未执行';
    globalThis.sendStep1 = function (chat, from, rel, ms, dl) {
        ObjC.schedule(ObjC.mainQueue, function () {
            try {
                var cfg = { chat: chat, from: from, rel: rel, ms: ms,
                            dl: dl !== undefined ? dl : 9, dtVoice: 1, refWrap: 0 };
                var center = ObjC.classes.MMServiceCenter.defaultCenter();
                var mgr = center.getService_(ObjC.classes.CMessageMgr);
                var data = ObjC.classes.NSData.dataWithContentsOfFile_(packDir() + '/' + cfg.rel);
                if (!data || data.isNull()) { globalThis._st1result = 'read-fail'; return; }
                if (data.bytes().readU8() !== 0x02) {
                    var pfx = Memory.alloc(1); pfx.writeU8(0x02);
                    var m = ObjC.classes.NSMutableData.data();
                    m.appendBytes_length_(pfx, 1);
                    m.appendData_(data);
                    data = m;
                }
                var wrap = ObjC.classes.CMessageWrap.alloc().initWithMsgType_(34);
                wrap.setValue_forKey_(cfg.chat, 'm_nsToUsr');
                wrap.setValue_forKey_(cfg.from, 'm_nsFromUsr');
                wrap.setValue_forKey_(1, 'm_uiStatus');
                wrap.setValue_forKey_('', 'm_nsMsgSource');
                wrap.setValue_forKey_('<msg><voicemsg voicelength="' + cfg.ms + '" voiceformat="4" /></msg>', 'm_nsContent');
                wrap.setValue_forKey_(parseInt(Date.now() / 1000), 'm_uiCreateTime');
                wrap.setValue_forKey_(cfg.dl, 'm_uiDownloadStatus');
                wrap.setValue_forKey_(0, 'm_bForward');
                wrap.setValue_forKey_(1, 'm_bNew');
                wrap.setValue_forKey_(1, 'm_uiImgStatus');
                var ext = ObjC.classes.CExtendInfoOfVoiceMsg.alloc().init();
                ext.setValue_forKey_(4, 'm_uiVoiceFormat');
                ext.setValue_forKey_(cfg.ms, 'm_uiVoiceTime');
                ext.setValue_forKey_(0, 'm_uiVoiceEndFlag');
                ext.setValue_forKey_(0, 'm_uiVoiceForwardFlag');
                ext.setValue_forKey_(data, 'm_dtVoice');
                wrap.setValue_forKey_(ext, 'm_extendInfoWithMsgType');

                var msgSend4 = new NativeFunction(Module.getGlobalExportByName('objc_msgSend'),
                    'void', ['pointer', 'pointer', 'pointer', 'pointer']);
                var sel_registerName = new NativeFunction(Module.getGlobalExportByName('sel_registerName'),
                    'pointer', ['pointer']);
                var chatNs = ObjC.classes.NSString.stringWithString_(cfg.chat);
                msgSend4(mgr.$handle, sel_registerName(Memory.allocUtf8String('AddLocalMsg:MsgWrap:')),
                         chatNs.$handle, wrap.$handle);
                var lid = wrap.$ivars['m_uiMesLocalID'];
                var p = null;
                try { p = ObjC.classes.CMessageWrap.getPathOfAudio_(wrap).toString(); } catch (e) {}
                var wok = 0;
                if (p) { wok = data.writeToFile_atomically_(p, true) ? 1 : 0; }
                globalThis._st = { mgr: mgr, chatNs: chatNs, wrap: wrap, path: p };
                globalThis._st1result = 'step1 ok lid=' + lid + ' file=' + p + ' writeOk=' + wok;
            } catch (e) { globalThis._st1result = 'ERR1: ' + e.stack; }
        });
        return '已调度到主队列，2 秒后执行 st1() 读结果';
    };
    globalThis.st1 = function () { return globalThis._st1result; };

    // ─────────── 堆扫描拿活实例 + 一键触发上传 ───────────
    globalThis.grab = function () {
        var a = ObjC.chooseSync(ObjC.classes.UploadVoiceCDNMgr);
        var b = ObjC.classes.MMNewUploadVoiceMgr ? ObjC.chooseSync(ObjC.classes.MMNewUploadVoiceMgr) : [];
        return { cdn实例数: a.length, newMgr实例数: b.length };
    };
    globalThis._t2result = '未执行';
    globalThis.trySend = function (chat) {
        ObjC.schedule(ObjC.mainQueue, function () {
            try {
                var st = globalThis._st;
                if (!st) { globalThis._t2result = '先执行 sendStep1'; return; }
                var a = ObjC.chooseSync(ObjC.classes.UploadVoiceCDNMgr);
                if (!a.length) { globalThis._t2result = '堆上无实例'; return; }
                var mgr = a[0];
                var chatNs = ObjC.classes.NSString.stringWithString_(chat || st.chatNs.toString());
                mgr.ResendVoiceMsg_MsgWrap_(chatNs, st.wrap);
                globalThis._t2result = 'ResendVoiceMsg 已调 on ' + mgr;
            } catch (e) { globalThis._t2result = 'ERR2: ' + e.stack; }
        });
        return '已调度，2 秒后执行 t2() 读结果';
    };
    globalThis.t2 = function () { return globalThis._t2result; };

    // ─────────── RPC ───────────
    rpc.exports = {
        ping: function () { return 'pong-' + Date.now(); },
        files: function () { return listFiles(); },
        state: function () { return lastState; },
        send: function (cfg) {
            return new Promise(function (resolve) {
                ObjC.schedule(ObjC.mainQueue, function () {
                    try { resolve(doSend(cfg)); }
                    catch (e) { resolve('ERR: ' + e.stack); }
                });
            });
        }
    };

    console.log('[T] 脚本就绪。现在去微信里录一条真实语音（对照），或用 rpc.exports.send() 测试组合');
}
