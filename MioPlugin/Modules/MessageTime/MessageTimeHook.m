#import "MessageTimeHook.h"
#import "MessageTimeConfig.h"
#import "../Revoke/RevokeConfig.h"
#import "../../Core/WPUtility.h"
#import "MessageTimeFormatParser.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <UIKit/UIKit.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"

// ============================================================
// MARK: - Color / Theme Helpers
// ============================================================

static UIColor *autoDarkColor(UIColor *lightColor, BOOL isDark) {
    if (!lightColor) return nil;
    if (isDark) {
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

static UIColor *colorInLightMode(UIColor *lightColor, UIColor *darkColor, BOOL isDark) {
    return isDark ? (darkColor ?: autoDarkColor(lightColor, isDark)) : lightColor;
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

// ============================================================
// MARK: - updateNodeStatus 辅助函数（长函数拆分）
// ============================================================

/// 从 cell 中安全获取 viewModel，支持多种 KVC key
static id getViewModelFromCell(id cell) {
    id viewModel = nil;
    @try { viewModel = [cell valueForKey:@"m_viewModel"]; } @catch (...) {}
    if (!viewModel) {
        @try { viewModel = [cell valueForKey:@"viewModel"]; } @catch (...) {}
    }
    return viewModel;
}

/// 从 messageWrap 安全获取 createTime（uint）
static unsigned int getCreateTimeFromWrap(id wrap) {
    unsigned int createTime = 0;
    @try {
        if (wrap && [wrap respondsToSelector:NSSelectorFromString(@"m_uiCreateTime")]) {
            createTime = ((unsigned int (*)(id, SEL))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiCreateTime"));
        }
    } @catch (...) {}
    return createTime;
}

/// 计算时间标签尺寸，宽度 clamp 在 30~88 之间
static CGSize computeLabelSize(NSString *text, UIFont *font) {
    if (!text || !font) return CGSizeZero;
    CGSize size = [text boundingRectWithSize:CGSizeMake(CGFLOAT_MAX, CGFLOAT_MAX)
                                      options:NSStringDrawingUsesLineFragmentOrigin
                                   attributes:@{NSFontAttributeName: font}
                                      context:nil].size;
    size.width = MAX(30.0, MIN(size.width + 4.0, 88.0));
    size.height = size.height + 4.0;
    return size;
}

/// 从 cell 获取 contentView frame，转换到 cv 坐标系
static CGRect getContentViewFrame(id cell, UIView *cv) {
    CGRect cvFrame = CGRectZero;
    UIView *contentView = nil;
    @try { contentView = [cell valueForKey:@"m_contentView"]; } @catch (...) {}
    if (!contentView) {
        @try { contentView = [cell valueForKey:@"contentView"]; } @catch (...) {}
    }
    if (contentView && cv) {
        cvFrame = contentView.superview
            ? [cv convertRect:contentView.frame fromView:contentView.superview]
            : contentView.frame;
    }
    if (CGRectEqualToRect(cvFrame, CGRectZero)) {
        cvFrame = cv.bounds;
    }
    return cvFrame;
}

/// 从 cell 获取头像 frame
static CGRect getAvatarFrame(id cell) {
    CGRect avatarFrame = CGRectZero;
    id avatarView = getAvatarView((UIView *)cell);
    if (avatarView) {
        avatarFrame = [(UIView *)avatarView frame];
    }
    return avatarFrame;
}

/// 根据位置编号计算 label.center（8 位置 + 偏移）
/// position:
///   0 = 头像上方, 1 = 头像下方, 2/7 = 消息旁边(气泡外),
///   3 = 消息下方(远离头像), 4 = 消息下方(靠近头像),
///   5 = 消息上方(远离头像), 6 = 消息上方(靠近头像)
static CGPoint computeLabelCenter(CGSize labelSize, CGRect cViewFrame, CGRect avatarFrame,
                                   NSInteger position, CGFloat offsetX, CGFloat offsetY,
                                   BOOL isSender) {
    CGPoint center = CGPointZero;
    CGFloat halfW = labelSize.width / 2;
    CGFloat halfH = labelSize.height / 2;
    CGFloat cvLeft   = cViewFrame.origin.x;
    CGFloat cvRight  = cViewFrame.origin.x + cViewFrame.size.width;
    CGFloat cvBottom = cViewFrame.origin.y + cViewFrame.size.height;

    switch (position) {
        case 0: // 头像上方
            if (!CGRectIsEmpty(avatarFrame)) {
                center = CGPointMake(avatarFrame.origin.x + avatarFrame.size.width / 2,
                                      avatarFrame.origin.y - halfH);
            } else {
                center = CGPointMake(isSender ? (cvLeft - halfW) : (cvRight + halfW),
                                      cvBottom - halfH);
            }
            break;
        case 1: // 头像下方
            if (!CGRectIsEmpty(avatarFrame)) {
                center = CGPointMake(avatarFrame.origin.x + avatarFrame.size.width / 2,
                                      avatarFrame.origin.y + avatarFrame.size.height + halfH);
            } else {
                center = CGPointMake(isSender ? (cvLeft - halfW) : (cvRight + halfW),
                                      cvBottom - halfH);
            }
            break;
        case 2: // 消息旁边(气泡外，发送方靠右，接收方靠左)
        case 7: // 同 case 2
            center = CGPointMake(isSender ? (cvLeft - halfW) : (cvRight + halfW),
                                  cvBottom - halfH);
            break;
        case 3: // 消息下方(远离头像)
            center = CGPointMake(isSender ? (cvLeft + halfW) : (cvRight - halfW),
                                  cvBottom + halfH);
            break;
        case 4: // 消息下方(靠近头像)
            center = CGPointMake(isSender ? (cvRight - halfW) : (cvLeft + halfW),
                                  cvBottom + halfH);
            break;
        case 5: // 消息上方(远离头像)
            center = CGPointMake(isSender ? (cvLeft + halfW) : (cvRight - halfW),
                                  CGRectGetMinY(cViewFrame) - halfH);
            break;
        case 6: // 消息上方(靠近头像)
            center = CGPointMake(isSender ? (cvRight - halfW) : (cvLeft + halfW),
                                  CGRectGetMinY(cViewFrame) - halfH);
            break;
        default: // 同 case 2/7
            center = CGPointMake(isSender ? (cvLeft - halfW) : (cvRight + halfW),
                                  cvBottom - halfH);
            break;
    }
    center.x += isSender ? -offsetX : offsetX;
    center.y -= offsetY;
    return center;
}

/// 将 label 添加到目标 view，确保在最顶层
static void addLabelToView(UILabel *label, UIView *view) {
    if (label && view && ![label superview]) {
        [view addSubview:label];
    }
}

static void repl_CommonMessageCellView_updateNodeStatus(id self, SEL _cmd) {
    // 0. 调用原方法
    if (orig_CommonMessageCellView_updateNodeStatus) {
        orig_CommonMessageCellView_updateNodeStatus(self, _cmd);
    }

    UIView *cv = (UIView *)self;

    // 1. 守卫：功能开关
    UILabel *label = objc_getAssociatedObject(cv, @"msgTimeLabel");
    if (![MessageTimeConfig shared].showMessageTime) {
        if (label) { label.hidden = YES; }
        return;
    }
    if (!label) return;

    // 2. 守卫：VC 转场状态过滤
    UIViewController *vc = [WPUtility findParentViewController:cv];
    BOOL isDark = [WPUtility isDarkModeForViewController:vc];
    UIResponder *r = cv.nextResponder;
    while (r && ![r isKindOfClass:[UIViewController class]]) r = r.nextResponder;
    if (r) {
        UIViewController *parentVC = (UIViewController *)r;
        if (parentVC.presentedViewController || parentVC.isBeingPresented || parentVC.isBeingDismissed) {
            label.hidden = YES;
            return;
        }
    }

    // 3. 数据提取：viewModel
    id viewModel = getViewModelFromCell(cv);
    if (!viewModel) { label.hidden = YES; return; }

    // 4. 复合消息过滤
    MessageTimeConfig *config = [MessageTimeConfig shared];
    NSInteger position = config.messageTimePosition;
    if (!shouldShowMessageTimeForSubViewModel(viewModel, position)) {
        label.hidden = YES;
        return;
    }

    // 5. 数据提取：messageWrap + createTime
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
            createTime = getCreateTimeFromWrap(messageWrap);
        }
        if (createTime == 0 && [viewModel respondsToSelector:NSSelectorFromString(@"createTime")]) {
            @try { createTime = (unsigned int)[[viewModel valueForKey:@"createTime"] unsignedIntValue]; } @catch (...) {}
        }
    } @catch (NSException *e) {}

    if (createTime == 0) { label.hidden = YES; return; }

    // 6. 数据提取：isSender + fromUsr/toUsr
    BOOL isSender = NO;
    @try { isSender = [[viewModel valueForKey:@"isSender"] boolValue]; } @catch (NSException *e) {}

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

    // 7. 伪已读状态计算
    NSString *sessionKey = chatSessionKey(fromUsr, toUsr);
    NSInteger statusCode = computeReadStatus(isSender, sessionKey, createTime);

    // 8. 文本格式化
    NSDate *date = [NSDate dateWithTimeIntervalSince1970:(NSTimeInterval)createTime];
    NSString *timeText = formatMessageTime(date, config.messageTimeCustomFormat, isDark, isSender, statusCode);
    if (!timeText) { label.hidden = YES; return; }

    label.hidden = NO;
    label.text = timeText;

    // 9. 样式：字体 + 尺寸
    CGFloat fontSize = config.messageTimeFontSize > 0 ? config.messageTimeFontSize : 7.0;
    UIFont *font = config.messageTimeBoldFont ? [UIFont boldSystemFontOfSize:fontSize] : [UIFont systemFontOfSize:fontSize];
    label.font = font;
    CGSize labelSize = computeLabelSize(timeText, font);
    label.frame = CGRectMake(0, 0, labelSize.width, labelSize.height);

    // 10. 样式：颜色
    @try {
        NSString *textHex = isSender ? config.senderTextColorHex : config.receiverTextColorHex;
        NSString *textDarkHex = isSender ? config.senderTextColorDarkHex : config.receiverTextColorDarkHex;
        NSString *bgHex = isSender ? config.senderBackgroundColorHex : config.receiverBackgroundColorHex;
        NSString *bgDarkHex = isSender ? config.senderBackgroundColorDarkHex : config.receiverBackgroundColorDarkHex;

        UIColor *lightTextColor = textHex.length ? [WPUtility colorFromHex:textHex] : nil;
        UIColor *darkTextColor  = textDarkHex.length ? [WPUtility colorFromHex:textDarkHex] : nil;
        UIColor *lightBgColor   = bgHex.length ? [WPUtility colorFromHex:bgHex] : nil;
        UIColor *darkBgColor    = bgDarkHex.length ? [WPUtility colorFromHex:bgDarkHex] : nil;

        if (!lightTextColor) lightTextColor = [UIColor colorWithWhite:0.5 alpha:1.0];

        UIColor *textColor = colorInLightMode(lightTextColor, darkTextColor, isDark);
        UIColor *bgColor   = colorInLightMode(lightBgColor, darkBgColor, isDark);

        if (textColor && [textColor isKindOfClass:[UIColor class]]) {
            label.textColor = textColor;
        }
        if (bgColor && [bgColor isKindOfClass:[UIColor class]]) {
            label.backgroundColor = bgColor;
        }
    } @catch (NSException *ex) {
        WPLog(@"MsgTime", @"[MioPlugin] updateNodeStatus color error: %@", ex);
    }

    // 11. 样式：圆角
    CGFloat cornerRadius = config.messageTimeCornerRadius > 0 ? config.messageTimeCornerRadius : 8.0;
    label.layer.cornerRadius = cornerRadius;

    // 12. 布局：获取 frame
    CGRect cViewFrame = getContentViewFrame(self, cv);
    CGRect avatarFrame = getAvatarFrame(self);
    CGFloat offsetX = config.messageTimeOffsetX;
    CGFloat offsetY = config.messageTimeOffsetY;

    // 13. 布局：计算 center
    CGPoint center = computeLabelCenter(labelSize, cViewFrame, avatarFrame, position, offsetX, offsetY, isSender);
    label.center = center;

    // 14. 添加到视图
    addLabelToView(label, cv);
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
// MARK: - Installation
// ============================================================

@implementation MessageTimeHook

+ (void)install {
    WPLog(@"MsgTime", @"========================================");
    WPLog(@"MsgTime", @"MessageTimeHook install");
    WPLog(@"MsgTime", @"========================================");

    // 1. CommonMessageCellView.initWithViewModel:
    {
        Class cls = objc_getClass("CommonMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(initWithViewModel:),
                (IMP)repl_CommonMessageCellView_initWithViewModel, (IMP *)&orig_CommonMessageCellView_initWithViewModel);
            WPLog(@"MsgTime", @"[Hook] ✓ CommonMessageCellView.initWithViewModel:");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ CommonMessageCellView class not found");
        }
    }

    // 2. CommonMessageCellView.updateNodeStatus
    {
        Class cls = objc_getClass("CommonMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(updateNodeStatus),
                (IMP)repl_CommonMessageCellView_updateNodeStatus, (IMP *)&orig_CommonMessageCellView_updateNodeStatus);
            WPLog(@"MsgTime", @"[Hook] ✓ CommonMessageCellView.updateNodeStatus");
        }
    }

    // 3. ChatTimeCellView.layoutSubviews
    {
        Class cls = objc_getClass("ChatTimeCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(layoutSubviews),
                (IMP)repl_ChatTimeCellView_layoutSubviews, (IMP *)&orig_ChatTimeCellView_layoutSubviews);
            WPLog(@"MsgTime", @"[Hook] ✓ ChatTimeCellView.layoutSubviews");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ ChatTimeCellView class not found");
        }
    }

    // 4. ChatTimeViewModel.cellHeight
    {
        Class cls = objc_getClass("ChatTimeViewModel");
        if (cls) {
            MSHookMessageEx(cls, @selector(cellHeight),
                (IMP)repl_ChatTimeViewModel_cellHeight, (IMP *)&orig_ChatTimeViewModel_cellHeight);
            WPLog(@"MsgTime", @"[Hook] ✓ ChatTimeViewModel.cellHeight");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ ChatTimeViewModel class not found");
        }
    }

    // 5. CContact.m_nsNickName
    {
        Class cls = objc_getClass("CContact");
        if (cls) {
            MSHookMessageEx(cls, @selector(m_nsNickName),
                (IMP)repl_CContact_m_nsNickName, (IMP *)&orig_CContact_m_nsNickName);
            WPLog(@"MsgTime", @"[Hook] ✓ CContact.m_nsNickName");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ CContact class not found");
        }
    }

    // 6. TextMessageCellView.setFrameForBgImageView:
    {
        Class cls = objc_getClass("TextMessageCellView");
        if (cls) {
            MSHookMessageEx(cls, @selector(setFrameForBgImageView:),
                (IMP)repl_TextMsgCell_setFrameBgImg, (IMP *)&orig_TextMsgCell_setFrameBgImg);
            WPLog(@"MsgTime", @"[Hook] ✓ TextMessageCellView.setFrameForBgImageView:");
        } else {
            WPLog(@"MsgTime", @"[Hook] ✗ TextMessageCellView class not found");
        }
    }

    WPLog(@"MsgTime", @"MessageTimeHook install complete");
    WPLog(@"MsgTime", @"========================================");
}

@end