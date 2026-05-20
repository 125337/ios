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

// ==================== 编辑弹窗：严格照抄锤子助手 FUN_0076f720 WCUIAlertView 流程 ====================
/*
 锤子助手 onTextJoker 完整调用链（反编译 FUN_0076f720）：
 1. [[WCUIAlertView alloc] initWithTitle:cf__P_RKb message:cf__cO9e]   ← 必须带两个字符串参数 init
 2. [alert setTag:99999]
 3. [alert setMessage:currentContent]                                    ← 预填文本内容
 4. [alert setStyle:1]                                                   ← 文本输入模式
 5. [alert addCancelActionWithTitle:@"" target:cellView action:NULL]     ← 取消按钮
 6. [alert addActionWithTitle:@"" handler:block]                         ← 确定按钮
 7. [alert show]

 回调中获取输入: [alert valueForKeyPath:@"tipsVc.tipsTextView.text"]
 */

// ==================== 公共：应用文字修改（msgWrap + RichTextView） ====================
static void applyTextModification(id msgRef, id cellRef, NSString *newText) {
    if (newText.length == 0) return;
    jokerLog([NSString stringWithFormat:@"[Joker] applyTextModification: %@", newText]);

    // ① 写 msgWrap.m_nsContent
    if (msgRef) {
        @try {
            SEL setM_nsContentSel = NSSelectorFromString(@"setM_nsContent:");
            if ([msgRef respondsToSelector:setM_nsContentSel]) {
                ((void(*)(id, SEL, id))objc_msgSend)(msgRef, setM_nsContentSel, newText);
                jokerLog(@"[Joker] ✅ Updated msgWrap.m_nsContent");
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ❌ setM_nsContent: %@", e]);
        }
    }

    // ② 更新 RichTextView 显示层
    dispatch_async(dispatch_get_main_queue(), ^{
        @try {
            id richTextView = nil;
            Ivar ivar = class_getInstanceVariable([cellRef class], "m_richTextView");
            if (ivar) richTextView = object_getIvar(cellRef, ivar);
            if (!richTextView) {
                id viewModel = nil;
                @try { viewModel = [cellRef valueForKey:@"m_viewModel"]; } @catch (NSException *e) {}
                @try { richTextView = [viewModel valueForKey:@"m_richTextView"]; } @catch (NSException *e) {}
            }
            if (richTextView) {
                SEL setTextSel = NSSelectorFromString(@"setText:");
                if ([richTextView respondsToSelector:setTextSel]) {
                    ((void(*)(id, SEL, id))objc_msgSend)(richTextView, setTextSel, newText);
                }
                [richTextView setNeedsDisplay];
                jokerLog(@"[Joker] ✅ RichTextView updated");
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ❌ display: %@", e]);
        }
    });
}

static void showEditAlert(id alertView, id cellView, id msgWrap, NSString *currentContent, void(^onConfirm)(NSString *newText)) {
    jokerLog(@"[Joker] showEditAlert");

    Class alertClass = objc_getClass("WCUIAlertView");
    if (!alertClass) {
        jokerLog(@"[Joker] ⚠️ WCUIAlertView not found, fallback to UIAlertController");
        id cellRef = cellView;
        id msgRef = msgWrap;
        dispatch_async(dispatch_get_main_queue(), ^{
            UIAlertController *ac = [UIAlertController alertControllerWithTitle:@"修改文字" message:@"" preferredStyle:UIAlertControllerStyleAlert];
            [ac addTextFieldWithConfigurationHandler:^(UITextField *tf) {
                tf.text = currentContent;
                tf.clearButtonMode = UITextFieldViewModeWhileEditing;
            }];
            [ac addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
            [ac addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
                NSString *nt = ac.textFields.firstObject.text ?: @"";
                applyTextModification(msgRef, cellRef, nt);
            }]];
            UIViewController *rootVC = [UIApplication sharedApplication].keyWindow.rootViewController;
            while (rootVC.presentedViewController) rootVC = rootVC.presentedViewController;
            [rootVC presentViewController:ac animated:YES completion:nil];
        });
        return;
    }

    // ===== 照抄锤子助手：[[WCUIAlertView alloc] initWithTitle:@"修改文字" message:currentContent] =====
    // 关键：必须用 initWithTitle:message: 而不是 init，否则 alert 内部未初始化导致 show 秒关
    id alert = ((id(*)(id, SEL, id, id))objc_msgSend)([alertClass alloc], @selector(initWithTitle:message:),
        @"修改文字", currentContent);
    jokerLog([NSString stringWithFormat:@"[Joker] WCUIAlertView init: %@", alert]);

    if (!alert) {
        jokerLog(@"[Joker] ❌ WCUIAlertView init returned nil");
        return;
    }

    id cellRef = cellView;
    id msgRef = msgWrap;
    id alertRef = alert;

    // ② setTag:99999
    ((void(*)(id, SEL, NSInteger))objc_msgSend)(alert, NSSelectorFromString(@"setTag:"), 99999);

    // ③ setMessage:currentContent（照抄 FUN_008560c0，在 setStyle 之前设内容）
    SEL setMsgSel = NSSelectorFromString(@"setMessage:");
    if ([alert respondsToSelector:setMsgSel]) {
        ((void(*)(id, SEL, id))objc_msgSend)(alert, setMsgSel, currentContent);
        jokerLog(@"[Joker] setMessage done");
    }

    // ④ setStyle:1（照抄 FUN_008556c0，文本输入模式）
    SEL setStyleSel = NSSelectorFromString(@"setStyle:");
    if ([alert respondsToSelector:setStyleSel]) {
        ((void(*)(id, SEL, NSInteger))objc_msgSend)(alert, setStyleSel, 1);
        jokerLog(@"[Joker] setStyle:1 done");
    }

    // ⑤ addCancelActionWithTitle:（照抄 FUN_00846340 → 取消按钮）
    SEL addCancelSel = NSSelectorFromString(@"addCancelActionWithTitle:");
    if ([alert respondsToSelector:addCancelSel]) {
        ((void(*)(id, SEL, id))objc_msgSend)(alert, addCancelSel, @"取消");
        jokerLog(@"[Joker] addCancelAction done");
    }

    // ⑥ addActionWithTitle:handler:（照抄 FUN_008462a0 → 确定按钮 + block回调）
    SEL addActionSel = NSSelectorFromString(@"addActionWithTitle:handler:");
    if ([alert respondsToSelector:addActionSel]) {
        ((void(*)(id, SEL, id, id))objc_msgSend)(alert, addActionSel, @"确定", ^(id btn) {
            jokerLog(@"[Joker] confirm callback");

            // 照抄锤子助手：valueForKeyPath:@"tipsVc.tipsTextView.text"
            NSString *newText = nil;
            @try {
                newText = [alertRef valueForKeyPath:@"tipsVc.tipsTextView.text"];
            } @catch (NSException *e) {
                jokerLog([NSString stringWithFormat:@"[Joker] tipsVc path error: %@", e]);
            }
            if (!newText) {
                @try { newText = [alertRef valueForKeyPath:@"m_textField.text"]; } @catch (NSException *e) {}
            }
            if (!newText) newText = @"";

            jokerLog([NSString stringWithFormat:@"[Joker] input: %@", newText]);
            applyTextModification(msgRef, cellRef, newText);
        });
        jokerLog(@"[Joker] addAction handler done");
    }

    // ⑦ show（照抄 FUN_00856a00）
    SEL showSel = NSSelectorFromString(@"show");
    if ([alert respondsToSelector:showSel]) {
        ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
        jokerLog(@"[Joker] ✅ WCUIAlertView shown");
    }
}

// ==================== 诊断：打印对象所有 ivar，发现正确的 msgWrap 路径 ====================
static void dumpAllIvars(id obj, NSString *label) {
    if (!obj) { jokerLog([NSString stringWithFormat:@"[Joker] 📋 %@ is nil", label]); return; }

    unsigned int count = 0;
    Class cls = [obj class];
    jokerLog([NSString stringWithFormat:@"[Joker] 📋 %@ (%@) ivars:", label, NSStringFromClass(cls)]);

    // 遍历自身 + 所有父类
    while (cls && cls != [NSObject class]) {
        Ivar *ivars = class_copyIvarList(cls, &count);
        for (unsigned int i = 0; i < count; i++) {
            const char *name = ivar_getName(ivars[i]);
            const char *type = ivar_getTypeEncoding(ivars[i]);
            NSString *nameStr = [NSString stringWithUTF8String:name];
            // 只关注可能跟 message/content 相关的 ivar
            if (strstr(name, "essage") || strstr(name, "ontent") || strstr(name, "Wrap") ||
                strstr(name, "msg") || strstr(name, "Msg") || strstr(name, "odel")) {
                @try {
                    id val = object_getIvar(obj, ivars[i]);
                    jokerLog([NSString stringWithFormat:@"[Joker]   %@ (%s) = %@", nameStr, type, val ? [NSString stringWithFormat:@"<%@>", NSStringFromClass([val class])] : @"nil"]);
                } @catch (NSException *e) {
                    jokerLog([NSString stringWithFormat:@"[Joker]   %@ → error: %@", nameStr, e]);
                }
            }
        }
        free(ivars);
        cls = class_getSuperclass(cls);
    }
}

// ==================== ① onTextJoker：照抄锤子助手 FUN_0076f720 ====================
// self = TextMessageCellView
static void onTextJoker(id self, SEL _cmd) {
    jokerLog(@"[Joker] onTextJoker called");

    // === 诊断：打印 cellView 所有 ivar，定位 msgWrap ===
    dumpAllIvars(self, @"TextMessageCellView");

    id msgWrap = nil;
    NSString *content = nil;

    // 逐一尝试所有已知路径
    NSArray *msgWrapKeys = @[@"m_messageWrap", @"m_msgWrap", @"messageWrap", @"msgWrap", @"m_msg", @"m_message"];
    NSArray *intermediateObjects = @[
        @[@""],                               // 直接从 cellView 自身取
        @[@"m_viewModel"],                     // viewModel → msgWrap
        @[@"m_delegate"],                      // delegate → msgWrap
        @[@"m_cellData"],                      // cellData → msgWrap
        @[@"m_viewModel", @"m_cellData"],      // viewModel → cellData → msgWrap
        @[@"m_delegate", @"m_currentMessage"], // delegate → currentMessage
    ];

    for (NSArray *chain in intermediateObjects) {
        if (msgWrap) break;
        id current = self;
        BOOL chainOK = YES;

        for (NSString *key in chain) {
            if (key.length == 0) continue;
            @try { current = [current valueForKey:key]; } @catch (NSException *e) { chainOK = NO; break; }
            if (!current) { chainOK = NO; break; }
        }

        if (!chainOK) continue;

        if (chain.count == 1 && [chain[0] isEqual:@""]) {
            // 直接从 self 取 msgWrapKeys
            for (NSString *k in msgWrapKeys) {
                id m = nil;
                @try { m = [self valueForKey:k]; } @catch (NSException *e) {}
                if (m) {
                    msgWrap = m;
                    jokerLog([NSString stringWithFormat:@"[Joker] ✅ Found msgWrap via self.%@", k]);
                    break;
                }
            }
        } else {
            // 从中间对象取
            for (NSString *k in msgWrapKeys) {
                id m = nil;
                @try { m = [current valueForKey:k]; } @catch (NSException *e) {}
                if (m) {
                    msgWrap = m;
                    jokerLog([NSString stringWithFormat:@"[Joker] ✅ Found msgWrap via %@.%@", [chain componentsJoinedByString:@"."], k]);
                    break;
                }
            }
        }

        if (!msgWrap && chain.count > 0) {
            // 中间对象找到了但 msgWrap 没找到，打印它的 ivar 帮助诊断
            NSString *chainStr = [chain componentsJoinedByString:@"."];
            dumpAllIvars(current, [NSString stringWithFormat:@"intermediate(%@)", chainStr]);
        }
    }

    jokerLog([NSString stringWithFormat:@"[Joker] final msgWrap: %@", msgWrap]);

    // 获取当前内容
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
    jokerLog(@"[Joker] onTransferJoker called");

    dumpAllIvars(self, @"WCPayTransferMessageCellView");

    id msgWrap = nil;
    NSString *content = nil;

    NSArray *msgWrapKeys = @[@"m_messageWrap", @"m_msgWrap", @"messageWrap", @"msgWrap"];
    NSArray *intermediateObjects = @[@[@""], @[@"m_viewModel"], @[@"m_delegate"], @[@"m_cellData"]];

    for (NSArray *chain in intermediateObjects) {
        if (msgWrap) break;
        id current = self;
        BOOL chainOK = YES;
        for (NSString *key in chain) {
            if (key.length == 0) continue;
            @try { current = [current valueForKey:key]; } @catch (NSException *e) { chainOK = NO; break; }
            if (!current) { chainOK = NO; break; }
        }
        if (!chainOK) continue;

        for (NSString *k in msgWrapKeys) {
            id m = nil;
            @try { m = chain.count==1 && [chain[0] isEqual:@""] ? [self valueForKey:k] : [current valueForKey:k]; } @catch (NSException *e) {}
            if (m) { msgWrap = m; jokerLog([NSString stringWithFormat:@"[Joker] ✅ transfer msgWrap via %@.%@", [chain componentsJoinedByString:@"."], k]); break; }
        }
    }

    @try { content = [msgWrap valueForKey:@"m_nsContent"]; } @catch (NSException *e) {}
    if (!content) { @try { content = [msgWrap valueForKey:@"m_nsTitle"]; } @catch (NSException *e) {} }
    if (!content) content = @"";
    jokerLog([NSString stringWithFormat:@"[Joker] transfer content: %@", content]);

    showEditAlert(nil, self, msgWrap, content, nil);
}

// ==================== ③ 锤子助手风格 operationMenuItems hook ====================
// 照抄锤子助手：[[MMMenuItem alloc] initWithTitle:iconName:actionName:]
// FUN_0084c460(alloc, &cf_O9e, &cf_expression, "onTextJoker") → 3参数，无target

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
            // 照抄锤子助手: initWithTitle:iconName:actionName: (3参数，无target)
            // actionName 是 C 字符串 "onTextJoker"
            SEL initSel = NSSelectorFromString(@"initWithTitle:iconName:actionName:");
            id mmItem = nil;
            if ([mmItemClass instancesRespondToSelector:initSel]) {
                mmItem = ((id(*)(id, SEL, id, id, const char *))objc_msgSend)(
                    [[mmItemClass alloc] init], initSel,
                    @"修改文字", @"expression", "onTextJoker");
            }
            if (!mmItem) {
                // fallback: initWithTitle:action:  (不带icon)
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
            } else {
                jokerLog(@"[Joker] ⚠️ Failed to create MMMenuItem");
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ❌ TextCell menu item: %@", e]);
        }
    } else {
        jokerLog(@"[Joker] ⚠️ MMMenuItem class not found");
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
            // 照抄锤子助手: initWithTitle:iconName:actionName: (3参数，无target)
            SEL initSel = NSSelectorFromString(@"initWithTitle:iconName:actionName:");
            id mmItem = nil;
            if ([mmItemClass instancesRespondToSelector:initSel]) {
                mmItem = ((id(*)(id, SEL, id, id, const char *))objc_msgSend)(
                    [[mmItemClass alloc] init], initSel,
                    @"修改文字", @"expression", "onTransferJoker");
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
            } else {
                jokerLog(@"[Joker] ⚠️ Failed to create MMMenuItem for transfer");
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ❌ TransferCell menu item: %@", e]);
        }
    } else {
        jokerLog(@"[Joker] ⚠️ MMMenuItem class not found");
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
    
    jokerLog(@"[JokerHook] ========== install complete (锤子助手风格) ==========");
}

+ (void)setRedEnvelopeNickname:(NSString *)nickname {
    g_redEnvelopeCustomNickname = nickname;
}

@end