#import "KeywordAlertHook.h"
#import "KeywordAlertConfig.h"
#import "KeywordAlertEngine.h"
#import "KeywordAlertPresenter.h"
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/ConfigManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import <substrate.h>

static IMP orig_ka_onNewSyncAddMessage = NULL;
static IMP orig_ka_addMessageLibWithWrap = NULL;
static IMP orig_ka_onNewSyncNotAddDBMessage = NULL;
static IMP orig_ka_AddMsgMsgWrap = NULL;
static IMP orig_ka_AsyncOnAddMsgMsgWrap = NULL;

static NSMutableSet *_kaProcessedMsgIds = nil;

static void processKeywordAlertMessage(id wrap);

static void replaced_ka_onNewSyncAddMessage(id self, SEL _cmd, id wrap) {
    if (orig_ka_onNewSyncAddMessage) ((void (*)(id, SEL, id))orig_ka_onNewSyncAddMessage)(self, _cmd, wrap);
    processKeywordAlertMessage(wrap);
}

static void replaced_ka_addMessageLibWithWrap(id self, SEL _cmd, id wrap, id vc) {
    if (orig_ka_addMessageLibWithWrap) ((void (*)(id, SEL, id, id))orig_ka_addMessageLibWithWrap)(self, _cmd, wrap, vc);
    processKeywordAlertMessage(wrap);
}

static void replaced_ka_onNewSyncNotAddDBMessage(id self, SEL _cmd, id wrap) {
    if (orig_ka_onNewSyncNotAddDBMessage) ((void (*)(id, SEL, id))orig_ka_onNewSyncNotAddDBMessage)(self, _cmd, wrap);
    processKeywordAlertMessage(wrap);
}

static void replaced_ka_AddMsgMsgWrap(id self, SEL _cmd, id fromUsr, id wrap) {
    if (orig_ka_AddMsgMsgWrap) ((void (*)(id, SEL, id, id))orig_ka_AddMsgMsgWrap)(self, _cmd, fromUsr, wrap);
    processKeywordAlertMessage(wrap);
}

static void replaced_ka_AsyncOnAddMsgMsgWrap(id self, SEL _cmd, id msg, id wrap) {
    if (orig_ka_AsyncOnAddMsgMsgWrap) ((void (*)(id, SEL, id, id))orig_ka_AsyncOnAddMsgMsgWrap)(self, _cmd, msg, wrap);
    processKeywordAlertMessage(wrap);
}

#pragma mark - 取值辅助

static NSString *kaMsgString(id wrap, const char *propName) {
    if (!wrap) return nil;
    SEL sel = NSSelectorFromString([NSString stringWithUTF8String:propName]);
    if (![wrap respondsToSelector:sel]) return nil;
    id v = ((id (*)(id, SEL, ...))objc_msgSend)(wrap, sel);
    return [v isKindOfClass:[NSString class]] ? v : nil;
}

static unsigned int kaMsgType(id wrap) {
    if (!wrap || ![wrap respondsToSelector:NSSelectorFromString(@"m_uiMessageType")]) return 0;
    return ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
}

/// 自身 wxid（懒取 + 缓存；群/私聊判定都要用）
static NSString *kaSelfWxid(void) {
    static NSString *cached = nil;
    if (cached) return cached;
    id selfContact = WXGetSelfContact();
    if (selfContact) {
        cached = WXSafeStringGet(selfContact, @"m_nsUsrName");
    }
    return cached;
}

/// 显示名（群内昵称 > 备注 > 昵称），带缓存避免每条消息重复查联系人表
static NSMutableDictionary<NSString *, NSString *> *_kaDisplayNameCache = nil;

static NSString *kaDisplayNameForWxid(NSString *wxid) {
    if (!wxid.length) return nil;
    if (!_kaDisplayNameCache) _kaDisplayNameCache = [NSMutableDictionary dictionary];
    NSString *cached = nil;
    @synchronized (_kaDisplayNameCache) { cached = _kaDisplayNameCache[wxid]; }
    if (cached) return cached;

    id contact = WXGetContactForWxid(wxid);
    NSString *name = nil;
    if (contact) {
        name = WXSafeStringGet(contact, @"m_nsDisplayName"); // 群内昵称（属性缺失时为 nil，安全回退）
        if (name.length == 0) name = WXSafeStringGet(contact, @"m_nsRemark");
        if (name.length == 0) name = WXSafeStringGet(contact, @"m_nsNickName");
    }
    NSString *result = (name.length > 0 && ![name isEqualToString:wxid]) ? name : wxid;
    @synchronized (_kaDisplayNameCache) {
        if (_kaDisplayNameCache.count > 500) [_kaDisplayNameCache removeAllObjects];
        _kaDisplayNameCache[wxid] = result;
    }
    return result;
}

/// 日志展示用：显示名(wxid)；查不到名字时原样输出 wxid
static NSString *kaLogNameForWxid(NSString *wxid) {
    if (!wxid.length) return @"-";
    NSString *name = kaDisplayNameForWxid(wxid);
    if (!name.length || [name isEqualToString:wxid]) return wxid;
    return [NSString stringWithFormat:@"%@(%@)", name, wxid];
}

/// 群消息内容形如 "senderWxid:\n正文"，拆出发送者与正文
static NSString *kaGroupSenderFromContent(NSString *content) {
    if (!content) return nil;
    NSRange sep = [content rangeOfString:@":\n"];
    if (sep.location == NSNotFound || sep.location == 0 || sep.location > 64) return nil;
    return [content substringToIndex:sep.location];
}

#pragma mark - 历史记录

static void kaAppendHistoryRecord(NSDictionary *record) {
    KeywordAlertConfig *config = [KeywordAlertConfig shared];
    NSMutableArray *records = [NSMutableArray arrayWithArray:config.keywordAlertHistoryRecords ?: @[]];
    [records insertObject:record atIndex:0];
    NSUInteger limit = [KeywordAlertConfig historyLimit];
    if (records.count > limit) {
        records = [[records subarrayWithRange:NSMakeRange(0, limit)] mutableCopy];
    }
    config.keywordAlertHistoryRecords = [records copy];
    [ConfigManager saveAll];
}

#pragma mark - 主流程

static void processKeywordAlertMessage(id wrap) {
    @autoreleasepool {
        KeywordAlertConfig *config = [KeywordAlertConfig shared];
        if (!config.keywordAlertEnabled) {
            WPLogDebug(@"KeywordAlert", @"skip: 未启用");
            return;
        }
        if (!wrap) return;

        unsigned int msgType = kaMsgType(wrap);
        NSString *rawContent = kaMsgString(wrap, "m_nsContent");
        if (rawContent.length == 0) {
            WPLogDebug(@"KeywordAlert", @"skip: content为空 type=%u", msgType);
            return;
        }

        // 去重（5 个入口对同一消息会多次到达）
        NSString *msgId = kaMsgString(wrap, "m_nsMsgId");
        if (msgId.length == 0) {
            if ([wrap respondsToSelector:NSSelectorFromString(@"m_uiMesLocalID")]) {
                unsigned int localId = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMesLocalID"));
                if (localId > 0) msgId = [NSString stringWithFormat:@"%u", localId];
            }
        }
        if (msgId.length > 0) {
            if (!_kaProcessedMsgIds) _kaProcessedMsgIds = [NSMutableSet set];
            @synchronized (_kaProcessedMsgIds) {
                if ([_kaProcessedMsgIds containsObject:msgId]) return;
                [_kaProcessedMsgIds addObject:msgId];
                if (_kaProcessedMsgIds.count > 2000) [_kaProcessedMsgIds removeAllObjects];
            }
        } else {
            // 无 msgId/mesLocalID 的消息（如 type=10002 系统事件）无法去重，直接跳过防重复提醒
            WPLogDebug(@"KeywordAlert", @"skip: 无 msgId type=%u", msgType);
            return;
        }

        NSString *fromUsr = kaMsgString(wrap, "m_nsFromUsr") ?: @"";
        NSString *toUsr = kaMsgString(wrap, "m_nsToUsr") ?: @"";
        NSString *selfWxid = kaSelfWxid();
        if (selfWxid.length > 0 && [fromUsr isEqualToString:selfWxid]) {
            WPLogDebug(@"KeywordAlert", @"skip: 自己发送 msgId=%@", msgId);
            return;
        }

        BOOL isGroup = [fromUsr containsString:@"@chatroom"];
        NSString *session = fromUsr;
        NSString *sender = isGroup ? kaGroupSenderFromContent(rawContent) : fromUsr;
        if (isGroup && sender.length == 0) {
            // 部分版本群消息 content 无 "wxid:\n" 前缀，回退运行时探测（属性缺失时为 nil，安全）
            sender = kaMsgString(wrap, "m_nsRealChatUsr");
            WPLogDebug(@"KeywordAlert", @"群消息无内容前缀，m_nsRealChatUsr=%@", sender ? kaLogNameForWxid(sender) : @"(null)");
        }
        NSString *displayContent = rawContent;
        if (isGroup && sender.length > 0) {
            NSRange nl = [rawContent rangeOfString:@"\n"];
            if (nl.location != NSNotFound && nl.location + 1 <= rawContent.length) {
                displayContent = [rawContent substringFromIndex:nl.location + 1];
            }
        }

        WPLogDebug(@"KeywordAlert", @"msg type=%u msgId=%@ from=%@ to=%@ isGroup=%d sender=%@",
              msgType, msgId, kaLogNameForWxid(fromUsr), toUsr, isGroup, kaLogNameForWxid(sender));

        // 会话范围过滤：仅群聊 / 仅私聊（都开或都关 = 全部）；指定群范围只约束群聊
        BOOL groupOnly = config.keywordAlertGroupOnlyEnabled;
        BOOL privateOnly = config.keywordAlertPrivateOnlyEnabled;
        if (groupOnly && !privateOnly && !isGroup) {
            WPLogDebug(@"KeywordAlert", @"skip: 仅群聊生效 msgId=%@", msgId);
            return;
        }
        if (privateOnly && !groupOnly && isGroup) {
            WPLogDebug(@"KeywordAlert", @"skip: 仅私聊生效 msgId=%@", msgId);
            return;
        }
        if (isGroup && config.keywordAlertSelectedGroups.count > 0 &&
            ![config.keywordAlertSelectedGroups containsObject:session]) {
            WPLogDebug(@"KeywordAlert", @"skip: 会话不在指定群范围 msgId=%@ session=%@", msgId, session);
            return;
        }

        // 构造匹配文本：正文 + type49 引用消息的 title/refermsg content（WCR 同款拆解）
        NSMutableArray<NSString *> *texts = [NSMutableArray arrayWithObject:displayContent];
        if (msgType == 49) {
            NSArray *quoted = [KeywordAlertEngine extractQuotedTexts:rawContent];
            if (quoted.count > 0) {
                [texts addObjectsFromArray:quoted];
                WPLogDebug(@"KeywordAlert", @"type49 引用拆解: %@", quoted);
            }
        }

        NSArray<NSString *> *keywords = [KeywordAlertEngine parseKeywordList:config.keywordAlertKeywords];
        if (keywords.count == 0) {
            WPLogDebug(@"KeywordAlert", @"skip: 关键词列表为空");
            return;
        }
        NSArray<NSString *> *disabled = [KeywordAlertEngine parseKeywordList:config.keywordAlertDisabledKeywords];

        // 匹配
        NSArray<NSString *> *matched = nil;
        if (![KeywordAlertEngine matchesAnyKeyword:keywords inTexts:texts matched:&matched]) {
            WPLogDebug(@"KeywordAlert", @"未命中 msgId=%@", msgId);
            return;
        }
        WPLog(@"KeywordAlert", @"[HIT] msgId=%@ session=%@ sender=%@ 命中=%@",
              msgId, kaLogNameForWxid(session), kaLogNameForWxid(sender), matched);

        // 禁用词豁免（WCR 规则：删掉禁用词命中区间后仍命中关键词 → 保留）
        if (disabled.count > 0) {
            BOOL suppressed = [KeywordAlertEngine isSuppressedByDisabledKeywords:disabled keywords:keywords inTexts:texts];
            if (suppressed) {
                WPLog(@"KeywordAlert", @"[DISABLED] 禁用词抑制 msgId=%@ disabled=%@", msgId, disabled);
                return;
            }
            WPLogDebug(@"KeywordAlert", @"禁用词豁免通过 msgId=%@", msgId);
        }

        // 展示名
        NSString *sessionName = kaDisplayNameForWxid(session) ?: session;
        NSString *senderName = kaDisplayNameForWxid(sender) ?: sender ?: @"未知";

        NSString *preview = [displayContent stringByReplacingOccurrencesOfString:@"\n" withString:@" "];
        preview = [preview substringToIndex:MIN(preview.length, 120)];

        NSDictionary *record = @{
            @"msgId": msgId ?: @"",
            @"session": session,
            @"sessionName": sessionName,
            @"sender": sender ?: @"",
            @"senderName": senderName,
            @"content": preview,
            @"keywords": [matched componentsJoinedByString:@","],
            @"isGroup": @(isGroup),
            @"time": @([[NSDate date] timeIntervalSince1970]),
        };

        dispatch_async(dispatch_get_main_queue(), ^{
            // 历史记录
            @try {
                kaAppendHistoryRecord(record);
                WPLog(@"KeywordAlert", @"[HISTORY] 已记录 msgId=%@ 总数=%lu", msgId, (unsigned long)[KeywordAlertConfig shared].keywordAlertHistoryRecords.count);
            } @catch (NSException *e) {
                WPLog(@"KeywordAlert", @"[HISTORY] 写入异常: %@ - %@", e.name, e.reason);
            }

            // 提醒：前台横幅 / 后台系统通知
            BOOL appActive = [UIApplication sharedApplication].applicationState == UIApplicationStateActive;
            if (appActive) {
                if ([KeywordAlertConfig shared].keywordAlertBannerEnabled) {
                    NSString *title = [NSString stringWithFormat:@"%@%@", isGroup ? @"[群] " : @"", sessionName];
                    NSString *body = [NSString stringWithFormat:@"%@: %@", senderName, preview];
                    [KeywordAlertPresenter showBannerWithTitle:title body:body];
                } else {
                    WPLogDebug(@"KeywordAlert", @"前台但横幅未开启，跳过展示 msgId=%@", msgId);
                }
            } else {
                if ([KeywordAlertConfig shared].keywordAlertNotifyEnabled) {
                    NSString *ident = [NSString stringWithFormat:@"mio.keywordAlert.%@", msgId ?: [[NSUUID UUID] UUIDString]];
                    NSString *body = [NSString stringWithFormat:@"%@: %@", senderName, preview];
                    [KeywordAlertPresenter postSystemNotificationWithTitle:sessionName body:body identifier:ident];
                } else {
                    WPLogDebug(@"KeywordAlert", @"后台但通知未开启，跳过展示 msgId=%@", msgId);
                }
            }
        });
    }
}

#pragma mark - 安装

@implementation KeywordAlertHook

+ (void)install {
    WPLog(@"KeywordAlert", @"KeywordAlertHook install");

    Class CMessageMgrClass = objc_getClass("CMessageMgr");
    if (CMessageMgrClass) {
        MSHookMessageEx(CMessageMgrClass, @selector(onNewSyncAddMessage:), (IMP)replaced_ka_onNewSyncAddMessage, &orig_ka_onNewSyncAddMessage);
        WPLog(@"KeywordAlert", @"[+] onNewSyncAddMessage: hooked");

        MSHookMessageEx(CMessageMgrClass, @selector(addMessageLibWithWrap:withVC:), (IMP)replaced_ka_addMessageLibWithWrap, &orig_ka_addMessageLibWithWrap);
        if (orig_ka_addMessageLibWithWrap) {
            WPLog(@"KeywordAlert", @"[+] addMessageLibWithWrap:withVC: hooked");
        } else {
            MSHookMessageEx(CMessageMgrClass, @selector(addMessageLibWithWrap:WithVC:), (IMP)replaced_ka_addMessageLibWithWrap, &orig_ka_addMessageLibWithWrap);
            if (orig_ka_addMessageLibWithWrap) {
                WPLog(@"KeywordAlert", @"[+] addMessageLibWithWrap:WithVC: hooked");
            }
        }

        MSHookMessageEx(CMessageMgrClass, @selector(onNewSyncNotAddDBMessage:), (IMP)replaced_ka_onNewSyncNotAddDBMessage, &orig_ka_onNewSyncNotAddDBMessage);
        WPLog(@"KeywordAlert", @"[+] onNewSyncNotAddDBMessage: hooked");

        MSHookMessageEx(CMessageMgrClass, @selector(AddMsg:MsgWrap:), (IMP)replaced_ka_AddMsgMsgWrap, &orig_ka_AddMsgMsgWrap);
        WPLog(@"KeywordAlert", @"[+] AddMsg:MsgWrap: hooked");

        MSHookMessageEx(CMessageMgrClass, @selector(AsyncOnAddMsg:MsgWrap:), (IMP)replaced_ka_AsyncOnAddMsgMsgWrap, &orig_ka_AsyncOnAddMsgMsgWrap);
        WPLog(@"KeywordAlert", @"[+] AsyncOnAddMsg:MsgWrap: hooked");
    } else {
        WPLog(@"KeywordAlert", @"[WARN] CMessageMgr 未找到，Hook 未生效");
    }

    KeywordAlertConfig *config = [KeywordAlertConfig shared];
    WPLog(@"KeywordAlert", @"[CONFIG] enabled=%d keywords=%lu条 disabled=%lu条 groupOnly=%d privateOnly=%d groups=%lu banner=%d notify=%d",
          config.keywordAlertEnabled,
          (unsigned long)[KeywordAlertEngine parseKeywordList:config.keywordAlertKeywords].count,
          (unsigned long)[KeywordAlertEngine parseKeywordList:config.keywordAlertDisabledKeywords].count,
          config.keywordAlertGroupOnlyEnabled,
          config.keywordAlertPrivateOnlyEnabled,
          (unsigned long)config.keywordAlertSelectedGroups.count,
          config.keywordAlertBannerEnabled,
          config.keywordAlertNotifyEnabled);

    WPLog(@"KeywordAlert", @"KeywordAlertHook install complete");
}

@end
