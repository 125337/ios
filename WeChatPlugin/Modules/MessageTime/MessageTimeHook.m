#import "MessageTimeHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/HookEngine.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static void mtLog(NSString *content) {
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

static UIImageView *getAvatarView(id cell) {
    UIImageView *avatarView = nil;
    
    id cellView = getCellView(cell);
    id target = cellView ? cellView : cell;
    
    SEL leftAvatarSelector = NSSelectorFromString(@"leftAvatarView");
    SEL rightAvatarSelector = NSSelectorFromString(@"rightAvatarView");
    
    if ([target respondsToSelector:leftAvatarSelector]) {
        @try {
            avatarView = ((id (*)(id, SEL))objc_msgSend)(target, leftAvatarSelector);
        } @catch (NSException *e) {}
    }
    
    if (!avatarView && [target respondsToSelector:rightAvatarSelector]) {
        @try {
            avatarView = ((id (*)(id, SEL))objc_msgSend)(target, rightAvatarSelector);
        } @catch (NSException *e) {}
    }
    
    if (!avatarView) {
        @try {
            avatarView = [target valueForKey:@"m_headImageView"];
        } @catch (NSException *e) {}
    }
    
    if (!avatarView && cellView) {
        @try {
            avatarView = [cellView valueForKey:@"m_avatarImgView"];
        } @catch (NSException *e) {}
    }
    
    if (!avatarView) {
        for (UIView *subview in [target subviews]) {
            if ([subview isKindOfClass:[UIImageView class]]) {
                NSString *className = NSStringFromClass([subview class]);
                if ([className containsString:@"Head"] || [className containsString:@"Avatar"]) {
                    avatarView = (UIImageView *)subview;
                    break;
                }
            }
        }
    }
    
    return avatarView;
}

static UIView *getBubbleView(id cell) {
    UIView *bubbleView = nil;
    
    id cellView = getCellView(cell);
    id target = cellView ? cellView : cell;
    
    SEL bubbleSelector = NSSelectorFromString(@"bubbleView");
    if ([target respondsToSelector:bubbleSelector]) {
        @try {
            bubbleView = ((id (*)(id, SEL))objc_msgSend)(target, bubbleSelector);
        } @catch (NSException *e) {}
    }
    
    if (!bubbleView) {
        @try {
            bubbleView = [target valueForKey:@"m_bgImageView"];
        } @catch (NSException *e) {}
    }
    
    if (!bubbleView) {
        @try {
            bubbleView = [target valueForKey:@"m_richTextView"];
        } @catch (NSException *e) {}
    }
    
    if (!bubbleView) {
        for (UIView *subview in [target subviews]) {
            NSString *className = NSStringFromClass([subview class]);
            if ([className containsString:@"RichTextView"] ||
                [className containsString:@"BubbleView"] ||
                [className containsString:@"MessageView"] ||
                [className containsString:@"BgImageView"]) {
                bubbleView = subview;
                break;
            }
        }
    }
    
    return bubbleView;
}

static void addTimeLabelToCell(id cell) {
    @try {
        if (!cell) {
            mtLog(@"addTimeLabelToCell: cell is nil");
            return;
        }
        
        NSString *cellClass = NSStringFromClass([cell class]);
        mtLog([NSString stringWithFormat:@"addTimeLabelToCell called on: %@", cellClass]);
        
        PluginConfig *config = [PluginConfig shared];
        mtLog([NSString stringWithFormat:@"showMessageTime: %d", config.showMessageTime]);
        if (!config.showMessageTime) return;
        
        id wrap = nil;
        
        // 路径1: cell → m_cellView → viewModel → messageWrap
        @try {
            id cellView = [cell valueForKey:@"m_cellView"];
            if (!cellView) cellView = [cell valueForKey:@"cellView"];
            if (cellView) {
                id viewModel = nil;
                @try { viewModel = [cellView valueForKey:@"m_viewModel"]; } @catch (NSException *e) {}
                if (!viewModel) {
                    @try { viewModel = [cellView valueForKey:@"viewModel"]; } @catch (NSException *e) {}
                }
                if (viewModel) {
                    @try { wrap = [viewModel valueForKey:@"messageWrap"]; } @catch (NSException *e) {}
                    if (!wrap) {
                        @try { wrap = [viewModel valueForKey:@"m_messageWrap"]; } @catch (NSException *e) {}
                    }
                    if (wrap) {
                        mtLog(@"Got wrap from cell→cellView→viewModel→messageWrap");
                    }
                }
            }
        } @catch (NSException *e) {
            mtLog([NSString stringWithFormat:@"cellView path exception: %@", e]);
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
        
        CGRect cellFrame = [cell frame];
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
        
        UIImageView *avatarView = getAvatarView(cell);
        CGRect avatarFrame = avatarView ? avatarView.frame : CGRectZero;
        CGRect bubbleFrame = bubbleView ? bubbleView.frame : cellFrame;
        
        BOOL isSender = NO;
        @try {
            if ([cell respondsToSelector:NSSelectorFromString(@"isSenderFromMsgWrap:")]) {
                isSender = ((BOOL (*)(id, SEL, id))objc_msgSend)(cell, NSSelectorFromString(@"isSenderFromMsgWrap:"), wrap);
            }
        } @catch (NSException *e) {}
        
        if (!isSender && bubbleView) {
            isSender = CGRectGetMidX(bubbleView.frame) > CGRectGetMidX([cell frame]);
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
                    isOnLeftSide = !isSender; // 头像在接收方左侧
                    break;
                case 2:
                    isOnLeftSide = isSender; // 消息旁边远离头像
                    break;
                case 3: case 5:
                    isOnLeftSide = isSender; // 远离头像侧
                    break;
                case 4: case 6:
                    isOnLeftSide = !isSender; // 靠近头像侧
                    break;
                case 7:
                    isOnLeftSide = NO; // 内部不调整方向
                    break;
            }
            
            if (isOnLeftSide) {
                labelFrame.origin.x -= offsetX; // 正值向左
            } else {
                labelFrame.origin.x += offsetX; // 正值向右
            }
        }
        
        // 垂直偏移：正值向上，负值向下
        if (offsetY != 0) {
            labelFrame.origin.y -= offsetY;
        }
        
        
        mtLog([NSString stringWithFormat:@"Final labelFrame: %@", NSStringFromCGRect(labelFrame)]);
        
        timeLabel.frame = labelFrame;
        
        if (![timeLabel superview]) {
            [cell addSubview:timeLabel];
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
    
    for (NSString *methodName in @[@"updateStatus", @"layoutContentView", @"layoutSubviews"]) {
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
            addTimeLabelToCell(self);
        });
        
        BOOL added = class_addMethod(cls, sel, newIMP, typeEncoding);
        if (!added) {
            method_setImplementation(m, newIMP);
        }
        
        mtLog([NSString stringWithFormat:@"Hooked %@ - %@", className, methodName]);
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
