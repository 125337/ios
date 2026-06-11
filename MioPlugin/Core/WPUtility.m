#import "WPUtility.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import "LogManager.h"

@implementation WPUtility

+ (UIColor *)colorFromHex:(NSString *)hex {
    if (!hex.length) return nil;
    NSString *clean = [hex stringByReplacingOccurrencesOfString:@"#" withString:@""];
    if (clean.length < 6) return nil;
    unsigned int r = 0, g = 0, b = 0, a = 255;
    [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(0, 2)]] scanHexInt:&r];
    [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(2, 2)]] scanHexInt:&g];
    [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(4, 2)]] scanHexInt:&b];
    if (clean.length >= 8) {
        [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(6, 2)]] scanHexInt:&a];
    }
    return [UIColor colorWithRed:r / 255.0 green:g / 255.0 blue:b / 255.0 alpha:a / 255.0];
}

+ (NSString *)hexFromColor:(UIColor *)color {
    if (!color) return nil;
    CGFloat r, g, b, a;
    [color getRed:&r green:&g blue:&b alpha:&a];
    return [NSString stringWithFormat:@"#%02X%02X%02X",
            (int)(r * 255), (int)(g * 255), (int)(b * 255)];
}

+ (BOOL)isDarkMode {
    if (@available(iOS 13.0, *)) {
        return UITraitCollection.currentTraitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    }
    return NO;
}

+ (BOOL)isDarkModeForViewController:(UIViewController *)vc {
    if (@available(iOS 13.0, *)) {
        return vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    }
    return NO;
}

+ (UIViewController *)findParentViewController:(UIView *)view {
    if (!view) return nil;

    UIResponder *responder = view;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

+ (id)insertSystemTipMessageInSession:(NSString *)session
                              content:(NSString *)content
                               msgMgr:(id)msgMgr
                           createTime:(unsigned int)createTime
                              fromUsr:(NSString *)fromUsr
                                toUsr:(NSString *)toUsr
                              msgWrap:(id)msgWrap
                          extraSetup:(void (^)(id newWrap))extraSetup {
    
    // ── 参数校验 ──
    if (!session.length || !content.length || !msgMgr) {
        WPLog(@"WPUtility", @"insertSystemTipMessage: invalid params");
        return nil;
    }
    
    // ── 获取 CMessageWrap 类 ──
    Class msgWrapClass = objc_getClass("CMessageWrap");
    if (!msgWrapClass) {
        WPLog(@"WPUtility", @"insertSystemTipMessage: CMessageWrap class not found");
        return nil;
    }
    
    // ── 创建消息对象 ──
    id newWrap = ((id (*)(id, SEL, unsigned int))objc_msgSend)(
        [msgWrapClass alloc], NSSelectorFromString(@"initWithMsgType:"), 0x2710);
    if (!newWrap) {
        WPLog(@"WPUtility", @"insertSystemTipMessage: failed to create CMessageWrap");
        return nil;
    }
    
    // ── 确定 fromUsr / toUsr ──
    // 优先级: 显式传入 > 从 msgWrap 继承 > 使用 session
    NSString *resolvedFromUsr = fromUsr;
    NSString *resolvedToUsr = toUsr;
    
    if (!resolvedFromUsr && msgWrap) {
        SEL fromSel = NSSelectorFromString(@"m_nsFromUsr");
        if ([msgWrap respondsToSelector:fromSel])
            resolvedFromUsr = ((id (*)(id, SEL))objc_msgSend)(msgWrap, fromSel);
    }
    if (!resolvedToUsr && msgWrap) {
        SEL toSel = NSSelectorFromString(@"m_nsToUsr");
        if ([msgWrap respondsToSelector:toSel])
            resolvedToUsr = ((id (*)(id, SEL))objc_msgSend)(msgWrap, toSel);
    }
    if (!resolvedFromUsr) resolvedFromUsr = session;
    if (!resolvedToUsr) resolvedToUsr = session;
    
    // ── 设置消息属性 ──
    SEL setFromUsrSel = NSSelectorFromString(@"setM_nsFromUsr:");
    if ([newWrap respondsToSelector:setFromUsrSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(newWrap, setFromUsrSel, resolvedFromUsr);
    }
    
    SEL setToUsrSel = NSSelectorFromString(@"setM_nsToUsr:");
    if ([newWrap respondsToSelector:setToUsrSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(newWrap, setToUsrSel, resolvedToUsr);
    }
    
    SEL setStatusSel = NSSelectorFromString(@"setM_uiStatus:");
    if ([newWrap respondsToSelector:setStatusSel]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(newWrap, setStatusSel, 4);
    }
    
    SEL setContentSel = NSSelectorFromString(@"setM_nsContent:");
    if ([newWrap respondsToSelector:setContentSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(newWrap, setContentSel, content);
    }
    
    // 时间戳: 优先使用传入值，否则用当前时间
    unsigned int ts = createTime;
    if (ts == 0) {
        ts = (unsigned int)[[NSDate date] timeIntervalSince1970];
    }
    SEL setCreateTimeSel = NSSelectorFromString(@"setM_uiCreateTime:");
    if ([newWrap respondsToSelector:setCreateTimeSel]) {
        ((void (*)(id, SEL, unsigned int))objc_msgSend)(newWrap, setCreateTimeSel, ts);
    }
    
    // ── 模块自定义配置（如 Revoke 需要标记关联对象） ──
    if (extraSetup) {
        extraSetup(newWrap);
    }
    
    // ── 插入到聊天界面 ──
    // 优先使用带 fixTime 的完整版 API
    SEL addLocalMsgSel = NSSelectorFromString(@"AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:");
    if ([msgMgr respondsToSelector:addLocalMsgSel]) {
        ((void (*)(id, SEL, id, id, BOOL, BOOL))objc_msgSend)(
            msgMgr, addLocalMsgSel, session, newWrap, YES, NO);
        WPLog(@"WPUtility", @"insertSystemTipMessage: AddLocalMsg success (full)");
    } else {
        // 降级：使用简单版 API
        SEL addSimpleSel = NSSelectorFromString(@"AddLocalMsg:MsgWrap:");
        if ([msgMgr respondsToSelector:addSimpleSel]) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, addSimpleSel, session, newWrap);
            WPLog(@"WPUtility", @"insertSystemTipMessage: AddLocalMsg success (simple)");
        } else {
            WPLog(@"WPUtility", @"insertSystemTipMessage: no AddLocalMsg method found");
            return nil;
        }
    }
    
    return newWrap;
}

@end