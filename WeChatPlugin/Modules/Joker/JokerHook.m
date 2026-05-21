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

// ==================== 公共：应用文字修改（msgWrap + RichTextView） ====================
static void applyTextModification(id msgRef, id cellRef, NSString *newText) {
    if (newText.length == 0) {
        jokerLog(@"[Joker] ⚠️ applyTextModification: empty text, skip");
        return;
    }
    jokerLog([NSString stringWithFormat:@"[Joker] 🔧 applyTextModification START: [%@]", newText]);
    jokerLog([NSString stringWithFormat:@"[Joker]    msgRef=%@ cellRef=%@", msgRef, cellRef]);

    // ① 写 msgWrap.m_nsContent（保证滚动/复用时不丢失）
    jokerLog(@"[Joker] ① 写入 msgWrap.m_nsContent...");
    BOOL msgUpdated = NO;
    if (msgRef) {
        @try {
            SEL setM_nsContentSel = NSSelectorFromString(@"setM_nsContent:");
            jokerLog([NSString stringWithFormat:@"[Joker]    respondsTo setM_nsContent: = %d", [msgRef respondsToSelector:setM_nsContentSel]]);
            if ([msgRef respondsToSelector:setM_nsContentSel]) {
                NSString *before = nil;
                @try { before = [msgRef valueForKey:@"m_nsContent"]; } @catch (NSException *e) {}
                jokerLog([NSString stringWithFormat:@"[Joker]    BEFORE m_nsContent=[%@]", before ?: @"(nil)"]);

                ((void(*)(id, SEL, id))objc_msgSend)(msgRef, setM_nsContentSel, newText);

                NSString *after = nil;
                @try { after = [msgRef valueForKey:@"m_nsContent"]; } @catch (NSException *e) {}
                jokerLog([NSString stringWithFormat:@"[Joker]    AFTER  m_nsContent=[%@]", after ?: @"(nil)"]);
                msgUpdated = [newText isEqualToString:after];
                jokerLog([NSString stringWithFormat:@"[Joker] ① msgWrap.m_nsContent %@", msgUpdated ? @"✅ UPDATED" : @"❌ MISMATCH"]);
            } else {
                jokerLog(@"[Joker] ① ❌ msgRef doesn't respond to setM_nsContent:");
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ① ❌ exception: %@", e]);
        }
    } else {
        jokerLog(@"[Joker] ① ⚠️ msgRef is nil, skip");
    }

    // ② 更新 viewModel + cell 刷新（照抄锤子助手 FUN_0076ffbc）
    dispatch_async(dispatch_get_main_queue(), ^{
        jokerLog(@"[Joker] ② dispatch_async main_queue START");

        // 2a. 更新 ViewModel（如果 ViewModel 缓存了内容，需要同步更新）
        jokerLog(@"[Joker] 2a 更新 viewModel...");
        @try {
            id viewModel = [cellRef valueForKey:@"m_viewModel"];
            jokerLog([NSString stringWithFormat:@"[Joker]    viewModel=%@ class=%@", viewModel, viewModel ? NSStringFromClass([viewModel class]) : @"(nil)"]);
            if (viewModel) {
                // 方法1: setM_nsContent:（锤子用这个，但 8.0.60 的 ViewModel 可能没有）
                SEL setContentSel = NSSelectorFromString(@"setM_nsContent:");
                jokerLog([NSString stringWithFormat:@"[Joker]    respondsTo setM_nsContent: = %d", [viewModel respondsToSelector:setContentSel]]);
                if ([viewModel respondsToSelector:setContentSel]) {
                    ((void(*)(id, SEL, id))objc_msgSend)(viewModel, setContentSel, newText);
                    jokerLog(@"[Joker] 2a ✅ viewModel.setM_nsContent");
                } else {
                    // 方法2: KVC fallback
                    @try {
                        [viewModel setValue:newText forKey:@"m_nsContent"];
                        jokerLog(@"[Joker] 2a ✅ viewModel KVC setValue:forKey:m_nsContent");
                    } @catch (NSException *kvcErr) {
                        jokerLog([NSString stringWithFormat:@"[Joker] 2a KVC also failed: %@", kvcErr]);
                        // 方法3: raw ivar access
                        Ivar ivar = class_getInstanceVariable([viewModel class], "m_nsContent");
                        if (ivar) {
                            object_setIvar(viewModel, ivar, newText);
                            jokerLog(@"[Joker] 2a ✅ viewModel raw ivar set");
                        } else {
                            jokerLog(@"[Joker] 2a ❌ all approaches failed for viewModel");
                        }
                    }
                }
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] 2a ❌ exception: %@", e]);
        }

        // 2b. 调用 cell 刷新方法
        jokerLog(@"[Joker] 2b 刷新 cell...");
        BOOL refreshed = NO;

        // 方法1: layoutContentView（微信 8.0.60 可用）
        SEL layoutSel = NSSelectorFromString(@"layoutContentView");
        jokerLog([NSString stringWithFormat:@"[Joker]    respondsTo layoutContentView = %d", [cellRef respondsToSelector:layoutSel]]);
        if ([cellRef respondsToSelector:layoutSel]) {
            ((void(*)(id, SEL))objc_msgSend)(cellRef, layoutSel);
            jokerLog(@"[Joker] 2b ✅ layoutContentView called");
            refreshed = YES;
        }

        // 方法2: setNeedsLayout + layoutIfNeeded（系统标准刷新）
        if ([cellRef respondsToSelector:@selector(setNeedsLayout)]) {
            [cellRef setNeedsLayout];
            jokerLog(@"[Joker] 2b setNeedsLayout ✅");
        }
        if ([cellRef respondsToSelector:@selector(layoutIfNeeded)]) {
            [cellRef layoutIfNeeded];
            jokerLog(@"[Joker] 2b layoutIfNeeded ✅");
            refreshed = YES;
        }

        // 方法3: updateLayouts（锤子用，但 8.0.60 可能没有）
        if (!refreshed) {
            SEL updateLayoutsSel = NSSelectorFromString(@"updateLayouts");
            jokerLog([NSString stringWithFormat:@"[Joker]    respondsTo updateLayouts = %d", [cellRef respondsToSelector:updateLayoutsSel]]);
            if ([cellRef respondsToSelector:updateLayoutsSel]) {
                ((void(*)(id, SEL))objc_msgSend)(cellRef, updateLayoutsSel);
                jokerLog(@"[Joker] 2b ✅ updateLayouts called");
                refreshed = YES;
            }
        }

        if (!refreshed) {
            jokerLog(@"[Joker] 2b ❌ NO refresh method available");
        }

        jokerLog([NSString stringWithFormat:@"[Joker] 🔧 applyTextModification DONE (msg=%@ viewModel=YES cell=%@)",
            msgUpdated ? @"YES" : @"NO", refreshed ? @"YES" : @"NO"]);
    });
}

// ==================== 弹窗：修改文字 ====================
// 锤子 cancel 按钮 target=cellView sel=NULL，confirm 按钮用 addBtnTitle:handler:(block)
// 我们在 ARC 下用 block 会因 MRC 不 retain 而 SIGSEGV，用 target:sel 在 alert 自身也不触发
// ✅ 最终方案：confirm 方法注入到 TextMessageCellView，target=cellView（跟 cancel 一致）
//    cellView 是 table view 持有的长生命周期对象，不会提前释放

static char kJokerAlertKey;
static char kJokerMsgKey;

// C IMP 注入到 TextMessageCellView：处理"确定"按钮点击
static void joker_text_confirm_IMP(id self, SEL _cmd) {
    jokerLog(@"🔥🔥🔥 JOKER CONFIRM CALLBACK FIRED 🔥🔥🔥");
    id alert = objc_getAssociatedObject(self, &kJokerAlertKey);
    id msgWrap = objc_getAssociatedObject(self, &kJokerMsgKey);
    jokerLog([NSString stringWithFormat:@"   self(cell)=%@ alert=%@ msg=%@", self, alert, msgWrap]);

    if (!alert) {
        jokerLog(@"   ⚠️ alert was released, cannot read text");
        return;
    }

    // 读取输入文本（照抄锤子 FUN_0076ffbc: valueForKeyPath:@"tipsVc.tipsTextView.text"）
    NSString *input = nil;
    @try {
        input = [alert valueForKeyPath:@"tipsVc.tipsTextView.text"];
        jokerLog([NSString stringWithFormat:@"   tipsVc.tipsTextView.text=%@", input ?: @"(nil)"]);
    } @catch (NSException *e) {
        jokerLog([NSString stringWithFormat:@"   tipsVc error: %@", e]);
    }
    if (!input || input.length == 0) {
        @try {
            input = [alert valueForKeyPath:@"tipsVc.tipsTextField.text"];
            jokerLog([NSString stringWithFormat:@"   tipsVc.tipsTextField.text=%@", input ?: @"(nil)"]);
        } @catch (NSException *e) {}
    }
    if (!input || input.length == 0) {
        SEL getText = NSSelectorFromString(@"getTextFieldText");
        if ([alert respondsToSelector:getText]) {
            input = ((id(*)(id, SEL))objc_msgSend)(alert, getText);
            jokerLog([NSString stringWithFormat:@"   getTextFieldText=%@", input ?: @"(nil)"]);
        }
    }
    jokerLog([NSString stringWithFormat:@"   FINAL input=[%@] len=%lu", input ?: @"(nil)", (unsigned long)(input ? input.length : 0)]);

    if (input.length > 0 && msgWrap) {
        jokerLog(@"   → calling applyTextModification...");
        applyTextModification(msgWrap, self, input);
        jokerLog(@"   → applyTextModification returned");
    } else {
        jokerLog([NSString stringWithFormat:@"   ⚠️ skip: input=%lu msg=%@",
            (unsigned long)(input.length), msgWrap ? @"YES" : @"NO"]);
    }
}

static void showEditAlert(id alertView, id cellView, id msgWrap, NSString *currentContent, void(^onConfirm)(NSString *newText)) {
    jokerLog(@"[Joker] showEditAlert — building WCUIAlertView directly");

    Class cls = objc_getClass("WCUIAlertView");
    if (!cls) { jokerLog(@"❌ WCUIAlertView not found"); return; }

    // 确保 confirm 方法注入到 TextMessageCellView（只注入一次）
    SEL confirmSel = NSSelectorFromString(@"__joker_text_confirm");
    Class cellClass = [cellView class];
    if (![cellClass instancesRespondToSelector:confirmSel]) {
        class_addMethod(cellClass, confirmSel, (IMP)joker_text_confirm_IMP, "v@:");
        jokerLog([NSString stringWithFormat:@"✅ __joker_text_confirm C IMP injected into %@", NSStringFromClass(cellClass)]);
    }

    @try {
        // ① alloc + init
        id alert = ((id(*)(id, SEL, id, id))objc_msgSend)([cls alloc], @selector(initWithTitle:message:), @"修改文字", @"");
        if (!alert) { jokerLog(@"❌ init nil"); return; }
        jokerLog([NSString stringWithFormat:@"① WCUIAlertView=%@", alert]);

        // ② textField
        SEL stf = NSSelectorFromString(@"showTextFieldWithMaxLen:");
        if ([alert respondsToSelector:stf]) {
            ((void(*)(id, SEL, NSInteger))objc_msgSend)(alert, stf, 99999);
            jokerLog(@"② showTextFieldWithMaxLen ✅");
        }

        // ③ pre-fill
        if (currentContent.length > 0) {
            SEL dtf = NSSelectorFromString(@"setTextFieldDefaultText:");
            if ([alert respondsToSelector:dtf]) {
                ((void(*)(id, SEL, id))objc_msgSend)(alert, dtf, currentContent);
                jokerLog(@"③ setTextFieldDefaultText ✅");
            }
        }

        // ④ cancel (target=cellView, sel=NULL — 锤子模式)
        SEL cancel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancel, @"取消", cellView, NULL);
            jokerLog(@"④ addCancelBtnTitle ✅");
        }

        // ⑤ confirm (target=cellView, sel=__joker_text_confirm)
        // 将 alert + msgWrap 关联到 cellView（长生命周期对象）
        objc_setAssociatedObject(cellView, &kJokerAlertKey, alert, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, &kJokerMsgKey, msgWrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

        SEL btn = NSSelectorFromString(@"addBtnTitle:target:sel:");
        if ([alert respondsToSelector:btn]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, btn, @"确定", cellView, confirmSel);
            jokerLog(@"⑤ addBtnTitle:target:sel: (target=cellView, sel=__joker_text_confirm) ✅");
        }

        // ⑥ show
        SEL sh = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:sh]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, sh);
            jokerLog(@"⑥ show ✅");
        }
    } @catch (NSException *e) {
        jokerLog([NSString stringWithFormat:@"❌ showEditAlert: %@", e]);
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

// ==================== ① mioTextJoker：照抄锤子助手 FUN_0076f720 ====================
// self = TextMessageCellView（mio 前缀避免与锤子 onTextJoker 冲突）
static void mioTextJoker(id self, SEL _cmd) {
    jokerLog(@"[Joker] mioTextJoker called");

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

// ==================== ② mioTransferJoker：照抄锤子助手 FUN_0076fb4c ====================
// self = WCPayTransferMessageCellView（mio 前缀避免与锤子 onTransferJoker 冲突）
static void mioTransferJoker(id self, SEL _cmd) {
    jokerLog(@"[Joker] mioTransferJoker called");

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
// FUN_0084c460(alloc, &cf_O9e, &cf_expression, "mioTextJoker") → 3参数，无target（mio 前缀避免冲突）

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
            // actionName 是 C 字符串 "mioTextJoker"（mio 前缀避免与锤子助手 onTextJoker 冲突）
            SEL initSel = NSSelectorFromString(@"initWithTitle:iconName:actionName:");
            id mmItem = nil;
            if ([mmItemClass instancesRespondToSelector:initSel]) {
                mmItem = ((id(*)(id, SEL, id, id, const char *))objc_msgSend)(
                    [[mmItemClass alloc] init], initSel,
                    @"修改文字", @"expression", "mioTextJoker");
            }
            if (!mmItem) {
                // fallback: initWithTitle:action:  (不带icon)
                SEL altInitSel = NSSelectorFromString(@"initWithTitle:action:");
                if ([mmItemClass instancesRespondToSelector:altInitSel]) {
                    mmItem = ((id(*)(id, SEL, id, SEL))objc_msgSend)(
                        [[mmItemClass alloc] init], altInitSel,
                        @"修改文字", NSSelectorFromString(@"mioTextJoker"));
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
                    @"修改文字", @"expression", "mioTransferJoker");
            }
            if (!mmItem) {
                SEL altInitSel = NSSelectorFromString(@"initWithTitle:action:");
                if ([mmItemClass instancesRespondToSelector:altInitSel]) {
                    mmItem = ((id(*)(id, SEL, id, SEL))objc_msgSend)(
                        [[mmItemClass alloc] init], altInitSel,
                        @"修改文字", NSSelectorFromString(@"mioTransferJoker"));
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
        
        // class_addMethod: mioTextJoker → v@:
        SEL onTextJokerSel = NSSelectorFromString(@"mioTextJoker");
        BOOL added = class_addMethod(textCellClass, onTextJokerSel, (IMP)mioTextJoker, "v@:");
        if (!added) {
            // 失败可能是热重载，强制替换
            Method m = class_getInstanceMethod(textCellClass, onTextJokerSel);
            if (m) {
                method_setImplementation(m, (IMP)mioTextJoker);
                added = YES;
            }
        }
        jokerLog([NSString stringWithFormat:@"[JokerHook] register mioTextJoker: %@", added ? @"YES" : @"NO"]);
        
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
        
        SEL onTransferJokerSel = NSSelectorFromString(@"mioTransferJoker");
        BOOL added = class_addMethod(transferCellClass, onTransferJokerSel, (IMP)mioTransferJoker, "v@:");
        if (!added) {
            Method m = class_getInstanceMethod(transferCellClass, onTransferJokerSel);
            if (m) {
                method_setImplementation(m, (IMP)mioTransferJoker);
                added = YES;
            }
        }
        jokerLog([NSString stringWithFormat:@"[JokerHook] register mioTransferJoker: %@", added ? @"YES" : @"NO"]);
        
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