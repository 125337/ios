#import "TintHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/HookEngine.h"
#import <objc/runtime.h>
#import <objc/message.h>

static void tintRevokeCell(id cell) {
    @try {
        if (!cell) return;
        id wrap = nil;
        for (NSString *sel in @[@"getCurrentMessageWrap", @"messageWrap"]) {
            SEL s = NSSelectorFromString(sel);
            if ([cell respondsToSelector:s]) { wrap = ((id (*)(id, SEL))objc_msgSend)(cell, s); break; }
        }
        Class CMessageWrapClass = objc_getClass("CMessageWrap");
        if (!wrap || (CMessageWrapClass && ![wrap isKindOfClass:CMessageWrapClass])) return;
        NSString *content = nil;
        if ([wrap respondsToSelector:@selector(m_nsContent)])
            content = ((id (*)(id, SEL))objc_msgSend)(wrap, @selector(m_nsContent));
        if (![content containsString:@"撤回"]) return;

        PluginConfig *config = [PluginConfig shared];
        UIColor *timeColor = [config timeColor];

        NSRange nl = [content rangeOfString:@"\n"];
        if (nl.location == NSNotFound || nl.location == 0) return;
        NSRange timeRange = NSMakeRange(0, nl.location);

        id rtv = [cell respondsToSelector:@selector(getRichTextView)] ? ((id (*)(id, SEL))objc_msgSend)(cell, @selector(getRichTextView)) : nil;
        if (!rtv) @try { rtv = [cell valueForKey:@"m_richTextView"]; } @catch (NSException *e) {}

        if ([rtv respondsToSelector:@selector(attributedText)] && [rtv respondsToSelector:@selector(setAttributedText:)]) {
            id attr = ((id (*)(id, SEL))objc_msgSend)(rtv, @selector(attributedText));
            NSMutableAttributedString *ma = [attr isKindOfClass:[NSAttributedString class]] ? [[NSMutableAttributedString alloc] initWithAttributedString:attr] : [[NSMutableAttributedString alloc] initWithString:content];
            if (NSMaxRange(timeRange) <= ma.length) {
                [ma addAttribute:NSForegroundColorAttributeName value:timeColor range:timeRange];

                NSRange contentStart = NSMakeRange(nl.location + 1, ma.length - nl.location - 1);
                if (NSMaxRange(contentStart) <= ma.length && contentStart.length > 0) {
                    NSRange nameSearch = [ma.string rangeOfString:@"\"" options:0 range:contentStart];
                    if (nameSearch.location != NSNotFound) {
                        NSRange nameEnd = [ma.string rangeOfString:@"\"" options:0 range:NSMakeRange(nameSearch.location + 1, ma.length - nameSearch.location - 1)];
                        if (nameEnd.location != NSNotFound) {
                            NSRange nameRange = NSMakeRange(nameSearch.location, nameEnd.location - nameSearch.location + 1);
                            if (NSMaxRange(nameRange) <= ma.length) {
                                [ma addAttribute:NSForegroundColorAttributeName value:[config nameColor] range:nameRange];
                            }
                        }
                    }
                }

                ((void (*)(id, SEL, id))objc_msgSend)(rtv, @selector(setAttributedText:), ma);
            }
            [ma release];
        }
        if ([rtv respondsToSelector:@selector(setNeedsDisplay)])
            ((void (*)(id, SEL))objc_msgSend)(rtv, @selector(setNeedsDisplay));
    } @catch (NSException *e) {}
}

static NSMutableDictionary<NSString *, NSValue *> *gTintOrigIMPs = nil;

static void hookCellColor(NSString *className) {
    Class cls = objc_getClass(className.UTF8String);
    if (!cls) return;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        gTintOrigIMPs = [[NSMutableDictionary dictionary] retain];
    });
    
    for (NSString *methodName in @[@"updateStatus", @"layoutContentView"]) {
        SEL sel = NSSelectorFromString(methodName);
        Method m = class_getInstanceMethod(cls, sel);
        if (!m) continue;
        
        NSString *key = [NSString stringWithFormat:@"Tint_%@_%@", className, methodName];
        IMP origIMP = method_getImplementation(m);
        [gTintOrigIMPs setObject:[NSValue valueWithPointer:origIMP] forKey:key];
        
        IMP newIMP = imp_implementationWithBlock(^void(id self) {
            NSValue *impValue = gTintOrigIMPs[key];
            if (impValue) {
                IMP orig = [impValue pointerValue];
                ((void (*)(id, SEL))orig)(self, sel);
            }
            tintRevokeCell(self);
        });
        
        method_setImplementation(m, newIMP);
    }
}

@implementation TintHook

+ (void)install {
    for (NSString *cls in @[@"SystemMessageCellView", @"TextMessageCellView", @"CommonMessageCellView", @"BaseMessageCellView"]) {
        hookCellColor(cls);
    }
}

@end
