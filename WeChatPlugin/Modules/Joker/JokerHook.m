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

    // ② 刷新（照抄锤子助手 FUN_0076ffbc 最后几行：cellView.viewModel → updateLayouts）
    dispatch_async(dispatch_get_main_queue(), ^{
        jokerLog(@"[Joker] ② dispatch_async main_queue — 锤子风格刷新");

        @try {
            id viewModel = [cellRef valueForKey:@"m_viewModel"];
            jokerLog([NSString stringWithFormat:@"[Joker]    viewModel=%@ class=%@", viewModel, viewModel ? NSStringFromClass([viewModel class]) : @"(nil)"]);

            if (viewModel) {
                // 锤子 FUN_00857fa0: [viewModel updateLayouts]
                SEL updateLayoutsSel = NSSelectorFromString(@"updateLayouts");
                jokerLog([NSString stringWithFormat:@"[Joker]    viewModel respondsTo updateLayouts = %d", [viewModel respondsToSelector:updateLayoutsSel]]);
                if ([viewModel respondsToSelector:updateLayoutsSel]) {
                    ((void(*)(id, SEL))objc_msgSend)(viewModel, updateLayoutsSel);
                    jokerLog(@"[Joker] ② ✅ [viewModel updateLayouts] called");
                } else {
                    jokerLog(@"[Joker] ② ⚠️ viewModel doesn't respond to updateLayouts either");
                }
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ② ❌ exception: %@", e]);
        }

        jokerLog([NSString stringWithFormat:@"[Joker] 🔧 applyTextModification DONE (msg=%@)", msgUpdated ? @"YES" : @"NO"]);
    });
}

// ==================== 转账消息修改（照抄锤子 FUN_00770164） ====================
static void applyTransferModification(id msgRef, id cellRef, NSString *newText) {
    jokerLog([NSString stringWithFormat:@"[Joker] 🔧 applyTransferModification START: [%@]", newText]);

    // ① 查找 payInfoItem（锤子路径: msgWrap → m_extendInfoWithMsgType → m_oWCPayInfoItem）
    id payInfoItem = nil;
    @try {
        id extendInfo = [msgRef valueForKey:@"m_extendInfoWithMsgType"];
        if (extendInfo) {
            payInfoItem = [extendInfo valueForKey:@"m_oWCPayInfoItem"];
            jokerLog([NSString stringWithFormat:@"[Joker]    extendInfo.m_oWCPayInfoItem = %@", payInfoItem ?: @"(nil)"]);
        }
    } @catch (NSException *e) {}

    // fallback: 直接从 msgRef 查找
    if (!payInfoItem) {
        for (NSString *k in @[@"m_oWCPayInfoItem", @"m_WCPayInfoItem"]) {
            @try { payInfoItem = [msgRef valueForKey:k]; } @catch (NSException *e) {}
            if (payInfoItem) break;
        }
    }
    if (!payInfoItem) { jokerLog(@"[Joker] ❌ no payInfoItem found — trying XML patch"); }
    jokerLog([NSString stringWithFormat:@"[Joker]    payInfoItem=%@", payInfoItem]);

    // ② 照抄锤子 FUN_00770164 验证逻辑，但适配 8.0.60（m_nsFeeDesc 带 ¥）
    // hammer 微信版 m_nsFeeDesc="0.01" 不含¥，所以只去空格就能验证通过
    // 8.0.60 m_nsFeeDesc="¥0.01" 含¥，需要额外去¥再验证，但写入仍保留¥（照抄 hammer 写 uVar2）
    NSString *validText = [newText stringByReplacingOccurrencesOfString:@" " withString:@""];
    validText = [validText stringByReplacingOccurrencesOfString:@"¥" withString:@""];
    jokerLog([NSString stringWithFormat:@"[Joker]    validText(cleaned)=[%@]", validText]);

    NSNumberFormatter *formatter = [[NSNumberFormatter alloc] init];
    [formatter setAllowsFloats:YES];
    NSNumber *n = [formatter numberFromString:validText];
    if (!n) {
        // ¥符号可能导致NSNumberFormatter失败，用锤子的错误提示
        jokerLog([NSString stringWithFormat:@"[Joker] ❌ not a valid number: [%@]", validText]);
        return;
    }

    // ③ 更新 payInfoItem + XML（锤子只更新 payInfoItem，但 8.0.60 的 updateTitleLabel 读 XML）
    BOOL updated = NO;
    if (payInfoItem) {
        @try {
            [payInfoItem setValue:newText forKey:@"m_nsFeeDesc"];
            jokerLog([NSString stringWithFormat:@"[Joker] ③ payInfoItem.m_nsFeeDesc ← [%@] ✅", newText]);
            // 验证写入
            id verify = [payInfoItem valueForKey:@"m_nsFeeDesc"];
            jokerLog([NSString stringWithFormat:@"[Joker]    VERIFY m_nsFeeDesc=[%@]", verify]);
            updated = YES;
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ③ ❌ payInfoItem failed: %@", e]);
        }
    }

    // ③b 始终更新 XML feedesc（8.0.60 的 updateTitleLabel 可能从 XML 读取）
    @try {
        NSString *xmlContent = [msgRef valueForKey:@"m_nsContent"];
        jokerLog([NSString stringWithFormat:@"[Joker] ③b XML m_nsContent length=%lu", (unsigned long)xmlContent.length]);
        if (xmlContent.length > 0) {
            NSString *replacement = [NSString stringWithFormat:@"<feedesc><![CDATA[%@]]></feedesc>", newText];
            NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"<feedesc><!\\[CDATA\\[.*?\\]\\]></feedesc>" options:NSRegularExpressionDotMatchesLineSeparators error:nil];
            NSString *newXml = [regex stringByReplacingMatchesInString:xmlContent options:0 range:NSMakeRange(0, xmlContent.length) withTemplate:replacement];
            if (newXml && ![newXml isEqualToString:xmlContent]) {
                [msgRef setValue:newXml forKey:@"m_nsContent"];
                jokerLog(@"[Joker] ③b XML feedesc patched ✅");
                updated = YES;
            } else {
                jokerLog(@"[Joker] ③b XML feedesc NOT changed (no match or same)");
            }
        }
    } @catch (NSException *e) {
        jokerLog([NSString stringWithFormat:@"[Joker] ③b ❌ XML patch failed: %@", e]);
    }

    // ④ 只调 updateTitleLabel（锤子 FUN_00770164 只调这个，不调 updateLayouts）
    dispatch_async(dispatch_get_main_queue(), ^{
        @try {
            SEL titleSel = NSSelectorFromString(@"updateTitleLabel");
            jokerLog([NSString stringWithFormat:@"[Joker] ④ cell respondsTo updateTitleLabel = %d", [cellRef respondsToSelector:titleSel]]);
            if ([cellRef respondsToSelector:titleSel]) {
                ((void(*)(id, SEL))objc_msgSend)(cellRef, titleSel);
                jokerLog(@"[Joker] ④ ✅ [cellRef updateTitleLabel]");
            }
        } @catch (NSException *e) {
            jokerLog([NSString stringWithFormat:@"[Joker] ④ ❌ %@", e]);
        }
        jokerLog([NSString stringWithFormat:@"[Joker] 🔧 applyTransferModification DONE (updated=%@)", updated ? @"YES" : @"NO"]);
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
        // 按 cell 类型分发：转账用 applyTransferModification，文本用 applyTextModification
        Class transferCls = objc_getClass("WCPayTransferMessageCellView");
        if (transferCls && [self isKindOfClass:transferCls]) {
            jokerLog(@"   → calling applyTransferModification...");
            applyTransferModification(msgWrap, self, input);
            jokerLog(@"   → applyTransferModification returned");
        } else {
            jokerLog(@"   → calling applyTextModification...");
            applyTextModification(msgWrap, self, input);
            jokerLog(@"   → applyTextModification returned");
        }
    } else {
        jokerLog([NSString stringWithFormat:@"   ⚠️ skip: input=%lu msg=%@",
            (unsigned long)(input.length), msgWrap ? @"YES" : @"NO"]);
    }
}

static void showEditAlert(id alertView, id cellView, id msgWrap, NSString *currentContent) {
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
        id alert = ((id(*)(id, SEL, id, id))objc_msgSend)([cls alloc], @selector(initWithTitle:message:), @"Mio助手", @"");
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
                // 安全检查：只对对象类型(@)或类对象(#)调用 object_getIvar
                if (type && (type[0] == '@' || type[0] == '#')) {
                    @try {
                        id val = object_getIvar(obj, ivars[i]);
                        jokerLog([NSString stringWithFormat:@"[Joker]   %@ (%s) = %@", nameStr, type, val ? [NSString stringWithFormat:@"<%@>", NSStringFromClass([val class])] : @"nil"]);
                    } @catch (NSException *e) {
                        jokerLog([NSString stringWithFormat:@"[Joker]   %@ → error: %@", nameStr, e]);
                    }
                } else {
                    // 原始类型，跳过但记录类型
                    jokerLog([NSString stringWithFormat:@"[Joker]   %@ (%s) = <primitive, skipped>", nameStr, type ?: "?"]);
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

    // 8.0.60 确认路径：m_viewModel → m_messageWrap
    @try {
        id viewModel = [self valueForKey:@"m_viewModel"];
        msgWrap = [viewModel valueForKey:@"m_messageWrap"];
        jokerLog(@"[Joker] ✅ Found msgWrap via m_viewModel.m_messageWrap");
    } @catch (NSException *e) {}
    if (!msgWrap) {
        @try { msgWrap = [self valueForKey:@"m_messageWrap"]; } @catch (NSException *e) {}
        if (msgWrap) jokerLog(@"[Joker] ✅ Found msgWrap via self.m_messageWrap (fallback)");
    }

    // 获取当前内容
    @try { content = [msgWrap valueForKey:@"m_nsContent"]; } @catch (NSException *e) {}
    if (!content) {
        @try { content = [msgWrap valueForKey:@"m_nsTitle"]; } @catch (NSException *e) {}
    }
    if (!content) content = @"";
    jokerLog([NSString stringWithFormat:@"[Joker] currentContent: %@", content]);

    showEditAlert(nil, self, msgWrap, content);
}

// ==================== ② mioTransferJoker：照抄锤子助手 FUN_0076fb4c ====================
// self = WCPayTransferMessageCellView（mio 前缀避免与锤子 onTransferJoker 冲突）
static void mioTransferJoker(id self, SEL _cmd) {
    jokerLog(@"[Joker] mioTransferJoker called");

    dumpAllIvars(self, @"WCPayTransferMessageCellView");

    id msgWrap = nil;
    NSString *content = nil;

    // 8.0.60 确认路径：m_viewModel → m_messageWrap
    @try {
        id viewModel = [self valueForKey:@"m_viewModel"];
        msgWrap = [viewModel valueForKey:@"m_messageWrap"];
        jokerLog(@"[Joker] ✅ transfer msgWrap via m_viewModel.m_messageWrap");
    } @catch (NSException *e) {}
    if (!msgWrap) {
        @try { msgWrap = [self valueForKey:@"m_messageWrap"]; } @catch (NSException *e) {}
        if (msgWrap) jokerLog(@"[Joker] ✅ transfer msgWrap via self.m_messageWrap (fallback)");
    }

    // 转账文字：锤子路径 msgWrap → m_extendInfoWithMsgType → m_oWCPayInfoItem → m_nsFeeDesc
    // 8.0.60 的 msgWrap.m_nsContent 是 XML 不是显示文字
    jokerLog(@"[Joker] 🔍 transfer: msgWrap → m_extendInfoWithMsgType → m_oWCPayInfoItem → m_nsFeeDesc");

    id payInfoItem = nil;
    @try {
        id extendInfo = [msgWrap valueForKey:@"m_extendInfoWithMsgType"];
        jokerLog([NSString stringWithFormat:@"[Joker]    m_extendInfoWithMsgType = %@", extendInfo ? [NSString stringWithFormat:@"<%@>", NSStringFromClass([extendInfo class])] : @"(nil)"]);
        if (extendInfo) {
            payInfoItem = [extendInfo valueForKey:@"m_oWCPayInfoItem"];
            jokerLog([NSString stringWithFormat:@"[Joker]    extendInfo.m_oWCPayInfoItem = %@", payInfoItem ?: @"(nil)"]);
            if (payInfoItem) {
                content = [payInfoItem valueForKey:@"m_nsFeeDesc"];
                jokerLog([NSString stringWithFormat:@"[Joker]    payInfoItem.m_nsFeeDesc = %@", content ?: @"(nil)"]);
            }
        }
    } @catch (NSException *e) {
        jokerLog([NSString stringWithFormat:@"[Joker]    extendInfo path failed: %@", e]);
    }

    // fallback: 直接从 msgWrap 找（旧版路径）
    if (!payInfoItem) {
        NSArray *fallbackKeys = @[@"m_oWCPayInfoItem", @"m_WCPayInfoItem"];
        for (NSString *k in fallbackKeys) {
            @try { payInfoItem = [msgWrap valueForKey:k]; } @catch (NSException *e) {}
            if (payInfoItem) { jokerLog([NSString stringWithFormat:@"[Joker]    fallback: msgWrap.%@ found", k]); break; }
        }
        if (payInfoItem && !content) {
            @try { content = [payInfoItem valueForKey:@"m_nsFeeDesc"]; } @catch (NSException *e) {}
        }
    }

    if (!content) { @try { content = [msgWrap valueForKey:@"m_nsContent"]; } @catch (NSException *e) {} }
    if (content.length > 200) {
        jokerLog(@"[Joker] ⚠️ content looks like XML (>200 chars), clearing for clean input");
        content = @"";
    }
    if (!content) content = @"";
    // 照抄锤子：保留 ¥ 前缀，原始值预填
    jokerLog([NSString stringWithFormat:@"[Joker] transfer final content=[%@]", content]);

    showEditAlert(nil, self, msgWrap, content);
}

// ==================== ③ 锤子助手风格 operationMenuItems hook ====================
// 照抄锤子助手：[[MMMenuItem alloc] initWithTitle:iconName:actionName:]
// FUN_0084c460(alloc, &cf_O9e, &cf_expression, "mioTextJoker") → 3参数，无target（mio 前缀避免冲突）

// ==================== TextMessageCellView 菜单Hook ====================
static id hooked_TextCell_operationMenuItems(id self, SEL _cmd) {
    jokerLog([NSString stringWithFormat:@"[Joker] 🔗 TextCellMenu self=%@", NSStringFromClass([self class])]);
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
            SEL initSel = NSSelectorFromString(@"initWithTitle:iconName:actionName:");
            id mmItem = nil;
            if ([mmItemClass instancesRespondToSelector:initSel]) {
                mmItem = ((id(*)(id, SEL, id, id, const char *))objc_msgSend)(
                    [[mmItemClass alloc] init], initSel, @"Mio修改文字", @"expression", "mioTextJoker");
            }
            if (!mmItem) {
                SEL altInitSel = NSSelectorFromString(@"initWithTitle:action:");
                if ([mmItemClass instancesRespondToSelector:altInitSel]) {
                    mmItem = ((id(*)(id, SEL, id, SEL))objc_msgSend)(
                        [[mmItemClass alloc] init], altInitSel, @"Mio修改文字", NSSelectorFromString(@"mioTextJoker"));
                }
            }
            if (mmItem) { [newItems addObject:mmItem]; }
        } @catch (NSException *e) {}
    }
    return newItems;
}

// ==================== WCPayTransferMessageCellView 菜单Hook ====================
static id hooked_TransferCell_operationMenuItems(id self, SEL _cmd) {
    jokerLog([NSString stringWithFormat:@"[Joker] 🔗 TransferCellMenu self=%@", NSStringFromClass([self class])]);
    NSMutableArray *items = nil;
    if (orig_TransferCell_operationMenuItems) {
        items = ((id(*)(id, SEL))orig_TransferCell_operationMenuItems)(self, _cmd);
        jokerLog([NSString stringWithFormat:@"[Joker]    orig items: %@", items ? [items valueForKey:@"title"] : @"(nil)"]);
    }
    if (!items) items = [NSMutableArray array];
    if (![PluginConfig shared].enableJoker) return items;
    
    NSMutableArray *newItems = [items mutableCopy];
    Class mmItemClass = objc_getClass("MMMenuItem");
    if (mmItemClass) {
        @try {
            SEL initSel = NSSelectorFromString(@"initWithTitle:iconName:actionName:");
            id mmItem = nil;
            if ([mmItemClass instancesRespondToSelector:initSel]) {
                mmItem = ((id(*)(id, SEL, id, id, const char *))objc_msgSend)(
                    [[mmItemClass alloc] init], initSel, @"Mio修改文字", @"expression", "mioTransferJoker");
            }
            if (!mmItem) {
                SEL altInitSel = NSSelectorFromString(@"initWithTitle:action:");
                if ([mmItemClass instancesRespondToSelector:altInitSel]) {
                    mmItem = ((id(*)(id, SEL, id, SEL))objc_msgSend)(
                        [[mmItemClass alloc] init], altInitSel, @"Mio修改文字", NSSelectorFromString(@"mioTransferJoker"));
                }
            }
            if (mmItem) { [newItems addObject:mmItem]; }
        } @catch (NSException *e) {}
    }
    return newItems;
}

// ==================== ④ 钱包余额修改：照抄锤子助手 FUN_0076fdbc + FUN_00770550 ====================
static char kJokerWalletAlertKey;

// C IMP 注入到 WCPayWalletEntryHeaderView：处理钱包修改"确定"按钮
static void joker_wallet_confirm_IMP(id self, SEL _cmd) {
    jokerLog(@"🔥🔥🔥 JOKER WALLET CONFIRM CALLBACK FIRED 🔥🔥🔥");
    id alert = objc_getAssociatedObject(self, &kJokerWalletAlertKey);
    jokerLog([NSString stringWithFormat:@"   self(headerView)=%@ alert=%@", self, alert]);

    if (!alert) { jokerLog(@"   ⚠️ alert released"); return; }

    // 读输入
    NSString *input = nil;
    @try { input = [alert valueForKeyPath:@"tipsVc.tipsTextView.text"]; }
    @catch (NSException *e) {}
    jokerLog([NSString stringWithFormat:@"   input=[%@]", input ?: @"(nil)"]);

    if (!input || input.length == 0) { jokerLog(@"   ⚠️ empty input"); return; }

    // 数字验证（锤子: setAllowsFloats:YES + numberFromString:）
    NSNumberFormatter *fmt = [[NSNumberFormatter alloc] init];
    [fmt setAllowsFloats:YES];
    NSNumber *n = [fmt numberFromString:input];
    jokerLog([NSString stringWithFormat:@"   numberFromString result=%@", n]);
    if (!n) { jokerLog([NSString stringWithFormat:@"   ❌ not a valid number: [%@]", input]); return; }

    // 获取 timeoutNumber 并调用 updateNumber（锤子：integerValue → updateNumber:NSInteger）
    @try {
        SEL tnSel = NSSelectorFromString(@"timeoutNumber");
        jokerLog([NSString stringWithFormat:@"   respondsTo timeoutNumber = %d", [self respondsToSelector:tnSel]]);
        id timeoutNumber = nil;
        if ([self respondsToSelector:tnSel]) {
            timeoutNumber = ((id(*)(id, SEL))objc_msgSend)(self, tnSel);
        } else {
            timeoutNumber = [self valueForKey:@"timeoutNumber"];
        }
        jokerLog([NSString stringWithFormat:@"   timeoutNumber=%@", timeoutNumber]);

        if (timeoutNumber) {
            NSInteger intVal = [n integerValue];
            jokerLog([NSString stringWithFormat:@"   integerValue=%ld", (long)intVal]);
            SEL updateNumSel = NSSelectorFromString(@"updateNumber:");
            jokerLog([NSString stringWithFormat:@"   respondsTo updateNumber: = %d", [timeoutNumber respondsToSelector:updateNumSel]]);
            if ([timeoutNumber respondsToSelector:updateNumSel]) {
                // 锤子直接传 NSInteger，方法签名可能是 updateNumber:(NSInteger)
                ((void(*)(id, SEL, NSInteger))objc_msgSend)(timeoutNumber, updateNumSel, intVal);
                jokerLog([NSString stringWithFormat:@"   ✅ [timeoutNumber updateNumber:%ld]", (long)intVal]);
            }
        }
    } @catch (NSException *e) {
        jokerLog([NSString stringWithFormat:@"   ❌ wallet update: %@", e]);
    }

    }

static void walletLongPressHandler(id self, SEL _cmd, UIGestureRecognizer *gesture) {
    if (gesture.state != UIGestureRecognizerStateBegan) return;
    UIView *headerView = (UIView *)self;
    jokerLog([NSString stringWithFormat:@"[Joker] Wallet long press: %@", headerView]);

    // 注入 C IMP
    Class cls = [headerView class];
    SEL walletSel = NSSelectorFromString(@"__joker_wallet_confirm");
    if (![cls instancesRespondToSelector:walletSel]) {
        class_addMethod(cls, walletSel, (IMP)joker_wallet_confirm_IMP, "v@:");
        jokerLog([NSString stringWithFormat:@"✅ __joker_wallet_confirm C IMP injected into %@", NSStringFromClass(cls)]);
    }

    // 创建 WCUIAlertView（锤子: title="修改文字", 无预填）
    Class alertCls = objc_getClass("WCUIAlertView");
    if (!alertCls) { jokerLog(@"❌ WCUIAlertView not found"); return; }

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
        jokerLog(@"[Joker] ✅ Wallet alert shown");
    } @catch (NSException *e) {
        jokerLog([NSString stringWithFormat:@"[Joker] ❌ Wallet alert: %@", e]);
    }
}

static void hooked_Wallet_updateBalanceEntryView(id self, SEL _cmd) {
    if (orig_Wallet_updateBalanceEntryView) {
        ((void(*)(id, SEL))orig_Wallet_updateBalanceEntryView)(self, _cmd);
    }

    if (![PluginConfig shared].enableJoker) return;

    // 添加长按手势（只添加一次）
    BOOL hasGesture = NO;
    for (UIGestureRecognizer *g in ((UIView *)self).gestureRecognizers) {
        if ([g isKindOfClass:[UILongPressGestureRecognizer class]]) { hasGesture = YES; break; }
    }
    if (!hasGesture) {
        // 注入手势处理方法到 headerView class
        SEL gestureSel = NSSelectorFromString(@"__joker_wallet_longpress");
        class_addMethod([((UIView *)self) class], gestureSel, (IMP)walletLongPressHandler, "v@:@");

        UILongPressGestureRecognizer *lp = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:gestureSel];
        lp.minimumPressDuration = 0.5;
        [(UIView *)self addGestureRecognizer:lp];
        jokerLog(@"[Joker] ✅ Wallet long press gesture added");
    }
}

// ==================== ④.5 零钱通修改：照抄锤子助手 FUN_0076fec4 + FUN_007708bc ====================
static char kJokerTimeoutAlertKey;

// C IMP 注入到 TimeoutNumber：处理零钱通"确定"按钮
static void joker_timeout_confirm_IMP(id self, SEL _cmd) {
    jokerLog(@"🔥🔥🔥 JOKER TIMEOUT CONFIRM CALLBACK FIRED 🔥🔥🔥");
    id alert = objc_getAssociatedObject(self, &kJokerTimeoutAlertKey);
    jokerLog([NSString stringWithFormat:@"   self(timeoutNumber)=%@ alert=%@", self, alert]);

    if (!alert) { jokerLog(@"   ⚠️ alert released"); return; }

    NSString *input = nil;
    @try { input = [alert valueForKeyPath:@"tipsVc.tipsTextView.text"]; }
    @catch (NSException *e) {}
    jokerLog([NSString stringWithFormat:@"   input=[%@]", input ?: @"(nil)"]);

    if (!input || input.length == 0) { jokerLog(@"   ⚠️ empty input"); return; }

    // 数字验证（锤子: setAllowsFloats:YES + numberFromString:）
    NSNumberFormatter *fmt = [[NSNumberFormatter alloc] init];
    [fmt setAllowsFloats:YES];
    NSNumber *n = [fmt numberFromString:input];
    jokerLog([NSString stringWithFormat:@"   numberFromString=%@", n]);
    if (!n) { jokerLog([NSString stringWithFormat:@"   ❌ invalid number: [%@]", input]); return; }

    NSInteger intVal = [n integerValue];
    jokerLog([NSString stringWithFormat:@"   integerValue=%ld", (long)intVal]);

    SEL updateSel = NSSelectorFromString(@"updateNumber:");
    jokerLog([NSString stringWithFormat:@"   respondsTo updateNumber: = %d", [self respondsToSelector:updateSel]]);
    if ([self respondsToSelector:updateSel]) {
        ((void(*)(id, SEL, NSInteger))objc_msgSend)(self, updateSel, intVal);
        jokerLog([NSString stringWithFormat:@"   ✅ [self updateNumber:%ld]", (long)intVal]);
    }
}

// TimeoutNumber 长按手势处理
static void joker_timeout_longpress_IMP(id self, SEL _cmd, UIGestureRecognizer *gesture) {
    if (gesture.state != UIGestureRecognizerStateBegan) return;
    UIView *timeoutView = (UIView *)self;
    jokerLog([NSString stringWithFormat:@"[Joker] TimeoutNumber long press: %@", timeoutView]);

    // 注入 confirm C IMP
    Class cls = [timeoutView class];
    SEL confirmSel = NSSelectorFromString(@"__joker_timeout_confirm");
    if (![cls instancesRespondToSelector:confirmSel]) {
        class_addMethod(cls, confirmSel, (IMP)joker_timeout_confirm_IMP, "v@:");
        jokerLog([NSString stringWithFormat:@"✅ __joker_timeout_confirm injected into %@", NSStringFromClass(cls)]);
    }

    // 创建弹窗
    Class alertCls = objc_getClass("WCUIAlertView");
    if (!alertCls) { jokerLog(@"❌ WCUIAlertView not found"); return; }

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
        jokerLog(@"[Joker] ✅ TimeoutNumber alert shown");
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
        jokerLog([NSString stringWithFormat:@"[Joker] ✅ TimeoutNumber long press added to %@", self]);
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
    
    // ====== ① 文本消息修改：注册 handler ======
    Class textCellClass = objc_getClass("TextMessageCellView");
    if (textCellClass) {
        jokerLog(@"[JokerHook] TextMessageCellView found");
        
        SEL onTextJokerSel = NSSelectorFromString(@"mioTextJoker");
        BOOL added = class_addMethod(textCellClass, onTextJokerSel, (IMP)mioTextJoker, "v@:");
        jokerLog([NSString stringWithFormat:@"[JokerHook] text: mioTextJoker=%d", added]);
        if (!added) {
            Method m = class_getInstanceMethod(textCellClass, onTextJokerSel);
            if (m) { method_setImplementation(m, (IMP)mioTextJoker); added = YES; }
        }
        jokerLog([NSString stringWithFormat:@"[JokerHook] register mioTextJoker: %@", added ? @"YES" : @"NO"]);
    } else {
        jokerLog(@"[JokerHook] ⚠️ TextMessageCellView class NOT found");
    }
    
    // ====== ② 转账消息修改：注册 handler ======
    Class transferCellClass = objc_getClass("WCPayTransferMessageCellView");
    if (transferCellClass) {
        jokerLog(@"[JokerHook] WCPayTransferMessageCellView found");
        
        SEL onTransferJokerSel = NSSelectorFromString(@"mioTransferJoker");
        BOOL added = class_addMethod(transferCellClass, onTransferJokerSel, (IMP)mioTransferJoker, "v@:");
        jokerLog([NSString stringWithFormat:@"[JokerHook] transfer: mioTransferJoker=%d", added]);
        if (!added) {
            Method m = class_getInstanceMethod(transferCellClass, onTransferJokerSel);
            if (m) { method_setImplementation(m, (IMP)mioTransferJoker); added = YES; }
        }
        jokerLog([NSString stringWithFormat:@"[JokerHook] register mioTransferJoker: %@", added ? @"YES" : @"NO"]);
    } else {
        jokerLog(@"[JokerHook] ⚠️ WCPayTransferMessageCellView class NOT found");
    }
    
    // ====== 🆕 统一菜单Hook：每个子类各自hook，class_addMethod失败就用method_setImplementation接链 ======
    // 微信8.0.60 这两个子类都有各自的 operationMenuItems 实现
    // class_addMethod 会失败 → 退回到 method_setImplementation（保留orig接链）
    
    SEL menuSel = NSSelectorFromString(@"operationMenuItems");
    
    if (textCellClass) {
        Method existing = class_getInstanceMethod(textCellClass, menuSel);
        if (existing) {
            IMP curIMP = method_getImplementation(existing);
            orig_TextCell_operationMenuItems = curIMP;  // 保留当前链路上的IMP（可能是锤子hook）
            method_setImplementation(existing, (IMP)hooked_TextCell_operationMenuItems);
            jokerLog([NSString stringWithFormat:@"[JokerHook] ✅ TextCell.operationMenuItems hooked, orig=%p", curIMP]);
        }
    }
    
    if (transferCellClass) {
        Method existing = class_getInstanceMethod(transferCellClass, menuSel);
        if (existing) {
            IMP curIMP = method_getImplementation(existing);
            orig_TransferCell_operationMenuItems = curIMP;
            method_setImplementation(existing, (IMP)hooked_TransferCell_operationMenuItems);
            jokerLog([NSString stringWithFormat:@"[JokerHook] ✅ TransferCell.operationMenuItems hooked, orig=%p", curIMP]);
        }
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
    
    // ====== ③.5 零钱通修改：照抄锤子助手 FUN_0076fec4 ======
    Class timeoutClass = objc_getClass("TimeoutNumber");
    if (timeoutClass) {
        jokerLog(@"[JokerHook] TimeoutNumber found");
        SEL didMoveSel = NSSelectorFromString(@"didMoveToWindow");

        // 检查 TimeoutNumber 是否自己重写了 didMoveToWindow（8.0.60 可能没有）
        unsigned int methodCount;
        Method *timeoutMethods = class_copyMethodList(timeoutClass, &methodCount);
        BOOL hasOwnDidMove = NO;
        for (unsigned int i = 0; i < methodCount; i++) {
            if (sel_isEqual(method_getName(timeoutMethods[i]), didMoveSel)) {
                hasOwnDidMove = YES; break;
            }
        }
        free(timeoutMethods);
        jokerLog([NSString stringWithFormat:@"[JokerHook] TimeoutNumber hasOwnDidMoveToWindow = %d", hasOwnDidMove]);

        if (hasOwnDidMove) {
            // 有自己的实现，安全替换
            Method didMoveMethod = class_getInstanceMethod(timeoutClass, didMoveSel);
            orig_TimeoutNumber_didMoveToWindow = method_setImplementation(didMoveMethod, (IMP)hooked_TimeoutNumber_didMoveToWindow);
            jokerLog(@"[JokerHook] ✅ TimeoutNumber.didMoveToWindow hooked (own impl)");
        } else {
            // 继承 UIView 的 didMoveToWindow，用 class_addMethod 只在 TimeoutNumber 上追加
            Method uiViewMethod = class_getInstanceMethod(objc_getClass("UIView"), didMoveSel);
            orig_TimeoutNumber_didMoveToWindow = method_getImplementation(uiViewMethod);
            class_addMethod(timeoutClass, didMoveSel, (IMP)hooked_TimeoutNumber_didMoveToWindow, "v@:");
            jokerLog(@"[JokerHook] ✅ TimeoutNumber.didMoveToWindow via class_addMethod (inherit from UIView)");
        }
    } else {
        jokerLog(@"[JokerHook] ⚠️ TimeoutNumber class NOT found");
    }
    
    jokerLog(@"[JokerHook] ========== install complete (锤子助手风格) ==========");
}

@end