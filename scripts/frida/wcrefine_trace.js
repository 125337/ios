// ═══════════════════════════════════════════════════════════════
// wcrefine_trace.js — 追踪 WCRefine 语音包发送链路
// 用法：微信打开后 runner.py wcrefine_trace.js，然后用户用 WCRefine 的
//       语音包功能发一条，日志给出完整方法调用链和参数
// ═══════════════════════════════════════════════════════════════
'use strict';

if (!ObjC.available) {
    console.log('[!] ObjC 不可用');
} else {
    // 枚举 WCRefine 的语音包/发送相关类
    var clsNames = Object.keys(ObjC.classes).filter(function (c) {
        return c.indexOf('WCRefine') === 0 && /voice|send|pack|upload/i.test(c);
    });
    console.log('[W] WCRefine 语音相关类: ' + JSON.stringify(clsNames));

    var total = 0;
    clsNames.forEach(function (cn) {
        var cls = ObjC.classes[cn];
        var ms = cls.$ownMethods;
        if (ms.length > 250) {
            console.log('[W] ' + cn + ' 方法数 ' + ms.length + ' 过多，跳过');
            return;
        }
        ms.forEach(function (m) {
            try {
                var imp = cls[m].implementation;
                // ★只打方法名不打参数：参数可能是 int/CGRect 等原始值，
                //   new ObjC.Object 解引用会崩（上次 638 方法挂参数摘要直接闪退的教训）
                Interceptor.attach(imp, {
                    onEnter: function (args) {
                        try { console.log('[W] ' + cn + ' ' + m); } catch (e) {}
                    }
                });
                total++;
            } catch (e) {}
        });
    });
    console.log('[W] 共 hook ' + total + ' 个方法。现在用 WCRefine 语音包发一条');

    // CMessageMgr 关键方法保持追踪（对照 WCRefine 最终调用了什么）
    var MGR = ObjC.classes.CMessageMgr;
    var PAT = /AddMsg:MsgWrap:|AddLocalMsg|SaveMesVoice|ResendMsg|UpdateVoiceMessage|UpdateVoiceStatus/;
    MGR.$ownMethods.forEach(function (m) {
        if (!PAT.test(m)) return;
        try {
            var imp = MGR[m].implementation;
            Interceptor.attach(imp, {
                onEnter: function (args) {
                    try {
                        var line = '[M] ' + m;
                        try {
                            var w = new ObjC.Object(args[3]);
                            if (w.$className === 'CMessageWrap') {
                                var v = w.$ivars;
                                line += ' wrap{lid=' + v['m_uiMesLocalID'] + ' st=' + v['m_uiStatus'] +
                                        ' dl=' + v['m_uiDownloadStatus'] + ' fw=' + v['m_bForward'] + '}';
                            }
                        } catch (e) {}
                        console.log(line);
                    } catch (e) {}
                }
            });
        } catch (e) {}
    });
    console.log('[M] CMessageMgr 关键方法追踪就绪');

    // ★微信上传/CDN 相关类追踪（找五步之外的上传注册调用）——异步装载避免脚本超时
    var upTotal = 0;
    setTimeout(function () {
        var upCls = Object.keys(ObjC.classes).filter(function (c) {
            return /upload|cdn/i.test(c) && !/^_/.test(c) && c.indexOf('WCRefine') !== 0;
        });
        console.log('[U] 上传/CDN 候选类数: ' + upCls.length);
        upCls.forEach(function (cn) {
            try {
                var cls = ObjC.classes[cn];
                var ms = cls.$ownMethods;
                if (ms.length > 60) return; // 避免巨类刷屏
                ms.forEach(function (m) {
                    try {
                        var imp = cls[m].implementation;
                        Interceptor.attach(imp, {
                            onEnter: function (args) {
                                try { console.log('[U] ' + cn + ' ' + m); } catch (e) {}
                            }
                        });
                        upTotal++;
                    } catch (e) {}
                });
            } catch (e) {}
        });
        console.log('[U] 共 hook ' + upTotal + ' 个上传类方法（装载完成，可以发送了）');

        // ★语音上传管理器：全部方法名枚举（找"添加任务"入口）+ readyUploadItems 返回值 dump
        ['UploadVoiceCDNMgr', 'MMNewUploadVoiceMgr'].forEach(function (cn) {
            var cls = ObjC.classes[cn];
            if (!cls) { console.log('[V] ' + cn + ' 不存在'); return; }
            console.log('[V] ' + cn + ' 方法表:\n  ' + cls.$ownMethods.join('\n  '));
            try {
                var rm = cls['- readyUploadItems'];
                if (rm) {
                    Interceptor.attach(rm.implementation, {
                        onLeave: function (ret) {
                            try {
                                var o = new ObjC.Object(ret);
                                var n = o.count ? o.count() : -1;
                                var parts = [];
                                for (var i = 0; i < n && i < 8; i++) {
                                    try { parts.push(String(o.objectAtIndex_(i)).substring(0, 50)); } catch (e) {}
                                }
                                console.log('[V] readyUploadItems → ' + n + ' 项: [' + parts.join(' ; ') + ']');
                            } catch (e) { console.log('[V] ready dump err: ' + e); }
                        }
                    });
                    console.log('[V] readyUploadItems 返回值追踪已挂');
                }
            } catch (e) { console.log('[V] ready hook err: ' + e); }
        });
    }, 100);
}
