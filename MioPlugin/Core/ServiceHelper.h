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
