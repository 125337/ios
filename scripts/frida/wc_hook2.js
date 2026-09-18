// ═══════════════════════════════════════════════════════════════
// wc_hook2.js — hook UploadVoiceCDNMgr（log43 实锤 WCRefine 走这个管理器）
// 抓 AddNewPart(12参)/ResendVoiceMsg/startSend/uploadVoiceToCDN 的调用与参数
// ═══════════════════════════════════════════════════════════════
'use strict';

const Mgr = ObjC.classes.UploadVoiceCDNMgr;
if (!Mgr) {
    console.log("[!] UploadVoiceCDNMgr 类未找到");
} else {
    // 纯指针/整型打印（log43 教训：未知类型参数禁止 ObjC 解引用）
    function hook(name, fn) {
        try {
            const m = Mgr[name];
            if (!m) { console.log("[-] 无 " + name); return; }
            Interceptor.attach(m.implementation, {
                onEnter: function(args) { fn(args, this); }
            });
            console.log("[+] Hooked " + name);
        } catch (e) { console.log("[-] hook " + name + " 失败: " + e); }
    }

    hook('- AddNewPart:LocalID:n64SvrID:Offset:Len:VoiceTime:CreateTime:EndFlag:CancelFlag:VoiceFormat:ForwardFlag:msgSource:', function (args) {
        console.log("\n[CDN] AddNewPart part=" + args[2] +
            " localID=" + args[3] + " svrID=" + args[4] +
            " offset=" + args[5] + " len=" + args[6] +
            " voiceTime=" + args[7] + " createTime=" + args[8] +
            " end=" + args[9] + " cancel=" + args[10] +
            " format=" + args[11] + " fwd=" + args[12] +
            " src=" + args[13]);
        console.log("  栈: " + Thread.backtrace(this.context, Backtracer.ACCURATE)
            .map(DebugSymbol.fromAddress).join(" <- "));
    });

    hook('- ResendVoiceMsg:MsgWrap:', function (args, ctx) {
        let lid = "?";
        try { lid = new ObjC.Object(args[3]).m_uiMesLocalID(); } catch (e) {}
        console.log("\n[CDN] ResendVoiceMsg chat=" + args[2] + " wrapLocalID=" + lid);
        console.log("  栈: " + Thread.backtrace(ctx.context, Backtracer.ACCURATE)
            .map(DebugSymbol.fromAddress).join(" <- "));
    });

    hook('- startSend', function (args, ctx) {
        console.log("\n[CDN] startSend");
        console.log("  栈: " + Thread.backtrace(ctx.context, Backtracer.ACCURATE)
            .map(DebugSymbol.fromAddress).join(" <- "));
    });

    hook('- startSend:', function (args, ctx) {
        console.log("\n[CDN] startSend: arg2=" + args[2]);
        console.log("  栈: " + Thread.backtrace(ctx.context, Backtracer.ACCURATE)
            .map(DebugSymbol.fromAddress).join(" <- "));
    });

    hook('- uploadVoiceToCDN:', function (args, ctx) {
        console.log("\n[CDN] uploadVoiceToCDN: arg2=" + args[2]);
        console.log("  栈: " + Thread.backtrace(ctx.context, Backtracer.ACCURATE)
            .map(DebugSymbol.fromAddress).join(" <- "));
    });

    hook('- loadDataFromAudioFile:', function (args, ctx) {
        console.log("\n[CDN] loadDataFromAudioFile: arg2=" + args[2]);
    });

    hook('- handleUploadCDNSuccess:', function (args, ctx) {
        console.log("\n[CDN] handleUploadCDNSuccess: arg2=" + args[2]);
    });

    hook('- handleSendVoiceSuccess:', function (args, ctx) {
        console.log("\n[CDN] handleSendVoiceSuccess: arg2=" + args[2]);
    });

    console.log("[wc_hook2] UploadVoiceCDNMgr 就绪——请用 WCRefine 语音包发一条");
}
