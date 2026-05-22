#import "JokerHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/HookEngine.h"
#import "../../Core/WeChatAlertHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>

// ==================== 日志 ====================
static void jokerLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
        NSString *timestamp = [formatter stringFromDate:[NSDate date]];
        NSString *logLine = [NSString stringWithFormat:@"[%@] %@\n", timestamp, content];
        NSString *logPath = [folderPath stringByAppendingPathComponent:@"joker.log"];
        NSFileHandle *fh = [NSFileHandle fileHandleForWritingAtPath:logPath];
        if (!fh) {
            [[NSFileManager defaultManager] createFileAtPath:logPath contents:nil attributes:nil];
            fh = [NSFileHandle fileHandleForWritingAtPath:logPath];
        }
        [fh seekToEndOfFile];
        [fh writeData:[logLine dataUsingEncoding:NSUTF8StringEncoding]];
        [fh closeFile];
    } @catch (NSException *e) {}
}

// ==================== 原始IMP保存 ====================
static IMP orig_TextCell_operationMenuItems = NULL;
static IMP orig_TransferCell_operationMenuItems = NULL;
static IMP orig_Wallet_updateBalanceEntryView = NULL;

// 复用 NSNumberFormatter（验证数字用）
static NSNumberFormatter *sharedNumberFormatter(void) {
    static NSNumberFormatter *fmt = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        fmt = [[NSNumberFormatter alloc] init];
        [fmt setAllowsFloats:YES];
    });
    return fmt;
}

// ==================== 公共：应用文字修改 ====================
static void applyTextModification(id msgRef, id cellRef, NSString *newText) {
    if (newText.length == 0) return;

    BOOL msgUpdated = NO;
    if (msgRef) {
        @try {
            SEL setM_nsContentSel = NSSelectorFromString(@"setM_nsContent:");
            if ([msgRef respondsToSelector:setM_nsContentSel]) {
                ((void(*)(id, SEL, id))objc_msgSend)(msgRef, setM_nsContentSel, newText);
                NSString *after = nil;
                @try { after = [msgRef valueForKey:@"m_nsContent"]; } @catch (NSException *e) {}
                msgUpdated = [newText isEqualToString:after];
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] text modify failed: %@", e]);
        }
    }

    dispatch_async(dispatch_get_main_queue(), ^{
        @try {
            id viewModel = [cellRef valueForKey:@"m_viewModel"];
            SEL updateLayoutsSel = NSSelectorFromString(@"updateLayouts");
            if (viewModel && [viewModel respondsToSelector:updateLayoutsSel]) {
                ((void(*)(id, SEL))objc_msgSend)(viewModel, updateLayoutsSel);
            }
        } @catch (NSException *e) {}
    });
}

// ==================== 转账消息修改 ====================
static void applyTransferModification(id msgRef, id cellRef, NSString *newText) {
    // 查找 payInfoItem
    id payInfoItem = nil;
    @try {
        id extendInfo = [msgRef valueForKey:@"m_extendInfoWithMsgType"];
        if (extendInfo) {
            payInfoItem = [extendInfo valueForKey:@"m_oWCPayInfoItem"];
        }
    } @catch (NSException *e) {}

    if (!payInfoItem) {
        for (NSString *k in @[@"m_oWCPayInfoItem", @"m_WCPayInfoItem"]) {
            @try { payInfoItem = [msgRef valueForKey:k]; } @catch (NSException *e) {}
            if (payInfoItem) break;
        }
    }

    // 数字验证：去 ¥ 和空格
    NSString *validText = [newText stringByReplacingOccurrencesOfString:@" " withString:@""];
    validText = [validText stringByReplacingOccurrencesOfString:@"¥" withString:@""];

    NSNumberFormatter *formatter = sharedNumberFormatter();
    NSNumber *n = [formatter numberFromString:validText];
    if (!n) {
        jokerLog([NSString stringWithFormat:@"[Joker] ❌ invalid transfer amount: [%@]", validText]);
        return;
    }

    // 写 payInfoItem
    if (payInfoItem) {
        @try {
            [payInfoItem setValue:newText forKey:@"m_nsFeeDesc"];
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ❌ payInfoItem write failed: %@", e]);
        }
    }

    // 写 XML feedesc（8.0.60 的 updateTitleLabel 从 XML 读取）
    @try {
        NSString *xmlContent = [msgRef valueForKey:@"m_nsContent"];
        if (xmlContent.length > 0) {
            NSString *replacement = [NSString stringWithFormat:@"<feedesc><![CDATA[%@]]></feedesc>", newText];
            NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"<feedesc><!\\[CDATA\\[.*?\\]\\]></feedesc>" options:NSRegularExpressionDotMatchesLineSeparators error:nil];
            NSString *newXml = [regex stringByReplacingMatchesInString:xmlContent options:0 range:NSMakeRange(0, xmlContent.length) withTemplate:replacement];
            if (newXml && ![newXml isEqualToString:xmlContent]) {
                [msgRef setValue:newXml forKey:@"m_nsContent"];
            }
        }
    } @catch (NSException *e) {}

    // 刷新
    dispatch_async(dispatch_get_main_queue(), ^{
        @try {
            SEL titleSel = NSSelectorFromString(@"updateTitleLabel");
            if ([cellRef respondsToSelector:titleSel]) {
                ((void(*)(id, SEL))objc_msgSend)(cellRef, titleSel);
            }
        } @catch (NSException *e) {}
    });
}

// ==================== 弹窗：修改文字 ====================
static char kJokerAlertKey;
static char kJokerMsgKey;

static void joker_text_confirm_IMP(id self, SEL _cmd) {
    jokerLog(@"🔥 Joker confirm fired");

    id alert = objc_getAssociatedObject(self, &kJokerAlertKey);
    id msgWrap = objc_getAssociatedObject(self, &kJokerMsgKey);

    if (!alert) {
        jokerLog(@"   ⚠️ alert released");
        return;
    }

    NSString *input = nil;
    @try { input = [alert valueForKeyPath:@"tipsVc.tipsTextView.text"]; }
    @catch (NSException *e) {}
    if (!input || input.length == 0) {
        @try { input = [alert valueForKeyPath:@"tipsVc.tipsTextField.text"]; }
        @catch (NSException *e) {}
    }
    if (!input || input.length == 0) {
        SEL getText = NSSelectorFromString(@"getTextFieldText");
        if ([alert respondsToSelector:getText]) {
            input = ((id(*)(id, SEL))objc_msgSend)(alert, getText);
        }
    }

    if (input.length > 0 && msgWrap) {
        Class transferCls = objc_getClass("WCPayTransferMessageCellView");
        if (transferCls && [self isKindOfClass:transferCls]) {
            applyTransferModification(msgWrap, self, input);
        } else {
            applyTextModification(msgWrap, self, input);
        }
    }

    objc_setAssociatedObject(self, &kJokerAlertKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(self, &kJokerMsgKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static void showEditAlert(id alertView, id cellView, id msgWrap, NSString *currentContent) {
    Class cls = objc_getClass("WCUIAlertView");
    if (!cls) return;

    SEL confirmSel = NSSelectorFromString(@"__joker_text_confirm");
    Class cellClass = [cellView class];
    if (![cellClass instancesRespondToSelector:confirmSel]) {
        class_addMethod(cellClass, confirmSel, (IMP)joker_text_confirm_IMP, "v@:");
    }

    @try {
        id alert = ((id(*)(id, SEL, id, id))objc_msgSend)([cls alloc], @selector(initWithTitle:message:), @"Mio助手", @"");
        if (!alert) return;

        SEL stf = NSSelectorFromString(@"showTextFieldWithMaxLen:");
        if ([alert respondsToSelector:stf]) {
            ((void(*)(id, SEL, NSInteger))objc_msgSend)(alert, stf, 99999);
        }

        if (currentContent.length > 0) {
            SEL dtf = NSSelectorFromString(@"setTextFieldDefaultText:");
            if ([alert respondsToSelector:dtf]) {
                ((void(*)(id, SEL, id))objc_msgSend)(alert, dtf, currentContent);
            }
        }

        SEL cancel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancel, @"取消", cellView, NULL);
        }

        objc_setAssociatedObject(cellView, &kJokerAlertKey, alert, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, &kJokerMsgKey, msgWrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

        SEL btn = NSSelectorFromString(@"addBtnTitle:target:sel:");
        if ([alert respondsToSelector:btn]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, btn, @"确定", cellView, confirmSel);
        }

        SEL sh = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:sh]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, sh);
        }
    } @catch (NSException *e) {
        jokerLog([NSString stringWithFormat:@"[Joker] ❌ showEditAlert: %@", e]);
    }
}

// ==================== ① 文本消息修改 ====================
static void mioTextJoker(id self, SEL _cmd) {
    id msgWrap = nil;
    NSString *content = nil;

    @try {
        id viewModel = [self valueForKey:@"m_viewModel"];
        msgWrap = [viewModel valueForKey:@"m_messageWrap"];
    } @catch (NSException *e) {}
    if (!msgWrap) {
        @try { msgWrap = [self valueForKey:@"m_messageWrap"]; } @catch (NSException *e) {}
    }

    @try { content = [msgWrap valueForKey:@"m_nsContent"]; } @catch (NSException *e) {}
    if (!content) {
        @try { content = [msgWrap valueForKey:@"m_nsTitle"]; } @catch (NSException *e) {}
    }
    if (!content) content = @"";

    showEditAlert(nil, self, msgWrap, content);
}

// ==================== ② 转账消息修改 ====================
static void mioTransferJoker(id self, SEL _cmd) {
    id msgWrap = nil;
    NSString *content = nil;

    @try {
        id viewModel = [self valueForKey:@"m_viewModel"];
        msgWrap = [viewModel valueForKey:@"m_messageWrap"];
    } @catch (NSException *e) {}
    if (!msgWrap) {
        @try { msgWrap = [self valueForKey:@"m_messageWrap"]; } @catch (NSException *e) {}
    }

    id payInfoItem = nil;
    @try {
        id extendInfo = [msgWrap valueForKey:@"m_extendInfoWithMsgType"];
        if (extendInfo) {
            payInfoItem = [extendInfo valueForKey:@"m_oWCPayInfoItem"];
            if (payInfoItem) {
                content = [payInfoItem valueForKey:@"m_nsFeeDesc"];
            }
        }
    } @catch (NSException *e) {}

    if (!payInfoItem) {
        for (NSString *k in @[@"m_oWCPayInfoItem", @"m_WCPayInfoItem"]) {
            @try { payInfoItem = [msgWrap valueForKey:k]; } @catch (NSException *e) {}
            if (payInfoItem) break;
        }
        if (payInfoItem && !content) {
            @try { content = [payInfoItem valueForKey:@"m_nsFeeDesc"]; } @catch (NSException *e) {}
        }
    }

    if (!content) { @try { content = [msgWrap valueForKey:@"m_nsContent"]; } @catch (NSException *e) {} }
    if (content.length > 200) content = @"";
    if (!content) content = @"";

    showEditAlert(nil, self, msgWrap, content);
}

// ==================== ③ 菜单 Hook ====================
static id hooked_TextCell_operationMenuItems(id self, SEL _cmd) {
    NSMutableArray *items = nil;
    if (orig_TextCell_operationMenuItems) {
        items = ((id(*)(id, SEL))orig_TextCell_operationMenuItems)(self, _cmd);
    }
    if (!items) items = [NSMutableArray array];
    if (![PluginConfig shared].enableJoker) return items;

    NSMutableArray *newItems = [items mutableCopy];
    Class mmItemClass = objc_getClass("MMMenuItem");
    if (mmItemClass) {
        @try {
            // 照抄锤子助手 FUN_0084c460：initWithTitle:svgName:action:
            // action 参数类型是 SEL（不是 NSString），必须传 registered selector
            SEL initSel = NSSelectorFromString(@"initWithTitle:svgName:action:");
            if (![mmItemClass instancesRespondToSelector:initSel]) {
                jokerLog(@"[Joker] ⚠️ MMMenuItem initWithTitle:svgName:action: not found");
            } else {
                SEL actionSEL = sel_registerName("mioTextJoker");
                id mmItem = ((id(*)(id, SEL, id, id, SEL))objc_msgSend)(
                    [mmItemClass alloc], initSel, @"修改文字", @"expression", actionSEL);
                if (mmItem) {
                    [newItems addObject:mmItem];
                    jokerLog(@"✅ MMMenuItem created: 修改文字 / expression / mioTextJoker (SEL)");
                }
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ❌ MMMenuItem create: %@", e]);
        }
    }
    return newItems;
}

static id hooked_TransferCell_operationMenuItems(id self, SEL _cmd) {
    NSMutableArray *items = nil;
    if (orig_TransferCell_operationMenuItems) {
        items = ((id(*)(id, SEL))orig_TransferCell_operationMenuItems)(self, _cmd);
    }
    if (!items) items = [NSMutableArray array];
    if (![PluginConfig shared].enableJoker) return items;

    NSMutableArray *newItems = [items mutableCopy];
    Class mmItemClass = objc_getClass("MMMenuItem");
    if (mmItemClass) {
        @try {
            // 照抄锤子助手 FUN_0084c460：initWithTitle:svgName:action:
            // action 参数类型是 SEL（不是 NSString），必须传 registered selector
            SEL initSel = NSSelectorFromString(@"initWithTitle:svgName:action:");
            if (![mmItemClass instancesRespondToSelector:initSel]) {
                jokerLog(@"[Joker] ⚠️ MMMenuItem initWithTitle:svgName:action: not found");
            } else {
                SEL actionSEL = sel_registerName("mioTransferJoker");
                id mmItem = ((id(*)(id, SEL, id, id, SEL))objc_msgSend)(
                    [mmItemClass alloc], initSel, @"修改文字", @"expression", actionSEL);
                if (mmItem) {
                    [newItems addObject:mmItem];
                    jokerLog(@"✅ MMMenuItem created: 修改文字 / expression / mioTransferJoker (SEL)");
                }
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ❌ MMMenuItem create: %@", e]);
        }
    }
    return newItems;
}

// ==================== ④ 钱包余额修改 ====================
static char kJokerWalletAlertKey;

static void joker_wallet_confirm_IMP(id self, SEL _cmd) {
    id alert = objc_getAssociatedObject(self, &kJokerWalletAlertKey);
    if (!alert) return;

    NSString *input = nil;
    @try { input = [alert valueForKeyPath:@"tipsVc.tipsTextView.text"]; }
    @catch (NSException *e) {}
    if (!input || input.length == 0) return;

    NSNumberFormatter *fmt = sharedNumberFormatter();
    NSNumber *n = [fmt numberFromString:input];
    if (!n) {
        jokerLog([NSString stringWithFormat:@"[Joker] ❌ invalid wallet amount: [%@]", input]);
        return;
    }

    @try {
        SEL tnSel = NSSelectorFromString(@"timeoutNumber");
        id timeoutNumber = nil;
        if ([self respondsToSelector:tnSel]) {
            timeoutNumber = ((id(*)(id, SEL))objc_msgSend)(self, tnSel);
        } else {
            timeoutNumber = [self valueForKey:@"timeoutNumber"];
        }
        if (timeoutNumber) {
            NSInteger intVal = [n integerValue];
            SEL updateNumSel = NSSelectorFromString(@"updateNumber:");
            if ([timeoutNumber respondsToSelector:updateNumSel]) {
                ((void(*)(id, SEL, NSInteger))objc_msgSend)(timeoutNumber, updateNumSel, intVal);
            }
        }
    } @catch (NSException *e) {
        jokerLog([NSString stringWithFormat:@"[Joker] ❌ wallet update: %@", e]);
    }

    objc_setAssociatedObject(self, &kJokerWalletAlertKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static void walletLongPressHandler(id self, SEL _cmd, UIGestureRecognizer *gesture) {
    if (gesture.state != UIGestureRecognizerStateBegan) return;
    UIView *headerView = (UIView *)self;

    Class cls = [headerView class];
    SEL walletSel = NSSelectorFromString(@"__joker_wallet_confirm");
    if (![cls instancesRespondToSelector:walletSel]) {
        class_addMethod(cls, walletSel, (IMP)joker_wallet_confirm_IMP, "v@:");
    }

    Class alertCls = objc_getClass("WCUIAlertView");
    if (!alertCls) return;

    @try {
        id alert = ((id(*)(id, SEL, id, id))objc_msgSend)([alertCls alloc], @selector(initWithTitle:message:), @"Mio助手", @"");

        SEL stf = NSSelectorFromString(@"showTextFieldWithMaxLen:");
        if ([alert respondsToSelector:stf]) ((void(*)(id, SEL, NSInteger))objc_msgSend)(alert, stf, 99999);

        SEL cancel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancel]) ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancel, @"取消", headerView, NULL);

        objc_setAssociatedObject(headerView, &kJokerWalletAlertKey, alert, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        SEL btn = NSSelectorFromString(@"addBtnTitle:target:sel:");
        if ([alert respondsToSelector:btn]) ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, btn, @"确定", headerView, walletSel);

        SEL sh = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:sh]) ((void(*)(id, SEL))objc_msgSend)(alert, sh);
    } @catch (NSException *e) {
        jokerLog([NSString stringWithFormat:@"[Joker] ❌ Wallet alert: %@", e]);
    }
}

static void hooked_Wallet_updateBalanceEntryView(id self, SEL _cmd) {
    if (orig_Wallet_updateBalanceEntryView) {
        ((void(*)(id, SEL))orig_Wallet_updateBalanceEntryView)(self, _cmd);
    }
    if (![PluginConfig shared].enableJoker) return;

    BOOL hasGesture = NO;
    for (UIGestureRecognizer *g in ((UIView *)self).gestureRecognizers) {
        if ([g isKindOfClass:[UILongPressGestureRecognizer class]]) { hasGesture = YES; break; }
    }
    if (!hasGesture) {
        SEL gestureSel = NSSelectorFromString(@"__joker_wallet_longpress");
        class_addMethod([((UIView *)self) class], gestureSel, (IMP)walletLongPressHandler, "v@:@");

        UILongPressGestureRecognizer *lp = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:gestureSel];
        lp.minimumPressDuration = 0.5;
        [(UIView *)self addGestureRecognizer:lp];
    }
}

// ==================== ⑤ 零钱通修改 ====================
static char kJokerTimeoutAlertKey;

static void joker_timeout_confirm_IMP(id self, SEL _cmd) {
    id alert = objc_getAssociatedObject(self, &kJokerTimeoutAlertKey);
    if (!alert) return;

    NSString *input = nil;
    @try { input = [alert valueForKeyPath:@"tipsVc.tipsTextView.text"]; }
    @catch (NSException *e) {}
    if (!input || input.length == 0) return;

    NSNumberFormatter *fmt = sharedNumberFormatter();
    NSNumber *n = [fmt numberFromString:input];
    if (!n) {
        jokerLog([NSString stringWithFormat:@"[Joker] ❌ invalid timeout amount: [%@]", input]);
        return;
    }

    NSInteger intVal = [n integerValue];
    SEL updateSel = NSSelectorFromString(@"updateNumber:");
    if ([self respondsToSelector:updateSel]) {
        ((void(*)(id, SEL, NSInteger))objc_msgSend)(self, updateSel, intVal);
    }

    objc_setAssociatedObject(self, &kJokerTimeoutAlertKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static void joker_timeout_longpress_IMP(id self, SEL _cmd, UIGestureRecognizer *gesture) {
    if (gesture.state != UIGestureRecognizerStateBegan) return;
    UIView *timeoutView = (UIView *)self;

    Class cls = [timeoutView class];
    SEL confirmSel = NSSelectorFromString(@"__joker_timeout_confirm");
    if (![cls instancesRespondToSelector:confirmSel]) {
        class_addMethod(cls, confirmSel, (IMP)joker_timeout_confirm_IMP, "v@:");
    }

    Class alertCls = objc_getClass("WCUIAlertView");
    if (!alertCls) return;

    @try {
        id alert = ((id(*)(id, SEL, id, id))objc_msgSend)([alertCls alloc], @selector(initWithTitle:message:), @"Mio助手", @"请输入金额");

        SEL stf = NSSelectorFromString(@"showTextFieldWithMaxLen:");
        if ([alert respondsToSelector:stf]) ((void(*)(id, SEL, NSInteger))objc_msgSend)(alert, stf, 99999);

        SEL cancel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancel]) ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancel, @"取消", timeoutView, NULL);

        objc_setAssociatedObject(timeoutView, &kJokerTimeoutAlertKey, alert, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        SEL btn = NSSelectorFromString(@"addBtnTitle:target:sel:");
        if ([alert respondsToSelector:btn]) ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, btn, @"确定", timeoutView, confirmSel);

        SEL sh = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:sh]) ((void(*)(id, SEL))objc_msgSend)(alert, sh);
    } @catch (NSException *e) {
        jokerLog([NSString stringWithFormat:@"[Joker] ❌ TimeoutNumber alert: %@", e]);
    }
}

static IMP orig_TimeoutNumber_didMoveToWindow = NULL;
static void hooked_TimeoutNumber_didMoveToWindow(id self, SEL _cmd) {
    if (orig_TimeoutNumber_didMoveToWindow) {
        ((void(*)(id, SEL))orig_TimeoutNumber_didMoveToWindow)(self, _cmd);
    }
    if (![PluginConfig shared].enableJoker) return;

    BOOL hasGesture = NO;
    for (UIGestureRecognizer *g in ((UIView *)self).gestureRecognizers) {
        if ([g isKindOfClass:[UILongPressGestureRecognizer class]]) { hasGesture = YES; break; }
    }
    if (!hasGesture) {
        SEL gestureSel = NSSelectorFromString(@"__joker_timeout_longpress");
        class_addMethod([((UIView *)self) class], gestureSel, (IMP)joker_timeout_longpress_IMP, "v@:@");

        UILongPressGestureRecognizer *lp = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:gestureSel];
        lp.minimumPressDuration = 0.5;
        [(UIView *)self addGestureRecognizer:lp];
    }
}

// ==================== JokerHook ====================
@implementation JokerHook

+ (void)install {
    jokerLog(@"[JokerHook] install start");
    jokerLog([NSString stringWithFormat:@"[JokerHook] enableJoker=%d", [PluginConfig shared].enableJoker]);

    if (![PluginConfig shared].enableJoker) {
        jokerLog(@"[JokerHook] Joker disabled");
        return;
    }

    NSString *wxVersion = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"];
    if ([wxVersion compare:@"8.0.29" options:NSNumericSearch] == NSOrderedAscending) {
        jokerLog([NSString stringWithFormat:@"[JokerHook] ⚠️ WeChat %@ too old (<8.0.29)", wxVersion]);
        return;
    }

    // ====== 注册 handler ======
    Class textCellClass = objc_getClass("TextMessageCellView");
    if (textCellClass) {
        SEL sel = NSSelectorFromString(@"mioTextJoker");
        if (!class_addMethod(textCellClass, sel, (IMP)mioTextJoker, "v@:")) {
            Method m = class_getInstanceMethod(textCellClass, sel);
            if (m) method_setImplementation(m, (IMP)mioTextJoker);
        }
    } else {
        jokerLog(@"[JokerHook] ⚠️ TextMessageCellView NOT found");
    }

    Class transferCellClass = objc_getClass("WCPayTransferMessageCellView");
    if (transferCellClass) {
        SEL sel = NSSelectorFromString(@"mioTransferJoker");
        if (!class_addMethod(transferCellClass, sel, (IMP)mioTransferJoker, "v@:")) {
            Method m = class_getInstanceMethod(transferCellClass, sel);
            if (m) method_setImplementation(m, (IMP)mioTransferJoker);
        }
    } else {
        jokerLog(@"[JokerHook] ⚠️ WCPayTransferMessageCellView NOT found");
    }

    // ====== 菜单 Hook ======
    SEL menuSel = NSSelectorFromString(@"operationMenuItems");

    if (textCellClass) {
        Method existing = class_getInstanceMethod(textCellClass, menuSel);
        if (existing) {
            orig_TextCell_operationMenuItems = method_getImplementation(existing);
            method_setImplementation(existing, (IMP)hooked_TextCell_operationMenuItems);
        }
    }

    if (transferCellClass) {
        Method existing = class_getInstanceMethod(transferCellClass, menuSel);
        if (existing) {
            orig_TransferCell_operationMenuItems = method_getImplementation(existing);
            method_setImplementation(existing, (IMP)hooked_TransferCell_operationMenuItems);
        }
    }

    // ====== 钱包 Hook ======
    Class walletClass = objc_getClass("WCPayWalletEntryHeaderView");
    if (walletClass) {
        SEL updateSel = NSSelectorFromString(@"updateBalanceEntryView");
        Method updateMethod = class_getInstanceMethod(walletClass, updateSel);
        if (updateMethod) {
            orig_Wallet_updateBalanceEntryView = method_setImplementation(updateMethod, (IMP)hooked_Wallet_updateBalanceEntryView);
        }
    } else {
        jokerLog(@"[JokerHook] ⚠️ WCPayWalletEntryHeaderView NOT found");
    }

    // ====== 零钱通 Hook ======
    Class timeoutClass = objc_getClass("TimeoutNumber");
    if (timeoutClass) {
        SEL didMoveSel = NSSelectorFromString(@"didMoveToWindow");
        unsigned int methodCount;
        Method *timeoutMethods = class_copyMethodList(timeoutClass, &methodCount);
        BOOL hasOwnDidMove = NO;
        for (unsigned int i = 0; i < methodCount; i++) {
            if (sel_isEqual(method_getName(timeoutMethods[i]), didMoveSel)) { hasOwnDidMove = YES; break; }
        }
        free(timeoutMethods);

        if (hasOwnDidMove) {
            Method didMoveMethod = class_getInstanceMethod(timeoutClass, didMoveSel);
            orig_TimeoutNumber_didMoveToWindow = method_setImplementation(didMoveMethod, (IMP)hooked_TimeoutNumber_didMoveToWindow);
        } else {
            Method uiViewMethod = class_getInstanceMethod(objc_getClass("UIView"), didMoveSel);
            orig_TimeoutNumber_didMoveToWindow = method_getImplementation(uiViewMethod);
            class_addMethod(timeoutClass, didMoveSel, (IMP)hooked_TimeoutNumber_didMoveToWindow, "v@:");
        }
    } else {
        jokerLog(@"[JokerHook] ⚠️ TimeoutNumber NOT found");
    }

    jokerLog(@"[JokerHook] install complete");
}

@end