// ═══════════════════════════════════════════════════════════════
// wc_hook.js — 用户编写的 MMNewUploadVoiceMgr 上传方法追踪
// （Frida REPL 版由用户粘贴验证；此处为文件加载版，逻辑一致）
// ═══════════════════════════════════════════════════════════════
'use strict';

// Hook MMNewUploadVoiceMgr 的上传方法
const VoiceMgr = ObjC.classes.MMNewUploadVoiceMgr;
if (VoiceMgr) {
    // 1. Hook insertNewRowInUploadVoice:
    const insertMethod = VoiceMgr['- insertNewRowInUploadVoice:'];
    if (insertMethod) {
        Interceptor.attach(insertMethod.implementation, {
            onEnter: function(args) {
                const wrap = new ObjC.Object(args[2]);
                console.log("\n[VOICE-UPLOAD] insertNewRowInUploadVoice 被调用");
                try {
                    console.log("  localID:", wrap.m_uiMesLocalID());
                    console.log("  svrID:", wrap.m_ui64MesSvrID());
                    console.log("  type:", wrap.m_uiMessageType());
                    console.log("  format:", wrap.m_uiVoiceFormat());
                    console.log("  voiceTime:", wrap.m_uiVoiceTime());
                    console.log("  cgi:", wrap.m_uiCgi());
                } catch(e) { console.log("  读取属性失败:", e); }
                console.log("  调用栈:");
                console.log(Thread.backtrace(this.context, Backtracer.ACCURATE)
                    .map(DebugSymbol.fromAddress).join('\n'));
            }
        });
        console.log("[+] Hooked insertNewRowInUploadVoice:");
    }

    // 2. Hook ResendVoiceMsg:MsgWrap:
    const resendMethod = VoiceMgr['- ResendVoiceMsg:MsgWrap:'];
    if (resendMethod) {
        Interceptor.attach(resendMethod.implementation, {
            onEnter: function(args) {
                const wrap = new ObjC.Object(args[3]);
                console.log("\n[VOICE-RESEND] ResendVoiceMsg 被调用");
                try {
                    console.log("  localID:", wrap.m_uiMesLocalID());
                    console.log("  svrID:", wrap.m_ui64MesSvrID());
                } catch(e) {}
                console.log("  调用栈:");
                console.log(Thread.backtrace(this.context, Backtracer.ACCURATE)
                    .map(DebugSymbol.fromAddress).join('\n'));
            }
        });
        console.log("[+] Hooked ResendVoiceMsg:MsgWrap:");
    }
} else {
    console.log("[!] MMNewUploadVoiceMgr 类未找到");
}
console.log("[wc_hook] 就绪——请用 WCRefine 语音包发一条");
