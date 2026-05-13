#import "MessageTimeHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/HookEngine.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>



static void mtLog(NSString *content) {
    // [DBG] 前缀的日志仅在 debugLogging 开启时记录
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

static id getAvatarView(id cell) {
    id avatarView = nil;
    
    id cellView = getCellView(cell);
    id contentView = nil;
    @try { contentView = [cell valueForKey:@"contentView"]; } @catch (...) {}
    if (!contentView) { @try { contentView = [cell valueForKey:@"m_contentView"]; } @catch (...) {} }
    
    for (id target in @[cellView ?: [NSNull null], contentView ?: [NSNull null], cell]) {
        if (!target || [target isKindOfClass:[NSNull class]]) continue;
        NSString *targetCls = NSStringFromClass([target class]);
        
        // 1. m_headImageView（WeChat 8.0.60 CommonMessageCellView 实际属性，MMHeadImageView*）
        if (!avatarView) {
            for (NSString *key in @[@"m_headImageView", @"headImgView", @"avatarView", @"avatarImageView", @"headImg"]) {
                @try {
                    id view = [target valueForKey:key];
                    if (view && [view respondsToSelector:@selector(image)]) {
                        mtLog([NSString stringWithFormat:@"[DBG] getAvatarView: %@ found, class=%@", key, NSStringFromClass([view class])]);
                        avatarView = view;
                        break;
                    }
                } @catch (NSException *e) {}
            }
        }
        
        // 2. leftAvatarView / rightAvatarView selector（ChatTableViewCell 上的属性）
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
        
        // 3. subviews 遍历（最终兜底）
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
    
    for (id target in @[cellView ?: [NSNull null], contentView ?: [NSNull null], cell]) {
        if (!target || [target isKindOfClass:[NSNull class]]) continue;
        NSString *targetCls = NSStringFromClass([target class]);
        
        // 1. m_bgImageView（WeChat 8.0.60 CommonMessageCellView 实际属性，YYAsyncImageView*）
        if (!bubbleView) {
            for (NSString *key in @[@"m_bgImageView", @"bgImageView"]) {
                @try {
                    id v = [target valueForKey:key];
                    if (v) {
                        mtLog([NSString stringWithFormat:@"[DBG] getBubbleView: %@ found, class=%@ frame=%@", key, NSStringFromClass([v class]), NSStringFromCGRect([v frame])]);
                        bubbleView = v;
                        break;
                    }
                } @catch (NSException *e) {}
            }
        }
        
        // 2. subviews 遍历（Final fallback）
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

// 微信优化方案：独立的气泡 frame 设置方法
static void setFrameForBubbleView(id cell, CGRect frame) {
    UIView *bubble = (UIView *)getBubbleView(cell);
    if (bubble) {
        bubble.frame = frame;
    }
}

static int g_callCount = 0;

// 在 layoutSubviews 中更新已有标签的位置（此时气泡 bgImageView 已创建）
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
        
        // 检查是否发送者
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
        
        // 计算位置（与 addTimeLabelToCell 中的逻辑一致）
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
        
        // 方向感知偏移
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
            // 递归打印 contentView 的子视图
            if ([NSStringFromClass([sv class]) containsString:@"ContentView"]) {
                mtLog([NSString stringWithFormat:@"[DBG]   -> contentView.subviews count=%lu", (unsigned long)[sv.subviews count]]);
                for (UIView *sv2 in sv.subviews) {
                    mtLog([NSString stringWithFormat:@"[DBG]   -> subview: class=%@ frame=%@", NSStringFromClass([sv2 class]), NSStringFromCGRect(sv2.frame)]);
                    // 递归二级子视图
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
        
        // 发送者检测（需要在配色之前）
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
        
        // 使用发送者/接收者独立配色
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
        
        // 圆角
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
            
            // layoutSubviews：气泡已创建，更新已有标签的位置
            // willDisplayCell 时气泡还没 layout，bgImageView 是 nil
            // 所以 layoutSubviews 里需要重新获取气泡 frame 更新位置
            if (sel == NSSelectorFromString(@"layoutSubviews")) {
                UILabel *label = objc_getAssociatedObject(self, @"messageTimeLabel");
                if (label && label.superview) {
                    // 已有标签，气泡此时已创建，重新计算位置
                    mt_updateLabelFrame(self);
                }
            }
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
