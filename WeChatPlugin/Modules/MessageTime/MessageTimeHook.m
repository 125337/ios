#import "MessageTimeHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/HookEngine.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>



static void mtLog(NSString *content) {
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

static UIImageView *getAvatarView(id cell) {
    UIImageView *avatarView = nil;
    
    id cellView = getCellView(cell);
    NSString *cellCls = NSStringFromClass([cell class]);
    
    for (id target in @[cellView ?: [NSNull null], cell]) {
        if (!target || [target isKindOfClass:[NSNull class]]) continue;
        NSString *targetCls = NSStringFromClass([target class]);
        mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: searching on target=%@ (cell=%@)", targetCls, cellCls]);
        
        // avatarView / avatarImageView / headImg
        if (!avatarView) {
            for (NSString *key in @[@"avatarView", @"avatarImageView", @"headImg"]) {
                @try {
                    id view = [target valueForKey:key];
                    if (view) {
                        mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: %@ found, class=%@, isImageView=%d", key, NSStringFromClass([view class]), [view isKindOfClass:[UIImageView class]]]);
                        if ([view isKindOfClass:[UIImageView class]]) {
                            avatarView = (UIImageView *)view;
                            break;
                        }
                    } else {
                        mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: %@ returned nil on %@", key, targetCls]);
                    }
                } @catch (NSException *e) {
                    mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: %@ threw on %@: %@", key, targetCls, e.reason]);
                }
            }
        }
        
        // leftAvatarView / rightAvatarView selector
        if (!avatarView) {
            for (NSString *selName in @[@"leftAvatarView", @"rightAvatarView"]) {
                SEL sel = NSSelectorFromString(selName);
                BOOL responds = [target respondsToSelector:sel];
                mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: %@ responds=%@ on %@", selName, responds?@"YES":@"NO", targetCls]);
                if (responds) {
                    @try {
                        id view = ((id (*)(id, SEL))objc_msgSend)(target, sel);
                        mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: %@ returned class=%@", selName, NSStringFromClass([view class])]);
                        if ([view isKindOfClass:[UIImageView class]]) {
                            avatarView = (UIImageView *)view;
                            break;
                        }
                    } @catch (NSException *e) {}
                }
            }
        }
        
        // m_headImageView KVC
        if (!avatarView) {
            @try {
                id view = [target valueForKey:@"m_headImageView"];
                mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: m_headImageView found=%@", view?@"YES":@"NO"]);
                if ([view isKindOfClass:[UIImageView class]]) avatarView = view;
            } @catch (NSException *e) {
                mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: m_headImageView threw: %@", e.reason]);
            }
        }
        
        // subviews 遍历
        if (!avatarView) {
            int subviewCount = (int)[[target subviews] count];
            mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: scanning %d subviews on %@", subviewCount, targetCls]);
            for (UIView *subview in [target subviews]) {
                if ([subview isKindOfClass:[UIImageView class]]) {
                    NSString *cn = NSStringFromClass([subview class]);
                    if ([cn containsString:@"Head"] || [cn containsString:@"Avatar"]) {
                        mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: subview match class=%@ frame=%@", cn, NSStringFromCGRect(subview.frame)]);
                        avatarView = (UIImageView *)subview;
                        break;
                    }
                }
            }
            if (!avatarView) mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: no subview match on %@", targetCls]);
        }
        
        if (avatarView) break;
    }
    
    if (!avatarView) mtLog(@"[DBG] getAvatarView: FAILED - all paths returned nil");
    return avatarView;
}

static UIView *getBubbleView(id cell) {
    UIView *bubbleView = nil;
    
    id cellView = getCellView(cell);
    NSString *cellCls = NSStringFromClass([cell class]);
    
    for (id target in @[cellView ?: [NSNull null], cell]) {
        if (!target || [target isKindOfClass:[NSNull class]]) continue;
        NSString *targetCls = NSStringFromClass([target class]);
        mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: searching on target=%@ (cell=%@)", targetCls, cellCls]);
        
        // bubbleView selector
        if (!bubbleView) {
            SEL sel = NSSelectorFromString(@"bubbleView");
            BOOL responds = [target respondsToSelector:sel];
            mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: bubbleView responds=%@ on %@", responds?@"YES":@"NO", targetCls]);
            if (responds) {
                @try {
                    id v = ((id (*)(id, SEL))objc_msgSend)(target, sel);
                    mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: bubbleView returned class=%@", NSStringFromClass([v class])]);
                    if (v) bubbleView = v;
                } @catch (NSException *e) {
                    mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: bubbleView threw: %@", e.reason]);
                }
            }
        }
        
        // bgImageView KVC
        if (!bubbleView) {
            @try {
                id v = [target valueForKey:@"bgImageView"];
                if (v) {
                    mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: bgImageView found, class=%@ frame=%@", NSStringFromClass([v class]), NSStringFromCGRect([v frame])]);
                    bubbleView = v;
                } else {
                    mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: bgImageView returned nil on %@", targetCls]);
                }
            } @catch (NSException *e) {
                mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: bgImageView threw on %@: %@", targetCls, e.reason]);
            }
        }
        
        // 遍历 subviews
        if (!bubbleView) {
            int cnt = (int)[[target subviews] count];
            mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: scanning %d subviews on %@", cnt, targetCls]);
            for (UIView *sv in [target subviews]) {
                NSString *cn = NSStringFromClass([sv class]);
                if ([cn containsString:@"RichTextView"] || [cn containsString:@"BubbleView"] ||
                    [cn containsString:@"MessageView"] || [cn containsString:@"BgImageView"]) {
                    mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: subview match class=%@ frame=%@", cn, NSStringFromCGRect(sv.frame)]);
                    bubbleView = sv;
                    break;
                }
            }
            if (!bubbleView) mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: no subview match on %@", targetCls]);
        }
        
        if (bubbleView) break;
    }
    
    if (!bubbleView) mtLog(@"[DBG] getBubbleView: FAILED - all paths returned nil");
    return bubbleView;
}

// 微信优化方案：独立的气泡 frame 设置方法
static void setFrameForBubbleView(id cell, CGRect frame) {
    UIView *bubble = getBubbleView(cell);
    if (bubble) {
        bubble.frame = frame;
    }
}

static int g_callCount = 0;

static void addTimeLabelToCell(id cell) {
    @try {
        if (!cell) {
            mtLog(@"addTimeLabelToCell: cell is nil");
            return;
        }
        
        // 获取调用栈（判断是从 willDisplayCell 还是 layoutSubviews 来的）
        NSArray *callStack = [NSThread callStackSymbols];
        NSString *from = @"unknown";
        if (callStack.count > 2) {
            NSString *frame2 = callStack[2];
            if ([frame2 containsString:@"willDisplayCell"]) from = @"willDisplayCell";
            else if ([frame2 containsString:@"layoutSubviews"]) from = @"layoutSubviews";
        }
        
        NSString *cellClass = NSStringFromClass([cell class]);
        g_callCount++;
        mtLog([NSString stringWithFormat:@"=== addTimeLabelToCell #%d called on: %@ (from: %@) ===", g_callCount, cellClass, from]);
        
        // 打印 cell 的子视图结构
        UIView *cellViewDbg = (UIView *)cell;
        mtLog([NSString stringWithFormat:@"[DBG] cell.subviews count=%lu", (unsigned long)[cellViewDbg.subviews count]]);
        for (UIView *sv in cellViewDbg.subviews) {
            mtLog([NSString stringWithFormat:@"[DBG] cell.subview: class=%@ tag=%ld frame=%@", NSStringFromClass([sv class]), (long)sv.tag, NSStringFromCGRect(sv.frame)]);
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
        
        // 路径1: cell → m_cellView → viewModel → messageWrap
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
        
        // 路径2: cell → _viewModel → parentModel → m_messageWrap (旧版兼容)
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
                        if (wrap) mtLog(@"Got wrap from _viewModel→parentModel");
                    }
                }
            } @catch (NSException *e) {
                mtLog([NSString stringWithFormat:@"_viewModel path exception: %@", e]);
            }
        }
        
        // 路径3: 直接在 cellView 上查找 getCurrentMessageWrap / messageWrap
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
        
        UIImageView *avatarView = getAvatarView(cell);
        
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
        
        UIColor *textColor = [config colorFromHex:config.messageTimeTextColor] ?: [UIColor colorWithWhite:0.5 alpha:1.0];
        
        timeLabel.textColor = colorInLightMode(textColor, autoDarkColor(textColor));
        timeLabel.backgroundColor = [UIColor clearColor];
        
        CGSize textSize = [timeString sizeWithAttributes:@{NSFontAttributeName: timeLabel.font}];
        CGSize labelSize = CGSizeMake(textSize.width, textSize.height);
        
        mtLog([NSString stringWithFormat:@"labelSize: %@", NSStringFromCGSize(labelSize)]);
        
        timeLabel.adjustsFontSizeToFitWidth = YES;
        timeLabel.minimumScaleFactor = 0.8;
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
        
        CGRect avatarFrame = avatarView.frame;
        CGRect bubbleFrame = bubbleView ? bubbleView.frame : cellFrame;
        
        BOOL isSender = NO;
        id targetCellView = getCellView(cell);
        id senderTarget = targetCellView ?: cell;
        
        // 仅通过 isSenderFromMsgWrap: 判断发送者（微信助手方案）
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
        
        // 3. 兜底：通过气泡位置判断
        if (!isSender && bubbleView) {
            isSender = CGRectGetMidX(bubbleView.frame) > CGRectGetMidX(cellFrame);
        }
        
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
            case 0: // 头像上方
                if (!CGRectEqualToRect(avatarFrame, CGRectZero)) {
                    labelFrame.origin.x = avatarFrame.origin.x + (avatarFrame.size.width - labelFrame.size.width) / 2;
                    labelFrame.origin.y = avatarFrame.origin.y - labelFrame.size.height - offsetY;
                } else {
                    labelFrame.origin.x = nearSideX;
                    labelFrame.origin.y = bubbleFrame.origin.y - labelFrame.size.height - offsetY;
                }
                break;
                
            case 1: // 头像下方
                if (!CGRectEqualToRect(avatarFrame, CGRectZero)) {
                    labelFrame.origin.x = avatarFrame.origin.x + (avatarFrame.size.width - labelFrame.size.width) / 2;
                    labelFrame.origin.y = avatarFrame.origin.y + avatarFrame.size.height + offsetY;
                } else {
                    labelFrame.origin.x = nearSideX;
                    labelFrame.origin.y = bubbleFrame.origin.y + bubbleFrame.size.height + offsetY;
                }
                break;
                
            case 2: // 消息旁边(远离头像)
                if (isSender) {
                    labelFrame.origin.x = bubbleFrame.origin.x - labelFrame.size.width - offsetX;
                } else {
                    labelFrame.origin.x = bubbleFrame.origin.x + bubbleFrame.size.width + offsetX;
                }
                labelFrame.origin.y = bubbleFrame.origin.y + (bubbleFrame.size.height - labelFrame.size.height) / 2;
                break;
                
            case 3: // 消息下方(远离头像)
                labelFrame.origin.x = farSideX;
                labelFrame.origin.y = bubbleFrame.origin.y + bubbleFrame.size.height + offsetY;
                break;
                
            case 4: // 消息下方(靠近头像)
                labelFrame.origin.x = nearSideX;
                labelFrame.origin.y = bubbleFrame.origin.y + bubbleFrame.size.height + offsetY;
                break;
                
            case 5: // 消息上方(远离头像)
                labelFrame.origin.x = farSideX;
                labelFrame.origin.y = bubbleFrame.origin.y - labelFrame.size.height - offsetY;
                break;
                
            case 6: // 消息上方(靠近头像)
                labelFrame.origin.x = nearSideX;
                labelFrame.origin.y = bubbleFrame.origin.y - labelFrame.size.height - offsetY;
                break;
                
            case 7: // 消息内部(仅文本信息生效)
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
        
        // 方向感知偏移：左侧正值向左，右侧正值向右
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

static NSMutableDictionary<NSString *, NSValue *> *gOrigIMPs = nil;

static void hookCellForTime(NSString *className) {
    Class cls = objc_getClass(className.UTF8String);
    if (!cls) {
        mtLog([NSString stringWithFormat:@"Class not found: %@", className]);
        return;
    }
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        gOrigIMPs = [NSMutableDictionary dictionary];
    });
    
    // layoutSubviews 作为兜底（willDisplayCell 可能因版本差异找不到）
    // prepareForReuse 做清理：Cell 复用时移除旧标签和关联状态，防止残留导致重复
    for (NSString *methodName in @[@"layoutSubviews", @"prepareForReuse"]) {
        SEL sel = NSSelectorFromString(methodName);
        Method m = class_getInstanceMethod(cls, sel);
        if (!m) continue;
        
        mtLog([NSString stringWithFormat:@"Hooking %@ - %@", className, methodName]);
        
        NSString *key = [NSString stringWithFormat:@"%@_%@", className, methodName];
        IMP origIMP = method_getImplementation(m);
        const char *typeEncoding = method_getTypeEncoding(m);
        [gOrigIMPs setObject:[NSValue valueWithPointer:origIMP] forKey:key];
        
        IMP newIMP = imp_implementationWithBlock(^void(id self) {
            NSValue *impValue = gOrigIMPs[key];
            if (impValue) {
                IMP orig = [impValue pointerValue];
                ((void (*)(id, SEL))orig)(self, sel);
            }
            
            // prepareForReuse：彻底清理时间标签，防止复用后残留
            if (sel == NSSelectorFromString(@"prepareForReuse")) {
                UIView *oldLabel = [self viewWithTag:999999];
                if (oldLabel) {
                    [oldLabel removeFromSuperview];
                }
                objc_setAssociatedObject(self, @"messageTimeLabel", nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(self, @"messageTimeLastIdentifier", nil, OBJC_ASSOCIATION_COPY_NONATOMIC);
                objc_setAssociatedObject(self, @"messageTimeCreateTime", nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                return;
            }
            
            // layoutSubviews：微信助手方案 — 只调原始实现，不创建/更新时间标签
            // 全交给 willDisplayCell 处理，此时数据一定已就绪，避免时序问题
        });
        
        BOOL added = class_addMethod(cls, sel, newIMP, typeEncoding);
        if (!added) {
            method_setImplementation(m, newIMP);
        }
        
        mtLog([NSString stringWithFormat:@"Hooked %@ - %@", className, methodName]);
    }
}

static void hookWillDisplayCell(void) {
    // Hook tableView:willDisplayCell:forRowAtIndexPath:
    // 这是微信助手使用的 Hook 策略 — Cell 即将显示时才触发，只调用一次，天然避免重复
    Class vcClass = objc_getClass("BaseMsgContentViewController");
    if (!vcClass) {
        mtLog(@"BaseMsgContentViewController not found, skipping willDisplayCell hooks");
        return;
    }
    
    // === tableView:willDisplayCell:forRowAtIndexPath: ===
    SEL tvSel = @selector(tableView:willDisplayCell:forRowAtIndexPath:);
    Method tvMethod = class_getInstanceMethod(vcClass, tvSel);
    if (tvMethod) {
        NSString *tvKey = @"BaseMsgContentViewController_tableView_willDisplayCell";
        IMP origTVIMP = method_getImplementation(tvMethod);
        const char *tvTypeEncoding = method_getTypeEncoding(tvMethod);
        [gOrigIMPs setObject:[NSValue valueWithPointer:origTVIMP] forKey:tvKey];
        
        IMP newTVIMP = imp_implementationWithBlock(^void(id self, UITableView *tableView, UITableViewCell *cell, NSIndexPath *indexPath) {
            // 先调用原始实现
            NSValue *impValue = gOrigIMPs[tvKey];
            if (impValue) {
                IMP orig = [impValue pointerValue];
                ((void (*)(id, SEL, id, id, id))orig)(self, tvSel, tableView, cell, indexPath);
            }
            // 添加时间标签
            addTimeLabelToCell(cell);
        });
        
        BOOL added = class_addMethod(vcClass, tvSel, newTVIMP, tvTypeEncoding);
        if (!added) {
            method_setImplementation(tvMethod, newTVIMP);
        }
        mtLog(@"Hooked BaseMsgContentViewController - tableView:willDisplayCell:forRowAtIndexPath:");
    } else {
        mtLog(@"tableView:willDisplayCell:forRowAtIndexPath: not found on BaseMsgContentViewController");
    }
    
    // === collectionView:willDisplayCell:forItemAtIndexPath: ===
    SEL cvSel = @selector(collectionView:willDisplayCell:forItemAtIndexPath:);
    Method cvMethod = class_getInstanceMethod(vcClass, cvSel);
    if (cvMethod) {
        NSString *cvKey = @"BaseMsgContentViewController_collectionView_willDisplayCell";
        IMP origCVIMP = method_getImplementation(cvMethod);
        const char *cvTypeEncoding = method_getTypeEncoding(cvMethod);
        [gOrigIMPs setObject:[NSValue valueWithPointer:origCVIMP] forKey:cvKey];
        
        IMP newCVIMP = imp_implementationWithBlock(^void(id self, UICollectionView *collectionView, UICollectionViewCell *cell, NSIndexPath *indexPath) {
            // 先调用原始实现
            NSValue *impValue = gOrigIMPs[cvKey];
            if (impValue) {
                IMP orig = [impValue pointerValue];
                ((void (*)(id, SEL, id, id, id))orig)(self, cvSel, collectionView, cell, indexPath);
            }
            // 添加时间标签
            addTimeLabelToCell((id)cell);
        });
        
        BOOL added = class_addMethod(vcClass, cvSel, newCVIMP, cvTypeEncoding);
        if (!added) {
            method_setImplementation(cvMethod, newCVIMP);
        }
        mtLog(@"Hooked BaseMsgContentViewController - collectionView:willDisplayCell:forItemAtIndexPath:");
    } else {
        mtLog(@"collectionView:willDisplayCell:forItemAtIndexPath: not found on BaseMsgContentViewController");
    }
}

@implementation MessageTimeHook

+ (void)install {
    mtLog(@"========================================");
    mtLog(@"MessageTimeHook install - full version");
    mtLog(@"========================================");
    
    PluginConfig *config = [PluginConfig shared];
    mtLog([NSString stringWithFormat:@"Config - showMessageTime: %d", config.showMessageTime]);
    mtLog([NSString stringWithFormat:@"Config - messageTimePosition: %ld", (long)config.messageTimePosition]);
    mtLog([NSString stringWithFormat:@"Config - messageTimeFontSize: %.1f", config.messageTimeFontSize]);
    mtLog([NSString stringWithFormat:@"Config - messageTimeFormat: %@", config.messageTimeFormat]);
    mtLog([NSString stringWithFormat:@"Config - messageTimeOffsetX: %.2f", config.messageTimeOffsetX]);
    mtLog([NSString stringWithFormat:@"Config - messageTimeOffsetY: %.2f", config.messageTimeOffsetY]);
    
    Class cellClass = objc_getClass("ChatTableViewCell");
    if (cellClass) {
        mtLog(@"Found ChatTableViewCell class");
        hookCellForTime(@"ChatTableViewCell");
        mtLog(@"Using ChatTableViewCell hook");
    } else {
        mtLog(@"ChatTableViewCell not found, using fallback");
        NSArray *cellClasses = @[
            @"TextMessageCellView",
            @"ImageMessageCellView",
            @"VideoMessageCellView",
            @"VoiceMessageCellView",
            @"EmoticonMessageCellView",
            @"LocationMessageCellView",
            @"CommonMessageCellView",
            @"BaseMessageCellView"
        ];
        
        for (NSString *className in cellClasses) {
            hookCellForTime(className);
        }
        mtLog(@"Fallback to MessageCellView hooks");
    }
    
    // 微信助手策略：willDisplayCell 作为主入口，只触发一次，天然防重复
    hookWillDisplayCell();
    
    Class chatTimeCellViewClass = objc_getClass("ChatTimeCellView");
    if (chatTimeCellViewClass) {
        SEL layoutSel = @selector(layoutSubviews);
        Method layoutMethod = class_getInstanceMethod(chatTimeCellViewClass, layoutSel);
        if (layoutMethod) {
            NSString *key = @"ChatTimeCellView_layoutSubviews";
            IMP origLayoutIMP = method_getImplementation(layoutMethod);
            const char *layoutTypeEncoding = method_getTypeEncoding(layoutMethod);
            [gOrigIMPs setObject:[NSValue valueWithPointer:origLayoutIMP] forKey:key];
            
            IMP newLayoutIMP = imp_implementationWithBlock(^void(id self) {
                NSValue *impValue = gOrigIMPs[key];
                if (impValue) {
                    IMP orig = [impValue pointerValue];
                    ((void (*)(id, SEL))orig)(self, layoutSel);
                }
                if ([PluginConfig shared].hideChatTime) {
                    [self setHidden:YES];
                }
            });
            BOOL layoutAdded = class_addMethod(chatTimeCellViewClass, layoutSel, newLayoutIMP, layoutTypeEncoding);
            if (!layoutAdded) {
                method_setImplementation(layoutMethod, newLayoutIMP);
            }
            mtLog(@"Hooked ChatTimeCellView - layoutSubviews");
        }
    }
    
    Class chatTimeViewModelClass = objc_getClass("ChatTimeViewModel");
    if (chatTimeViewModelClass) {
        SEL heightSel = NSSelectorFromString(@"cellHeight");
        Method heightMethod = class_getInstanceMethod(chatTimeViewModelClass, heightSel);
        if (heightMethod) {
            NSString *key = @"ChatTimeViewModel_cellHeight";
            IMP origHeightIMP = method_getImplementation(heightMethod);
            const char *heightTypeEncoding = method_getTypeEncoding(heightMethod);
            [gOrigIMPs setObject:[NSValue valueWithPointer:origHeightIMP] forKey:key];
            
            IMP newHeightIMP = imp_implementationWithBlock(^double(id self) {
                NSValue *impValue = gOrigIMPs[key];
                double origHeight = 0;
                if (impValue) {
                    IMP orig = [impValue pointerValue];
                    origHeight = ((double (*)(id, SEL))orig)(self, heightSel);
                }
                if ([PluginConfig shared].hideChatTime) {
                    return 0.001;
                }
                return origHeight;
            });
            BOOL heightAdded = class_addMethod(chatTimeViewModelClass, heightSel, newHeightIMP, heightTypeEncoding);
            if (!heightAdded) {
                method_setImplementation(heightMethod, newHeightIMP);
            }
            mtLog(@"Hooked ChatTimeViewModel - cellHeight");
        }
    }
    
    Class cContactClass = objc_getClass("CContact");
    if (cContactClass) {
        SEL nickSel = NSSelectorFromString(@"m_nsNickName");
        Method nickMethod = class_getInstanceMethod(cContactClass, nickSel);
        if (nickMethod) {
            NSString *key = @"CContact_m_nsNickName";
            IMP origNickIMP = method_getImplementation(nickMethod);
            const char *nickTypeEncoding = method_getTypeEncoding(nickMethod);
            [gOrigIMPs setObject:[NSValue valueWithPointer:origNickIMP] forKey:key];
            
            IMP newNickIMP = imp_implementationWithBlock(^NSString *(id self) {
                NSString *origName = nil;
                NSValue *impValue = gOrigIMPs[key];
                if (impValue) {
                    IMP orig = [impValue pointerValue];
                    origName = ((NSString *(*)(id, SEL))orig)(self, nickSel);
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
            });
            BOOL nickAdded = class_addMethod(cContactClass, nickSel, newNickIMP, nickTypeEncoding);
            if (!nickAdded) {
                method_setImplementation(nickMethod, newNickIMP);
            }
            mtLog(@"Hooked CContact - m_nsNickName");
        }
    }
    
    mtLog(@"========================================");
    mtLog(@"MessageTimeHook install complete");
    mtLog(@"========================================");
}

@end
