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