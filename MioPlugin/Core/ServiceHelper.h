#import <objc/runtime.h>
#import <objc/message.h>
#import "LogManager.h"

static inline id WXGetService(Class serviceClass) {
    Class sc = objc_getClass("MMServiceCenter");
    if (!sc) return nil;
    id center = ((id (*)(id, SEL))objc_msgSend)(sc, NSSelectorFromString(@"defaultCenter"));
    if (!center) return nil;
    if (![center respondsToSelector:NSSelectorFromString(@"getService:")]) return nil;
    return ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), serviceClass);
}

static inline id WXGetContactForWxid(NSString *wxid) {
    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (!contactMgr || ![contactMgr respondsToSelector:@selector(getContactByUserName:)]) return nil;
    return ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByUserName:), wxid);
}

static inline id WXGetSelfContact(void) {
    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (!contactMgr || ![contactMgr respondsToSelector:@selector(getSelfContact)]) return nil;
    return ((id (*)(id, SEL))objc_msgSend)(contactMgr, @selector(getSelfContact));
}

static inline NSString *WXContactHeadImageURL(id contact) {
    if (!contact) return nil;
    SEL sel = NSSelectorFromString(@"m_nsHeadHDImgUrl");
    if ([contact respondsToSelector:sel]) {
        NSString *url = ((id (*)(id, SEL))objc_msgSend)(contact, sel);
        if (url.length) return url;
    }
    sel = NSSelectorFromString(@"m_nsHeadImgUrl");
    if ([contact respondsToSelector:sel]) {
        NSString *url = ((id (*)(id, SEL))objc_msgSend)(contact, sel);
        if (url.length) return url;
    }
    return nil;
}

// ======== 安全读取辅助函数（仿 WCRefine FUN_00b5f9c0 / FUN_00b63ecc） ========

/// 安全读取 contact 的 NSString 字段，内部封装 respondsToSelector: 保护
static inline NSString *WXSafeStringGet(id obj, NSString *key) {
    if (!obj || !key.length) return nil;
    SEL sel = NSSelectorFromString(key);
    if (![obj respondsToSelector:sel]) return nil;
    id value = ((id (*)(id, SEL))objc_msgSend)(obj, sel);
    if ([value isKindOfClass:[NSString class]] && ((NSString *)value).length > 0) {
        return (NSString *)value;
    }
    return nil;
}

/// 安全读取 contact 的 NSInteger 字段，内部封装 respondsToSelector: 保护，失败返回默认值
static inline NSInteger WXSafeIntegerGet(id obj, NSString *key, NSInteger defaultValue) {
    if (!obj || !key.length) return defaultValue;
    SEL sel = NSSelectorFromString(key);
    if (![obj respondsToSelector:sel]) return defaultValue;
    id value = ((id (*)(id, SEL))objc_msgSend)(obj, sel);
    if ([value respondsToSelector:@selector(integerValue)]) {
        return [value integerValue];
    }
    return defaultValue;
}

// ======== 发送文本消息 ========

/// 向指定会话发送一条文本消息（延时 2s 确保引擎就绪；主线程执行）
/// 供自动收款回复、红包统计同步等多处复用
static inline void WXSendTextMessage(NSString *text, NSString *sessionName) {
    if (!text.length || !sessionName.length) return;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        @try {
            id msgMgr = WXGetService(objc_getClass("CMessageMgr"));
            if (!msgMgr) {
                WPLog(@"MioPlugin", @"[SEND] CMessageMgr不可用，无法发送消息");
                return;
            }
            Class msgWrapClass = objc_getClass("CMessageWrap");
            if (!msgWrapClass) {
                WPLog(@"MioPlugin", @"[SEND] CMessageWrap类不可用，无法发送消息");
                return;
            }
            id msg = ((id (*)(id, SEL, long long))objc_msgSend)([msgWrapClass alloc], @selector(initWithMsgType:), 1LL);
            if (!msg) return;

            [msg setValue:text forKey:@"m_nsContent"];
            [msg setValue:sessionName forKey:@"m_nsToUsr"];

            // 发送方设为当前用户（否则消息会显示在错误一侧）
            id selfContact = WXGetSelfContact();
            NSString *selfUserName = WXSafeStringGet(selfContact, @"m_nsUsrName");
            if (selfUserName) [msg setValue:selfUserName forKey:@"m_nsFromUsr"];

            // 状态置"已发送"、补时间戳（否则消息显示异常/排序错误）
            [msg setValue:@(4) forKey:@"m_uiStatus"];
            [msg setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_uiCreateTime"];

            SEL addMsgSel = NSSelectorFromString(@"AddMsg:MsgWrap:");
            if (![msgMgr respondsToSelector:addMsgSel]) {
                WPLog(@"MioPlugin", @"[SEND] AddMsg:MsgWrap:方法不可用");
                return;
            }
            ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, addMsgSel, sessionName, msg);
            WPLog(@"MioPlugin", @"[SEND] 文本消息已发送 -> %@", sessionName);
        } @catch (NSException *e) {
            WPLog(@"MioPlugin", @"[SEND] 发送异常: %@", e);
        }
    });
}

/// 查询联系人显示名（备注 > 昵称），查不到时原样返回 wxid
static inline NSString *WXDisplayNameForWxid(NSString *wxid) {
    if (!wxid.length) return wxid;
    id contact = WXGetContactForWxid(wxid);
    NSString *remark = WXSafeStringGet(contact, @"m_nsRemark");
    if (remark.length) return remark;
    NSString *nick = WXSafeStringGet(contact, @"m_nsNickName");
    if (nick.length) return nick;
    return wxid;
}
