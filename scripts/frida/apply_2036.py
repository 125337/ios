# -*- coding: utf-8 -*-
# run 2036：按 WCR反编译\FUN_008dee38.c 逐行复刻 WCRefine 语音包发送
# 替换 VoicePackStore.m 的旧 msg 构造段 + 五步/⑥ 段
import io, sys

PATH = r"C:\Users\20546\Desktop\ios_cc4BX\MioPlugin\Modules\Voice\VoicePackStore.m"

with io.open(PATH, "r", encoding="utf-8-sig") as f:
    content = f.read()
lines = content.split("\n")

def find_line(anchor, start=0):
    for i in range(start, len(lines)):
        if anchor in lines[i]:
            return i
    raise SystemExit("锚点未找到: " + anchor)

# 边界 1：旧 msg 构造开始
i_msg_start = find_line("id msg = ((id (*)(id, SEL, long long))objc_msgSend)([wrapClass alloc], @selector(initWithMsgType:), 34LL);")
# 边界 2：旧构造结束（createTime 行）
i_msg_end = find_line('[msg setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_uiCreateTime"];', i_msg_start)
# 边界 3：五步注释开始
i_five_start = find_line("WCRefine 运行时实测五步序列", i_msg_end)
# 边界 4：⑥ 之后的第一行（已提交语音包条目）
i_tail = find_line('[Send] 已提交语音包条目', i_five_start)

print(f"旧构造: {i_msg_start+1}..{i_msg_end+1}  五步段: {i_five_start+1}..{i_tail} (尾部行保留)")

NEW_IMPL = '''        // ═══★WCRefine 反编译逐行复刻（run 2036，源：WCR反编译/FUN_008dee38.c）═══
        // 单消息: dl=9 fw=1 VoiceEndFlag=1/ForwardFlag=1 VoiceTime=毫秒 dtVoice=数据
        // → CMessageMgr AddLocalMsg(2参) → CUtility 路径(3级fallback) → 写文件
        // → setM_nsVoicePath → SaveMesVoice×1 → [AudioSender ResendVoiceMsg:MsgWrap:] 触发上传
        // ★wrap 用官方语音 setter（setM_dtVoice: 等内部自动处理扩展），不手动挂扩展对象
        // ★无 UpdateVoiceMessage、无暂存消息、无 AddNewPart
        NSString *selfUsr = WXSafeStringGet(WXGetSelfContact(), @"m_nsUsrName");
        if (selfUsr.length == 0) selfUsr = @"";

        id msg = nil;
        SEL init2Sel = NSSelectorFromString(@"initWithMsgType:nsFromUsr:");
        if ([wrapClass instancesRespondToSelector:init2Sel]) {
            msg = ((id (*)(id, SEL, long long, id))objc_msgSend)([wrapClass alloc], init2Sel, 34LL, selfUsr);
        }
        if (!msg && [wrapClass instancesRespondToSelector:@selector(initWithMsgType:)]) {
            msg = ((id (*)(id, SEL, long long))objc_msgSend)([wrapClass alloc], @selector(initWithMsgType:), 34LL);
        }
        if (!msg) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:13 userInfo:@{NSLocalizedDescriptionKey: @"消息对象创建失败"}];
            return NO;
        }
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiMessageType:), 34U);
        ((void (*)(id, SEL, id))objc_msgSend)(msg, @selector(setM_nsFromUsr:), selfUsr);
        ((void (*)(id, SEL, id))objc_msgSend)(msg, @selector(setM_nsToUsr:), chatName);
        // createTime：MMNewSessionMgr GenSendMsgTimeWithChatName（守卫，fallback time）
        unsigned int createTime = (unsigned int)[[NSDate date] timeIntervalSince1970];
        Class smCls = objc_getClass("MMNewSessionMgr");
        if (smCls) {
            id sm = WXGetService(smCls);
            SEL gswc = NSSelectorFromString(@"GenSendMsgTimeWithChatName:");
            if (sm && [sm respondsToSelector:gswc]) {
                createTime = ((unsigned int (*)(id, SEL, id))objc_msgSend)(sm, gswc, chatName);
            }
        }
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiCreateTime:), createTime);
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiStatus:), 1U);
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiDownloadStatus:), 9U);
        ((void (*)(id, SEL, BOOL))objc_msgSend)(msg, @selector(setM_bForward:), YES);
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiVoiceTime:), (unsigned int)ms);
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiVoiceFormat:), 4U);
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiVoiceEndFlag:), 1U);
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, @selector(setM_uiVoiceForwardFlag:), 1U);
        SEL dtSel = NSSelectorFromString(@"setM_dtVoice:");
        if ([msg respondsToSelector:dtSel]) {
            ((void (*)(id, SEL, id))objc_msgSend)(msg, dtSel, wire);
            WPLog(@"Voice", @"[Send] setM_dtVoice: 官方setter已用 (%lu字节)", (unsigned long)wire.length);
        } else {
            BOOL extOK = MioAttachVoiceExtension(msg, wire, @"", ms, 1, 1);
            WPLog(@"Voice", @"[Send] wrap无setM_dtVoice: → 手动扩展挂载=%d", extOK);
        }
        [msg setValue:[NSString stringWithFormat:@"<msg><voicemsg voicelength=\\"%llu\\" voiceformat=\\"4\\" forwardflag=\\"0\\" /></msg>", (unsigned long long)ms]
               forKey:@"m_nsContent"];
        SEL cancelSel = NSSelectorFromString(@"setM_uiVoiceCancelFlag:");
        if ([msg respondsToSelector:cancelSel]) {
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(msg, cancelSel, 0U);
        }
        MioDumpSendAPIOnce(msgMgr);

        // service 实例：CMessageMgr + AudioSender（★上传触发在 AudioSender 类上，同为 service）
        Class audioSenderCls = objc_getClass("AudioSender");
        id audioSender = audioSenderCls ? WXGetService(audioSenderCls) : nil;
        SEL addLocal2Sel = NSSelectorFromString(@"AddLocalMsg:MsgWrap:");
        SEL saveSel2 = NSSelectorFromString(@"SaveMesVoice:MsgWrap:");
        SEL rvmSel2 = NSSelectorFromString(@"ResendVoiceMsg:MsgWrap:");
        if (![msgMgr respondsToSelector:addLocal2Sel]) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:12 userInfo:@{NSLocalizedDescriptionKey: @"AddLocalMsg(2参) 不可用"}];
            return NO;
        }
        if (!audioSender || ![audioSender respondsToSelector:rvmSel2]) {
            WPLog(@"Voice", @"[Send] AudioSender 不可用 (cls=%@ inst=%@)——仍尝试发送",
                  audioSenderCls ? @"存在" : @"缺失", audioSender);
        }

        ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, addLocal2Sel, chatName, msg);
        unsigned int lid = MioWrapLocalIDOf(msg);
        WPLog(@"Voice", @"[Send] AddLocalMsg(2参) 入库 localID=%u", lid);

        // 路径三级 fallback（照抄反编译：CUtility → getAudioFileName → getVoicePath）
        NSString *apath = nil;
        Class cuCls = objc_getClass("CUtility");
        SEL gpSel = NSSelectorFromString(@"GetPathOfMesAudio:LocalID:DocPath:");
        SEL gdSel = NSSelectorFromString(@"GetDocPath");
        if (cuCls && [cuCls respondsToSelector:gpSel] && [cuCls respondsToSelector:gdSel]) {
            id docPath = ((id (*)(id, SEL))objc_msgSend)(cuCls, gdSel);
            apath = ((id (*)(id, SEL, id, unsigned long, id))objc_msgSend)(cuCls, gpSel, chatName, (unsigned long)lid, docPath);
            WPLog(@"Voice", @"[Send] CUtility路径: %@", apath);
        }
        if (apath.length == 0 && [msgMgr respondsToSelector:@selector(getAudioFileName:LocalID:)]) {
            apath = ((id (*)(id, SEL, id, unsigned long))objc_msgSend)(msgMgr, @selector(getAudioFileName:LocalID:), chatName, (unsigned long)lid);
            WPLog(@"Voice", @"[Send] getAudioFileName路径: %@", apath);
        }
        if (apath.length == 0 && [msg respondsToSelector:@selector(getVoicePath)]) {
            apath = ((id (*)(id, SEL))objc_msgSend)(msg, @selector(getVoicePath));
            WPLog(@"Voice", @"[Send] getVoicePath路径: %@", apath);
        }
        if (apath.length == 0) {
            WPLog(@"Voice", @"[Send] 路径计算全部失败");
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:15 userInfo:@{NSLocalizedDescriptionKey: @"语音路径计算失败"}];
            return NO;
        }
        // 目录 + 写文件（照抄反编译：writeToFile → 文件存在检查，失败则整体失败）
        [[NSFileManager defaultManager] createDirectoryAtPath:[apath stringByDeletingLastPathComponent]
                                  withIntermediateDirectories:YES attributes:nil error:nil];
        BOOL wok = [wire writeToFile:apath atomically:YES];
        BOOL fexist = [[NSFileManager defaultManager] fileExistsAtPath:apath];
        WPLog(@"Voice", @"[Send] 写文件%@ 存在=%d: %@", wok ? @"成功" : @"失败", fexist, apath);
        if (!wok || !fexist) {
            if (error) *error = [NSError errorWithDomain:@"MioVoice" code:15 userInfo:@{NSLocalizedDescriptionKey: @"音频文件写入失败"}];
            return NO;
        }
        SEL vnSel = NSSelectorFromString(@"setM_nsVoicePath:");
        if ([msg respondsToSelector:vnSel]) {
            ((void (*)(id, SEL, id))objc_msgSend)(msg, vnSel, apath);
            WPLog(@"Voice", @"[Send] setM_nsVoicePath 已调");
        }
        if ([msgMgr respondsToSelector:saveSel2]) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, saveSel2, chatName, msg);
            WPLog(@"Voice", @"[Send] SaveMesVoice 已调 (单次)");
        }
        if (audioSender && [audioSender respondsToSelector:rvmSel2]) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(audioSender, rvmSel2, chatName, msg);
            WPLog(@"Voice", @"[Send] AudioSender ResendVoiceMsg 已调 (上传触发)");
        } else {
            WPLog(@"Voice", @"[Send] AudioSender ResendVoiceMsg 不可用——消息已入库待轮询");
        }
        WPLog(@"Voice", @"[Send] 已提交语音包条目: %@ -> %@ (%.1fKB)", relPath, chatName, wire.length / 1024.0);'''

# 替换 [i_msg_start .. i_msg_end]（旧构造段）→ 空
lines[i_msg_start:i_msg_end + 1] = ["        // (旧 msg 构造段已删除，新构造见下方 run 2036 段)"]
# 重新定位（行号已变）
i_five_start = find_line("WCRefine 运行时实测五步序列", 0)
i_tail = find_line('[Send] 已提交语音包条目', i_five_start)
# 替换 [i_five_start .. i_tail-1] → NEW_IMPL
lines[i_five_start:i_tail] = NEW_IMPL.split("\n")

with io.open(PATH, "w", encoding="utf-8") as f:
    f.write("\n".join(lines))
print("替换完成")
