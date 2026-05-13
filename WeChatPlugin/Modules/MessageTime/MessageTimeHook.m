#import "MessageTimeHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import <dlfcn.h>

// ============================================================
// MARK: - Logging
// ============================================================

static void mtLog(NSString *content);

// ============================================================
// MARK: - Dynamic Hook Engine (Substrate dlsym + Runtime fallback)
// ============================================================

typedef void (*MTHookMessageExFunc)(Class _class, SEL sel, IMP replacement, IMP *original);

static MTHookMessageExFunc g_hookFunc = NULL;

static BOOL mt_resolveHookEngine(void) {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        void *sym = dlsym(RTLD_DEFAULT, "MSHookMessageEx");
        if (!sym) sym = dlsym(RTLD_DEFAULT, "_MSHookMessageEx");
        if (sym) {
            g_hookFunc = (MTHookMessageExFunc)sym;
            mtLog(@"[Engine] MSHookMessageEx resolved via dlsym");
        } else {
            g_hookFunc = NULL;
            mtLog(@"[Engine] Substrate not available, using Runtime fallback");
        }
    });
    return (g_hookFunc != NULL);
}

static void mt_hookMessage(Class cls, SEL sel, IMP replacement, IMP *original) {
    if (!cls || !sel || !replacement || !original) return;

    if (mt_resolveHookEngine()) {
        g_hookFunc(cls, sel, replacement, original);
        return;
    }

    Method m = class_getInstanceMethod(cls, sel);
    if (!m) return;

    *original = method_getImplementation(m);
    method_setImplementation(m, replacement);
}

// ============================================================
// MARK: - Configuration Table Entry
// ============================================================

typedef struct {
    const char *className;
    const char *selName;
    IMP replacement;
    IMP *original;
} MTHookEntry;

// ============================================================
// MARK: - Logging Implementation
// ============================================================

static void mtLog(NSString *content) {
    if ([content hasPrefix:@"[DBG]"] && ![PluginConfig shared].debugLogging) return;
    
    NSLog(@"[WeChatPlugin][MessageTime] %@", content);
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"messagetime.log"];
        NSString *timestamp = [[NSDate date] description];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", timestamp, content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

// ============================================================
// MARK: - Label Management
// ============================================================

static UILabel *getTimeLabel(id cell) {
    UILabel *label = objc_getAssociatedObject(cell, @"messageTimeLabel");
    if (!label) {
        label = [[UILabel alloc] init];
        label.tag = 999999;
        label.userInteractionEnabled = NO;
        objc_setAssociatedObject(cell, @"messageTimeLabel", label, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return label;
}

static NSDateFormatter *getTimeFormatter() {
    static NSDateFormatter *formatter = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        formatter = [[NSDateFormatter alloc] init];
        formatter.locale = [[NSLocale alloc] initWithLocaleIdentifier:@"en_US_POSIX"];
    });
    return formatter;
}

// ============================================================
// MARK: - Color / Theme Helpers
// ============================================================

static BOOL isWeChatDarkMode() {
    @try {
        Class cls = objc_getClass("WCThemeMgr");
        if (cls) {
            id mgr = [cls performSelector:NSSelectorFromString(@"sharedInstance")];
            if (mgr) {
                NSString *theme = [mgr performSelector:NSSelectorFromString(@"currentTheme")];
                if ([theme containsString:@"dark"] || [theme containsString:@"Dark"]) {
                    return YES;
                }
            }
        }
    } @catch (NSException *e) {}
    return NO;
}

static UIColor *autoDarkColor(UIColor *lightColor) {
    if (!lightColor) return nil;
    CGFloat r, g, b, a;
    if ([lightColor getRed:&r green:&g blue:&b alpha:&a]) {
        return [UIColor colorWithRed:MIN(r + 0.15, 1.0)
                               green:MIN(g + 0.15, 1.0)
                                blue:MIN(b + 0.15, 1.0)
                               alpha:a];
    }
    return lightColor;
}

static UIColor *colorInLightMode(UIColor *lightColor, UIColor *darkColor) {
    return isWeChatDarkMode() ? (darkColor ?: autoDarkColor(lightColor)) : lightColor;
}

// ============================================================
// MARK: - Time Formatting
// ============================================================

static NSString *formatMessageTime(NSDate *date, NSString *format) {
    if (!date || !format) return nil;
    
    NSDateFormatter *formatter = getTimeFormatter();
    
    NSString *result = format;
    BOOL hasB = [result containsString:@"{b}"];
    result = [result stringByReplacingOccurrencesOfString:@"{b}" withString:@""];
    
    BOOL hasFakeRead = [result containsString:@"{伪已读}"];
    result = [result stringByReplacingOccurrencesOfString:@"{伪已读}" withString:@""];
    
    result = [result stringByReplacingOccurrencesOfString:@"{yyyy}" withString:@"yyyy"];
    result = [result stringByReplacingOccurrencesOfString:@"{yy}" withString:@"yy"];
    result = [result stringByReplacingOccurrencesOfString:@"{MM}" withString:@"MM"];
    result = [result stringByReplacingOccurrencesOfString:@"{dd}" withString:@"dd"];
    result = [result stringByReplacingOccurrencesOfString:@"{HH}" withString:@"HH"];
    result = [result stringByReplacingOccurrencesOfString:@"{hh}" withString:@"hh"];
    result = [result stringByReplacingOccurrencesOfString:@"{mm}" withString:@"mm"];
    result = [result stringByReplacingOccurrencesOfString:@"{ss}" withString:@"ss"];
    result = [result stringByReplacingOccurrencesOfString:@"{EEEE}" withString:@"EEEE"];
    result = [result stringByReplacingOccurrencesOfString:@"{EE}" withString:@"EE"];
    result = [result stringByReplacingOccurrencesOfString:@"{a}" withString:@"a"];
    
    formatter.dateFormat = result;
    NSString *formatted = [formatter stringFromDate:date];
    
    if (hasB) {
        NSCalendar *cal = [NSCalendar currentCalendar];
        NSInteger hour = [cal component:NSCalendarUnitHour fromDate:date];
        NSString *period = @"";
        if (hour == 12) period = @"noon";
        else if (hour == 0) period = @"midnight";
        if (period.length > 0) {
            formatted = [formatted stringByAppendingFormat:@" %@", period];
        }
    }
    
    if (hasFakeRead) {
        formatted = [formatted stringByAppendingString:@" 已读"];
    }
    
    return formatted;
}

// ============================================================
// MARK: - View Hierarchy Accessors
// ============================================================

static id getCellView(id cell) {
    id cellView = nil;
    NSString *cellCls = NSStringFromClass([cell class]);
    @try {
        cellView = [cell valueForKey:@"m_cellView"];
        if (cellView) mtLog([NSString stringWithFormat:@"[DBG] getCellView: found via m_cellView, class=%@", NSStringFromClass([cellView class])]);
    } @catch (NSException *e) {
        mtLog([NSString stringWithFormat:@"[DBG] getCellView: m_cellView threw: %@", e.reason]);
    }
    if (!cellView) {
        @try {
            cellView = [cell valueForKey:@"cellView"];
            if (cellView) mtLog([NSString stringWithFormat:@"[DBG] getCellView: found via cellView, class=%@", NSStringFromClass([cellView class])]);
        } @catch (NSException *e) {
            mtLog([NSString stringWithFormat:@"[DBG] getCellView: cellView threw: %@", e.reason]);
        }
    }
    if (!cellView) mtLog([NSString stringWithFormat:@"[DBG] getCellView: BOTH nil for cell=%@", cellCls]);
    return cellView;
}

static id getAvatarView(id cell) {
    id avatarView = nil;
    
    id cellView = getCellView(cell);
    id contentView = nil;
    @try { contentView = [cell valueForKey:@"contentView"]; } @catch (...) {}
    if (!contentView) { @try { contentView = [cell valueForKey:@"m_contentView"]; } @catch (...) {} }
    
    NSArray *targets = @[cellView ?: [NSNull null], contentView ?: [NSNull null], cell];
    
    for (id target in targets) {
        if (!target || [target isKindOfClass:[NSNull class]]) continue;
        
        if (!avatarView) {
            SEL sel = NSSelectorFromString(@"getHeadImageView");
            if ([target respondsToSelector:sel]) {
                @try {
                    id view = ((id (*)(id, SEL))objc_msgSend)(target, sel);
                    if (view) {
                        mtLog(@"[DBG] getAvatarView: getHeadImageView found");
                        avatarView = view;
                        break;
                    }
                } @catch (NSException *e) {}
            }
        }
        
        if (!avatarView) {
            for (NSString *selName in @[@"leftAvatarView", @"rightAvatarView"]) {
                SEL sel = NSSelectorFromString(selName);
                if ([target respondsToSelector:sel]) {
                    @try {
                        id view = ((id (*)(id, SEL))objc_msgSend)(target, sel);
                        if (view && [view respondsToSelector:@selector(image)]) {
                            mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: %@ found", selName]);
                            avatarView = view;
                            break;
                        }
                    } @catch (NSException *e) {}
                }
            }
        }
        
        if (!avatarView) {
            for (NSString *key in @[@"m_headImageView", @"headImgView", @"avatarView", @"avatarImageView", @"headImg"]) {
                @try {
                    id view = [target valueForKey:key];
                    if (view && [view respondsToSelector:@selector(image)]) {
                        mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: KVC %@ found, class=%@", key, NSStringFromClass([view class])]);
                        avatarView = view;
                        break;
                    }
                } @catch (NSException *e) {}
            }
        }
        
        if (!avatarView) {
            for (UIView *sv in [target subviews]) {
                if ([sv respondsToSelector:@selector(image)]) {
                    NSString *cn = NSStringFromClass([sv class]);
                    if ([cn containsString:@"Head"] || [cn containsString:@"Avatar"]) {
                        mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: subview match class=%@", cn]);
                        avatarView = sv;
                        break;
                    }
                }
            }
        }
        
        if (avatarView) break;
    }
    
    if (!avatarView) mtLog(@"[DBG] getAvatarView: FAILED - all paths returned nil");
    return avatarView;
}

static id getBubbleView(id cell) {
    id bubbleView = nil;
    
    id cellView = getCellView(cell);
    id contentView = nil;
    @try { contentView = [cell valueForKey:@"contentView"]; } @catch (...) {}
    if (!contentView) { @try { contentView = [cell valueForKey:@"m_contentView"]; } @catch (...) {} }
    
    NSArray *targets = @[cellView ?: [NSNull null], contentView ?: [NSNull null], cell];
    
    for (id target in targets) {
        if (!target || [target isKindOfClass:[NSNull class]]) continue;
        
        if (!bubbleView) {
            SEL sel = NSSelectorFromString(@"getBgImageView");
            if ([target respondsToSelector:sel]) {
                @try {
                    id v = ((id (*)(id, SEL))objc_msgSend)(target, sel);
                    if (v) {
                        mtLog(@"[DBG] getBubbleView: getBgImageView found");
                        bubbleView = v;
                        break;
                    }
                } @catch (NSException *e) {}
            }
        }
        
        if (!bubbleView) {
            for (NSString *key in @[@"m_bgImageView", @"bgImageView"]) {
                @try {
                    id v = [target valueForKey:key];
                    if (v) {
                        mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: KVC %@ found, class=%@", key, NSStringFromClass([v class])]);
                        bubbleView = v;
                        break;
                    }
                } @catch (NSException *e) {}
            }
        }
        
        if (!bubbleView) {
            for (UIView *sv in [target subviews]) {
                NSString *cn = NSStringFromClass([sv class]);
                if ([cn containsString:@"BgImage"] || [cn containsString:@"Bubble"] ||
                    [cn containsString:@"MessageView"] || [cn containsString:@"RichTextView"]) {
                    mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: subview match class=%@", cn]);
                    bubbleView = sv;
                    break;
                }
            }
        }
        
        if (bubbleView) break;
    }
    
    if (!bubbleView) {
        mtLog(@"[DBG] getBubbleView: FAILED - using cellView as fallback");
        bubbleView = cellView;
    }
    return bubbleView;
}

// ============================================================
// MARK: - Label Frame Calculation
// ============================================================

static int g_callCount = 0;

static void mt_updateLabelFrame(id cell) {
    @try {
        UILabel *label = objc_getAssociatedObject(cell, @"messageTimeLabel");
        if (!label || !label.superview) return;
        
        PluginConfig *config = [PluginConfig shared];
        if (!config.showMessageTime) return;
        
        CGRect cellFrame = [(UIView *)cell frame];
        if (CGRectEqualToRect(cellFrame, CGRectZero)) return;
        
        UIView *bubble = getBubbleView(cell);
        id avatar = getAvatarView(cell);
        
        CGRect bubbleFrame = bubble ? bubble.frame : cellFrame;
        CGRect avatarFrame = avatar ? [(UIView *)avatar frame] : CGRectZero;
        mtLog([NSString stringWithFormat:@"[mt_updateLabelFrame] bubble=%@ avatar=%@ isSender=0",
               NSStringFromCGRect(bubbleFrame), avatar ? @"YES" : @"NO"]);
        
        BOOL isSender = NO;
        id cellView = getCellView(cell);
        id target = cellView ?: cell;
        SEL senderSel = NSSelectorFromString(@"isSenderFromMsgWrap:");
        id wrap = nil;
        @try {
            if (cellView) {
                id vm = nil;
                @try { vm = [cellView valueForKey:@"m_viewModel"]; } @catch (...) {}
                if (!vm) { @try { vm = [cellView valueForKey:@"viewModel"]; } @catch (...) {} }
                if (vm) {
                    @try { wrap = [vm valueForKey:@"messageWrap"]; } @catch (...) {}
                    if (!wrap) { @try { wrap = [vm valueForKey:@"m_messageWrap"]; } @catch (...) {} }
                }
            }
        } @catch (...) {}
        if (!wrap && [target respondsToSelector:senderSel]) {
            @try { isSender = ((BOOL (*)(id, SEL, id))objc_msgSend)(target, senderSel, nil); } @catch (...) {}
        } else if (wrap && [target respondsToSelector:senderSel]) {
            @try { isSender = ((BOOL (*)(id, SEL, id))objc_msgSend)(target, senderSel, wrap); } @catch (...) {}
        }
        if (!isSender && bubble) {
            isSender = CGRectGetMidX(bubble.frame) > CGRectGetMidX(cellFrame);
        }
        
        CGRect labelFrame = label.frame;
        CGFloat offsetX = config.messageTimeOffsetX;
        CGFloat offsetY = config.messageTimeOffsetY;
        NSInteger position = config.messageTimePosition;
        CGFloat farSideX, nearSideX;
        if (isSender) {
            farSideX = bubbleFrame.origin.x;
            nearSideX = bubbleFrame.origin.x + bubbleFrame.size.width - labelFrame.size.width;
        } else {
            farSideX = bubbleFrame.origin.x + bubbleFrame.size.width - labelFrame.size.width;
            nearSideX = bubbleFrame.origin.x;
        }
        
        switch (position) {
            case 0:
                if (!CGRectEqualToRect(avatarFrame, CGRectZero)) {
                    labelFrame.origin.x = avatarFrame.origin.x + (avatarFrame.size.width - labelFrame.size.width) / 2;
                    labelFrame.origin.y = avatarFrame.origin.y - labelFrame.size.height - offsetY;
                } else {
                    labelFrame.origin.x = nearSideX;
                    labelFrame.origin.y = bubbleFrame.origin.y - labelFrame.size.height - offsetY;
                }
                break;
            case 1:
                if (!CGRectEqualToRect(avatarFrame, CGRectZero)) {
                    labelFrame.origin.x = avatarFrame.origin.x + (avatarFrame.size.width - labelFrame.size.width) / 2;
                    labelFrame.origin.y = avatarFrame.origin.y + avatarFrame.size.height + offsetY;
                } else {
                    labelFrame.origin.x = nearSideX;
                    labelFrame.origin.y = bubbleFrame.origin.y + bubbleFrame.size.height + offsetY;
                }
                break;
            case 2:
                if (isSender) labelFrame.origin.x = bubbleFrame.origin.x - labelFrame.size.width - offsetX;
                else labelFrame.origin.x = bubbleFrame.origin.x + bubbleFrame.size.width + offsetX;
                labelFrame.origin.y = bubbleFrame.origin.y + (bubbleFrame.size.height - labelFrame.size.height) / 2;
                break;
            case 3: labelFrame.origin.x = farSideX; labelFrame.origin.y = bubbleFrame.origin.y + bubbleFrame.size.height + offsetY; break;
            case 4: labelFrame.origin.x = nearSideX; labelFrame.origin.y = bubbleFrame.origin.y + bubbleFrame.size.height + offsetY; break;
            case 5: labelFrame.origin.x = farSideX; labelFrame.origin.y = bubbleFrame.origin.y - labelFrame.size.height - offsetY; break;
            case 6: labelFrame.origin.x = nearSideX; labelFrame.origin.y = bubbleFrame.origin.y - labelFrame.size.height - offsetY; break;
            case 7:
                labelFrame.origin.x = bubbleFrame.origin.x + (bubbleFrame.size.width - labelFrame.size.width) / 2;
                labelFrame.origin.y = bubbleFrame.origin.y + bubbleFrame.size.height - labelFrame.size.height - 4;
                break;
            default:
                labelFrame.origin.x = farSideX;
                labelFrame.origin.y = bubbleFrame.origin.y - labelFrame.size.height - offsetY;
                break;
        }
        
        if (offsetX != 0) {
            BOOL leftSide = NO;
            switch (position) {
                case 0: case 1: leftSide = !isSender; break;
                case 2: leftSide = isSender; break;
                case 3: case 5: leftSide = isSender; break;
                case 4: case 6: leftSide = !isSender; break;
                default: leftSide = NO; break;
            }
            labelFrame.origin.x += leftSide ? -offsetX : offsetX;
        }
        if (offsetY != 0) labelFrame.origin.y -= offsetY;
        
        CGFloat maxY = cellFrame.size.height - labelFrame.size.height - 2;
        if (labelFrame.origin.y > maxY) labelFrame.origin.y = maxY;
        if (labelFrame.origin.y < 2) labelFrame.origin.y = 2;
        
        label.frame = labelFrame;
        mtLog(@"[DBG] mt_updateLabelFrame: updated position");
    } @catch (NSException *e) {
        mtLog([NSString stringWithFormat:@"mt_updateLabelFrame error: %@", e]);
    }
}

static void addTimeLabelToCell(id cell) {
    @try {
        if (!cell) {
            mtLog(@"addTimeLabelToCell: cell is nil");
            return;
        }
        
        NSArray *callStack = [NSThread callStackSymbols];
        NSString *from = @"unknown";
        for (NSString *frame in callStack) {
            if ([frame containsString:@"willDisplayCell"]) { from = @"willDisplayCell"; break; }
            if ([frame containsString:@"layoutSubviews"]) { from = @"layoutSubviews"; break; }
        }
        
        NSString *cellClass = NSStringFromClass([cell class]);
        g_callCount++;
        mtLog([NSString stringWithFormat:@"=== addTimeLabelToCell #%d called on: %@ (from: %@) ===", g_callCount, cellClass, from]);
        
        UIView *cellViewDbg = (UIView *)cell;
        mtLog([NSString stringWithFormat:@"[DBG] cell.subviews count=%lu", (unsigned long)[cellViewDbg.subviews count]]);
        for (UIView *sv in cellViewDbg.subviews) {
            mtLog([NSString stringWithFormat:@"[DBG] cell.subview: class=%@ tag=%ld frame=%@", NSStringFromClass([sv class]), (long)sv.tag, NSStringFromCGRect(sv.frame)]);
            if ([NSStringFromClass([sv class]) containsString:@"ContentView"]) {
                mtLog([NSString stringWithFormat:@"[DBG]   -> contentView.subviews count=%lu", (unsigned long)[sv.subviews count]]);
                for (UIView *sv2 in sv.subviews) {
                    mtLog([NSString stringWithFormat:@"[DBG]   -> subview: class=%@ frame=%@", NSStringFromClass([sv2 class]), NSStringFromCGRect(sv2.frame)]);
                    for (UIView *sv3 in sv2.subviews) {
                        mtLog([NSString stringWithFormat:@"[DBG]     -> sub-subview: class=%@ frame=%@", NSStringFromClass([sv3 class]), NSStringFromCGRect(sv3.frame)]);
                    }
                }
            }
        }
        
        CGRect cellFrame = [cell frame];
        if (CGRectEqualToRect(cellFrame, CGRectZero)) {
            mtLog(@"cellFrame is CGRectZero, deferring");
            return;
        }
        
        PluginConfig *config = [PluginConfig shared];
        mtLog([NSString stringWithFormat:@"showMessageTime: %d", config.showMessageTime]);
        if (!config.showMessageTime) return;
        
        id wrap = nil;
        NSString *cellClsDbg = NSStringFromClass([cell class]);
        
        @try {
            id cv = nil;
            @try { cv = [cell valueForKey:@"m_cellView"]; if(cv) mtLog(@"[DBG] wrap: got cellView via m_cellView"); } @catch(NSException *e) { mtLog([NSString stringWithFormat:@"[DBG] wrap: m_cellView threw: %@", e.reason]); }
            if (!cv) { @try { cv = [cell valueForKey:@"cellView"]; if(cv) mtLog(@"[DBG] wrap: got cellView via cellView"); } @catch(NSException *e) { mtLog([NSString stringWithFormat:@"[DBG] wrap: cellView threw: %@", e.reason]); } }
            if (cv) {
                mtLog([NSString stringWithFormat:@"[DBG] wrap: cellView class=%@", NSStringFromClass([cv class])]);
                id viewModel = nil;
                @try { viewModel = [cv valueForKey:@"m_viewModel"]; if(viewModel) mtLog(@"[DBG] wrap: got viewModel via m_viewModel"); } @catch(NSException *e) { mtLog([NSString stringWithFormat:@"[DBG] wrap: m_viewModel threw: %@", e.reason]); }
                if (!viewModel) { @try { viewModel = [cv valueForKey:@"viewModel"]; if(viewModel) mtLog(@"[DBG] wrap: got viewModel via viewModel"); } @catch(NSException *e) { mtLog([NSString stringWithFormat:@"[DBG] wrap: viewModel threw: %@", e.reason]); } }
                if (viewModel) {
                    mtLog([NSString stringWithFormat:@"[DBG] wrap: viewModel class=%@", NSStringFromClass([viewModel class])]);
                    @try { wrap = [viewModel valueForKey:@"messageWrap"]; if(wrap) mtLog(@"[DBG] wrap: got via messageWrap"); } @catch(NSException *e) { mtLog([NSString stringWithFormat:@"[DBG] wrap: messageWrap threw: %@", e.reason]); }
                    if (!wrap) { @try { wrap = [viewModel valueForKey:@"m_messageWrap"]; if(wrap) mtLog(@"[DBG] wrap: got via m_messageWrap"); } @catch(NSException *e) { mtLog([NSString stringWithFormat:@"[DBG] wrap: m_messageWrap threw: %@", e.reason]); } }
                } else {
                    mtLog(@"[DBG] wrap: viewModel is nil on this cellView");
                }
            }
        } @catch (NSException *e) {
            mtLog([NSString stringWithFormat:@"[DBG] wrap: cellView path exception: %@", e]);
        }
        
        if (!wrap) {
            mtLog(@"Trying _viewModel path for wrap");
            @try {
                id viewModel = [cell valueForKey:@"_viewModel"];
                if (!viewModel) viewModel = [cell valueForKey:@"m_viewModel"];
                if (viewModel) {
                    id parentModel = [viewModel valueForKey:@"parentModel"];
                    if (parentModel) {
                        wrap = [parentModel valueForKey:@"m_messageWrap"];
                        if (!wrap) wrap = [parentModel valueForKey:@"messageWrap"];
                        if (wrap) mtLog(@"Got wrap from _viewModel->parentModel");
                    }
                }
            } @catch (NSException *e) {
                mtLog([NSString stringWithFormat:@"_viewModel path exception: %@", e]);
            }
        }
        
        if (!wrap) {
            mtLog(@"Trying direct selector on cellView");
            @try {
                id cellView = [cell valueForKey:@"m_cellView"];
                if (!cellView) cellView = [cell valueForKey:@"cellView"];
                if (cellView) {
                    for (NSString *sel in @[@"getCurrentMessageWrap", @"messageWrap"]) {
                        SEL s = NSSelectorFromString(sel);
                        if ([cellView respondsToSelector:s]) {
                            wrap = ((id (*)(id, SEL))objc_msgSend)(cellView, s);
                            if (wrap) {
                                mtLog([NSString stringWithFormat:@"Got wrap from cellView selector: %@", sel]);
                                break;
                            }
                        }
                    }
                }
            } @catch (NSException *e) {}
        }
        
        Class CMessageWrapClass = objc_getClass("CMessageWrap");
        if (!wrap) {
            mtLog(@"wrap is nil");
            return;
        }
        if (CMessageWrapClass && ![wrap isKindOfClass:CMessageWrapClass]) {
            mtLog([NSString stringWithFormat:@"wrap is not CMessageWrap: %@", NSStringFromClass([wrap class])]);
            return;
        }
        
        unsigned int msgType = 0;
        if ([wrap respondsToSelector:@selector(m_uiMessageType)]) {
            msgType = ((unsigned int (*)(id, SEL))objc_msgSend)(wrap, @selector(m_uiMessageType));
        }
        
        if (msgType == 10000) {
            mtLog(@"Skipping system message (msgType = 10000)");
            return;
        }
        
        unsigned int createTime = 0;
        if ([wrap respondsToSelector:@selector(m_uiCreateTime)]) {
            createTime = ((unsigned int (*)(id, SEL))objc_msgSend)(wrap, @selector(m_uiCreateTime));
            mtLog([NSString stringWithFormat:@"createTime: %u", createTime]);
        } else {
            mtLog(@"wrap doesn't respond to m_uiCreateTime");
        }
        
        if (createTime == 0) {
            mtLog(@"createTime is 0");
            return;
        }
        
        NSString *identifier = [NSString stringWithFormat:@"%u_%u_%p", createTime, msgType, (__bridge void *)wrap];
        NSString *lastIdentifier = objc_getAssociatedObject(cell, @"messageTimeLastIdentifier");
        if (lastIdentifier && [lastIdentifier isEqualToString:identifier]) {
            return;
        }
        objc_setAssociatedObject(cell, @"messageTimeLastIdentifier", identifier, OBJC_ASSOCIATION_COPY_NONATOMIC);
        
        id avatarView = getAvatarView(cell);
        
        NSDate *messageDate = [NSDate dateWithTimeIntervalSince1970:createTime];
        NSString *timeString = formatMessageTime(messageDate, config.messageTimeFormat);
        mtLog([NSString stringWithFormat:@"timeString: %@", timeString]);
        if (!timeString) {
            mtLog(@"timeString is nil");
            return;
        }
        
        UILabel *timeLabel = getTimeLabel(cell);
        timeLabel.text = timeString;
        
        CGFloat fontSize = config.messageTimeFontSize > 0 ? config.messageTimeFontSize : 7.0;
        UIFont *font = config.messageTimeBoldFont ? [UIFont boldSystemFontOfSize:fontSize] : [UIFont systemFontOfSize:fontSize];
        timeLabel.font = font;
        
        UIView *bubbleView = getBubbleView(cell);
        mtLog([NSString stringWithFormat:@"bubbleView: %@", bubbleView ? @"YES" : @"NO"]);
        
        BOOL isSender = NO;
        {
            id targetCellView = getCellView(cell);
            id senderTarget = targetCellView ?: cell;
            SEL senderSel = NSSelectorFromString(@"isSenderFromMsgWrap:");
            if ([senderTarget respondsToSelector:senderSel]) {
                @try {
                    isSender = ((BOOL (*)(id, SEL, id))objc_msgSend)(senderTarget, senderSel, wrap);
                } @catch (NSException *e) {}
            }
            if (!isSender && senderTarget != cell && [cell respondsToSelector:senderSel]) {
                @try {
                    isSender = ((BOOL (*)(id, SEL, id))objc_msgSend)(cell, senderSel, wrap);
                } @catch (NSException *e) {}
            }
            if (!isSender && bubbleView) {
                isSender = CGRectGetMidX(bubbleView.frame) > CGRectGetMidX(cellFrame);
            }
        }
        
        UIColor *textColor = nil;
        UIColor *bgColor = nil;
        if (isSender) {
            textColor = [config colorFromHex:config.senderTextColorHex] ?: [UIColor colorWithWhite:0.5 alpha:1.0];
            NSString *bgHex = config.senderBackgroundColorHex;
            if (bgHex.length > 0 && ![bgHex isEqualToString:@"#00000000"]) {
                bgColor = [config colorFromHex:bgHex];
            }
        } else {
            textColor = [config colorFromHex:config.receiverTextColorHex] ?: [UIColor colorWithWhite:0.5 alpha:1.0];
            NSString *bgHex = config.receiverBackgroundColorHex;
            if (bgHex.length > 0 && ![bgHex isEqualToString:@"#00000000"]) {
                bgColor = [config colorFromHex:bgHex];
            }
        }
        
        timeLabel.textColor = colorInLightMode(textColor, autoDarkColor(textColor));
        timeLabel.backgroundColor = bgColor ?: [UIColor clearColor];
        
        if (config.messageTimeCornerRadius > 0) {
            timeLabel.layer.cornerRadius = config.messageTimeCornerRadius;
            timeLabel.layer.masksToBounds = YES;
        } else {
            timeLabel.layer.cornerRadius = 0;
            timeLabel.layer.masksToBounds = NO;
        }
        
        CGSize textSize = [timeString sizeWithAttributes:@{NSFontAttributeName: timeLabel.font}];
        CGSize labelSize = CGSizeMake(textSize.width, textSize.height);
        
        mtLog([NSString stringWithFormat:@"labelSize: %@", NSStringFromCGSize(labelSize)]);
        
        if (!config.disableLabelWidthAdjustment) {
            timeLabel.adjustsFontSizeToFitWidth = YES;
            timeLabel.minimumScaleFactor = 0.8;
        } else {
            timeLabel.adjustsFontSizeToFitWidth = NO;
        }
        timeLabel.textAlignment = NSTextAlignmentCenter;
        
        CGRect labelFrame = CGRectMake(0, 0, labelSize.width, labelSize.height);
        
        mtLog([NSString stringWithFormat:@"cellFrame: %@", NSStringFromCGRect(cellFrame)]);
        
        CGFloat offsetX = config.messageTimeOffsetX;
        CGFloat offsetY = config.messageTimeOffsetY;
        
        NSInteger position = config.messageTimePosition;
        mtLog([NSString stringWithFormat:@"position: %ld, offsetX: %.2f, offsetY: %.2f", (long)position, offsetX, offsetY]);
        
        if ((position == 6 || position == 7) && bubbleView && config.messageTimeBubbleExtWidth > 0) {
            CGRect bubbleFrame = bubbleView.frame;
            bubbleFrame.size.width += config.messageTimeBubbleExtWidth;
            bubbleView.frame = bubbleFrame;
            mtLog([NSString stringWithFormat:@"Extended bubble width by %.0f", config.messageTimeBubbleExtWidth]);
        }
        
        CGRect avatarFrame = [(UIView *)avatarView frame];
        CGRect bubbleFrame = bubbleView ? bubbleView.frame : cellFrame;
        
        mtLog([NSString stringWithFormat:@"avatarView: %@, bubbleFrame: %@, isSender: %d", avatarView ? @"YES" : @"NO", NSStringFromCGRect(bubbleFrame), isSender]);
        
        CGFloat farSideX, nearSideX;
        if (isSender) {
            farSideX = bubbleFrame.origin.x;
            nearSideX = bubbleFrame.origin.x + bubbleFrame.size.width - labelFrame.size.width;
        } else {
            farSideX = bubbleFrame.origin.x + bubbleFrame.size.width - labelFrame.size.width;
            nearSideX = bubbleFrame.origin.x;
        }
        
        switch (position) {
            case 0:
                if (!CGRectEqualToRect(avatarFrame, CGRectZero)) {
                    labelFrame.origin.x = avatarFrame.origin.x + (avatarFrame.size.width - labelFrame.size.width) / 2;
                    labelFrame.origin.y = avatarFrame.origin.y - labelFrame.size.height - offsetY;
                } else {
                    labelFrame.origin.x = nearSideX;
                    labelFrame.origin.y = bubbleFrame.origin.y - labelFrame.size.height - offsetY;
                }
                break;
                
            case 1:
                if (!CGRectEqualToRect(avatarFrame, CGRectZero)) {
                    labelFrame.origin.x = avatarFrame.origin.x + (avatarFrame.size.width - labelFrame.size.width) / 2;
                    labelFrame.origin.y = avatarFrame.origin.y + avatarFrame.size.height + offsetY;
                } else {
                    labelFrame.origin.x = nearSideX;
                    labelFrame.origin.y = bubbleFrame.origin.y + bubbleFrame.size.height + offsetY;
                }
                break;
                
            case 2:
                if (isSender) {
                    labelFrame.origin.x = bubbleFrame.origin.x - labelFrame.size.width - offsetX;
                } else {
                    labelFrame.origin.x = bubbleFrame.origin.x + bubbleFrame.size.width + offsetX;
                }
                labelFrame.origin.y = bubbleFrame.origin.y + (bubbleFrame.size.height - labelFrame.size.height) / 2;
                break;
                
            case 3:
                labelFrame.origin.x = farSideX;
                labelFrame.origin.y = bubbleFrame.origin.y + bubbleFrame.size.height + offsetY;
                break;
                
            case 4:
                labelFrame.origin.x = nearSideX;
                labelFrame.origin.y = bubbleFrame.origin.y + bubbleFrame.size.height + offsetY;
                break;
                
            case 5:
                labelFrame.origin.x = farSideX;
                labelFrame.origin.y = bubbleFrame.origin.y - labelFrame.size.height - offsetY;
                break;
                
            case 6:
                labelFrame.origin.x = nearSideX;
                labelFrame.origin.y = bubbleFrame.origin.y - labelFrame.size.height - offsetY;
                break;
                
            case 7:
            {
                labelFrame.origin.x = bubbleFrame.origin.x + (bubbleFrame.size.width - labelFrame.size.width) / 2;
                labelFrame.origin.y = bubbleFrame.origin.y + bubbleFrame.size.height - labelFrame.size.height - 4;
                
                BOOL isTextMessage = NO;
                @try {
                    NSString *className = NSStringFromClass([cell class]);
                    isTextMessage = [className containsString:@"TextMessage"];
                } @catch (NSException *e) {}
                
                if (!isTextMessage) {
                    labelFrame.origin.x = farSideX;
                    labelFrame.origin.y = bubbleFrame.origin.y - labelFrame.size.height - offsetY;
                }
                break;
            }
                
            default:
                labelFrame.origin.x = farSideX;
                labelFrame.origin.y = bubbleFrame.origin.y - labelFrame.size.height - offsetY;
                break;
        }
        
        if (offsetX != 0) {
            BOOL isOnLeftSide = NO;
            switch (position) {
                case 0: case 1:
                    isOnLeftSide = !isSender;
                    break;
                case 2:
                    isOnLeftSide = isSender;
                    break;
                case 3: case 5:
                    isOnLeftSide = isSender;
                    break;
                case 4: case 6:
                    isOnLeftSide = !isSender;
                    break;
                case 7:
                    isOnLeftSide = NO;
                    break;
            }
            
            if (isOnLeftSide) {
                labelFrame.origin.x -= offsetX;
            } else {
                labelFrame.origin.x += offsetX;
            }
        }
        
        if (offsetY != 0) {
            labelFrame.origin.y -= offsetY;
        }
        
        CGFloat maxY = cellFrame.size.height - labelFrame.size.height - 2;
        if (labelFrame.origin.y > maxY) labelFrame.origin.y = maxY;
        if (labelFrame.origin.y < 2) labelFrame.origin.y = 2;
        
        mtLog([NSString stringWithFormat:@"Final labelFrame: %@", NSStringFromCGRect(labelFrame)]);
        
        timeLabel.frame = labelFrame;
        
        for (UIView *subview in [cell subviews]) {
            if (subview.tag == 999999 && subview != timeLabel) {
                mtLog(@"WARNING: Found stray timeLabel, removing to prevent duplicate");
                [subview removeFromSuperview];
            }
        }
        
        if (![timeLabel superview]) {
            [cell addSubview:timeLabel];
            objc_setAssociatedObject(cell, @"messageTimeCreateTime", @(createTime), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            mtLog(@"Added timeLabel to cell");
        } else {
            mtLog(@"timeLabel already in cell, updated frame");
        }
        
        mtLog(@"=== addTimeLabelToCell completed successfully ===");
        
    } @catch (NSException *e) {
        mtLog([NSString stringWithFormat:@"ERROR: %@", e]);
    }
}

// ============================================================
// MARK: - Original Function Pointers (one per hook target)
// ============================================================

static void (*orig_CommonMessageCellView_layoutSubviews)(id, SEL);
static void (*orig_ChatTableViewCell_prepareForReuse)(id, SEL);
static void (*orig_ChatTimeCellView_layoutSubviews)(id, SEL);
static CGFloat (*orig_ChatTimeViewModel_cellHeight)(id, SEL);
static NSString* (*orig_CContact_m_nsNickName)(id, SEL);

// ============================================================
// MARK: - Replacement Functions
// ============================================================

static void repl_CommonMessageCellView_layoutSubviews(id self, SEL _cmd) {
    id targetCell = self;
    NSString *selfCls = NSStringFromClass([self class]);

    if ([selfCls containsString:@"CommonMessageCell"] || [selfCls containsString:@"MessageCell"]) {
        UIView *v = [(UIView *)self superview];
        while (v) {
            NSString *cn = NSStringFromClass([v class]);
            if ([cn containsString:@"ChatTable"] ||
                [v isKindOfClass:objc_getClass("ChatTableViewCell")]) {
                targetCell = v;
                break;
            }
            v = v.superview;
        }
        mtLog([NSString stringWithFormat:@"[layoutSubviews] self=%@ targetCell=%@",
           selfCls, NSStringFromClass([targetCell class])]);
    }

    if (orig_CommonMessageCellView_layoutSubviews) {
        orig_CommonMessageCellView_layoutSubviews(self, _cmd);
    }

    UILabel *label = objc_getAssociatedObject(targetCell, @"messageTimeLabel");
    if (label && label.superview) {
        mt_updateLabelFrame(targetCell);
    } else {
        addTimeLabelToCell(targetCell);
    }
}

static void repl_ChatTableViewCell_prepareForReuse(id self, SEL _cmd) {
    if (orig_ChatTableViewCell_prepareForReuse) {
        orig_ChatTableViewCell_prepareForReuse(self, _cmd);
    }

    UIView *oldLabel = [self viewWithTag:999999];
    if (oldLabel) {
        [oldLabel removeFromSuperview];
    }
    objc_setAssociatedObject(self, @"messageTimeLabel", nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, @"messageTimeLastIdentifier", nil, OBJC_ASSOCIATION_COPY_NONATOMIC);
    objc_setAssociatedObject(self, @"messageTimeCreateTime", nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static void repl_ChatTimeCellView_layoutSubviews(id self, SEL _cmd) {
    if (orig_ChatTimeCellView_layoutSubviews) {
        orig_ChatTimeCellView_layoutSubviews(self, _cmd);
    }
    if ([PluginConfig shared].hideChatTime) {
        [self setHidden:YES];
    }
}

static CGFloat repl_ChatTimeViewModel_cellHeight(id self, SEL _cmd) {
    CGFloat h = 0;
    if (orig_ChatTimeViewModel_cellHeight) {
        h = orig_ChatTimeViewModel_cellHeight(self, _cmd);
    }
    if ([PluginConfig shared].hideChatTime) {
        return 0.001;
    }
    return h;
}

static NSString* repl_CContact_m_nsNickName(id self, SEL _cmd) {
    NSString *origName = nil;
    if (orig_CContact_m_nsNickName) {
        origName = orig_CContact_m_nsNickName(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.showAddTimeSuffix || !origName) return origName;

    unsigned int addTime = 0;
    @try {
        addTime = [[self valueForKey:@"m_uiAddCreateTime"] unsignedIntValue];
    } @catch (NSException *e) {}

    if (addTime == 0) return origName;

    NSDate *addDate = [NSDate dateWithTimeIntervalSince1970:addTime];
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    fmt.locale = [[NSLocale alloc] initWithLocaleIdentifier:@"en_US_POSIX"];
    fmt.dateFormat = config.addTimeSuffixFormat;
    NSString *suffix = [fmt stringFromDate:addDate];

    return [NSString stringWithFormat:@"%@ %@", origName, suffix];
}

// ============================================================
// MARK: - Hook Configuration Table
// ============================================================

static MTHookEntry g_hookTable[] = {
    {"ChatTableViewCell",     "prepareForReuse", (IMP)repl_ChatTableViewCell_prepareForReuse,     (IMP*)&orig_ChatTableViewCell_prepareForReuse},
    {"ChatTimeCellView",      "layoutSubviews",  (IMP)repl_ChatTimeCellView_layoutSubviews,       (IMP*)&orig_ChatTimeCellView_layoutSubviews},
    {"ChatTimeViewModel",     "cellHeight",      (IMP)repl_ChatTimeViewModel_cellHeight,          (IMP*)&orig_ChatTimeViewModel_cellHeight},
    {"CContact",              "m_nsNickName",    (IMP)repl_CContact_m_nsNickName,                 (IMP*)&orig_CContact_m_nsNickName},
};

static const int g_hookTableCount = sizeof(g_hookTable) / sizeof(g_hookTable[0]);

static const char *g_cellViewFallbacks[] = {
    "CommonMessageCellView",
    "TextMessageCellView",
    "ImageMessageCellView",
    "VideoMessageCellView",
    "VoiceMessageCellView",
    "EmoticonMessageCellView",
    "BaseMessageCellView"
};

static const int g_cellViewFallbackCount = sizeof(g_cellViewFallbacks) / sizeof(g_cellViewFallbacks[0]);

// ============================================================
// MARK: - Installation
// ============================================================

@implementation MessageTimeHook

+ (void)install {
    mtLog(@"========================================");
    mtLog(@"MessageTimeHook install - dlsym + ConfigTable");
    mtLog(@"========================================");

    PluginConfig *config = [PluginConfig shared];
    mtLog([NSString stringWithFormat:@"Config - showMessageTime: %d", config.showMessageTime]);
    mtLog([NSString stringWithFormat:@"Config - messageTimePosition: %ld", (long)config.messageTimePosition]);
    mtLog([NSString stringWithFormat:@"Config - messageTimeFontSize: %.1f", config.messageTimeFontSize]);
    mtLog([NSString stringWithFormat:@"Config - messageTimeFormat: %@", config.messageTimeFormat]);
    mtLog([NSString stringWithFormat:@"Config - messageTimeOffsetX: %.2f", config.messageTimeOffsetX]);
    mtLog([NSString stringWithFormat:@"Config - messageTimeOffsetY: %.2f", config.messageTimeOffsetY]);

    int hookedCount = 0;

    for (int i = 0; i < g_hookTableCount; i++) {
        MTHookEntry *entry = &g_hookTable[i];

        Class cls = objc_getClass(entry->className);
        if (!cls) {
            mtLog([NSString stringWithFormat:@"Class not found: %s, skipping", entry->className]);
            continue;
        }

        SEL sel = sel_registerName(entry->selName);
        Method m = class_getInstanceMethod(cls, sel);
        if (!m) {
            mtLog([NSString stringWithFormat:@"Method not found: %s - %s, skipping", entry->className, entry->selName]);
            continue;
        }

        mt_hookMessage(cls, sel, entry->replacement, entry->original);

        mtLog([NSString stringWithFormat:@"Hooked %s - %s ✓", entry->className, entry->selName]);
        hookedCount++;
    }

    BOOL cellViewHooked = NO;
    for (int i = 0; i < g_cellViewFallbackCount; i++) {
        const char *cn = g_cellViewFallbacks[i];
        Class cls = objc_getClass(cn);
        if (!cls) continue;

        SEL sel = sel_registerName("layoutSubviews");
        Method m = class_getInstanceMethod(cls, sel);
        if (!m) continue;

        mt_hookMessage(cls, sel, (IMP)repl_CommonMessageCellView_layoutSubviews, (IMP*)&orig_CommonMessageCellView_layoutSubviews);

        mtLog([NSString stringWithFormat:@"Hooked cell view: %s - layoutSubviews ✓", cn]);
        cellViewHooked = YES;
        break;
    }

    if (!cellViewHooked) {
        mtLog(@"WARNING: No cell view class found for layoutSubviews hook");
    }

    mtLog([NSString stringWithFormat:@"Hook table complete: %d/%d + cellView=%d", hookedCount, g_hookTableCount, cellViewHooked]);
    mtLog(@"========================================");
    mtLog(@"MessageTimeHook install complete");
    mtLog(@"========================================");
}

@end