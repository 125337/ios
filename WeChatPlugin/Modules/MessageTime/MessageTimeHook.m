#import "MessageTimeHook.h"
#import "../../Config/PluginConfig.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

#import <UIKit/UIKit.h>

// ============================================================
// MARK: - Constants
// ============================================================
static const NSInteger kTimeLabelTag           = 999999;
static const unsigned int kSystemMessageType   = 10000;
static const CGFloat kMinContentViewWidth      = 5.0;
static const CGFloat kTimeLabelMaxYInset       = 2.0;
static const CGFloat kStraddleFactor           = 0.5;
static const CGFloat kMessageTimeBaseSpacing   = 2;

static Class s_CMessageWrapClass; // install 时初始化

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
// MARK: - Logging
// ============================================================

static dispatch_queue_t _logQueue(void) {
    static dispatch_queue_t q;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        q = dispatch_queue_create("com.mio.messagetime.log", DISPATCH_QUEUE_SERIAL);
    });
    return q;
}

static void mtLog(NSString *content) {
    if ([content hasPrefix:@"[DBG]"] && ![PluginConfig shared].debugLogging) return;
    
    NSLog(@"[WeChatPlugin][MessageTime] %@", content);
    dispatch_async(_logQueue(), ^{
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
    });
}

// ============================================================
// MARK: - Label Management
// ============================================================

static UILabel *initTimeLabel(UIView *targetView) {
    UILabel *label = objc_getAssociatedObject(targetView, @"msgTimeLabel");
    if (!label) {
        label = [[UILabel alloc] init];
        label.tag = kTimeLabelTag;
        label.userInteractionEnabled = NO;
        label.textAlignment = NSTextAlignmentNatural;
        objc_setAssociatedObject(targetView, @"msgTimeLabel", label, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
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
// MARK: - Coordinate Helpers
// ============================================================

static id getCellView(id cell);
static id getContentView(id cell);

static CGRect contentFrameInCellView(id contentView, id cellView) {
    if (!contentView) return CGRectZero;
    UIView *cv = (UIView *)contentView;
    UIView *cvSuper = cv.superview;
    if (cvSuper == (UIView *)cellView) return cv.frame;
    if (cellView) return [(UIView *)cellView convertRect:cv.frame fromView:cvSuper];
    return cv.frame;
}

static BOOL detectIsSender(id cell, id cellView, id contentView, id wrap) {
    if (wrap) {
        id target = getCellView(cell) ?: cell;
        SEL sel = NSSelectorFromString(@"isSenderFromMsgWrap:");
        if ([target respondsToSelector:sel]) {
            @try {
                return ((BOOL (*)(id, SEL, id))objc_msgSend)(target, sel, wrap);
            } @catch (NSException *e) {}
        }
        if (target != cell && [cell respondsToSelector:sel]) {
            @try {
                return ((BOOL (*)(id, SEL, id))objc_msgSend)(cell, sel, wrap);
            } @catch (NSException *e) {}
        }
    }
    if (contentView && cellView) {
        CGRect cfc = contentFrameInCellView(contentView, cellView);
        return CGRectGetMidX(cfc) > [(UIView *)cellView frame].size.width / 2;
    }
    return NO;
}

// ============================================================
// MARK: - Time Formatting
// ============================================================

static NSString *formatMessageTime(NSDate *date, NSString *format) {
    if (!date || !format) return nil;
    
    NSDateFormatter *formatter = getTimeFormatter();
    formatter.dateFormat = format;
    return [formatter stringFromDate:date];
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
    Class MMHeadImageViewClass = objc_getClass("MMHeadImageView");
    
    for (id target in targets) {
        if (!target || [target isKindOfClass:[NSNull class]]) continue;
        
        // Level 1: getHeadImageView method
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
        
        // Level 2: KVC headImageView
        if (!avatarView) {
            @try {
                id view = [target valueForKey:@"headImageView"];
                if (view && [view respondsToSelector:@selector(image)]) {
                    mtLog(@"[DBG] getAvatarView: KVC headImageView found");
                    avatarView = view;
                    break;
                }
            } @catch (NSException *e) {}
        }
        
        // Level 3: MMHeadImageView subview
        if (!avatarView && MMHeadImageViewClass) {
            for (UIView *sv in [target subviews]) {
                if ([sv isKindOfClass:MMHeadImageViewClass]) {
                    mtLog(@"[DBG] getAvatarView: MMHeadImageView subview found");
                    avatarView = sv;
                    break;
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
    
    if (bubbleView && CGRectEqualToRect([(UIView *)bubbleView frame], CGRectZero)) {
        mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: found class=%@ but frame is zero, treating as nil", NSStringFromClass([(UIView *)bubbleView class])]);
        bubbleView = nil;
    }
    
    if (!bubbleView) {
        mtLog(@"[DBG] getBubbleView: FAILED - no valid bubble view found, returning nil");
    }
    return bubbleView;
}

static id getContentView(id cell) {
    id contentView = nil;

    id cellView = getCellView(cell);
    if (cellView) {
        @try { contentView = [cellView valueForKey:@"m_contentView"]; } @catch (...) {}
        if (contentView) {
            mtLog([NSString stringWithFormat:@"[DBG] getContentView: cellView.m_contentView class=%@ frame=%@",
                   NSStringFromClass([contentView class]), NSStringFromCGRect([(UIView *)contentView frame])]);
        }
    }

    if (!contentView) {
        @try { contentView = [cell valueForKey:@"m_contentView"]; } @catch (...) {}
        if (contentView) {
            mtLog([NSString stringWithFormat:@"[DBG] getContentView: cell.m_contentView class=%@ frame=%@",
                   NSStringFromClass([contentView class]), NSStringFromCGRect([(UIView *)contentView frame])]);
        }
    }

    if (!contentView) {
        id targetView = cellView ?: cell;
        for (UIView *sv in [(UIView *)targetView subviews]) {
            NSString *cn = NSStringFromClass([sv class]);
            if ([cn isEqualToString:@"UITableViewCellContentView"]) continue;
            if ([cn containsString:@"ContentView"] || [cn containsString:@"MessageView"]) {
                contentView = sv;
                mtLog([NSString stringWithFormat:@"[DBG] getContentView: subview fallback class=%@ frame=%@", cn, NSStringFromCGRect(sv.frame)]);
                break;
            }
        }
    }

    if (contentView) {
        if (CGRectEqualToRect([(UIView *)contentView frame], CGRectZero) || [(UIView *)contentView frame].size.width < kMinContentViewWidth) {
            mtLog([NSString stringWithFormat:@"[DBG] getContentView: class=%@ has zero/tiny frame, treating as nil", NSStringFromClass([contentView class])]);
            contentView = nil;
        }
    }

    if (!contentView) mtLog(@"[DBG] getContentView: FAILED - returning nil");
    return contentView;
}

// ============================================================
// MARK: - Label Positioning (shared between create and update)
// ============================================================

static CGRect computeLabelFrame(CGRect cellFrame, CGSize labelSize, NSInteger position,
                                 CGFloat offsetX, CGFloat offsetY, BOOL isSender,
                                 CGRect contentFrame, CGRect avatarFrame) {
    CGRect labelFrame = CGRectMake(0, 0, labelSize.width, labelSize.height);
    CGFloat w = labelSize.width;
    CGFloat h = labelSize.height;
    
    CGFloat cvLeft   = contentFrame.origin.x;
    CGFloat cvRight  = contentFrame.origin.x + contentFrame.size.width;
    CGFloat cvTop    = contentFrame.origin.y;
    CGFloat cvBottom = contentFrame.origin.y + contentFrame.size.height;

    switch (position) {
        case 0: // 头像上方：X 居中于头像，Y 在头像顶部上方4pt
            if (!CGRectEqualToRect(avatarFrame, CGRectZero)) {
                labelFrame.origin.x = avatarFrame.origin.x + (avatarFrame.size.width - w) / 2;
                labelFrame.origin.y = avatarFrame.origin.y - h - 2;
            } else {
                // 无头像 fallback：气泡外远离侧，垂直居中
                if (isSender) {
                    labelFrame.origin.x = cvRight + w * kStraddleFactor;
                } else {
                    labelFrame.origin.x = cvLeft - w;
                }
                labelFrame.origin.y = cvBottom - h;
            }
            break;
        case 1: // 头像下方：X 居中于头像，Y 在头像底部下方2pt
            if (!CGRectEqualToRect(avatarFrame, CGRectZero)) {
                labelFrame.origin.x = avatarFrame.origin.x + (avatarFrame.size.width - w) / 2;
                labelFrame.origin.y = avatarFrame.origin.y + avatarFrame.size.height + 2;
            } else {
                // 无头像 fallback：同位置0
                if (isSender) {
                    labelFrame.origin.x = cvRight + w * kStraddleFactor;
                } else {
                    labelFrame.origin.x = cvLeft - w;
                }
                labelFrame.origin.y = cvBottom - h;
            }
            break;
        case 3: // 消息下方(靠近头像)=微信优化pos4: sender=GetMaxX(cvRight-w/2), receiver=GetMinX(cvLeft+w/2)
            // setCenter→setFrame: cvRight-w/2 → cvRight-w,  cvLeft+w/2 → cvLeft
            // 第二段setCenter: sender:中心+s8, receiver:中心-s8, Y:中心-s9 → 间隙
            if (isSender) {
                labelFrame.origin.x = cvRight - w - kMessageTimeBaseSpacing;
            } else {
                labelFrame.origin.x = cvLeft + kMessageTimeBaseSpacing;
            }
            labelFrame.origin.y = cvBottom - kMessageTimeBaseSpacing;
            break;
        case 4: // 消息下方(远离头像)=微信优化pos3: sender=GetMinX(cvLeft+w/2), receiver=GetMaxX(cvRight-w/2)
            // setCenter→setFrame: cvLeft+w/2 → cvLeft,  cvRight-w/2 → cvRight-w
            // 第二段setCenter: s8=-spacing → sender左移spacing, receiver右移spacing
            if (isSender) {
                labelFrame.origin.x = cvLeft - kMessageTimeBaseSpacing;
            } else {
                labelFrame.origin.x = cvRight - w + kMessageTimeBaseSpacing;
            }
            labelFrame.origin.y = cvBottom - kMessageTimeBaseSpacing;
            break;
        case 5: // 消息上方(靠近头像)=微信优化pos6: sender=GetMaxX(cvRight-w/2), receiver=GetMinX(cvLeft+w/2)
            // 同pos3 X逻辑，Y=cvTop-h-spacing
            if (isSender) {
                labelFrame.origin.x = cvRight - w - kMessageTimeBaseSpacing;
            } else {
                labelFrame.origin.x = cvLeft + kMessageTimeBaseSpacing;
            }
            labelFrame.origin.y = cvTop - h - kMessageTimeBaseSpacing;
            break;
        case 6: // 消息上方(远离头像)=微信优化pos5: sender=GetMinX(cvLeft+w/2), receiver=GetMaxX(cvRight-w/2)
            // 同pos4 X逻辑，Y=cvTop-h-spacing
            if (isSender) {
                labelFrame.origin.x = cvLeft - kMessageTimeBaseSpacing;
            } else {
                labelFrame.origin.x = cvRight - w + kMessageTimeBaseSpacing;
            }
            labelFrame.origin.y = cvTop - h - kMessageTimeBaseSpacing;
            break;
        case 7: // 消息旁边(=气泡外)
        case 2: // 消息旁边(远离头像)
            if (isSender) {
                labelFrame.origin.x = cvLeft - w - kMessageTimeBaseSpacing;
            } else {
                labelFrame.origin.x = cvRight + kMessageTimeBaseSpacing;
            }
            labelFrame.origin.y = cvBottom - h - kMessageTimeBaseSpacing;
            break;
    }

    if (offsetX != 0) {
        labelFrame.origin.x += isSender ? -offsetX : offsetX;
    }

    if (offsetY != 0) {
        labelFrame.origin.y -= offsetY;
    }

    CGFloat maxY = cellFrame.size.height - labelFrame.size.height - kTimeLabelMaxYInset;
    if (labelFrame.origin.y > maxY) labelFrame.origin.y = maxY;

    return labelFrame;
}

// Lightweight frame update (no logging)
static void quickRelocateTimeLabel(id cell, id cellView, CGRect cellFrame) {
    PluginConfig *config = [PluginConfig shared];
    if (!config.showMessageTime) return;
    
    UILabel *label = objc_getAssociatedObject(cellView, @"msgTimeLabel");
    if (!label) return;
    
    NSValue *lastSize = objc_getAssociatedObject(cellView, @"msgTimeLabelLastCellSize");
    CGSize currentSize = cellFrame.size;
    if (lastSize && CGSizeEqualToSize([lastSize CGSizeValue], currentSize)) {
        return;
    }
    objc_setAssociatedObject(cellView, @"msgTimeLabelLastCellSize",
                             [NSValue valueWithCGSize:currentSize],
                             OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
    CGFloat offsetX = config.messageTimeOffsetX;
    CGFloat offsetY = config.messageTimeOffsetY;
    NSInteger position = config.messageTimePosition;
    
    id avatarView = getAvatarView(cell);
    CGRect avatarFrame = avatarView ? [(UIView *)avatarView frame] : CGRectZero;
    
    id contentView = getContentView(cell);
    CGRect contentFrame = contentFrameInCellView(contentView, cellView);
    if (CGRectEqualToRect(contentFrame, CGRectZero)) {
        contentFrame = cellFrame;
        contentFrame.origin = CGPointZero;
    }
    
    BOOL isSender = detectIsSender(cell, cellView, contentView, nil);
    
    CGSize labelSize = label.frame.size;
    CGFloat cvLeft   = contentFrame.origin.x;
    CGFloat cvRight  = contentFrame.origin.x + contentFrame.size.width;
    CGFloat cvTop    = contentFrame.origin.y;
    CGFloat cvBottom = contentFrame.origin.y + contentFrame.size.height;
    CGFloat cvMidX   = (cvLeft + cvRight) / 2;
    CGFloat w = labelSize.width;
    CGFloat h = labelSize.height;
    CGFloat cx = 0, cy = 0;

    switch (position) {
        case 2:
        case 7: // 消息旁边(=气泡外)
            cx = isSender ? (cvLeft - w / 2) : (cvRight + w / 2);
            cy = cvBottom - h / 2;
            break;
        case 3: // 消息下方(靠近头像)
            cx = isSender ? (cvRight - w / 2) : (cvLeft + w / 2);
            cy = cvBottom + h / 2;
            break;
        case 4: // 消息下方(远离头像)
            cx = isSender ? (cvLeft + w / 2) : (cvRight - w / 2);
            cy = cvBottom + h / 2;
            break;
        case 5: // 消息上方(靠近头像)
            cx = isSender ? (cvRight - w / 2) : (cvLeft + w / 2);
            cy = cvTop - h / 2;
            break;
        case 6: // 消息上方(远离头像)
            cx = isSender ? (cvLeft + w / 2) : (cvRight - w / 2);
            cy = cvTop - h / 2;
            break;
        default: {
            CGRect newFrame = computeLabelFrame(cellFrame, labelSize, position, offsetX, offsetY, isSender, contentFrame, avatarFrame);
            if (!CGRectEqualToRect(label.frame, newFrame)) {
                label.frame = newFrame;
            }
            return;
        }
    }

    if (offsetX != 0) cx += isSender ? -offsetX : offsetX;
    if (offsetY != 0) cy -= offsetY;
    CGPoint newCenter = CGPointMake(cx, cy);
    if (!CGPointEqualToPoint(label.center, newCenter)) {
        label.center = newCenter;
    }
}

// ============================================================
// MARK: - Label Creation
// ============================================================

static void addTimeLabelToCell(id cell) {
    @try {
        if (!cell) {
            mtLog(@"addTimeLabelToCell: cell is nil");
            return;
        }
        
        // 获取 cellView（CommonMessageCellView），标签添加到此视图上
        id cellView = nil;
        @try { cellView = [cell valueForKey:@"m_cellView"] ?: [cell valueForKey:@"cellView"]; } @catch (...) {}
        if (!cellView) {
            mtLog(@"addTimeLabelToCell: cellView is nil");
            return;
        }
        
        // 每个 cellView 只创建一次标签（微信优化同款策略）
        if (objc_getAssociatedObject(cellView, @"msgTimeLabel")) {
            return;
        }
        
        NSArray *callStack = [NSThread callStackSymbols];
        NSString *from = @"unknown";
        for (NSString *frame in callStack) {
            if ([frame containsString:@"willDisplayCell"]) { from = @"willDisplayCell"; break; }
            if ([frame containsString:@"layoutSubviews"]) { from = @"layoutSubviews"; break; }
        }
        
        NSString *cellClass = NSStringFromClass([cell class]);
        mtLog([NSString stringWithFormat:@"=== addTimeLabelToCell called on: %@ (from: %@) ===", cellClass, from]);
        
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
        
        // 确保 cellView 上没有残留旧标签
        UIView *staleLabel = [(UIView *)cellView viewWithTag:kTimeLabelTag];
        if (staleLabel) {
            mtLog(@"Removed stale timeLabel before creating new one");
            [staleLabel removeFromSuperview];
        }
        
        PluginConfig *config = [PluginConfig shared];
        if (!config.showMessageTime) return;
        
        id wrap = objc_getAssociatedObject(cell, @"cachedMsgWrap");
        if (wrap) {
            mtLog(@"[DBG] wrap: got from cachedMsgWrap");
        }
        
        if (!wrap) {
            @try {
                id cellView = [cell valueForKey:@"m_cellView"] ?: [cell valueForKey:@"cellView"];
                if (cellView) {
                    wrap = [cellView valueForKey:@"messageWrap"] ?: [cellView valueForKey:@"m_messageWrap"];
                    if (wrap) mtLog(@"[DBG] wrap: got via cellView.messageWrap at addTimeLabelToCell time");
                }
            } @catch (NSException *e) {
                mtLog([NSString stringWithFormat:@"[DBG] wrap: cellView path exception: %@", e]);
            }
        }
        
        if (!wrap) {
            @try {
                id viewModel = [cell valueForKey:@"_viewModel"] ?: [cell valueForKey:@"m_viewModel"];
                if (viewModel) {
                    id parentModel = [viewModel valueForKey:@"parentModel"];
                    if (parentModel) {
                        wrap = [parentModel valueForKey:@"m_messageWrap"] ?: [parentModel valueForKey:@"messageWrap"];
                    }
                }
            } @catch (NSException *e) {}
        }
        
        if (!wrap) {
            @try {
                id viewModel = [cell valueForKey:@"_viewModel"] ?: [cell valueForKey:@"m_viewModel"];
                if (viewModel) {
                    wrap = [viewModel valueForKey:@"m_messageWrap"] ?: [viewModel valueForKey:@"messageWrap"];
                    if (!wrap) wrap = [viewModel valueForKey:@"m_msgWrap"] ?: [viewModel valueForKey:@"msgWrap"];
                }
            } @catch (NSException *e) {}
        }
        
        if (!wrap) {
            @try {
                unsigned int mesLocalID = 0;
                @try {
                    id vid = [cell valueForKey:@"mesLocalID"];
                    if (vid) mesLocalID = [vid unsignedIntValue];
                } @catch (NSException *e) {}
                if (!mesLocalID) {
                    @try {
                        id vid = [cell valueForKey:@"m_mesLocalID"];
                        if (vid) mesLocalID = [vid unsignedIntValue];
                    } @catch (NSException *e) {}
                }
                if (!mesLocalID) {
                    id cellView = getCellView(cell);
                    if (cellView) {
                        @try { id vid = [cellView valueForKey:@"mesLocalID"]; if (vid) mesLocalID = [vid unsignedIntValue]; } @catch (NSException *e) {}
                    }
                }
                if (mesLocalID > 0) {
                    SEL sel = NSSelectorFromString(@"getMessageWrapInVisibleCellWithMesLocalID:");
                    id responder = cell;
                    while ((responder = [responder nextResponder])) {
                        if ([responder respondsToSelector:sel]) {
                            @try {
                                id result = ((id (*)(id, SEL, unsigned int))objc_msgSend)(responder, sel, mesLocalID);
                                if (result) {
                                    wrap = result;
                                }
                            } @catch (NSException *e) {
                                mtLog([NSString stringWithFormat:@"getMessageWrapInVisibleCell threw: %@", e.reason]);
                            }
                            break;
                        }
                    }
                    if (!wrap) {
                    }
                } else {
                    }
            } @catch (NSException *e) {}
        }
        
        Class CMessageWrapClass = objc_getClass("CMessageWrap");
    if (!s_CMessageWrapClass) s_CMessageWrapClass = CMessageWrapClass;
        if (!wrap) {
            mtLog(@"wrap is nil");
            return;
        }
        if (s_CMessageWrapClass && ![wrap isKindOfClass:s_CMessageWrapClass]) {
            mtLog([NSString stringWithFormat:@"wrap is not CMessageWrap: %@", NSStringFromClass([wrap class])]);
            return;
        }
        
        unsigned int msgType = 0;
        if ([wrap respondsToSelector:@selector(m_uiMessageType)]) {
            msgType = ((unsigned int (*)(id, SEL))objc_msgSend)(wrap, @selector(m_uiMessageType));
        }
        
        if (msgType == kSystemMessageType) {
            mtLog(@"Skipping system message (msgType = 10000)");
            return;
        }
        
        unsigned int createTime = 0;
        if ([wrap respondsToSelector:@selector(m_uiCreateTime)]) {
            createTime = ((unsigned int (*)(id, SEL))objc_msgSend)(wrap, @selector(m_uiCreateTime));
        } else {
            mtLog(@"wrap doesn't respond to m_uiCreateTime");
        }
        
        if (createTime == 0) {
            mtLog(@"createTime is 0");
            return;
        }

        id avatarView = getAvatarView(cell);
        
        NSDate *messageDate = [NSDate dateWithTimeIntervalSince1970:createTime];
        NSString *timeString = formatMessageTime(messageDate, config.messageTimeFormat);
        if (!timeString) {
            mtLog(@"timeString is nil");
            return;
        }
        
        UILabel *timeLabel = initTimeLabel((UIView *)cellView);
        timeLabel.text = timeString;

        CGFloat fontSize = config.messageTimeFontSize > 0 ? config.messageTimeFontSize : 7.0;
        UIFont *font = config.messageTimeBoldFont ? [UIFont boldSystemFontOfSize:fontSize] : [UIFont systemFontOfSize:fontSize];
        timeLabel.font = font;
        
        UIView *bubbleView = getBubbleView(cell);
        mtLog([NSString stringWithFormat:@"bubbleView: %@", bubbleView ? @"YES" : @"NO"]);
        
        BOOL isSender = NO;
        {
            isSender = detectIsSender(cell, cellView, getContentView(cell), wrap);
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
        
        CGRect labelFrame = CGRectMake(0, 0, labelSize.width, labelSize.height);
        
        CGFloat offsetX = config.messageTimeOffsetX;
        CGFloat offsetY = config.messageTimeOffsetY;
        NSInteger position = config.messageTimePosition;
        
        if ((position == 6 || position == 7) && bubbleView && config.messageTimeBubbleExtWidth > 0) {
            CGRect bubbleFrame = bubbleView.frame;
            bubbleFrame.size.width += config.messageTimeBubbleExtWidth;
            bubbleView.frame = bubbleFrame;
        }
        
        CGRect avatarFrame = [(UIView *)avatarView frame];
        
        id contentView = getContentView(cell);
        if (contentView) mtLog([NSString stringWithFormat:@"[DBG] contentView: class=%@ frame=%@ superview=%@",
                                 NSStringFromClass([contentView class]),
                                 NSStringFromCGRect([(UIView *)contentView frame]),
                                 NSStringFromClass([[(UIView *)contentView superview] class])]);
        CGRect contentFrame = contentFrameInCellView(contentView, cellView);
        if (CGRectEqualToRect(contentFrame, CGRectZero)) {
            contentFrame = cellFrame;
            contentFrame.origin = CGPointZero;
        }

        {
            id cvFromCell = nil;
            @try { cvFromCell = [cell valueForKey:@"m_contentView"]; } @catch (...) {}
            if (cvFromCell && cvFromCell != contentView) {
                CGRect fromCellFrame = contentFrameInCellView(cvFromCell, cellView);
                mtLog([NSString stringWithFormat:@"[POS] cell.m_contentView=(%f,%f,%f,%f) cellView.m_contentView=(%f,%f,%f,%f)",
                       fromCellFrame.origin.x, fromCellFrame.origin.y, fromCellFrame.size.width, fromCellFrame.size.height,
                       contentFrame.origin.x, contentFrame.origin.y, contentFrame.size.width, contentFrame.size.height]);
            }
        }

        CGFloat cvLeft   = contentFrame.origin.x;
        CGFloat cvRight  = contentFrame.origin.x + contentFrame.size.width;
        CGFloat cvTop    = contentFrame.origin.y;
        CGFloat cvBottom = contentFrame.origin.y + contentFrame.size.height;
        CGFloat cvMidX   = (cvLeft + cvRight) / 2;
        CGFloat w = labelSize.width;
        CGFloat h = labelSize.height;
        CGFloat cx = 0, cy = 0;

        switch (position) {
            case 2:
            case 7: // 消息旁边(=气泡外)
                cx = isSender ? (cvLeft - w / 2) : (cvRight + w / 2);
                cy = cvBottom - h / 2;
                break;
            case 3: // 消息下方(靠近头像)
                cx = isSender ? (cvRight - w / 2) : (cvLeft + w / 2);
                cy = cvBottom + h / 2;
                break;
            case 4: // 消息下方(远离头像)
                cx = isSender ? (cvLeft + w / 2) : (cvRight - w / 2);
                cy = cvBottom + h / 2;
                break;
            case 5: // 消息上方(靠近头像)
                cx = isSender ? (cvRight - w / 2) : (cvLeft + w / 2);
                cy = cvTop - h / 2;
                break;
            case 6: // 消息上方(远离头像)
                cx = isSender ? (cvLeft + w / 2) : (cvRight - w / 2);
                cy = cvTop - h / 2;
                break;
            default: {
                labelFrame = computeLabelFrame(cellFrame, labelSize, position, offsetX, offsetY, isSender, contentFrame, avatarFrame);
                mtLog([NSString stringWithFormat:@"[POS-FINAL] pos=%ld sender=%d cv=(L=%.0f,T=%.0f,R=%.0f,B=%.0f) bv=(%.0f,%.0f,%.0f,%.0f) av=(%.0f,%.0f,%.0f,%.0f) labelW=%.1f labelH=%.1f cellH=%.0f off=(X=%.1f,Y=%.1f) => labelFrame=(%.0f,%.0f,%.0f,%.0f)",
                       (long)position, isSender,
                       contentFrame.origin.x, contentFrame.origin.y,
                       contentFrame.origin.x + contentFrame.size.width,
                       contentFrame.origin.y + contentFrame.size.height,
                       bubbleView ? bubbleView.frame.origin.x : 0.0,
                       bubbleView ? bubbleView.frame.origin.y : 0.0,
                       bubbleView ? bubbleView.frame.size.width : 0.0,
                       bubbleView ? bubbleView.frame.size.height : 0.0,
                       avatarFrame.origin.x, avatarFrame.origin.y,
                       avatarFrame.size.width, avatarFrame.size.height,
                       labelSize.width, labelSize.height,
                       cellFrame.size.height,
                       offsetX, offsetY,
                       labelFrame.origin.x, labelFrame.origin.y,
                       labelFrame.size.width, labelFrame.size.height]);
                timeLabel.frame = labelFrame;
                goto setLabelDone;
            }
        }

        CGFloat finalX = cx + (isSender ? -offsetX : offsetX);
        CGFloat finalY = cy - offsetY;
        CGFloat maxY = cellFrame.size.height - h - kTimeLabelMaxYInset;
        if (finalY > maxY) finalY = maxY;
        CGPoint finalCenter = CGPointMake(finalX, finalY);
        CGRect equivalentFrame = CGRectMake(finalX - w / 2, finalY - h / 2, w, h);
        mtLog([NSString stringWithFormat:@"[POS-FINAL] pos=%ld sender=%d cv=(L=%.0f,T=%.0f,R=%.0f,B=%.0f) bv=(%.0f,%.0f,%.0f,%.0f) av=(%.0f,%.0f,%.0f,%.0f) labelW=%.1f labelH=%.1f cellH=%.0f off=(X=%.1f,Y=%.1f) => labelCenter=(%.0f,%.0f) labelFrame=(%.0f,%.0f,%.0f,%.0f)",
               (long)position, isSender,
               contentFrame.origin.x, contentFrame.origin.y,
               contentFrame.origin.x + contentFrame.size.width,
               contentFrame.origin.y + contentFrame.size.height,
               bubbleView ? bubbleView.frame.origin.x : 0.0,
               bubbleView ? bubbleView.frame.origin.y : 0.0,
               bubbleView ? bubbleView.frame.size.width : 0.0,
               bubbleView ? bubbleView.frame.size.height : 0.0,
               avatarFrame.origin.x, avatarFrame.origin.y,
               avatarFrame.size.width, avatarFrame.size.height,
               w, h,
               cellFrame.size.height,
               offsetX, offsetY,
               finalCenter.x, finalCenter.y,
               equivalentFrame.origin.x, equivalentFrame.origin.y,
               equivalentFrame.size.width, equivalentFrame.size.height]);
        timeLabel.center = finalCenter;

    setLabelDone:
        
        if (![timeLabel superview]) {
            [cellView addSubview:timeLabel];
            objc_setAssociatedObject(cell, @"messageTimeCreateTime", @(createTime), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            mtLog(@"Added timeLabel to cell");
        }
        
        mtLog(@"=== addTimeLabelToCell completed successfully ===");
        
    } @catch (NSException *e) {
        mtLog([NSString stringWithFormat:@"ERROR: %@", e]);
    }
}

// ============================================================
// MARK: - Original Function Pointers (one per hook target)
// ============================================================

static UITableViewCell* (*orig_BaseMsgContentVC_cellForRow)(id, SEL, id, NSIndexPath*);
static void (*orig_BaseMsgContentVC_willDisplayCell)(id, SEL, id, id, NSIndexPath*);
static void (*orig_ChatTableViewCell_prepareForReuse)(id, SEL);
static void (*orig_CommonMessageCellView_updateNodeStatus)(id, SEL);
static void (*orig_CommonMessageCellView_didMoveToWindow)(id, SEL);
static void (*orig_ChatTimeCellView_layoutSubviews)(id, SEL);
static CGFloat (*orig_ChatTimeViewModel_cellHeight)(id, SEL);
static NSString* (*orig_CContact_m_nsNickName)(id, SEL);

// ============================================================
// MARK: - Replacement Functions
// ============================================================

static UITableViewCell* repl_cellForRow(id self, SEL _cmd, id tv, NSIndexPath *ip) {
    UITableViewCell *cell = orig_BaseMsgContentVC_cellForRow(self, _cmd, tv, ip);
    if (![PluginConfig shared].showMessageTime || !cell) return cell;

    NSString *cellCls = NSStringFromClass([cell class]);
    id cellView = nil;
    id wrap = nil;

    @try {
        cellView = [cell valueForKey:@"m_cellView"];
    } @catch (NSException *e) {}
    if (!cellView) {
        @try {
            cellView = [cell valueForKey:@"cellView"];
        } @catch (NSException *e) {}
    }
    if (!cellView) {
        for (UIView *sv in [(UIView *)cell subviews]) {
            NSString *cn = NSStringFromClass([sv class]);
            if ([cn containsString:@"CellView"]) {
                cellView = sv;
                break;
            }
        }
    }
    if (!cellView) {
        mtLog([NSString stringWithFormat:@"[cellForRow] cell=%@ FAILED to get cellView (KVC nil, no subview match)", cellCls]);
        return cell;
    }

    @try {
        id viewModel = [cellView valueForKey:@"m_viewModel"] ?: [cellView valueForKey:@"viewModel"];
        if (viewModel) {
            wrap = [viewModel valueForKey:@"messageWrap"] ?: [viewModel valueForKey:@"m_messageWrap"];
        }
    } @catch (NSException *e) {}
    if (!wrap) {
        @try {
            wrap = [cellView valueForKey:@"messageWrap"] ?: [cellView valueForKey:@"m_messageWrap"];
        } @catch (NSException *e) {}
    }

    if (!wrap) {
        mtLog([NSString stringWithFormat:@"[cellForRow] cellView=%@ messageWrap=nil", NSStringFromClass([cellView class])]);
        return cell;
    }
    if (![wrap isKindOfClass:objc_getClass("CMessageWrap")]) {
        mtLog([NSString stringWithFormat:@"[cellForRow] wrap class=%@ not CMessageWrap", NSStringFromClass([wrap class])]);
        return cell;
    }

    objc_setAssociatedObject(cell, @"cachedMsgWrap", wrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return cell;
}

static void repl_willDisplayCell(id self, SEL _cmd, id tv, id cell, NSIndexPath *ip) {
    if (orig_BaseMsgContentVC_willDisplayCell) {
        orig_BaseMsgContentVC_willDisplayCell(self, _cmd, tv, cell, ip);
    }

    if (![PluginConfig shared].showMessageTime) return;

    id cellView = getCellView(cell);
    if (!cellView) return;

    if (objc_getAssociatedObject(cellView, @"msgTimeLabel")) return;

    id cachedWrap = objc_getAssociatedObject(cell, @"cachedMsgWrap");
    if (!cachedWrap) return;

    dispatch_async(dispatch_get_main_queue(), ^{
        addTimeLabelToCell(cell);
    });
}

static void repl_CommonMessageCellView_updateNodeStatus(id self, SEL _cmd) {
    if (orig_CommonMessageCellView_updateNodeStatus) {
        orig_CommonMessageCellView_updateNodeStatus(self, _cmd);
    }

    if (![PluginConfig shared].showMessageTime) return;

    UIView *cellView = (UIView *)self;
    UIView *cell = cellView;
    while (cell && ![NSStringFromClass([cell class]) containsString:@"ChatTableViewCell"]) {
        cell = [cell superview];
    }
    if (!cell) return;

    UILabel *label = objc_getAssociatedObject(cellView, @"msgTimeLabel");
    if (label) {
        quickRelocateTimeLabel(cell, cellView, [cell frame]);
        return;
    }

    addTimeLabelToCell(cell);
}

static void repl_CommonMessageCellView_didMoveToWindow(id self, SEL _cmd) {
    if (orig_CommonMessageCellView_didMoveToWindow) {
        orig_CommonMessageCellView_didMoveToWindow(self, _cmd);
    }

    if (![PluginConfig shared].showMessageTime) return;

    UIView *cv = (UIView *)self;
    if (!cv.window) return;

    if (objc_getAssociatedObject(cv, @"msgTimeLabel")) return;

    UIView *cell = cv;
    while (cell && ![NSStringFromClass([cell class]) containsString:@"ChatTableViewCell"]) {
        cell = [cell superview];
    }
    if (!cell) return;

    dispatch_async(dispatch_get_main_queue(), ^{
        addTimeLabelToCell(cell);
    });
}

static void repl_ChatTableViewCell_prepareForReuse(id self, SEL _cmd) {
    if (orig_ChatTableViewCell_prepareForReuse) {
        orig_ChatTableViewCell_prepareForReuse(self, _cmd);
    }

    // 清理 cellView 上的标签（标签存储在 cellView 的关联对象上）
    id cellView = nil;
    @try { cellView = [self valueForKey:@"m_cellView"] ?: [self valueForKey:@"cellView"]; } @catch (...) {}
    if (cellView) {
        UILabel *oldLabel = objc_getAssociatedObject(cellView, @"msgTimeLabel");
        if (oldLabel) {
            [oldLabel removeFromSuperview];
        }
        UIView *tagLabel = [(UIView *)cellView viewWithTag:kTimeLabelTag];
        if (tagLabel && tagLabel != oldLabel) {
            [tagLabel removeFromSuperview];
        }
        objc_setAssociatedObject(cellView, @"msgTimeLabel", nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    objc_setAssociatedObject(self, @"messageTimeCreateTime", nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, @"cachedMsgWrap", nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
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
    {"BaseMsgContentViewController", "tableView:cellForRowAtIndexPath:",              (IMP)repl_cellForRow,                         (IMP*)&orig_BaseMsgContentVC_cellForRow},
    {"BaseMsgContentViewController", "tableView:willDisplayCell:forRowAtIndexPath:",  (IMP)repl_willDisplayCell,                    (IMP*)&orig_BaseMsgContentVC_willDisplayCell},
    {"CommonMessageCellView",        "updateNodeStatus",                              (IMP)repl_CommonMessageCellView_updateNodeStatus, (IMP*)&orig_CommonMessageCellView_updateNodeStatus},
    {"CommonMessageCellView",        "didMoveToWindow",                               (IMP)repl_CommonMessageCellView_didMoveToWindow,  (IMP*)&orig_CommonMessageCellView_didMoveToWindow},
    {"ChatTableViewCell",            "prepareForReuse",                               (IMP)repl_ChatTableViewCell_prepareForReuse,  (IMP*)&orig_ChatTableViewCell_prepareForReuse},
    {"ChatTimeCellView",             "layoutSubviews",                                (IMP)repl_ChatTimeCellView_layoutSubviews,    (IMP*)&orig_ChatTimeCellView_layoutSubviews},
    {"ChatTimeViewModel",            "cellHeight",                                    (IMP)repl_ChatTimeViewModel_cellHeight,        (IMP*)&orig_ChatTimeViewModel_cellHeight},
    {"CContact",                     "m_nsNickName",                                  (IMP)repl_CContact_m_nsNickName,              (IMP*)&orig_CContact_m_nsNickName},
};

static const int g_hookTableCount = sizeof(g_hookTable) / sizeof(g_hookTable[0]);

// ============================================================
// MARK: - Installation
// ============================================================

@implementation MessageTimeHook

+ (void)install {
    mtLog(@"========================================");
    mtLog(@"MessageTimeHook install - willDisplayCell(dispatch_async) + updateNodeStatus(model-driven) + didMoveToWindow(supplement)");
    mtLog(@"Architecture: ViewModel驱动（复刻微信优化1.6.5）—— 0% layoutSubviews热路径参与");
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

        MSHookMessageEx(cls, sel, entry->replacement, entry->original);

        mtLog([NSString stringWithFormat:@"Hooked %s - %s ✓", entry->className, entry->selName]);
        hookedCount++;
    }

    mtLog([NSString stringWithFormat:@"Hook table complete: %d/%d", hookedCount, g_hookTableCount]);
    mtLog(@"========================================");
    mtLog(@"MessageTimeHook install complete");
    mtLog(@"========================================");
}

@end