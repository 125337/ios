#import <objc/runtime.h>
#import <objc/message.h>
#import "LogManager.h"

static inline id WXGetService(Class serviceClass) {
    if (!serviceClass) return nil;
    // ① MMContext currentContext getService:（WCR 同款，8.0.60 实证可用）
    Class mmctx = objc_getClass("MMContext");
    if (mmctx && [mmctx respondsToSelector:@selector(currentContext)]) {
        id ctx = ((id (*)(id, SEL))objc_msgSend)(mmctx, @selector(currentContext));
        if (ctx && [ctx respondsToSelector:@selector(getService:)]) {
            id svc = ((id (*)(id, SEL, Class))objc_msgSend)(ctx, @selector(getService:), serviceClass);
            if (svc) return svc;
        }
    }
    // ② MMServiceCenter defaultCenter 兜底。
    // 教训（144.log 看门狗定论）：8.0.60 原生 MMServiceCenter 无 defaultCenter 类方法，
    // 无守卫直调每次抛 NSInvalidArgumentException（栈展开毫秒级开销），消息补同步风暴时
    // 每条消息 3-6 次调用 → 秒级 CPU，耗穿 scene-create 看门狗 7.16s 配额。
    // 此方法此前一直可用是因其他插件（WCR/锤子）可能添加过该方法；移除后依赖暴露。
    Class sc = objc_getClass("MMServiceCenter");
    if (sc && [sc respondsToSelector:@selector(defaultCenter)]) {
        id center = ((id (*)(id, SEL))objc_msgSend)(sc, @selector(defaultCenter));
        if (center && [center respondsToSelector:@selector(getService:)]) {
            return ((id (*)(id, SEL, Class))objc_msgSend)(center, @selector(getService:), serviceClass);
        }
    }
    return nil;
}

static inline id WXGetContactForWxid(NSString *wxid) {
    // 58 日志实证：本版本 getContactByUserName: 恒查空，getContactByName: 才是有效查询。
    // KeywordAlert 实测 getContactByName: 对个别群 ID 会返回错误对象 → 结果校验
    // m_nsUsrName 必须等于 wxid，不符依次回退旧 selector / nil
    if (!wxid.length) return nil;
    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (!contactMgr) return nil;
    SEL sels[2] = { NSSelectorFromString(@"getContactByName:"),
                    NSSelectorFromString(@"getContactByUserName:") };
    SEL usrSel = NSSelectorFromString(@"m_nsUsrName");
    for (int i = 0; i < 2; i++) {
        if (![contactMgr respondsToSelector:sels[i]]) continue;
        id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, sels[i], wxid);
        if (!contact) continue;
        if ([contact respondsToSelector:usrSel]) {
            id usr = ((id (*)(id, SEL))objc_msgSend)(contact, usrSel);
            if ([usr isKindOfClass:[NSString class]] && [(NSString *)usr isEqualToString:wxid]) {
                return contact;
            }
            continue;   // 查错对象，试下一路
        }
        return contact;   // 无 m_nsUsrName 可校验，原样返回
    }
    return nil;
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
    if (!contact) {
        // 部分 wxid（尤其群 ID）getContactByUserName: 查不到，回退 getContactByName:（实测群名可查出）
        id mgr = WXGetService(objc_getClass("CContactMgr"));
        SEL sel = NSSelectorFromString(@"getContactByName:");
        if (mgr && [mgr respondsToSelector:sel]) {
            id c2 = ((id (*)(id, SEL, id))objc_msgSend)(mgr, sel, wxid);
            // 校验返回的确实是目标联系人（getContactByName: 对个别 ID 会返回错误对象）
            NSString *chk = WXSafeStringGet(c2, @"m_nsUsrName");
            if (chk.length > 0 && [chk isEqualToString:wxid]) contact = c2;
        }
    }
    NSString *remark = WXSafeStringGet(contact, @"m_nsRemark");
    if (remark.length) return remark;
    NSString *nick = WXSafeStringGet(contact, @"m_nsNickName");
    if (nick.length) return nick;
    return wxid;
}
