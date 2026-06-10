#import <objc/runtime.h>
#import <objc/message.h>

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
