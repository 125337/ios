#import "MusicShareCommandHook.h"
#import "MusicShareConfig.h"
#import "MusicShareService.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import <substrate.h>

// 指令点歌：收到「点歌 歌名」文本 → 搜歌 → 音乐卡片发回该会话。
// 单入口挂 AsyncOnAddMsg:MsgWrap:（收发的文本消息稳定走这一个回调，无需多入口判重）。

static IMP orig_AsyncOnAddMsgMsgWrap = NULL;

static NSMutableSet<NSNumber *> *_seenLocalIDs = nil;   // localID 去重（防御性，单入口正常不会重复）
static NSMutableDictionary<NSString *, NSDate *> *_lastFireTime = nil; // 会话级冷却

static void processTextMessage(id wrap) {
    MusicShareConfig *cfg = [MusicShareConfig shared];
    if (!cfg.musicShareEnabled || !cfg.commandEnabled) return;

    @try {
        unsigned int msgType = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
        if (msgType != 1) return;  // 只认文本

        // 方向判定：m_bIsSender 不可信（182 日志实证：私聊自己发的消息恒为 0），
        // 用 fromUsr 是否等于自己 wxid 判定
        NSString *fromUsr = [wrap valueForKey:@"m_nsFromUsr"];
        NSString *toUsr = [wrap valueForKey:@"m_nsToUsr"];
        if (fromUsr.length == 0 && toUsr.length == 0) return;
        NSString *selfWxid = WXSafeStringGet(WXGetSelfContact(), @"m_nsUsrName");
        BOOL iSent = selfWxid.length > 0 && [fromUsr isEqualToString:selfWxid];
        // 会话判定（自己发的消息 fromUsr=自己 wxid，目标会话在 toUsr；别人发的相反）：
        //   谁是 @chatroom 就用谁；双方都不是群时，自己发的取 toUsr、收到的取 fromUsr
        BOOL fromIsGroup = [fromUsr containsString:@"@chatroom"];
        BOOL toIsGroup = [toUsr containsString:@"@chatroom"];
        BOOL isGroup = fromIsGroup || toIsGroup;
        NSString *session = fromIsGroup ? fromUsr : (toIsGroup ? toUsr : (iSent ? toUsr : fromUsr));
        if (session.length == 0) return;
        if (iSent && !cfg.replyToSelf) return;  // 自己发出的指令默认不响应，防手动测试双发
        if (isGroup && !cfg.replyInGroup) return;
        if (!isGroup && !cfg.replyInPrivate) return;

        // localID 去重
        unsigned int localID = [[wrap valueForKey:@"m_uiMesLocalID"] unsignedIntValue];
        if (localID > 0) {
            if (!_seenLocalIDs) _seenLocalIDs = [NSMutableSet set];
            @synchronized (_seenLocalIDs) {
                if (_seenLocalIDs.count > 4096) [_seenLocalIDs removeAllObjects];
                NSNumber *key = @(localID);
                if ([_seenLocalIDs containsObject:key]) return;
                [_seenLocalIDs addObject:key];
            }
        }

        // 正文：收到的群消息 content = "wxid:\n内容"，剥离发送者前缀取正文；
        // 自己发的群消息 content 就是纯正文，不剥
        NSString *text = [wrap valueForKey:@"m_nsContent"] ?: @"";
        if (isGroup && !iSent) {
            NSRange r = [text rangeOfString:@":\n"];
            if (r.location != NSNotFound && r.location < 64) {
                text = [text substringFromIndex:NSMaxRange(r)];
            }
        }
        text = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (text.length == 0) return;

        // 触发词前缀匹配
        NSString *kw = cfg.commandKeyword.length ? cfg.commandKeyword : @"点歌";
        if (![text hasPrefix:kw]) return;
        NSString *songKeyword = [[text substringFromIndex:kw.length]
            stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
        if (songKeyword.length == 0) return;

        // 会话冷却 3s，防连发刷屏
        if (!_lastFireTime) _lastFireTime = [NSMutableDictionary dictionary];
        @synchronized (_lastFireTime) {
            NSDate *last = _lastFireTime[session];
            if (last && [last timeIntervalSinceNow] > -3.0) {
                WPLog(@"Music", @"[Cmd] 冷却中，忽略 (%@)", session);
                return;
            }
            _lastFireTime[session] = [NSDate date];
        }

        WPLog(@"Music", @"[Cmd] 指令命中: \"%@\" -> 会话 %@ (group=%d iSent=%d)", songKeyword, session, isGroup, iSent);

        // 后台搜歌（completion 主线程回调）→ 取第一个结果发卡
        [MusicShareService searchWithKeyword:songKeyword completion:^(NSArray<MusicSong *> *songs) {
            if (songs.count == 0) {
                WPLog(@"Music", @"[Cmd] 无搜索结果: %@", songKeyword);
                if (cfg.failNotice) {
                    WXSendTextMessage([NSString stringWithFormat:@"未找到歌曲：%@", songKeyword], session);
                }
                return;
            }
            MusicSong *song = songs.firstObject;
            WPLog(@"Music", @"[Cmd] 取第一个结果: %@ - %@", song.name, song.singerName);
            [MusicShareService sendSongCard:song to:session completion:^(BOOL ok, NSString *errMsg) {
                if (!ok) WPLog(@"Music", @"[Cmd] 发卡失败: %@", errMsg);
            }];
        }];
    } @catch (NSException *e) {
        WPLog(@"Music", @"[Cmd] 处理异常: %@", e);
    }
}

static void replaced_at_AsyncOnAddMsgMsgWrap(id self, SEL _cmd, id msg, id wrap) {
    if (orig_AsyncOnAddMsgMsgWrap) {
        ((void (*)(id, SEL, id, id))orig_AsyncOnAddMsgMsgWrap)(self, _cmd, msg, wrap);
    }
    processTextMessage(wrap);
}

@implementation MusicShareCommandHook

+ (void)install {
    Class mgrClass = objc_getClass("CMessageMgr");
    if (!mgrClass) {
        WPLog(@"Music", @"[CmdHook] CMessageMgr 不存在，未挂载");
        return;
    }
    MSHookMessageEx(mgrClass, @selector(AsyncOnAddMsg:MsgWrap:),
                    (IMP)replaced_at_AsyncOnAddMsgMsgWrap, &orig_AsyncOnAddMsgMsgWrap);
    WPLog(@"Music", @"[CmdHook] ✓ AsyncOnAddMsg:MsgWrap: hooked");
}

@end
