#import "MessageTimeHook.h"
#import "../../Config/PluginConfig.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

#import <UIKit/UIKit.h>

static SEL sel_msgTimeLabel = NULL;

static inline id call_msgTimeLabel_getter(id target) {
    return objc_getAssociatedObject(target, sel_msgTimeLabel);
}

static inline void call_msgTimeLabel_setter(id target, id label) {
    objc_setAssociatedObject(target, sel_msgTimeLabel, label, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
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
// MARK: - Logging
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

static UILabel *initTimeLabel(UIView *targetView) {
    UILabel *label = call_msgTimeLabel_getter(targetView);
    if (!label) {
        label = [[UILabel alloc] init];
        label.tag = 999999;
        label.userInteractionEnabled = NO;
        label.textAlignment = NSTextAlignmentCenter;
        call_msgTimeLabel_setter(targetView, label);
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
    formatter.dateFormat = format;
    return [formatter stringFromDate:date];
}

// ============================================================
// MARK: - View Hierarchy Accessors
// ============================================================

static id getCellView(id cell) {
    id cellView = nil;
    @try {
        cellView = [cell valueForKey:@"m_cellView"];
    } @catch (NSException *e) {}
    if (!cellView) {
        @try {
            cellView = [cell valueForKey:@"cellView"];
        } @catch (NSException *e) {}
    }
    return cellView;
}

static id getAvatarView(id cell) {
    id cellView = getCellView(cell);
    if (!cellView) return nil;
    
    SEL sel = NSSelectorFromString(@"getHeadImageView");
    if ([cellView respondsToSelector:sel]) {
        @try {
            id view = ((id (*)(id, SEL))objc_msgSend)(cellView, sel);
            if (view) return view;
        } @catch (NSException *e) {}
    }
    
    @try {
        id view = [cellView valueForKey:@"m_headImageView"];
        if (view) return view;
    } @catch (NSException *e) {}
    
    @try {
        id view = [cellView valueForKey:@"headImageView"];
        if (view) return view;
    } @catch (NSException *e) {}
    
    return nil;
}

static id getBubbleView(id cell) {
    id cellView = getCellView(cell);
    if (!cellView) return nil;
    
    SEL sel = NSSelectorFromString(@"getBgImageView");
    if ([cellView respondsToSelector:sel]) {
        @try {
            id v = ((id (*)(id, SEL))objc_msgSend)(cellView, sel);
            if (v) return v;
        } @catch (NSException *e) {}
    }
    
    @try {
        id v = [cellView valueForKey:@"m_bgImageView"];
        if (v) return v;
    } @catch (NSException *e) {}
    
    @try {
        id v = [cellView valueForKey:@"bgImageView"];
        if (v) return v;
    } @catch (NSException *e) {}
    
    return nil;
}

// ============================================================
// MARK: - Label Positioning (shared between create and update)
// ============================================================

static CGRect computeLabelFrame(CGRect cellFrame, CGSize labelSize, NSInteger position,
                                 CGFloat offsetX, CGFloat offsetY, BOOL isSender,
                                 CGRect bubbleFrame, CGRect avatarFrame) {
    // 微信优化同款公式：以 contentView.bounds 为定位基准，不依赖气泡（position 7 除外）
    CGFloat cw = cellFrame.size.width, ch = cellFrame.size.height;
    CGFloat lw = labelSize.width, lh = labelSize.height;
    BOOL hasAvatar = !CGRectEqualToRect(avatarFrame, CGRectZero);
    
    CGFloat x = 0, y = 0;
    CGRect labelFrame = CGRectZero;
    
    switch (position) {
        case 0:
            if (hasAvatar) {
                x = avatarFrame.origin.x + (avatarFrame.size.width - lw) / 2;
                y = avatarFrame.origin.y - lh;
            } else {
                x = isSender ? 0 : cw - lw;
                y = ch - lh;
            }
            break;
        case 1:
            if (hasAvatar) {
                x = avatarFrame.origin.x + (avatarFrame.size.width - lw) / 2;
                y = avatarFrame.origin.y + avatarFrame.size.height;
            } else {
                x = isSender ? 0 : cw - lw;
                y = ch - lh;
            }
            break;
        case 2:
            x = isSender ? cw - lw : 0;
            y = (ch - lh) / 2;
            break;
        case 3:
            x = isSender ? cw - lw : 0;
            y = ch - lh;
            break;
        case 4:
            x = isSender ? 0 : cw - lw;
            y = ch - lh;
            break;
        case 5:
            x = isSender ? cw - lw : 0;
            y = 0;
            break;
        case 6:
            x = isSender ? 0 : cw - lw;
            y = 0;
            break;
        case 7:
            x = bubbleFrame.origin.x + (bubbleFrame.size.width - lw) / 2;
            y = bubbleFrame.origin.y + bubbleFrame.size.height - lh - 4;
            break;
        default:
            x = isSender ? cw - lw : 0;
            y = ch - lh;
            break;
    }
    
    if (offsetX != 0) x += isSender ? offsetX : -offsetX;
    if (offsetY != 0) y -= offsetY;
    
    CGFloat maxY = ch - lh - 2;
    if (y > maxY) y = maxY;
    if (y < 2) y = 2;
    
    labelFrame.origin.x = x;
    labelFrame.origin.y = y;
    return labelFrame;
}
// ============================================================
// MARK: - Lightweight Frame Refresh (for layoutSubviews callback)
// ============================================================

static void refreshLabelFrameInCellView(id cellView) {
    UILabel *label = call_msgTimeLabel_getter(cellView);
    if (!label) return;

    NSNumber *isSenderNum = objc_getAssociatedObject(cellView, @"msgTimeIsSender");
    if (!isSenderNum) return;
    BOOL isSender = [isSenderNum boolValue];

    id bubbleView = nil;
    SEL bSel = NSSelectorFromString(@"getBgImageView");
    if ([cellView respondsToSelector:bSel]) {
        @try { bubbleView = ((id (*)(id, SEL))objc_msgSend)(cellView, bSel); } @catch (NSException *e) {}
    }
    if (!bubbleView) {
        @try { bubbleView = [cellView valueForKey:@"m_bgImageView"] ?: [cellView valueForKey:@"bgImageView"]; } @catch (NSException *e) {}
    }

    id avatarView = nil;
    SEL aSel = NSSelectorFromString(@"getHeadImageView");
    if ([cellView respondsToSelector:aSel]) {
        @try { avatarView = ((id (*)(id, SEL))objc_msgSend)(cellView, aSel); } @catch (NSException *e) {}
    }
    if (!avatarView) {
        @try { avatarView = [cellView valueForKey:@"m_headImageView"] ?: [cellView valueForKey:@"headImageView"]; } @catch (NSException *e) {}
    }

    CGRect cellFrame = [(UIView *)cellView bounds];
    CGRect bubbleFrame = bubbleView ? [(UIView *)bubbleView frame] : cellFrame;
    CGRect avatarFrame = avatarView ? [(UIView *)avatarView frame] : CGRectZero;

    CGSize labelSize = label.frame.size;
    if (labelSize.width == 0 || labelSize.height == 0) return;

    PluginConfig *config = [PluginConfig shared];

    CGRect newFrame = computeLabelFrame(cellFrame, labelSize, config.messageTimePosition,
                                         config.messageTimeOffsetX, config.messageTimeOffsetY,
                                         isSender, bubbleFrame, avatarFrame);

    if (!CGRectEqualToRect(label.frame, newFrame)) {
        label.frame = newFrame;
    }
}

// ============================================================
// MARK: - Label Creation
// ============================================================

static void addTimeLabelToCell(id cell) {
    @try {
        if (!cell) return;
        
        id cellView = nil;
        @try { cellView = [cell valueForKey:@"m_cellView"] ?: [cell valueForKey:@"cellView"]; } @catch (...) {}
        if (!cellView) return;
        
        if (call_msgTimeLabel_getter(cellView)) {
            return;
        }
        
        CGRect cellFrame = [(UIView *)cellView bounds];
        if (CGRectEqualToRect(cellFrame, CGRectZero)) return;
        
        UIView *staleLabel = [(UIView *)cellView viewWithTag:999999];
        if (staleLabel) [staleLabel removeFromSuperview];
        
        PluginConfig *config = [PluginConfig shared];
        if (!config.showMessageTime) return;

        @try {
            id vm = [cellView valueForKey:@"m_viewModel"] ?: [cellView valueForKey:@"viewModel"];
            if (vm) {
                id pm = [vm valueForKey:@"parentModel"];
                if (pm) {
                    NSArray *subVMs = [pm valueForKey:@"m_subViewModels"] ?: [pm valueForKey:@"subViewModels"];
                    if (subVMs && [subVMs count] > 1 && vm != [subVMs firstObject]) {
                        return;
                    }
                }
            }
        } @catch (NSException *e) {}

        id wrap = objc_getAssociatedObject(cell, @"cachedMsgWrap");
        
        if (!wrap) {
            @try {
                id cv = [cell valueForKey:@"m_cellView"] ?: [cell valueForKey:@"cellView"];
                if (cv) wrap = [cv valueForKey:@"messageWrap"] ?: [cv valueForKey:@"m_messageWrap"];
            } @catch (NSException *e) {}
        }
        
        if (!wrap) {
            @try {
                id viewModel = [cell valueForKey:@"_viewModel"] ?: [cell valueForKey:@"m_viewModel"];
                if (viewModel) {
                    id parentModel = [viewModel valueForKey:@"parentModel"];
                    if (parentModel) wrap = [parentModel valueForKey:@"m_messageWrap"] ?: [parentModel valueForKey:@"messageWrap"];
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
                @try { id vid = [cell valueForKey:@"mesLocalID"]; if (vid) mesLocalID = [vid unsignedIntValue]; } @catch (NSException *e) {}
                if (!mesLocalID) { @try { id vid = [cell valueForKey:@"m_mesLocalID"]; if (vid) mesLocalID = [vid unsignedIntValue]; } @catch (NSException *e) {} }
                if (!mesLocalID) {
                    id cv = getCellView(cell);
                    if (cv) { @try { id vid = [cv valueForKey:@"mesLocalID"]; if (vid) mesLocalID = [vid unsignedIntValue]; } @catch (NSException *e) {} }
                }
                if (mesLocalID > 0) {
                    SEL sel = NSSelectorFromString(@"getMessageWrapInVisibleCellWithMesLocalID:");
                    id responder = cell;
                    while ((responder = [responder nextResponder])) {
                        if ([responder respondsToSelector:sel]) {
                            @try { wrap = ((id (*)(id, SEL, unsigned int))objc_msgSend)(responder, sel, mesLocalID); } @catch (NSException *e) {}
                            break;
                        }
                    }
                }
            } @catch (NSException *e) {}
        }
        
        Class CMessageWrapClass = objc_getClass("CMessageWrap");
        if (!wrap) return;
        if (CMessageWrapClass && ![wrap isKindOfClass:CMessageWrapClass]) return;
        
        unsigned int msgType = 0;
        if ([wrap respondsToSelector:@selector(m_uiMessageType)]) {
            msgType = ((unsigned int (*)(id, SEL))objc_msgSend)(wrap, @selector(m_uiMessageType));
        }
        if (msgType == 10000) return;
        
        unsigned int createTime = 0;
        if ([wrap respondsToSelector:@selector(m_uiCreateTime)]) {
            createTime = ((unsigned int (*)(id, SEL))objc_msgSend)(wrap, @selector(m_uiCreateTime));
        }
        if (createTime == 0) return;
        
        id avatarView = getAvatarView(cell);
        
        NSDate *messageDate = [NSDate dateWithTimeIntervalSince1970:createTime];
        NSString *timeString = formatMessageTime(messageDate, config.messageTimeFormat);
        if (!timeString) return;
        
        UILabel *timeLabel = initTimeLabel((UIView *)cellView);
        timeLabel.text = timeString;

        CGFloat fontSize = config.messageTimeFontSize > 0 ? config.messageTimeFontSize : 7.0;
        UIFont *font = config.messageTimeBoldFont ? [UIFont boldSystemFontOfSize:fontSize] : [UIFont systemFontOfSize:fontSize];
        timeLabel.font = font;
        
        UIView *bubbleView = getBubbleView(cell);
        
        BOOL isSender = NO;
        {
            id targetCellView = getCellView(cell);
            id senderTarget = targetCellView ?: cell;
            SEL senderSel = NSSelectorFromString(@"isSenderFromMsgWrap:");
            if ([senderTarget respondsToSelector:senderSel]) {
                @try { isSender = ((BOOL (*)(id, SEL, id))objc_msgSend)(senderTarget, senderSel, wrap); } @catch (NSException *e) {}
            }
            if (!isSender && senderTarget != cell && [cell respondsToSelector:senderSel]) {
                @try { isSender = ((BOOL (*)(id, SEL, id))objc_msgSend)(cell, senderSel, wrap); } @catch (NSException *e) {}
            }
            if (!isSender && bubbleView) {
                UIView *bv = (UIView *)bubbleView;
                CGRect bfCell = [cell convertRect:bv.frame fromView:bv.superview];
                isSender = CGRectGetMidX(bfCell) > cellFrame.size.width / 2;
            }
        }
        
        UIColor *textColor = nil;
        UIColor *bgColor = nil;
        if (isSender) {
            textColor = [config colorFromHex:config.senderTextColorHex] ?: [UIColor colorWithWhite:0.5 alpha:1.0];
            NSString *bgHex = config.senderBackgroundColorHex;
            if (bgHex.length > 0 && ![bgHex isEqualToString:@"#00000000"]) bgColor = [config colorFromHex:bgHex];
        } else {
            textColor = [config colorFromHex:config.receiverTextColorHex] ?: [UIColor colorWithWhite:0.5 alpha:1.0];
            NSString *bgHex = config.receiverBackgroundColorHex;
            if (bgHex.length > 0 && ![bgHex isEqualToString:@"#00000000"]) bgColor = [config colorFromHex:bgHex];
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
            CGRect bf = bubbleView.frame;
            bf.size.width += config.messageTimeBubbleExtWidth;
            bubbleView.frame = bf;
        }
        
        CGRect avatarFrame = [(UIView *)avatarView frame];
        CGRect bubbleFrame;
        if (bubbleView) {
            bubbleFrame = [(UIView *)bubbleView frame];
        } else {
            bubbleFrame = cellFrame;
            bubbleFrame.origin = CGPointZero;
        }
        if (CGRectEqualToRect(bubbleFrame, CGRectZero)) {
            bubbleFrame = cellFrame;
            bubbleFrame.origin = CGPointZero;
        }
        
        labelFrame = computeLabelFrame(cellFrame, labelSize, position, offsetX, offsetY, isSender, bubbleFrame, avatarFrame);
        
        timeLabel.frame = labelFrame;
        
        if (![timeLabel superview]) {
            [cellView addSubview:timeLabel];
            objc_setAssociatedObject(cell, @"messageTimeCreateTime", @(createTime), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            objc_setAssociatedObject(cellView, @"msgTimeIsSender", @(isSender), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        
    } @catch (NSException *e) {}
}

// ============================================================
// MARK: - Original Function Pointers (one per hook target)
// ============================================================

static UITableViewCell* (*orig_BaseMsgContentVC_cellForRow)(id, SEL, id, NSIndexPath*);
static void (*orig_BaseMsgContentVC_willDisplayCell)(id, SEL, id, id, NSIndexPath*);
static void (*orig_BaseMsgContentVC_viewDidLayoutSubviews)(id, SEL);
static void (*orig_CommonMsgCellView_layoutSubviews)(id, SEL);
static void (*orig_CommonMsgCellView_prepareForReuse)(id, SEL);
static void (*orig_ChatTimeCellView_layoutSubviews)(id, SEL);
static CGFloat (*orig_ChatTimeViewModel_cellHeight)(id, SEL);
static NSString* (*orig_CContact_m_nsNickName)(id, SEL);

// ============================================================
// MARK: - Replacement Functions
// ============================================================

static UITableViewCell* repl_cellForRow(id self, SEL _cmd, id tv, NSIndexPath *ip) {
    UITableViewCell *cell = orig_BaseMsgContentVC_cellForRow(self, _cmd, tv, ip);
    if (![PluginConfig shared].showMessageTime || !cell) return cell;

    id cellView = nil;
    id wrap = nil;

    @try { cellView = [cell valueForKey:@"m_cellView"]; } @catch (NSException *e) {}
    if (!cellView) { @try { cellView = [cell valueForKey:@"cellView"]; } @catch (NSException *e) {} }
    if (!cellView) {
        for (UIView *sv in [(UIView *)cell subviews]) {
            if ([NSStringFromClass([sv class]) containsString:@"CellView"]) {
                cellView = sv;
                break;
            }
        }
    }
    if (!cellView) return cell;

    @try {
        id viewModel = [cellView valueForKey:@"m_viewModel"] ?: [cellView valueForKey:@"viewModel"];
        if (viewModel) wrap = [viewModel valueForKey:@"messageWrap"] ?: [viewModel valueForKey:@"m_messageWrap"];
    } @catch (NSException *e) {}
    if (!wrap) {
        @try { wrap = [cellView valueForKey:@"messageWrap"] ?: [cellView valueForKey:@"m_messageWrap"]; } @catch (NSException *e) {}
    }

    if (!wrap) return cell;
    if (![wrap isKindOfClass:objc_getClass("CMessageWrap")]) return cell;

    objc_setAssociatedObject(cell, @"cachedMsgWrap", wrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return cell;
}

static void repl_willDisplayCell(id self, SEL _cmd, id tv, id cell, NSIndexPath *ip) {
    if (orig_BaseMsgContentVC_willDisplayCell) {
        orig_BaseMsgContentVC_willDisplayCell(self, _cmd, tv, cell, ip);
    }
    
    if (![PluginConfig shared].showMessageTime) return;
    if (!cell) return;
    
    dispatch_async(dispatch_get_main_queue(), ^{
        addTimeLabelToCell(cell);
    });
}

static void repl_CommonMsgCellView_layoutSubviews(id self, SEL _cmd) {
    if (orig_CommonMsgCellView_layoutSubviews) {
        orig_CommonMsgCellView_layoutSubviews(self, _cmd);
    }

    if (![PluginConfig shared].showMessageTime) return;

    id cell = [self superview];
    while (cell && ![NSStringFromClass([cell class]) containsString:@"ChatTableViewCell"]) {
        cell = [cell superview];
    }
    if (!cell) return;

    id wrap = objc_getAssociatedObject(cell, @"cachedMsgWrap");
    if (!wrap) return;

    refreshLabelFrameInCellView(self);
}

static void repl_CommonMsgCellView_prepareForReuse(id self, SEL _cmd) {
    if (orig_CommonMsgCellView_prepareForReuse) {
        orig_CommonMsgCellView_prepareForReuse(self, _cmd);
    }

    UILabel *oldLabel = call_msgTimeLabel_getter(self);
    if (oldLabel) {
        [oldLabel removeFromSuperview];
    }
    UIView *tagLabel = [(UIView *)self viewWithTag:999999];
    if (tagLabel && tagLabel != oldLabel) {
        [tagLabel removeFromSuperview];
    }
    call_msgTimeLabel_setter(self, nil);
    objc_setAssociatedObject(self, @"msgTimeIsSender", nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static void repl_BaseMsgContentVC_viewDidLayoutSubviews(id self, SEL _cmd) {
    if (orig_BaseMsgContentVC_viewDidLayoutSubviews) {
        orig_BaseMsgContentVC_viewDidLayoutSubviews(self, _cmd);
    }

    if (![PluginConfig shared].showMessageTime) return;

    id tableView = nil;
    @try { tableView = [self valueForKey:@"m_tableView"] ?: [self valueForKey:@"tableView"]; } @catch (NSException *e) {}
    if (!tableView) return;

    NSArray *visibleCells = [tableView visibleCells];
    for (id cell in visibleCells) {
        id cellView = nil;
        @try { cellView = [cell valueForKey:@"m_cellView"] ?: [cell valueForKey:@"cellView"]; } @catch (NSException *e) {}
        if (cellView) {
            refreshLabelFrameInCellView(cellView);
        }
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

    static NSDateFormatter *suffixFormatter = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        suffixFormatter = [[NSDateFormatter alloc] init];
        suffixFormatter.locale = [[NSLocale alloc] initWithLocaleIdentifier:@"en_US_POSIX"];
    });
    suffixFormatter.dateFormat = config.addTimeSuffixFormat;
    NSString *suffix = [suffixFormatter stringFromDate:[NSDate dateWithTimeIntervalSince1970:addTime]];

    return [NSString stringWithFormat:@"%@ %@", origName, suffix];
}

// ============================================================
// MARK: - Hook Configuration Table
// ============================================================

static MTHookEntry g_hookTable[] = {
    {"BaseMsgContentViewController", "tableView:cellForRowAtIndexPath:",              (IMP)repl_cellForRow,                                  (IMP*)&orig_BaseMsgContentVC_cellForRow},
    {"BaseMsgContentViewController", "tableView:willDisplayCell:forRowAtIndexPath:",  (IMP)repl_willDisplayCell,                             (IMP*)&orig_BaseMsgContentVC_willDisplayCell},
    {"BaseMsgContentViewController", "viewDidLayoutSubviews",                 (IMP)repl_BaseMsgContentVC_viewDidLayoutSubviews,       (IMP*)&orig_BaseMsgContentVC_viewDidLayoutSubviews},
    {"CommonMessageCellView",        "layoutSubviews",                                (IMP)repl_CommonMsgCellView_layoutSubviews,            (IMP*)&orig_CommonMsgCellView_layoutSubviews},
    {"CommonMessageCellView",        "prepareForReuse",                               (IMP)repl_CommonMsgCellView_prepareForReuse,           (IMP*)&orig_CommonMsgCellView_prepareForReuse},
    {"ChatTimeCellView",             "layoutSubviews",                                (IMP)repl_ChatTimeCellView_layoutSubviews,             (IMP*)&orig_ChatTimeCellView_layoutSubviews},
    {"ChatTimeViewModel",            "cellHeight",                                    (IMP)repl_ChatTimeViewModel_cellHeight,                 (IMP*)&orig_ChatTimeViewModel_cellHeight},
    {"CContact",                     "m_nsNickName",                                  (IMP)repl_CContact_m_nsNickName,                       (IMP*)&orig_CContact_m_nsNickName},
};

static const int g_hookTableCount = sizeof(g_hookTable) / sizeof(g_hookTable[0]);

// ============================================================
// MARK: - Installation
// ============================================================

@implementation MessageTimeHook

+ (void)install {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
    mtLog(@"========================================");
    mtLog(@"MessageTimeHook install - cellForRow + willDisplayCell");
    mtLog(@"========================================");

    PluginConfig *config = [PluginConfig shared];
    mtLog([NSString stringWithFormat:@"Config - showMessageTime: %d", config.showMessageTime]);
    mtLog([NSString stringWithFormat:@"Config - messageTimePosition: %ld", (long)config.messageTimePosition]);
    mtLog([NSString stringWithFormat:@"Config - messageTimeFontSize: %.1f", config.messageTimeFontSize]);
    mtLog([NSString stringWithFormat:@"Config - messageTimeFormat: %@", config.messageTimeFormat]);
    mtLog([NSString stringWithFormat:@"Config - messageTimeOffsetX: %.2f", config.messageTimeOffsetX]);
    mtLog([NSString stringWithFormat:@"Config - messageTimeOffsetY: %.2f", config.messageTimeOffsetY]);

    sel_msgTimeLabel = sel_registerName("msgTimeLabel");

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
    }); // dispatch_once
}

@end