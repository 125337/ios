#import "MessageTimeHook.h"
#import "MessageTimeConfig.h"
#import "../Revoke/RevokeConfig.h"
#import "../../Core/WPUtility.h"
#import "../../Core/HookEngine.h"
#import "../../Core/LogManager.h"
#import "MessageTimeFormatParser.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <UIKit/UIKit.h>
#import <objc/message.h>

// ============================================================
// MARK: - Configuration Table Entry
// ============================================================

// ============================================================
// MARK: - Color / Theme Helpers
// ============================================================

static UIColor *autoDarkColor(UIColor *lightColor) {
    if (!lightColor) return nil;
    if ([WPUtility isDarkMode]) {
        CGFloat r, g, b, a;
        if ([lightColor getRed:&r green:&g blue:&b alpha:&a]) {
            return [UIColor colorWithRed:MIN(r + 0.15, 1.0)
                                   green:MIN(g + 0.15, 1.0)
                                    blue:MIN(b + 0.15, 1.0)
                                   alpha:a];
        }
    }
    return lightColor;
}

static UIColor *colorInLightMode(UIColor *lightColor, UIColor *darkColor) {
    return [WPUtility isDarkMode] ? (darkColor ?: autoDarkColor(lightColor)) : lightColor;
}

// ============================================================
// MARK: - Coordinate Helpers
// ============================================================

static id getCellView(id cell);

// ============================================================
// MARK: - Time Formatting
// ============================================================

// 使用 MessageTimeFormatParser 统一格式化（支持自定义格式 + 伪已读）
static NSString *formatMessageTime(NSDate *date, NSString *customFormat, BOOL isDark, BOOL isSender, NSInteger statusCode) {
    return [MessageTimeFormatParser formatDate:date customFormat:customFormat isDarkMode:isDark isSender:isSender statusCode:statusCode];
}

// ============================================================
// MARK: - 伪已读状态追踪器（复刻反编译 FUN_0003bb04 + FUN_0003ba04 + DAT_0013ad68）
// ============================================================

static NSMutableDictionary<NSString *, NSNumber *> *_readStatusTracker(void) {
    static NSMutableDictionary *dict;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        dict = [NSMutableDictionary dictionary];
    });
    return dict;
}

/// 复刻 FUN_0003ba04: 从 m_nsFromUsr / m_nsToUsr 生成一致的会话追踪 key
/// - 群聊: 返回 chatroom ID（m_nsFromUsr 或 m_nsToUsr 中含 "@chatroom" 的那个）
/// - 单聊: 将两个用户名排序后 "A@B" 拼接，保证收发双方生成相同的 key
static NSString *chatSessionKey(NSString *fromUsr, NSString *toUsr) {
    if (!fromUsr && !toUsr) return @"unknown_session";

    // 群聊检测
    if ([fromUsr containsString:@"@chatroom"]) return fromUsr;
    if ([toUsr containsString:@"@chatroom"]) return toUsr;

    // 单聊：排序保证一致性
    if (!fromUsr) return toUsr ?: @"unknown_session";
    if (!toUsr) return fromUsr ?: @"unknown_session";

    NSArray *sorted = [@[fromUsr, toUsr] sortedArrayUsingSelector:@selector(compare:)];
    return [NSString stringWithFormat:@"%@@%@", sorted[0], sorted[1]];
}

/// 复刻 FUN_0003bb04: 计算当前消息的伪已读状态
/// @param isSender 消息是否为发送方
/// @param sessionKey 复刻 FUN_0003ba04 生成的会话追踪 key
/// @param createTime 消息的 m_uiCreateTime（时间戳）
/// @return 2=已读, 1=已送达
static NSInteger computeReadStatus(BOOL isSender, NSString *sessionKey, unsigned int createTime) {
    BOOL hasKey = (sessionKey.length > 0);

    // ── 接收方路径（复刻 FUN_0003bb04 param_1==0 分支，行 35362-35390）──
    if (!isSender) {
        if (hasKey) {
            NSMutableDictionary *tracker = _readStatusTracker();
            @synchronized (tracker) {
                NSNumber *stored = tracker[sessionKey];
                unsigned int storedMax = stored ? stored.unsignedIntValue : 0;
                if (createTime > storedMax) {
                    tracker[sessionKey] = @(createTime);
                    WPLog(@"MsgTime", @"[伪已读·追踪器] 接收方更新 stored_max: key=%@, old=%u, new=%u", sessionKey, storedMax, createTime);
                } else {
                    WPLog(@"MsgTime", @"[伪已读·追踪器] 接收方无需更新: key=%@, createTime=%u, stored=%u", sessionKey, createTime, storedMax);
                }
            }
        } else {
            WPLog(@"MsgTime", @"[伪已读·追踪器] 接收方 sessionKey 为空，跳过更新");
        }
        WPLog(@"MsgTime", @"[伪已读·状态] 接收方 → statusCode=2 (已读)");
        return 2;
    }

    // ── 发送方路径（复刻 FUN_0003bb04 param_1!=0 分支，行 35392-35414）──
    if (!hasKey) {
        WPLog(@"MsgTime", @"[伪已读·状态] 发送方 sessionKey 为空 → 保守返回 statusCode=1 (已送达)");
        return 1;
    }

    NSMutableDictionary *tracker = _readStatusTracker();
    @synchronized (tracker) {
        NSNumber *stored = tracker[sessionKey];
        unsigned int storedMax = stored ? stored.unsignedIntValue : 0;

        if (createTime < storedMax) {
            WPLog(@"MsgTime", @"[伪已读·状态] 发送方 → createTime(%u) < stored(%u) → statusCode=2 (已读)", createTime, storedMax);
            return 2;
        }
        WPLog(@"MsgTime", @"[伪已读·状态] 发送方 → createTime(%u) >= stored(%u) → statusCode=1 (已送达)", createTime, storedMax);
        return 1;
    }
}

// ============================================================
// MARK: - View Hierarchy Accessors
// ============================================================

static id getCellView(id cell) {
    id cellView = nil;
    NSString *cellCls = NSStringFromClass([cell class]);
    @try {
        cellView = [cell valueForKey:@"m_cellView"];
        if (cellView) WPLog(@"MsgTime", @"[DBG] getCellView: found via m_cellView, class=%@", NSStringFromClass([cellView class]));
    } @catch (NSException *e) {
        WPLog(@"MsgTime", @"[DBG] getCellView: m_cellView threw: %@", e.reason);
    }
    if (!cellView) {
        @try {
            cellView = [cell valueForKey:@"cellView"];
            if (cellView) WPLog(@"MsgTime", @"[DBG] getCellView: found via cellView, class=%@", NSStringFromClass([cellView class]));
        } @catch (NSException *e) {
            WPLog(@"MsgTime", @"[DBG] getCellView: cellView threw: %@", e.reason);
        }
    }
    if (!cellView) WPLog(@"MsgTime", @"[DBG] getCellView: BOTH nil for cell=%@", cellCls);
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
                        WPLog(@"MsgTime", @"[DBG] getAvatarView: getHeadImageView found");
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
                    WPLog(@"MsgTime", @"[DBG] getAvatarView: KVC headImageView found");
                    avatarView = view;
                    break;
                }
            } @catch (NSException *e) {}
        }
        
        // Level 3: MMHeadImageView subview
        if (!avatarView && MMHeadImageViewClass) {
            for (UIView *sv in [target subviews]) {
                if ([sv isKindOfClass:MMHeadImageViewClass]) {
                    WPLog(@"MsgTime", @"[DBG] getAvatarView: MMHeadImageView subview found");
                    avatarView = sv;
                    break;
                }
            }
        }
        
        if (avatarView) break;
    }
    
    if (!avatarView) WPLog(@"MsgTime", @"[DBG] getAvatarView: FAILED - all paths returned nil");
    return avatarView;
}

// ============================================================
// MARK: - Original Function Pointers (one per hook target)
// ============================================================

static id (*orig_CommonMessageCellView_initWithViewModel)(id, SEL, id);
static void (*orig_CommonMessageCellView_updateNodeStatus)(id, SEL);
static void (*orig_ChatTimeCellView_layoutSubviews)(id, SEL);
static CGFloat (*orig_ChatTimeViewModel_cellHeight)(id, SEL);
static NSString* (*orig_CContact_m_nsNickName)(id, SEL);
static void (*orig_TextMsgCell_setFrameBgImg)(id, SEL, CGFloat, CGFloat, CGFloat, CGFloat);

// ============================================================
// MARK: - Replacement Functions
// ============================================================

// 复刻 FUN_00039d80：始终创建空标签，不检查 showMessageTime
static id repl_CommonMessageCellView_initWithViewModel(id self, SEL _cmd, id viewModel) {
    id result = orig_CommonMessageCellView_initWithViewModel(self, _cmd, viewModel);
    if (!result) return nil;

    id realSelf = result;
    MessageTimeConfig *config = [MessageTimeConfig shared];

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

    if (![MessageTimeConfig shared].showMessageTime) {
        if (label) { label.hidden = YES; }
        return;
    }

    if (!label) return;

    // 守卫：VC 转场期间（如外部分享唤起聊天选择器）跳过 KVO 访问
    // 防止 valueForKey 触发微信布局管线 → async dispatch → presentingModalViewController crash
    UIResponder *r = cv.nextResponder;
    while (r && ![r isKindOfClass:[UIViewController class]]) r = r.nextResponder;
    if (r) {
        UIViewController *parentVC = (UIViewController *)r;
        if (parentVC.presentedViewController || parentVC.isBeingPresented || parentVC.isBeingDismissed) {
            label.hidden = YES;
            return;
        }
    }

    // 获取 viewModel → 直接从 messageWrap 计算时间文本（参照锤子助手方案，不依赖 cellForRow 缓存）
    id viewModel = nil;
    @try { viewModel = [cv valueForKey:@"m_viewModel"] ?: [cv valueForKey:@"viewModel"]; } @catch (NSException *e) {}
    if (!viewModel) { label.hidden = YES; return; }

    // 复合消息过滤（复刻 FUN_0003c628 — 照抄 FUN_0003a06c 行 34573-34582）
    MessageTimeConfig *config = [MessageTimeConfig shared];
    NSInteger position = config.messageTimePosition;
    if (!shouldShowMessageTimeForSubViewModel(viewModel, position)) {
        label.hidden = YES;
        return;
    }

    // === 直接从 messageWrap 计算时间文本（不依赖 cellForRow 预缓存） ===
    unsigned int createTime = 0;
    id messageWrap = nil;
    @try {
        if ([viewModel respondsToSelector:NSSelectorFromString(@"messageWrap")]) {
            @try { messageWrap = [viewModel valueForKey:@"messageWrap"]; } @catch (...) {}
        }
        if (!messageWrap) {
            @try { messageWrap = [viewModel valueForKey:@"m_messageWrap"]; } @catch (...) {}
        }
        if (messageWrap) {
            if ([messageWrap respondsToSelector:NSSelectorFromString(@"m_uiCreateTime")]) {
                createTime = (unsigned int)[[messageWrap valueForKey:@"m_uiCreateTime"] unsignedIntValue];
            }
        }
        if (createTime == 0 && [viewModel respondsToSelector:NSSelectorFromString(@"createTime")]) {
            @try { createTime = (unsigned int)[[viewModel valueForKey:@"createTime"] unsignedIntValue]; } @catch (...) {}
        }
    } @catch (NSException *e) {}

    if (createTime == 0) { label.hidden = YES; return; }

    BOOL isSender = NO;
    @try { isSender = [[viewModel valueForKey:@"isSender"] boolValue]; } @catch (NSException *e) {}

    // 伪已读状态追踪
    NSString *fromUsr = nil, *toUsr = nil;
    if (messageWrap) {
        @try {
            if ([messageWrap respondsToSelector:NSSelectorFromString(@"m_nsFromUsr")]) {
                fromUsr = [messageWrap valueForKey:@"m_nsFromUsr"];
            }
            if ([messageWrap respondsToSelector:NSSelectorFromString(@"m_nsToUsr")]) {
                toUsr = [messageWrap valueForKey:@"m_nsToUsr"];
            }
        } @catch (...) {}
    }
    NSString *sessionKey = chatSessionKey(fromUsr, toUsr);
    NSInteger statusCode = computeReadStatus(isSender, sessionKey, createTime);

    NSDate *date = [NSDate dateWithTimeIntervalSince1970:(NSTimeInterval)createTime];
    NSString *timeText = formatMessageTime(date,
                                            config.messageTimeCustomFormat,
                                            [WPUtility isDarkMode],
                                            isSender,
                                            statusCode);
    if (!timeText) { label.hidden = YES; return; }

    label.hidden = NO;
    label.text = timeText;

    // 计算 label 尺寸（复刻 FUN_0003a06c 开头：textW+4, textH+4, clamp 30~88）
    CGFloat fontSize = [MessageTimeConfig shared].messageTimeFontSize > 0 ? [MessageTimeConfig shared].messageTimeFontSize : 7.0;
    UIFont *font = [MessageTimeConfig shared].messageTimeBoldFont ? [UIFont boldSystemFontOfSize:fontSize] : [UIFont systemFontOfSize:fontSize];
    label.font = font;

    NSDictionary *attrs = @{NSFontAttributeName: font};
    CGSize textSize = [timeText boundingRectWithSize:CGSizeMake(CGFLOAT_MAX, CGFLOAT_MAX)
                                             options:NSStringDrawingUsesLineFragmentOrigin
                                          attributes:attrs
                                             context:nil].size;

    CGFloat labelW = MAX(30.0, MIN(textSize.width + 4.0, 88.0));
    CGFloat labelH = textSize.height + 4.0;
    label.frame = CGRectMake(0, 0, labelW, labelH);

    // 设置颜色（复刻反编译 FUN_0003b3b4 — sender/receiver × 亮/暗 四色）
    @try {
        NSString *textHex = isSender ? [MessageTimeConfig shared].senderTextColorHex : [MessageTimeConfig shared].receiverTextColorHex;
        NSString *textDarkHex = isSender ? [MessageTimeConfig shared].senderTextColorDarkHex : [MessageTimeConfig shared].receiverTextColorDarkHex;
        NSString *bgHex = isSender ? [MessageTimeConfig shared].senderBackgroundColorHex : [MessageTimeConfig shared].receiverBackgroundColorHex;
        NSString *bgDarkHex = isSender ? [MessageTimeConfig shared].senderBackgroundColorDarkHex : [MessageTimeConfig shared].receiverBackgroundColorDarkHex;

        UIColor *lightTextColor = textHex.length ? [WPUtility colorFromHex:textHex] : nil;
        UIColor *darkTextColor  = textDarkHex.length ? [WPUtility colorFromHex:textDarkHex] : nil;
        UIColor *lightBgColor   = bgHex.length ? [WPUtility colorFromHex:bgHex] : nil;
        UIColor *darkBgColor    = bgDarkHex.length ? [WPUtility colorFromHex:bgDarkHex] : nil;

        if (!lightTextColor) lightTextColor = [UIColor colorWithWhite:0.5 alpha:1.0];

        UIColor *textColor = colorInLightMode(lightTextColor, darkTextColor);
        UIColor *bgColor   = colorInLightMode(lightBgColor, darkBgColor);

        // 防御：确认是 UIColor 再设置，避免外部分享等场景 crash
        if (textColor && [textColor isKindOfClass:[UIColor class]] && [label respondsToSelector:@selector(setTextColor:)]) {
            label.textColor = textColor;
        }
        if (bgColor && [bgColor isKindOfClass:[UIColor class]] && [label respondsToSelector:@selector(setBackgroundColor:)]) {
            label.backgroundColor = bgColor;
        }
    } @catch (NSException *ex) {
        WPLog(@"MsgTime", @"[MioPlugin] updateNodeStatus color error: %@", ex);
    }

    CGFloat cornerRadius = [MessageTimeConfig shared].messageTimeCornerRadius > 0 ? [MessageTimeConfig shared].messageTimeCornerRadius : 8.0;
    label.layer.cornerRadius = cornerRadius;

    // 直接从 CommonMessageCellView(self) 获取 contentView
    id contentViewObj = nil;
    @try { contentViewObj = [cv valueForKey:@"m_contentView"]; } @catch (...) {}
    if (!contentViewObj) {
        @try { contentViewObj = [cv valueForKey:@"contentView"]; } @catch (...) {}
    }

    // 将 contentView frame 转换到 cv 坐标系
    CGRect contentFrame = CGRectZero;
    if (contentViewObj) {
        UIView *contentV = (UIView *)contentViewObj;
        contentFrame = contentV.superview
            ? [cv convertRect:contentV.frame fromView:contentV.superview]
            : contentV.frame;
    }

    if (CGRectEqualToRect(contentFrame, CGRectZero)) {
        contentFrame = cv.bounds; // cv 坐标系下的 bounds，等价但更精确
    }

    CGFloat cvLeft   = contentFrame.origin.x;
    CGFloat cvRight  = contentFrame.origin.x + contentFrame.size.width;
    CGFloat cvBottom = contentFrame.origin.y + contentFrame.size.height;

    CGFloat offsetX = config.messageTimeOffsetX;
    CGFloat offsetY = config.messageTimeOffsetY;

    // 获取头像 frame（position 0/1 需要）
    id avatarView = getAvatarView(cv);
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
    if ([MessageTimeConfig shared].hideChatTime) {
        [self setHidden:YES];
    }
}

static CGFloat repl_ChatTimeViewModel_cellHeight(id self, SEL _cmd) {
    CGFloat h = 0;
    if (orig_ChatTimeViewModel_cellHeight) {
        h = orig_ChatTimeViewModel_cellHeight(self, _cmd);
    }
    if ([MessageTimeConfig shared].hideChatTime) {
        return 0.001;
    }
    return h;
}

static NSString* repl_CContact_m_nsNickName(id self, SEL _cmd) {
    NSString *origName = nil;
    if (orig_CContact_m_nsNickName) {
        origName = orig_CContact_m_nsNickName(self, _cmd);
    }

    MessageTimeConfig *config = [MessageTimeConfig shared];
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
    MessageTimeConfig *config = [MessageTimeConfig shared];

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

            WPLog(@"MsgTime", @"[BUBBLE-EXTEND] isSender=%d extWidth=%.0f x=%.0f->%.0f w=%.0f->%.0f",
                   isSender, extWidth, x + (isSender ? extWidth : 0), x, w - extWidth, w);
        }
    }

    orig_TextMsgCell_setFrameBgImg(self, _cmd, x, y, w, h);
}

// ============================================================
// MARK: - Hook Configuration Table
// ============================================================

static HookTableItem g_hookTable[] = {
    {@"CommonMessageCellView", @"initWithViewModel:",
        (IMP)repl_CommonMessageCellView_initWithViewModel, (IMP *)&orig_CommonMessageCellView_initWithViewModel},
    {@"CommonMessageCellView", @"updateNodeStatus",
        (IMP)repl_CommonMessageCellView_updateNodeStatus, (IMP *)&orig_CommonMessageCellView_updateNodeStatus},
    {@"ChatTimeCellView", @"layoutSubviews",
        (IMP)repl_ChatTimeCellView_layoutSubviews, (IMP *)&orig_ChatTimeCellView_layoutSubviews},
    {@"ChatTimeViewModel", @"cellHeight",
        (IMP)repl_ChatTimeViewModel_cellHeight, (IMP *)&orig_ChatTimeViewModel_cellHeight},
    {@"CContact", @"m_nsNickName",
        (IMP)repl_CContact_m_nsNickName, (IMP *)&orig_CContact_m_nsNickName},
    {@"TextMessageCellView", @"setFrameForBgImageView:",
        (IMP)repl_TextMsgCell_setFrameBgImg, (IMP *)&orig_TextMsgCell_setFrameBgImg},
};

// ============================================================
// MARK: - Installation
// ============================================================

@implementation MessageTimeHook

+ (void)install {
    MessageTimeConfig *config = [MessageTimeConfig shared];
    [_WPLogManager appendLineWithTag:@"MsgTime" content:[NSString stringWithFormat:@"Config - showMessageTime: %d", config.showMessageTime]];
    [_WPLogManager appendLineWithTag:@"MsgTime" content:[NSString stringWithFormat:@"Config - messageTimePosition: %ld", (long)config.messageTimePosition]];

    [HookEngine installHookTable:@"MsgTime" items:g_hookTable
                           count:sizeof(g_hookTable) / sizeof(g_hookTable[0])];
}

@end