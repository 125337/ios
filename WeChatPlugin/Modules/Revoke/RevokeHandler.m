#import "RevokeHandler.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"

static NSString *trimText(NSString *text) {
    if (![text isKindOfClass:[NSString class]]) return nil;
    NSString *trimmed = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return trimmed.length > 0 ? trimmed : nil;
}

static NSString *extractBetween(NSString *text, NSString *startTag, NSString *endTag) {
    if (!text || !startTag || !endTag) return nil;
    NSRange startRange = [text rangeOfString:startTag];
    if (startRange.location == NSNotFound) return nil;
    NSUInteger contentStart = NSMaxRange(startRange);
    NSRange endRange = [text rangeOfString:endTag options:0 range:NSMakeRange(contentStart, text.length - contentStart)];
    if (endRange.location == NSNotFound) return nil;
    return trimText([text substringWithRange:NSMakeRange(contentStart, endRange.location - contentStart)]);
}

static NSDictionary *parseRevokeXml(NSString *xml) {
    if (!xml.length) return nil;
    NSString *session = extractBetween(xml, @"<session>", @"</session>");
    NSString *newmsgid = extractBetween(xml, @"<newmsgid>", @"</newmsgid>");
    NSString *replacemsg = extractBetween(xml, @"<replacemsg><![CDATA[", @"]]></replacemsg>");
    NSString *msgid = extractBetween(xml, @"<msgid>", @"</msgid>");
    NSString *fromusr = extractBetween(xml, @"<fromusr>", @"</fromusr>");
    NSMutableDictionary *result = [NSMutableDictionary dictionary];
    if (session) result[@"session"] = session;
    if (replacemsg) result[@"replacemsg"] = replacemsg;
    if (newmsgid) result[@"newmsgid"] = newmsgid;
    if (msgid) result[@"msgid"] = msgid;
    if (fromusr) result[@"fromusr"] = fromusr;
    return result.count > 0 ? [result copy] : nil;
}

static NSString *sanitizeInlineText(NSString *text, NSUInteger maxLen) {
    if (![text isKindOfClass:[NSString class]]) return nil;
    NSString *clean = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    clean = [clean stringByReplacingOccurrencesOfString:@"\n" withString:@" "];
    clean = [clean stringByReplacingOccurrencesOfString:@"\r" withString:@""];
    if (clean.length > maxLen) clean = [[clean substringToIndex:maxLen] stringByAppendingString:@"…"];
    return clean.length > 0 ? clean : nil;
}

static NSString *timeTextFromTimestamp(unsigned int timestamp, NSString *dateFormat) {
    NSDate *date = timestamp > 0 ? [NSDate dateWithTimeIntervalSince1970:timestamp] : [NSDate date];
    static NSDateFormatter *formatter = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        formatter = [[NSDateFormatter alloc] init];
        formatter.locale = [NSLocale localeWithLocaleIdentifier:@"zh_CN"];
    });
    formatter.dateFormat = dateFormat.length > 0 ? dateFormat : kDefaultDateFormat;
    return [formatter stringFromDate:date] ?: @"";
}

static NSString *displayName(NSString *userName) {
    NSString *trimmedUser = trimText(userName);
    if (!trimmedUser) return nil;
    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (!contactMgr) return trimmedUser;
    NSString *nickName = nil;
    SEL gcSel = NSSelectorFromString(@"getContactByName:");
    if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
    if ([contactMgr respondsToSelector:gcSel]) {
        id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, trimmedUser);
        if (contact) {
            SEL remarkSel = NSSelectorFromString(@"m_nsRemark");
            if ([contact respondsToSelector:remarkSel]) {
                NSString *remark = ((id (*)(id, SEL))objc_msgSend)(contact, remarkSel);
                if (remark.length > 0) nickName = remark;
            }
            if (!nickName) {
                SEL nickSel = NSSelectorFromString(@"m_nsNickName");
                if ([contact respondsToSelector:nickSel]) {
                    NSString *nick = ((id (*)(id, SEL))objc_msgSend)(contact, nickSel);
                    if (nick.length > 0) nickName = nick;
                }
            }
        }
    }
    return nickName ?: trimmedUser;
}

static NSString *digestForMsgWrap(id msgWrap) {
    if (!msgWrap) return nil;
    unsigned int type = 0;
    SEL typeSel = NSSelectorFromString(@"m_uiMessageType");
    if ([msgWrap respondsToSelector:typeSel]) type = ((unsigned int (*)(id, SEL))objc_msgSend)(msgWrap, typeSel);
    NSString *content = nil;
    SEL contentSel = NSSelectorFromString(@"m_nsContent");
    if ([msgWrap respondsToSelector:contentSel]) content = ((id (*)(id, SEL))objc_msgSend)(msgWrap, contentSel);
    switch (type) {
        case 1: return sanitizeInlineText(content, 120) ?: @"[文本]";
        case 3: return @"[图片]";
        case 34: return @"[语音]";
        case 43: return @"[视频]";
        case 47: return @"[表情]";
        case 49: return @"[应用消息]";
        default: return [NSString stringWithFormat:@"[类型:%u]", type];
    }
}

static BOOL insertTipMessage_DKStyle(id messageMgr, NSString *session, NSString *tipText,
                                       id revokedMsgWrap, unsigned int createTime) {
    WPLog(@"Revoke", @"insertTipMessage_DKStyle: session=%@", session);
    
    if (!messageMgr || !session.length || !tipText.length) {
        WPLog(@"Revoke", @"invalid params");
        return NO;
    }
    
    Class CMessageWrapClass = objc_getClass("CMessageWrap");
    if (!CMessageWrapClass) {
        WPLog(@"Revoke", @"CMessageWrap class not found");
        return NO;
    }

    @try {
        id newWrap = ((id (*)(id, SEL, unsigned int))objc_msgSend)(
            [CMessageWrapClass alloc], NSSelectorFromString(@"initWithMsgType:"), 0x2710);

        if (!newWrap) {
            WPLog(@"Revoke", @"failed to create CMessageWrap");
            return NO;
        }

        NSString *fromUsr = nil;
        NSString *toUsr = nil;

        if (revokedMsgWrap) {
            SEL fromSel = NSSelectorFromString(@"m_nsFromUsr");
            if ([revokedMsgWrap respondsToSelector:fromSel])
                fromUsr = ((id (*)(id, SEL))objc_msgSend)(revokedMsgWrap, fromSel);
            
            SEL toSel = NSSelectorFromString(@"m_nsToUsr");
            if ([revokedMsgWrap respondsToSelector:toSel])
                toUsr = ((id (*)(id, SEL))objc_msgSend)(revokedMsgWrap, toSel);
        }

        if (!fromUsr.length) fromUsr = session;
        if (!toUsr.length) toUsr = session;

        SEL setFromUsrSel = NSSelectorFromString(@"setM_nsFromUsr:");
        if ([newWrap respondsToSelector:setFromUsrSel])
            ((void (*)(id, SEL, id))objc_msgSend)(newWrap, setFromUsrSel, fromUsr);

        SEL setToUsrSel = NSSelectorFromString(@"setM_nsToUsr:");
        if ([newWrap respondsToSelector:setToUsrSel])
            ((void (*)(id, SEL, id))objc_msgSend)(newWrap, setToUsrSel, toUsr);

        SEL setStatusSel = NSSelectorFromString(@"setM_uiStatus:");
        if ([newWrap respondsToSelector:setStatusSel])
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(newWrap, setStatusSel, 4);

        SEL setContentSel = NSSelectorFromString(@"setM_nsContent:");
        if ([newWrap respondsToSelector:setContentSel])
            ((void (*)(id, SEL, id))objc_msgSend)(newWrap, setContentSel, tipText);

        SEL setCreateTimeSel = NSSelectorFromString(@"setM_uiCreateTime:");
        if ([newWrap respondsToSelector:setCreateTimeSel])
            ((void (*)(id, SEL, unsigned int))objc_msgSend)(newWrap, setCreateTimeSel, createTime);

        SEL addLocalMsgSel = NSSelectorFromString(@"AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:");
        if ([messageMgr respondsToSelector:addLocalMsgSel]) {
            ((void (*)(id, SEL, id, id, BOOL, BOOL))objc_msgSend)(
                messageMgr, addLocalMsgSel, session, newWrap, YES, NO);
            WPLog(@"Revoke", @"AddLocalMsg success (DK style)");
            [newWrap release];
            return YES;
        }

        SEL addSimpleSel = NSSelectorFromString(@"AddLocalMsg:MsgWrap:");
        if ([messageMgr respondsToSelector:addSimpleSel]) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr, addSimpleSel, session, newWrap);
            WPLog(@"Revoke", @"AddLocalMsg simple success");
            [newWrap release];
            return YES;
        }

        WPLog(@"Revoke", @"no AddLocalMsg method found");
        [newWrap release];
        return NO;
        
    } @catch (NSException *e) {
        WPLog(@"Revoke", @"exception: %@", e);
        return NO;
    }
}

@implementation RevokeHandler

+ (instancetype)shared {
    static RevokeHandler *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{ instance = [[RevokeHandler alloc] init]; });
    return instance;
}

- (BOOL)isSelfRevoke:(id)msgWrap {
    if (!msgWrap) return NO;
    @try {
        Class cls = objc_getClass("CMessageWrap");
        if (cls) {
            SEL sel = NSSelectorFromString(@"isSenderFromMsgWrap:");
            if ([cls respondsToSelector:sel]) {
                return ((BOOL (*)(id, SEL, id))objc_msgSend)(cls, sel, msgWrap);
            }
        }
    } @catch (NSException *e) {}
    return NO;
}

- (BOOL)handleRevoke:(id)revokeWrap chatName:(NSString *)chatNameHint {
    NSString *logMsg = [NSString stringWithFormat:@"handleRevoke called, chatNameHint=%@", chatNameHint];
    WPLog(@"Revoke", @"%@", logMsg);
    
    Class CMessageWrapClass = objc_getClass("CMessageWrap");
    if (CMessageWrapClass && ![revokeWrap isKindOfClass:CMessageWrapClass]) {
        WPLog(@"Revoke", @"not CMessageWrap class");
        return NO;
    }
    if (!revokeWrap) {
        WPLog(@"Revoke", @"revokeWrap is nil");
        return NO;
    }

    PluginConfig *config = [PluginConfig shared];

    if ([self isSelfRevoke:revokeWrap]) {
        WPLog(@"Revoke", @"is self revoke, skip");
        return NO;
    }

    NSString *xml = nil;
    SEL contentSel = NSSelectorFromString(@"m_nsContent");
    if ([revokeWrap respondsToSelector:contentSel]) xml = ((id (*)(id, SEL))objc_msgSend)(revokeWrap, contentSel);
    xml = trimText(xml);
    if (xml.length == 0) return NO;

    NSDictionary *parsed = parseRevokeXml(xml);
    if (!parsed[@"replacemsg"]) { [parsed release]; return NO; }

    NSString *session = parsed[@"session"];

    NSString *newmsgidStr = parsed[@"newmsgid"];
    long long revokedMsgId = 0;
    if (newmsgidStr.length > 0) { 
        NSScanner *s = [NSScanner scannerWithString:newmsgidStr]; 
        [s scanLongLong:&revokedMsgId]; 
    }
    if (revokedMsgId <= 0) {
        NSString *msgidStr = parsed[@"msgid"];
        if (msgidStr.length > 0) { 
            NSScanner *s = [NSScanner scannerWithString:msgidStr]; 
            [s scanLongLong:&revokedMsgId]; 
        }
    }

    if (config.noTip) return YES;

    id messageMgr = WXGetService(objc_getClass("CMessageMgr"));
    if (!messageMgr) {
        WPLog(@"Revoke", @"CMessageMgr not found");
        return NO;
    }

    id revokedMsgWrap = nil;
    if (revokedMsgId > 0 && session.length > 0) {
        SEL getMsgSel = NSSelectorFromString(@"GetMsg:n64SvrID:");
        if ([messageMgr respondsToSelector:getMsgSel]) {
            @try {
                revokedMsgWrap = ((id (*)(id, SEL, id, long long))objc_msgSend)(
                    messageMgr, getMsgSel, session, revokedMsgId);
                if (revokedMsgWrap && CMessageWrapClass && ![revokedMsgWrap isKindOfClass:CMessageWrapClass]) {
                    revokedMsgWrap = nil;
                }
            } @catch (NSException *e) {}
        }
        if (!revokedMsgWrap && chatNameHint.length > 0) {
            @try {
                id msg = ((id (*)(id, SEL, id, long long))objc_msgSend)(
                    messageMgr, getMsgSel, chatNameHint, revokedMsgId);
                if (msg && CMessageWrapClass && [msg isKindOfClass:CMessageWrapClass]) {
                    revokedMsgWrap = msg;
                }
            } @catch (NSException *e) {}
        }
    }
    
    WPLog(@"Revoke", @"revokedMsgWrap=%@, msgId=%lld", revokedMsgWrap ? @"found" : @"nil", revokedMsgId);

    NSString *fromUsrName = nil;
    NSString *replaceText = sanitizeInlineText(parsed[@"replacemsg"], 180);
    
    if (replaceText) {
        NSRange cdataStart = [replaceText rangeOfString:@"<![CDATA["];
        if (cdataStart.location != NSNotFound) {
            NSUInteger nameStart = NSMaxRange(cdataStart);
            NSRange nameEnd = [replaceText rangeOfString:@"撤回了一条消息" options:0 
                                                          range:NSMakeRange(nameStart, replaceText.length - nameStart)];
            if (nameEnd.location != NSNotFound) {
                fromUsrName = trimText([replaceText substringWithRange:NSMakeRange(nameStart, nameEnd.location - nameStart)]);
            }
        }
    }

    if (!fromUsrName.length) {
        NSString *actorFromXml = parsed[@"fromusr"];
        if (actorFromXml.length > 0) fromUsrName = actorFromXml;
    }
    [parsed release];
    if (!fromUsrName.length) {
        SEL fromUsrSel = NSSelectorFromString(@"m_nsFromUsr");
        if ([revokeWrap respondsToSelector:fromUsrSel])
            fromUsrName = ((id (*)(id, SEL))objc_msgSend)(revokeWrap, fromUsrSel);
    }
    fromUsrName = displayName(fromUsrName) ?: @"对方";

    NSString *revokedContent = nil;
    if (!config.hideContent) {
        revokedContent = digestForMsgWrap(revokedMsgWrap);
        if (!revokedContent.length) revokedContent = @"";
    } else {
        revokedContent = @"";
    }

    unsigned int createTime = 0;
    SEL createTimeSel = NSSelectorFromString(@"m_uiCreateTime");
    if ([revokeWrap respondsToSelector:createTimeSel]) 
        createTime = ((unsigned int (*)(id, SEL))objc_msgSend)(revokeWrap, createTimeSel);
    if (createTime == 0) createTime = (unsigned int)[[NSDate date] timeIntervalSince1970];

    NSString *timeText = timeTextFromTimestamp(createTime, config.dateFormat);

    NSString *newMsgContent = nil;
    if (config.revokeTemplate.length > 0) {
        NSString *contentForTemplate = revokedContent ?: @"";
        newMsgContent = [config applyRevokeTemplate:config.revokeTemplate name:fromUsrName content:contentForTemplate createTime:createTime];
    } else if (revokedContent.length > 0) {
        newMsgContent = [NSString stringWithFormat:@"🔴 %@\n\"%@\"撤回了一条消息\n%@", 
                        timeText, fromUsrName, revokedContent];
    } else {
        newMsgContent = [NSString stringWithFormat:@"🔴 %@\n\"%@\"撤回了一条消息", 
                        timeText, fromUsrName];
    }

    WPLog(@"Revoke", @"newMsgContent=%@", newMsgContent);

    BOOL inserted = insertTipMessage_DKStyle(messageMgr, session, newMsgContent, revokedMsgWrap, createTime);
    WPLog(@"Revoke", @"result=%d", inserted);

    // ====== 通知撤回者 ======
    if (config.notifySender && !config.noTip && inserted && fromUsrName.length > 0) {
        NSTimeInterval currentTime = [[NSDate date] timeIntervalSince1970];
        NSTimeInterval msgTime = (NSTimeInterval)createTime;
        NSTimeInterval elapsed = currentTime - msgTime;
        double cooldown = config.notifySenderCooldown;

        if (cooldown <= 0 || elapsed <= cooldown) {
            NSString *notifyText = config.notifySenderTemplate;
            if (notifyText.length > 0) {
                notifyText = [config applyRevokeTemplate:notifyText name:fromUsrName content:revokedContent ?: @"" createTime:createTime];
            }
            if (!notifyText.length) {
                notifyText = [NSString stringWithFormat:@"【捕抓到1条撤回消息】\n操作用户: %@\n撤回内容: %@\n\n撤回无效，消息已读并保存", fromUsrName, revokedContent ?: @"未知内容"];
            }

            @try {
                id notifyWrap = ((id (*)(id, SEL, unsigned int))objc_msgSend)(
                    [CMessageWrapClass alloc], NSSelectorFromString(@"initWithMsgType:"), 1);

                if (notifyWrap) {
                    SEL setContentSel = NSSelectorFromString(@"setM_nsContent:");
                    if ([notifyWrap respondsToSelector:setContentSel])
                        ((void (*)(id, SEL, id))objc_msgSend)(notifyWrap, setContentSel, notifyText);

                    // 设置发送者（当前用户）和接收者（撤回者）
                    if (revokedMsgWrap) {
                        SEL fromSel = NSSelectorFromString(@"m_nsFromUsr");
                        SEL toSel = NSSelectorFromString(@"m_nsToUsr");
                        id originalFrom = nil;
                        if ([revokedMsgWrap respondsToSelector:fromSel])
                            originalFrom = ((id (*)(id, SEL))objc_msgSend)(revokedMsgWrap, fromSel);
                        id originalTo = nil;
                        if ([revokedMsgWrap respondsToSelector:toSel])
                            originalTo = ((id (*)(id, SEL))objc_msgSend)(revokedMsgWrap, toSel);

                        // 判断是群聊还是私聊
                        BOOL isGroup = [session containsString:@"@chatroom"];

                        if (isGroup) {
                            // 群聊：发给撤回者的群内临时 ChatName
                            SEL setToUsrSel = NSSelectorFromString(@"setM_nsToUsr:");
                            if ([notifyWrap respondsToSelector:setToUsrSel]) {
                                NSString *targetTo = originalFrom; // fromuser 在群聊中是临时 ChatName
                                ((void (*)(id, SEL, id))objc_msgSend)(notifyWrap, setToUsrSel, targetTo);
                            }
                            SEL setFromUsrSel = NSSelectorFromString(@"setM_nsFromUsr:");
                            if ([notifyWrap respondsToSelector:setFromUsrSel] && originalTo)
                                ((void (*)(id, SEL, id))objc_msgSend)(notifyWrap, setFromUsrSel, originalTo);
                        } else {
                            // 私聊：发给当前会话
                            SEL setToUsrSel = NSSelectorFromString(@"setM_nsToUsr:");
                            if ([notifyWrap respondsToSelector:setToUsrSel] && originalFrom)
                                ((void (*)(id, SEL, id))objc_msgSend)(notifyWrap, setToUsrSel, originalFrom);
                            SEL setFromUsrSel = NSSelectorFromString(@"setM_nsFromUsr:");
                            if ([notifyWrap respondsToSelector:setFromUsrSel] && originalTo)
                                ((void (*)(id, SEL, id))objc_msgSend)(notifyWrap, setFromUsrSel, originalTo);
                        }
                    }

                    // 通过 AddMsg 走服务器发送，确保双方都能看到
                    SEL addMsgSel = NSSelectorFromString(@"AddMsg:MsgWrap:");
                    if ([messageMgr respondsToSelector:addMsgSel]) {
                        ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr, addMsgSel, session, notifyWrap);
                        WPLog(@"Revoke", @"notifySender: sent via AddMsg to revoker");
                    }
                    [notifyWrap release];
                }
            } @catch (NSException *e) {
                WPLog(@"Revoke", @"notifySender exception: %@", e);
            }
        }
    }

    return inserted;
}

@end
