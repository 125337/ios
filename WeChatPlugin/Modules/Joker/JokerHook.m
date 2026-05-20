#import "JokerHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/HookEngine.h"
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

// ==================== 锤子助手风格：编辑弹窗 (WCUIAlertView) ====================
static void showEditAlert(id alertView, id cellView, id msgWrap, NSString *currentContent, void(^onConfirm)(NSString *newText)) {
    // 锤子助手使用 WCUIAlertView，但为兼容性容器化
    // 核心：alertView 标题 + 正文 + 输入框 = WCUIAlertView 的 style=1
    
    Class alertClass = objc_getClass("WCUIAlertView");
    if (alertClass) {
        // ===== 照抄锤子助手：WCUIAlertView =====
        id alert = ((id(*)(id, SEL))objc_msgSend)([alertClass alloc], @selector(init));
        ((void(*)(id, SEL, NSInteger))objc_msgSend)(alert, NSSelectorFromString(@"setTag:"), 99999);
        
        // style = 1 表示带文本输入框
        SEL setStyleSel = NSSelectorFromString(@"setStyle:");
        if ([alert respondsToSelector:setStyleSel]) {
            ((void(*)(id, SEL, NSInteger))objc_msgSend)(alert, setStyleSel, 1);
        }
        
        // 设置初始文本
        SEL setMessageSel = NSSelectorFromString(@"setMessage:");
        if ([alert respondsToSelector:setMessageSel]) {
            ((void(*)(id, SEL, id))objc_msgSend)(alert, setMessageSel, currentContent);
        }
        
        // "确定" 按钮 + block 回调（照抄锤子助手 FUN_0076ffbc）
        SEL addActionSel = NSSelectorFromString(@"addActionWithTitle:handler:");
        if ([alert respondsToSelector:addActionSel]) {
            id cellRef = cellView;
            id msgRef = msgWrap;
            id alertRef = alert;
            ((void(*)(id, SEL, id, id))objc_msgSend)(alert, addActionSel, @"确定", ^(id btn){
                // 锤子助手风格：获取 tipsVc.tipsTextView.text
                NSString *newText = nil;
                @try {
                    newText = [alertRef valueForKeyPath:@"tipsVc.tipsTextView.text"];
                } @catch (NSException *e) {}
                if (!newText) {
                    @try {
                        newText = [alertRef valueForKeyPath:@"m_textField.text"];
                    } @catch (NSException *e) {}
                }
                if (!newText) newText = @"";
                
                jokerLog([NSString stringWithFormat:@"[Joker] onTextJoker callback - newText: %@", newText]);
                
                // === ① 先写 msgWrap.m_nsContent（锤子助手风格） ===
                @try {
                    SEL setM_nsContentSel = NSSelectorFromString(@"setM_nsContent:");
                    if ([msgRef respondsToSelector:setM_nsContentSel]) {
                        ((void(*)(id, SEL, id))objc_msgSend)(msgRef, setM_nsContentSel, newText);
                        jokerLog(@"[Joker] ✅ Updated msgWrap.m_nsContent");
                    }
                } @catch (NSException *e) {
                    jokerLog([NSString stringWithFormat:@"[Joker] ❌ setM_nsContent: %@", e]);
                }
                
                // === ② 再更新 RichTextView 显示层 ===
                dispatch_async(dispatch_get_main_queue(), ^{
                    @try {
                        // 获取 delegate 的 m_richTextView
                        id delegate = nil;
                        @try { delegate = [cellRef valueForKey:@"m_delegate"]; } @catch (NSException *e) {}
                        
                        id richTextView = nil;
                        @try { richTextView = [delegate valueForKey:@"m_richTextView"]; } @catch (NSException *e) {}
                        
                        if (!richTextView) {
                            // fallback：从 cellView 直接找
                            Ivar ivar = class_getInstanceVariable([cellRef class], "m_richTextView");
                            if (ivar) richTextView = object_getIvar(cellRef, ivar);
                        }
                        
                        if (richTextView) {
                            SEL setTextSel = NSSelectorFromString(@"setText:");
                            if ([richTextView respondsToSelector:setTextSel]) {
                                ((void(*)(id, SEL, id))objc_msgSend)(richTextView, setTextSel, newText);
                            }
                            [richTextView setNeedsDisplay];
                            jokerLog(@"[Joker] ✅ RichTextView updated");
                        }
                        
                        // 刷新 delegate
                        if (delegate) {
                            SEL refreshSel = NSSelectorFromString(@"setNeedsDisplay");
                            if ([delegate respondsToSelector:refreshSel]) {
                                ((void(*)(id, SEL))objc_msgSend)(delegate, refreshSel);
                            }
                        }
                    } @catch (NSException *e) {
                        jokerLog([NSString stringWithFormat:@"[Joker] ❌ display update: %@", e]);
                    }
                });
            });
        }
        
        // "取消" 按钮
        SEL addCancelSel = NSSelectorFromString(@"addCancelActionWithTitle:handler:");
        if ([alert respondsToSelector:addCancelSel]) {
            ((void(*)(id, SEL, id, id))objc_msgSend)(alert, addCancelSel, @"取消", nil);
        }
        
        // Show
        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
        }
        jokerLog(@"[Joker] WCUIAlertView shown (锤子助手风格)");
    } else {
        // ===== Fallback: UIAlertController（兼容）=====
        jokerLog(@"[Joker] WCUIAlertView not found, using UIAlertController fallback");
        UIAlertController *ac = [UIAlertController alertControllerWithTitle:@"修改文字" message:@"" preferredStyle:UIAlertControllerStyleAlert];
        [ac addTextFieldWithConfigurationHandler:^(UITextField *tf) {
            tf.text = currentContent;
            tf.clearButtonMode = UITextFieldViewModeWhileEditing;
        }];
        
        id cellRef = cellView;
        id msgRef = msgWrap;
        [ac addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
        [ac addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
            NSString *newText = ac.textFields.firstObject.text ?: @"";
            // ① msgWrap
            @try {
                SEL setM_nsContentSel = NSSelectorFromString(@"setM_nsContent:");
                if ([msgRef respondsToSelector:setM_nsContentSel]) {
                    ((void(*)(id, SEL, id))objc_msgSend)(msgRef, setM_nsContentSel, newText);
                }
            } @catch (NSException *e) {}
            // ② RichTextView
            dispatch_async(dispatch_get_main_queue(), ^{
                @try {
                    id richTextView = nil;
                    Ivar ivar = class_getInstanceVariable([cellRef class], "m_richTextView");
                    if (ivar) richTextView = object_getIvar(cellRef, ivar);
                    if (richTextView) {
                        SEL setTextSel = NSSelectorFromString(@"setText:");
                        if ([richTextView respondsToSelector:setTextSel]) {
                            ((void(*)(id, SEL, id))objc_msgSend)(richTextView, setTextSel, newText);
                        }
                        [richTextView setNeedsDisplay];
                    }
                } @catch (NSException *e) {}
            });
        }]];
        
        UIViewController *rootVC = [UIApplication sharedApplication].keyWindow.rootViewController;
        while (rootVC.presentedViewController) rootVC = rootVC.presentedViewController;
        [rootVC presentViewController:ac animated:YES completion:nil];
    }
}

// ==================== ① onTextJoker：照抄锤子助手 FUN_0076f720 ====================
// self = TextMessageCellView
static void onTextJoker(id self, SEL _cmd) {
    jokerLog(@"[Joker] onTextJoker called (锤子助手风格)");
    
    // 锤子助手：cellView → m_delegate → m_messageWrap → m_nsContent
    id delegate = nil;
    id msgWrap = nil;
    NSString *content = nil;
    
    @try { delegate = [self valueForKey:@"m_delegate"]; } @catch (NSException *e) {}
    jokerLog([NSString stringWithFormat:@"[Joker] delegate: %@", NSStringFromClass([delegate class])]);
    
    @try { msgWrap = [delegate valueForKey:@"m_messageWrap"]; } @catch (NSException *e) {}
    jokerLog([NSString stringWithFormat:@"[Joker] msgWrap: %@", msgWrap]);
    
    @try { content = [msgWrap valueForKey:@"m_nsContent"]; } @catch (NSException *e) {}
    if (!content) {
        @try { content = [msgWrap valueForKey:@"m_nsTitle"]; } @catch (NSException *e) {}
    }
    if (!content) content = @"";
    jokerLog([NSString stringWithFormat:@"[Joker] currentContent: %@", content]);
    
    showEditAlert(nil, self, msgWrap, content, nil);
}

// ==================== ② onTransferJoker：照抄锤子助手 FUN_0076fb4c ====================
// self = WCPayTransferMessageCellView
static void onTransferJoker(id self, SEL _cmd) {
    jokerLog(@"[Joker] onTransferJoker called (锤子助手风格)");
    
    id delegate = nil;
    id msgWrap = nil;
    NSString *content = nil;
    
    @try { delegate = [self valueForKey:@"m_delegate"]; } @catch (NSException *e) {}
    @try { msgWrap = [delegate valueForKey:@"m_messageWrap"]; } @catch (NSException *e) {}
    @try { content = [msgWrap valueForKey:@"m_nsContent"]; } @catch (NSException *e) {}
    if (!content) {
        @try { content = [msgWrap valueForKey:@"m_nsTitle"]; } @catch (NSException *e) {}
    }
    if (!content) content = @"";
    jokerLog([NSString stringWithFormat:@"[Joker] transfer currentContent: %@", content]);
    
    showEditAlert(nil, self, msgWrap, content, nil);
}

// ==================== ③ 锤子助手风格 operationMenuItems hook ====================
// 为 TextMessageCellView.operationMenuItems 添加 "修改文字" 按钮
static id hooked_TextCell_operationMenuItems(id self, SEL _cmd) {
    NSMutableArray *items = nil;
    if (orig_TextCell_operationMenuItems) {
        items = ((id(*)(id, SEL))orig_TextCell_operationMenuItems)(self, _cmd);
    }
    if (!items) items = [NSMutableArray array];
    
    // 只在启用时添加菜单项
    if (![PluginConfig shared].enableJoker) return items;
    
    NSMutableArray *newItems = [items mutableCopy];
    Class mmItemClass = objc_getClass("MMMenuItem");
    if (mmItemClass) {
        @try {
            // 照抄锤子助手：title=cf_O9e(=修改文字), icon=cf_expression, action="onTextJoker"
            SEL initSel = NSSelectorFromString(@"initWithTitle:iconName:target:actionName:");
            id mmItem = nil;
            if ([mmItemClass instancesRespondToSelector:initSel]) {
                mmItem = ((id(*)(id, SEL, id, id, id, id))objc_msgSend)(
                    [[mmItemClass alloc] init], initSel,
                    @"修改文字", @"expression", self, @"onTextJoker");
            }
            if (!mmItem) {
                // fallback: initWithTitle:action:
                SEL altInitSel = NSSelectorFromString(@"initWithTitle:action:");
                if ([mmItemClass instancesRespondToSelector:altInitSel]) {
                    mmItem = ((id(*)(id, SEL, id, SEL))objc_msgSend)(
                        [[mmItemClass alloc] init], altInitSel,
                        @"修改文字", NSSelectorFromString(@"onTextJoker"));
                }
            }
            if (mmItem) {
                [newItems addObject:mmItem];
                jokerLog(@"[Joker] ✅ Added MMMenuItem to TextMessageCellView menu");
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ❌ TextCell menu item: %@", e]);
        }
    }
    return newItems;
}

// 为 WCPayTransferMessageCellView.operationMenuItems 添加 "修改文字" 按钮
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
            // 照抄锤子助手：title=cf_O9e, icon=cf_expression, action="onTransferJoker"
            SEL initSel = NSSelectorFromString(@"initWithTitle:iconName:target:actionName:");
            id mmItem = nil;
            if ([mmItemClass instancesRespondToSelector:initSel]) {
                mmItem = ((id(*)(id, SEL, id, id, id, id))objc_msgSend)(
                    [[mmItemClass alloc] init], initSel,
                    @"修改文字", @"expression", self, @"onTransferJoker");
            }
            if (!mmItem) {
                SEL altInitSel = NSSelectorFromString(@"initWithTitle:action:");
                if ([mmItemClass instancesRespondToSelector:altInitSel]) {
                    mmItem = ((id(*)(id, SEL, id, SEL))objc_msgSend)(
                        [[mmItemClass alloc] init], altInitSel,
                        @"修改文字", NSSelectorFromString(@"onTransferJoker"));
                }
            }
            if (mmItem) {
                [newItems addObject:mmItem];
                jokerLog(@"[Joker] ✅ Added MMMenuItem to TransferCellView menu");
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ❌ TransferCell menu item: %@", e]);
        }
    }
    return newItems;
}

// ==================== ④ 钱包余额隐藏：照抄锤子助手 FUN_0076fdbc ====================
static void walletLongPressHandler(UIGestureRecognizer *gesture) {
    if (gesture.state != UIGestureRecognizerStateBegan) return;
    
    UIView *headerView = gesture.view;
    // 切换所有子视图的 hidden 状态
    BOOL allHidden = YES;
    for (UIView *sub in headerView.subviews) {
        if (!sub.hidden) { allHidden = NO; break; }
    }
    BOOL newState = !allHidden;
    for (UIView *sub in headerView.subviews) {
        sub.hidden = newState;
        // 如果有嵌套的 label
        for (UIView *nested in sub.subviews) {
            nested.hidden = newState;
        }
    }
    jokerLog([NSString stringWithFormat:@"[Joker] Wallet balance %@", newState ? @"hidden" : @"shown"]);
}

static void hooked_Wallet_updateBalanceEntryView(id self, SEL _cmd) {
    if (orig_Wallet_updateBalanceEntryView) {
        ((void(*)(id, SEL))orig_Wallet_updateBalanceEntryView)(self, _cmd);
    }
    
    if (![PluginConfig shared].enableJoker) return;
    
    // 照抄锤子助手：添加 UILongPressGestureRecognizer 长按手势切换余额显示
    // 检查是否已经添加过手势
    BOOL hasGesture = NO;
    for (UIGestureRecognizer *g in ((UIView *)self).gestureRecognizers) {
        if ([g isKindOfClass:[UILongPressGestureRecognizer class]]) {
            hasGesture = YES; break;
        }
    }
    if (!hasGesture) {
        UILongPressGestureRecognizer *lp = [[UILongPressGestureRecognizer alloc] initWithTarget:nil action:nil];
        lp.minimumPressDuration = 0.5;
        [lp addTarget:nil action:@selector(jokerWalletToggle:)];
        [(UIView *)self addGestureRecognizer:lp];
        
        // 使用关联对象设置 handler
        static char kWalletHandlerKey;
        objc_setAssociatedObject(self, &kWalletHandlerKey, lp, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        
        jokerLog(@"[Joker] ✅ Wallet long press gesture added");
    }
}

// ==================== ⑤ 红包名称修改：照抄锤子助手 WeChatTweakRedEnvelopParam.setNickName_ ====================
static IMP orig_RedEnvLogic_send = NULL;
// 存储用户自定义的红包昵称
static NSString *g_redEnvelopeCustomNickname = nil;

static void hooked_RedEnvelope_send(id self, SEL _cmd, id params) {
    // 如果设置了自定义昵称，替换 params 中的昵称
    if (g_redEnvelopeCustomNickname && g_redEnvelopeCustomNickname.length > 0) {
        @try {
            SEL setNickSel = NSSelectorFromString(@"setNickName:");
            if ([params respondsToSelector:setNickSel]) {
                ((void(*)(id, SEL, id))objc_msgSend)(params, setNickSel, g_redEnvelopeCustomNickname);
                jokerLog([NSString stringWithFormat:@"[Joker] ✅ Red envelope nickname set to: %@", g_redEnvelopeCustomNickname]);
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ❌ Red envelope nickname: %@", e]);
        }
    }
    
    if (orig_RedEnvLogic_send) {
        ((void(*)(id, SEL, id))orig_RedEnvLogic_send)(self, _cmd, params);
    }
}

// ==================== JokerHook ====================
@implementation JokerHook

+ (void)install {
    jokerLog(@"[JokerHook] ========== install start (锤子助手风格) ==========");
    jokerLog([NSString stringWithFormat:@"[JokerHook] enableJoker=%d", [PluginConfig shared].enableJoker]);
    
    if (![PluginConfig shared].enableJoker) {
        jokerLog(@"[JokerHook] Joker disabled, skip install");
        return;
    }
    
    // ====== 版本检查：照抄锤子助手 CFBundleShortVersionString >= 8.0.29 ======
    NSString *wxVersion = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"];
    jokerLog([NSString stringWithFormat:@"[JokerHook] WeChat version: %@", wxVersion]);
    if ([wxVersion compare:@"8.0.29" options:NSNumericSearch] == NSOrderedAscending) {
        jokerLog(@"[JokerHook] ⚠️ WeChat version too old (<8.0.29), skip install");
        return;
    }
    
    // ====== ① 文本消息修改：照抄锤子助手 ======
    Class textCellClass = objc_getClass("TextMessageCellView");
    if (textCellClass) {
        jokerLog(@"[JokerHook] TextMessageCellView found");
        
        // class_addMethod: onTextJoker → v@:
        SEL onTextJokerSel = NSSelectorFromString(@"onTextJoker");
        BOOL added = class_addMethod(textCellClass, onTextJokerSel, (IMP)onTextJoker, "v@:");
        jokerLog([NSString stringWithFormat:@"[JokerHook] class_addMethod onTextJoker: %@", added ? @"YES" : @"NO (可能已存在)"]);
        
        // Hook operationMenuItems
        SEL menuSel = NSSelectorFromString(@"operationMenuItems");
        Method menuMethod = class_getInstanceMethod(textCellClass, menuSel);
        if (menuMethod) {
            orig_TextCell_operationMenuItems = method_setImplementation(menuMethod, (IMP)hooked_TextCell_operationMenuItems);
            jokerLog(@"[JokerHook] ✅ TextMessageCellView.operationMenuItems hooked");
        } else {
            jokerLog(@"[JokerHook] ⚠️ TextMessageCellView.operationMenuItems NOT found");
        }
    } else {
        jokerLog(@"[JokerHook] ⚠️ TextMessageCellView class NOT found");
    }
    
    // ====== ② 转账消息修改：照抄锤子助手 ======
    Class transferCellClass = objc_getClass("WCPayTransferMessageCellView");
    if (transferCellClass) {
        jokerLog(@"[JokerHook] WCPayTransferMessageCellView found");
        
        SEL onTransferJokerSel = NSSelectorFromString(@"onTransferJoker");
        BOOL added = class_addMethod(transferCellClass, onTransferJokerSel, (IMP)onTransferJoker, "v@:");
        jokerLog([NSString stringWithFormat:@"[JokerHook] class_addMethod onTransferJoker: %@", added ? @"YES" : @"NO"]);
        
        SEL menuSel = NSSelectorFromString(@"operationMenuItems");
        Method menuMethod = class_getInstanceMethod(transferCellClass, menuSel);
        if (menuMethod) {
            orig_TransferCell_operationMenuItems = method_setImplementation(menuMethod, (IMP)hooked_TransferCell_operationMenuItems);
            jokerLog(@"[JokerHook] ✅ WCPayTransferMessageCellView.operationMenuItems hooked");
        } else {
            jokerLog(@"[JokerHook] ⚠️ WCPayTransferMessageCellView.operationMenuItems NOT found");
        }
    } else {
        jokerLog(@"[JokerHook] ⚠️ WCPayTransferMessageCellView class NOT found");
    }
    
    // ====== ③ 钱包余额隐藏：照抄锤子助手 ======
    Class walletClass = objc_getClass("WCPayWalletEntryHeaderView");
    if (walletClass) {
        jokerLog(@"[JokerHook] WCPayWalletEntryHeaderView found");
        
        SEL updateSel = NSSelectorFromString(@"updateBalanceEntryView");
        Method updateMethod = class_getInstanceMethod(walletClass, updateSel);
        if (updateMethod) {
            orig_Wallet_updateBalanceEntryView = method_setImplementation(updateMethod, (IMP)hooked_Wallet_updateBalanceEntryView);
            jokerLog(@"[JokerHook] ✅ WCPayWalletEntryHeaderView.updateBalanceEntryView hooked");
        } else {
            jokerLog(@"[JokerHook] ⚠️ WCPayWalletEntryHeaderView.updateBalanceEntryView NOT found");
        }
    } else {
        jokerLog(@"[JokerHook] ⚠️ WCPayWalletEntryHeaderView class NOT found");
    }
    
    // ====== ④ 红包名称修改：照抄锤子助手 ======
    Class redEnvLogicClass = objc_getClass("WCRedEnvelopesLogicMgr");
    if (redEnvLogicClass) {
        jokerLog(@"[JokerHook] WCRedEnvelopesLogicMgr found");
        
        // Hook WCPayLogicMgr (微信支付/红包发送管理器)
        Class payLogicClass = objc_getClass("WCPayLogicMgr");
        if (payLogicClass) {
            // 尝试 hook 红包发送相关方法
            SEL sendSel = NSSelectorFromString(@"sendRedEnvelopesRequest:");
            Method sendMethod = class_getInstanceMethod(payLogicClass, sendSel);
            if (sendMethod) {
                orig_RedEnvLogic_send = method_setImplementation(sendMethod, (IMP)hooked_RedEnvelope_send);
                jokerLog(@"[JokerHook] ✅ Red envelope send hooked");
            }
        }
        
        // 备用：hook WCRedEnvelopesLogicMgr 的直接方法
        SEL openSel = NSSelectorFromString(@"OpenRedEnvelopesRequest:");
        Method openMethod = class_getInstanceMethod(redEnvLogicClass, openSel);
        if (openMethod && !orig_RedEnvLogic_send) {
            orig_RedEnvLogic_send = method_setImplementation(openMethod, (IMP)hooked_RedEnvelope_send);
            jokerLog(@"[JokerHook] ✅ Red envelope open hooked (fallback)");
        }
    } else {
        jokerLog(@"[JokerHook] ⚠️ WCRedEnvelopesLogicMgr class NOT found");
    }
    
    // ====== ⑤ 启用提示 ======
    dispatch_async(dispatch_get_main_queue(), ^{
        Class alertClass = objc_getClass("WCUIAlertView");
        if (alertClass) {
            @try {
                id alert = ((id(*)(id, SEL, id, id))objc_msgSend)([alertClass alloc], @selector(initWithTitle:message:),
                    @"锤子助手风格", @"修改文字功能已启用\n长按文本/转账消息即可修改\n长按钱包余额可隐藏");
                SEL showSel = NSSelectorFromString(@"show");
                if ([alert respondsToSelector:showSel]) {
                    ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
                }
            } @catch (NSException *e) {}
        }
    });
    
    jokerLog(@"[JokerHook] ========== install complete (锤子助手风格) ==========");
}

+ (void)setRedEnvelopeNickname:(NSString *)nickname {
    g_redEnvelopeCustomNickname = nickname;
}

@end