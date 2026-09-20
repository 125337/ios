// ═══════════════════════════════════════════════════════════════
// wc_crash.js — 捕获 ResendVoiceMsg 内部 native 崩溃的精确堆栈
// Process.setExceptionHandler 在 EXC_BAD_ACCESS 瞬间拿到
// 异常类型 + 崩溃地址 + 调用栈，然后返回 false 让崩溃继续
// ═══════════════════════════════════════════════════════════════
'use strict';

// 1. Native 异常处理器（崩溃瞬间执行）
Process.setExceptionHandler(function (details) {
    try {
        console.log("\n[CRASH] ══════ 捕获 native 异常 ══════");
        console.log("[CRASH] 类型: " + details.type);
        console.log("[CRASH] 异常地址: " + details.address);
        if (details.memory) {
            console.log("[CRASH] 内存操作: " + details.memory.operation + " @ " + details.memory.address);
        }
        var bt = Thread.backtrace(details.context, Backtracer.FUZZY).map(function (a) {
            var m = Process.findModuleByAddress(a);
            if (m) return m.name + "+0x" + a.sub(m.base).toString(16);
            return a.toString();
        });
        console.log("[CRASH] FUZZY 堆栈:\n  " + bt.join("\n  "));
        var bt2 = Thread.backtrace(details.context, Backtracer.ACCURATE).map(function (a) {
            var m = Process.findModuleByAddress(a);
            if (m) return m.name + "+0x" + a.sub(m.base).toString(16);
            return a.toString();
        });
        console.log("[CRASH] ACCURATE 堆栈:\n  " + bt2.join("\n  "));
        console.log("[CRASH] ═══════════════════════════");
    } catch (e) {
        console.log("[CRASH] 处理器内异常: " + e);
    }
    return false; // 不拦截，让崩溃继续（日志已打出）
});
console.log("[+] Native 异常处理器已安装");

// 2. hook UploadVoiceCDNMgr ResendVoiceMsg（已知触发点，纯指针日志）
const Mgr = ObjC.classes.UploadVoiceCDNMgr;
if (Mgr) {
    const anp = Mgr['- AddNewPart:LocalID:n64SvrID:Offset:Len:VoiceTime:CreateTime:EndFlag:CancelFlag:VoiceFormat:ForwardFlag:msgSource:'];
    if (anp) {
        Interceptor.attach(anp.implementation, {
            onEnter: function (args) {
                console.log("[PRE-CRASH] AddNewPart part=" + args[2] +
                    " lid=" + args[3] + " svr=" + args[4] + " off=" + args[5] +
                    " len=" + args[6] + " vt=" + args[7] + " ct=" + args[8]);
            }
        });
        console.log("[+] AddNewPart 监控已挂");
    }
    const rm = Mgr['- ResendVoiceMsg:MsgWrap:'];
    if (rm) {
        Interceptor.attach(rm.implementation, {
            onEnter: function (args) {
                console.log("[PRE-CRASH] ResendVoiceMsg 进入 chat=" + args[2] + " wrap=" + args[3]);
            }
        });
        console.log("[+] ResendVoiceMsg 监控已挂");
    }
    const ss = Mgr['- startSend'];
    if (ss) {
        Interceptor.attach(ss.implementation, {
            onEnter: function (args) { console.log("[PRE-CRASH] startSend 进入"); }
        });
        console.log("[+] startSend 监控已挂");
    }
} else {
    console.log("[!] UploadVoiceCDNMgr 未找到");
}
console.log("[wc_crash] 就绪——触发崩溃后看 [CRASH] 块");
