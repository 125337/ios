#import "MessageTimeHook.h"
#import "../../Config/PluginConfig.h"
#import "MessageTimeFormatParser.h"
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

// Note: Formatter removed, using MessageTimeFormatParser now

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

// 使用 MessageTimeFormatParser 统一格式化（支持自定义格式）
static NSString *formatMessageTime(NSDate *date, NSString *fallbackFormat, NSString *customFormat, BOOL isDark) {
    return [MessageTimeFormatParser formatDate:date customFormat:customFormat isDarkMode:isDark];
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
// MARK: - Original Function Pointers (one per hook target)
// ============================================================

static UITableViewCell* (*orig_BaseMsgContentVC_cellForRow)(id, SEL, id, NSIndexPath*);
static id (*orig_CommonMessageCellView_initWithViewModel)(id, SEL, id);
static void (*orig_CommonMessageCellView_updateNodeStatus)(id, SEL);
static void (*orig_ChatTimeCellView_layoutSubviews)(id, SEL);
static CGFloat (*orig_ChatTimeViewModel_cellHeight)(id, SEL);
static NSString* (*orig_CContact_m_nsNickName)(id, SEL);
static void (*orig_TextMsgCell_setFrameBgImg)(id, SEL, CGFloat, CGFloat, CGFloat, CGFloat);

// ============================================================
// MARK: - Replacement Functions
// ============================================================

static UITableViewCell* repl_cellForRow(id self, SEL _cmd, id tv, NSIndexPath *ip) {
    UITableViewCell *cell = orig_BaseMsgContentVC_cellForRow(self, _cmd, tv, ip);

    if (![PluginConfig shared].showMessageTime || !cell) return cell;

    // 反编译版风格：只处理 ChatTableViewCell
    if (![cell isKindOfClass:NSClassFromString(@"ChatTableViewCell")]) return cell;

    // 全局队列异步计算时间（复刻 FUN_0003b270 + FUN_0003c790）
    dispatch_async(dispatch_get_global_queue(0, 0), ^{
        id cellView = nil;
        @try { cellView = [cell valueForKey:@"m_cellView"] ?: [cell valueForKey:@"cellView"]; } @catch (NSException *e) {}
        if (!cellView) return;

        // 获取 viewModel
        id viewModel = nil;
        @try { viewModel = [cellView valueForKey:@"m_viewModel"] ?: [cellView valueForKey:@"viewModel"]; } @catch (NSException *e) {}
        if (!viewModel) return;

        unsigned int createTime = 0;
        @try {
            // 方式1: viewModel → messageWrap → m_uiCreateTime
            id messageWrap = nil;
            if ([viewModel respondsToSelector:NSSelectorFromString(@"messageWrap")]) {
                @try { messageWrap = [viewModel valueForKey:@"messageWrap"]; } @catch (...) {}
            }
            if (!messageWrap) {
                @try { messageWrap = [viewModel valueForKey:@"m_messageWrap"]; } @catch (...) {}
            }
            if (messageWrap && [messageWrap respondsToSelector:NSSelectorFromString(@"m_uiCreateTime")]) {
                createTime = (unsigned int)[[messageWrap valueForKey:@"m_uiCreateTime"] unsignedIntValue];
            }
            // 方式2: viewModel → createTime（直接属性）
            if (createTime == 0 && [viewModel respondsToSelector:NSSelectorFromString(@"createTime")]) {
                @try { createTime = (unsigned int)[[viewModel valueForKey:@"createTime"] unsignedIntValue]; } @catch (...) {}
            }
        } @catch (NSException *e) {}

        if (createTime == 0) return;

        // 格式化时间（使用自定义格式引擎）
        PluginConfig *config = [PluginConfig shared];
        NSDate *date = [NSDate dateWithTimeIntervalSince1970:(NSTimeInterval)createTime];
        NSString *timeText = formatMessageTime(date, config.messageTimeFormat,
                                                config.messageTimeCustomFormat, [config isDarkMode]);
        if (!timeText) return;

        // 存入 viewModel 关联对象（复刻 DAT_0013ad99）
        // 不手动 dispatch_async(main) 调 updateNodeStatus，避免在 VC 转场时
        // 与微信优化的 dispatch block 冲突导致 presentingModalViewController 崩溃
        // 时间文本已缓存，WeChat 后续自然调用 updateNodeStatus 时自动读取
        objc_setAssociatedObject(viewModel, @"messageTimeText", timeText, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    });

    return cell;
}

// 复刻 FUN_00039d80：始终创建空标签，不检查 showMessageTime
static id repl_CommonMessageCellView_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = orig_CommonMessageCellView_initWithViewModel(self, _cmd, viewModel);
    if (!result) return nil;

    id realSelf = result;
    PluginConfig *config = [PluginConfig shared];

    UILabel *label = [[UILabel alloc] init];
    CGFloat fontSize = config.messageTimeFontSize > 0 ? config.messageTimeFontSize : 7.0;
    UIFont *font = config.messageTimeBoldFont ? [UIFont boldSystemFontOfSize:fontSize] : [UIFont systemFontOfSize:fontSize];
    label.font = font;
    label.textAlignment = NSTextAlignmentCenter;
    label.adjustsFontSizeToFitWidth = YES;
    label.userInteractionEnabled = NO;
    label.clipsToBounds = NO;

    CGFloat cornerRadius = config.messageTimeCornerRadius > 0 ? config.messageTimeCornerRadius : 8.0;
    label.layer.cornerRadius = cornerRadius;

    label.frame = CGRectMake(0, 0, 40, 30);

    objc_setAssociatedObject(realSelf, @"msgTimeLabel", label, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    return result;
}

// 复刻 FUN_0003c628 — TextMessageSubViewModel 复合消息过滤
// 99 = 0b01100011: positions 0,1,5,6 → 只显示在第一个子视图; positions 2,3,4,7 → 只显示在最后一个子视图
static BOOL shouldShowMessageTimeForSubViewModel(id viewModel, NSInteger position) {
    Class subVMClass = NSClassFromString(@"TextMessageSubViewModel");
    if (!subVMClass || ![viewModel isKindOfClass:subVMClass]) {
        return YES;
    }

    id parentModel = nil;
    @try { parentModel = [viewModel valueForKey:@"parentModel"]; } @catch (...) {}
    if (!parentModel) return YES;

    NSArray *subViewModels = nil;
    @try { subViewModels = [parentModel valueForKey:@"subViewModels"]; } @catch (...) {}
    if (!subViewModels || subViewModels.count == 0) return YES;

    NSUInteger curIdx = [subViewModels indexOfObject:viewModel];
    if (curIdx == NSNotFound) return YES;

    NSUInteger targetIdx;
    if (position < 7 && ((99U >> (unsigned int)(position & 0x1f) & 1) != 0)) {
        targetIdx = 0;
    } else {
        targetIdx = subViewModels.count - 1;
    }

    return (curIdx == targetIdx);
}

static void repl_CommonMessageCellView_updateNodeStatus(id self, SEL _cmd) {
    if (orig_CommonMessageCellView_updateNodeStatus) {
        orig_CommonMessageCellView_updateNodeStatus(self, _cmd);
    }

    UIView *cv = (UIView *)self;
    UILabel *label = objc_getAssociatedObject(cv, @"msgTimeLabel");

    if (![PluginConfig shared].showMessageTime) {
        if (label) {
            label.hidden = YES;
        }
        return;
    }

    if (!label) return;

    // 获取 viewModel → 读取已缓存在 viewModel 上的时间文本
    id viewModel = nil;
    @try { viewModel = [cv valueForKey:@"m_viewModel"] ?: [cv valueForKey:@"viewModel"]; } @catch (NSException *e) {}
    if (!viewModel) { label.hidden = YES; return; }

    NSString *timeText = objc_getAssociatedObject(viewModel, @"messageTimeText");
    if (!timeText) { label.hidden = YES; return; }

    // 复合消息过滤（复刻 FUN_0003c628 — 照抄 FUN_0003a06c 行 34573-34582）
    PluginConfig *config = [PluginConfig shared];
    NSInteger position = config.messageTimePosition;
    if (!shouldShowMessageTimeForSubViewModel(viewModel, position)) {
        label.hidden = YES;
        return;
    }

    label.hidden = NO;
    label.text = timeText;

    // 计算 label 尺寸（复刻 FUN_0003a06c 开头：textW+4, textH+4, clamp 30~88）
    CGFloat fontSize = config.messageTimeFontSize > 0 ? config.messageTimeFontSize : 7.0;
    UIFont *font = config.messageTimeBoldFont ? [UIFont boldSystemFontOfSize:fontSize] : [UIFont systemFontOfSize:fontSize];
    label.font = font;

    NSDictionary *attrs = @{NSFontAttributeName: font};
    CGSize textSize = [timeText boundingRectWithSize:CGSizeMake(CGFLOAT_MAX, CGFLOAT_MAX)
                                             options:NSStringDrawingUsesLineFragmentOrigin
                                          attributes:attrs
                                             context:nil].size;

    CGFloat labelW = MAX(30.0, MIN(textSize.width + 4.0, 88.0));
    CGFloat labelH = textSize.height + 4.0;
    label.frame = CGRectMake(0, 0, labelW, labelH);

    // 设置颜色（根据 sender/receiver + 亮暗模式）
    BOOL isSender = NO;
    @try { isSender = [[viewModel valueForKey:@"isSender"] boolValue]; } @catch (NSException *e) {}

    NSString *textHex = isSender ? config.senderTextColorHex : config.receiverTextColorHex;
    NSString *bgHex   = isSender ? config.senderBackgroundColorHex : config.receiverBackgroundColorHex;

    UIColor *textColor = textHex.length ? [config colorFromHex:textHex] : nil;
    UIColor *bgColor   = bgHex.length   ? [config colorFromHex:bgHex]   : nil;

    if (!textColor) textColor = isSender ? [UIColor whiteColor] : [UIColor blackColor];

    // 暗色模式自动提亮
    if (isWeChatDarkMode()) {
        textColor = autoDarkColor(textColor);
        if (bgColor) bgColor = autoDarkColor(bgColor);
    }

    label.textColor = textColor;
    if (bgColor) label.backgroundColor = bgColor;

    CGFloat cornerRadius = config.messageTimeCornerRadius > 0 ? config.messageTimeCornerRadius : 8.0;
    label.layer.cornerRadius = cornerRadius;

    // 获取 contentView frame 用于定位
    UIView *cell = cv;
    while (cell && ![NSStringFromClass([cell class]) containsString:@"ChatTableViewCell"]) {
        cell = [cell superview];
    }
    CGRect cellFrame = cell ? [cell frame] : CGRectZero;
    id contentViewObj = getContentView(cell);
    CGRect contentFrame = contentFrameInCellView(contentViewObj, cv);
    if (CGRectEqualToRect(contentFrame, CGRectZero)) {
        contentFrame = cellFrame;
        contentFrame.origin = CGPointZero;
    }

    CGFloat cvLeft   = contentFrame.origin.x;
    CGFloat cvRight  = contentFrame.origin.x + contentFrame.size.width;
    CGFloat cvBottom = contentFrame.origin.y + contentFrame.size.height;

    CGFloat offsetX = config.messageTimeOffsetX;
    CGFloat offsetY = config.messageTimeOffsetY;

    // 获取头像 frame（position 0/1 需要）
    id avatarView = getAvatarView(cell);
    CGRect avatarFrame = avatarView ? [(UIView *)avatarView frame] : CGRectZero;

    CGFloat cx = 0, cy = 0;

    switch (position) {
        case 0: { // 头像上方
            if (!CGRectIsEmpty(avatarFrame)) {
                cx = avatarFrame.origin.x + avatarFrame.size.width / 2;
                cy = avatarFrame.origin.y - labelH / 2;
            } else {
                cx = isSender ? (cvLeft - labelW / 2) : (cvRight + labelW / 2);
                cy = cvBottom - labelH / 2;
            }
            break;
        }
        case 1: { // 头像下方
            if (!CGRectIsEmpty(avatarFrame)) {
                cx = avatarFrame.origin.x + avatarFrame.size.width / 2;
                cy = avatarFrame.origin.y + avatarFrame.size.height + labelH / 2;
            } else {
                cx = isSender ? (cvLeft - labelW / 2) : (cvRight + labelW / 2);
                cy = cvBottom - labelH / 2;
            }
            break;
        }
        case 2:
        case 7: // 消息旁边(=气泡外)
            cx = isSender ? (cvLeft - labelW / 2) : (cvRight + labelW / 2);
            cy = cvBottom - labelH / 2;
            break;
        case 3: // 消息下方(远离头像)
            cx = isSender ? (cvLeft + labelW / 2) : (cvRight - labelW / 2);
            cy = cvBottom + labelH / 2;
            break;
        case 4: // 消息下方(靠近头像)
            cx = isSender ? (cvRight - labelW / 2) : (cvLeft + labelW / 2);
            cy = cvBottom + labelH / 2;
            break;
        case 5: // 消息上方(远离头像)
            cx = isSender ? (cvLeft + labelW / 2) : (cvRight - labelW / 2);
            cy = CGRectGetMinY(contentFrame) - labelH / 2;
            break;
        case 6: // 消息上方(靠近头像)
            cx = isSender ? (cvRight - labelW / 2) : (cvLeft + labelW / 2);
            cy = CGRectGetMinY(contentFrame) - labelH / 2;
            break;
        default: {
            cx = isSender ? (cvLeft - labelW / 2) : (cvRight + labelW / 2);
            cy = cvBottom - labelH / 2;
            break;
        }
    }

    if (offsetX != 0) cx += isSender ? -offsetX : offsetX;
    if (offsetY != 0) cy -= offsetY;

    label.center = CGPointMake(cx, cy);

    if (![label superview]) {
        [cv addSubview:label];
    }
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

static void repl_TextMsgCell_setFrameBgImg(id self, SEL _cmd, CGFloat x, CGFloat y, CGFloat w, CGFloat h) {
    PluginConfig *config = [PluginConfig shared];

    if (config.showMessageTime && config.messageTimePosition == 7) {
        id viewModel = nil;
        @try { viewModel = [self valueForKey:@"m_viewModel"] ?: [self valueForKey:@"viewModel"]; } @catch (NSException *e) {}

        if (viewModel) {
            BOOL isSender = NO;
            @try { isSender = [[viewModel valueForKey:@"isSender"] boolValue]; } @catch (NSException *e) {}

            CGFloat extWidth = config.messageTimeBubbleExtWidth > 0 ? config.messageTimeBubbleExtWidth : 38.0;
            if (isSender) {
                x -= extWidth;
            }
            w += extWidth;

            mtLog([NSString stringWithFormat:@"[BUBBLE-EXTEND] isSender=%d extWidth=%.0f x=%.0f->%.0f w=%.0f->%.0f",
                   isSender, extWidth, x + (isSender ? extWidth : 0), x, w - extWidth, w]);
        }
    }

    orig_TextMsgCell_setFrameBgImg(self, _cmd, x, y, w, h);
}

// ============================================================
// MARK: - Hook Configuration Table
// ============================================================

static MTHookEntry g_hookTable[] = {
    {"CommonMessageCellView",        "initWithViewModel:",                   (IMP)repl_CommonMessageCellView_initWithViewModel, (IMP*)&orig_CommonMessageCellView_initWithViewModel},
    {"BaseMsgContentViewController", "tableView:cellForRowAtIndexPath:",     (IMP)repl_cellForRow,                         (IMP*)&orig_BaseMsgContentVC_cellForRow},
    {"CommonMessageCellView",        "updateNodeStatus",                     (IMP)repl_CommonMessageCellView_updateNodeStatus, (IMP*)&orig_CommonMessageCellView_updateNodeStatus},
    {"ChatTimeCellView",             "layoutSubviews",                       (IMP)repl_ChatTimeCellView_layoutSubviews,    (IMP*)&orig_ChatTimeCellView_layoutSubviews},
    {"ChatTimeViewModel",            "cellHeight",                           (IMP)repl_ChatTimeViewModel_cellHeight,        (IMP*)&orig_ChatTimeViewModel_cellHeight},
    {"CContact",                     "m_nsNickName",                         (IMP)repl_CContact_m_nsNickName,              (IMP*)&orig_CContact_m_nsNickName},
    {"TextMessageCellView",          "setFrameForBgImageView:",              (IMP)repl_TextMsgCell_setFrameBgImg,          (IMP*)&orig_TextMsgCell_setFrameBgImg},
};

static const int g_hookTableCount = sizeof(g_hookTable) / sizeof(g_hookTable[0]);

// ============================================================
// MARK: - Installation
// ============================================================

@implementation MessageTimeHook

+ (void)install {
    mtLog(@"========================================");
    mtLog(@"MessageTimeHook install - initWithViewModel(early label) + cellForRow(global_queue) + updateNodeStatus(model-driven)");
    mtLog(@"Architecture: 复刻微信优化1.6.5 — 全局队列异步计算 + ViewModel驱动");
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