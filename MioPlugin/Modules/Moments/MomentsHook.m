#import "MomentsHook.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <stdlib.h>
#import "../../Core/LogManager.h"
#import "MomentsConfig.h"

#pragma mark - 便捷朋友圈（WCR 同款机制，触发词 pyq）

// 防重入标志：触发后置位，500ms 后主线程清零（WCR FUN_017a7970 同款防抖窗口）
static volatile BOOL gPyqHandling = NO;
static IMP orig_pyq_didChange = NULL;    // textViewDidChange:（MMGrowTextView 主探测）
static IMP orig_tv_setDelegate = NULL;   // UITextView setDelegate:（动态挂载器）
static IMP orig_pyq_dyn1 = NULL;         // 动态 delegate 类的 textViewDidChange: 原实现
static IMP orig_pyq_dyn2 = NULL;
static Class gDynCls1 = NULL, gDynCls2 = NULL;

// 递归找第一个 UIScrollView（深度限制 4 层）
static UIScrollView *MioFindFirstScroll(UIView *root, int depth) {
    if (!root || depth > 4) return nil;
    for (UIView *sub in root.subviews) {
        if ([sub isKindOfClass:[UIScrollView class]]) return (UIScrollView *)sub;
    }
    for (UIView *sub in root.subviews) {
        UIScrollView *r = MioFindFirstScroll(sub, depth + 1);
        if (r) return r;
    }
    return nil;
}

// 150ms 布局修补（WCR FUN_017afcc8 同款时序 + 162 日志实证的三处全屏残留修正）：
// 全屏规格的 WCTimeLine 页面装进 0.7 屏高半屏容器后：
// 1) adapter 把 nav 放 y=40，顶部露一截容器白底 → nav.view 顶满容器（158 实证必需）
// 2) 顶部盖板（UIImageView 120 / UIView 98 = 54 状态栏+44 导航栏的全屏规格）不透明
//    压在内容上层，盖住 44~98 区间的帖子 → 收缩到 44（162 实证必需）
// 3) 表格 contentInset.top=98（全屏规格，behavior=.never 安全区不叠加）→ 压到 44，
//    自然静止位变 -44，滑动松手不回弹；UIKit 改 inset 时会自动补偿 offset（162 六次
//    实证），无需手动拨。微信数据加载会在 150~600ms 间重置 inset/盖板，由外层
//    600ms/1.5s 复查兜住；修补幂等，重复执行无副作用
static void MioPatchTimelineLayout(UINavigationController *nav) {
    UIView *v = nav.view;
    UIView *parent = v.superview;
    if (!v.window || !parent) return;
    CGRect pf = parent.bounds;
    if (v.frame.origin.y != 0 || v.frame.size.height != pf.size.height) {
        v.frame = CGRectMake(0, 0, pf.size.width, pf.size.height);
        [v layoutIfNeeded];
    }

    UIViewController *rootVC = nav.viewControllers.firstObject;
    UIView *rv = rootVC.view;
    if (!rv) return;

    // 顶部盖板收缩：y=0、全宽、高 90~200 的为全屏规格盖板（状态栏+导航栏），统一压到 44
    for (UIView *sub in rv.subviews) {
        CGRect sf = sub.frame;
        if (sf.origin.y == 0 && sf.size.height >= 90 && sf.size.height <= 200 &&
            sf.size.width >= rv.bounds.size.width - 1) {
            sub.frame = CGRectMake(0, 0, sf.size.width, 44);
        }
    }

    // 表格顶部 inset 全屏残留（98）压到 44（半屏导航栏高）
    UIScrollView *sv = MioFindFirstScroll(rv, 0);
    if (sv && sv.contentInset.top > 46) {
        UIEdgeInsets ci = sv.contentInset;
        ci.top = 44;
        sv.contentInset = ci;
    }
}

// 打开朋友圈半屏（WCR onOpenWCTimeline / FUN_017a65f0 同款实证）：
// WCTimeLineViewController 裸建（朋友圈页面类，WCR 原样 alloc init）→ 包
// UINavigationController → 微信自家半屏组件 MMPageSheetAdapter 弹出（0.7 屏高，
// 边缘滑/拖拽/点背景均可关闭）。绝不取现成 NewMainFrameViewController——
// 那是微信首页聊天列表 VC，从主界面结构拽出来会导致弹出首页且整屏失灵
static void MioOpenTimelinePageSheet(void) {
    @try {
        Class tlCls = NSClassFromString(@"WCTimeLineViewController");
        if (!tlCls) {
            WPLog(@"Moments", @"[Pyq] WCTimeLineViewController NOT found");
            return;
        }
        id tlvc = [[tlCls alloc] init];
        UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:tlvc];

        // 微信自家半屏组件（WCR 同款三关闭途径全开）
        Class cfgCls = objc_getClass("MMPageSheetConfig");
        Class adpCls = objc_getClass("MMPageSheetAdapter");
        SEL edgeSel = NSSelectorFromString(@"setEnableEdgeSlideToClose:");
        SEL dragSel = NSSelectorFromString(@"setEnableDragToClose:");
        SEL tapBgSel = NSSelectorFromString(@"setIsAllowTapBgMaskToClose:");
        SEL setCfgSel = NSSelectorFromString(@"setPageSheetConfig:");
        SEL setHostSel = NSSelectorFromString(@"setHostViewController:");
        SEL setHSel = NSSelectorFromString(@"setContentHeight:");
        SEL showSel = NSSelectorFromString(@"showWithAnimated:");
        if (cfgCls && adpCls
            && [(id)cfgCls instancesRespondToSelector:edgeSel]
            && [(id)cfgCls instancesRespondToSelector:dragSel]
            && [(id)cfgCls instancesRespondToSelector:tapBgSel]
            && [(id)adpCls instancesRespondToSelector:setCfgSel]
            && [(id)adpCls instancesRespondToSelector:setHostSel]
            && [(id)adpCls instancesRespondToSelector:setHSel]
            && [(id)adpCls instancesRespondToSelector:showSel]) {
            id cfg = [[cfgCls alloc] init];
            ((void(*)(id, SEL, BOOL))objc_msgSend)(cfg, edgeSel, YES);
            ((void(*)(id, SEL, BOOL))objc_msgSend)(cfg, dragSel, YES);
            ((void(*)(id, SEL, BOOL))objc_msgSend)(cfg, tapBgSel, YES);
            id adp = [[adpCls alloc] init];
            ((void(*)(id, SEL, id))objc_msgSend)(adp, setCfgSel, cfg);
            ((void(*)(id, SEL, id))objc_msgSend)(adp, setHostSel, nav);
            double h = [UIScreen mainScreen].bounds.size.height * 0.7;
            ((void(*)(id, SEL, double))objc_msgSend)(adp, setHSel, h);
            ((void(*)(id, SEL, BOOL))objc_msgSend)(adp, showSel, YES);
            WPLog(@"Moments", @"[Pyq] timeline page-sheet shown (h=%.0f)", h);
            // 布局修补：150ms（WCR FUN_017afcc8 同款时序）+ 600ms/1.5s 复查
            //（162 实证：微信数据加载会在 150~600ms 间重置 inset/盖板）
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.15 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{ MioPatchTimelineLayout(nav); });
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.6 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{ MioPatchTimelineLayout(nav); });
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.5 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{ MioPatchTimelineLayout(nav); });
        } else {
            WPLog(@"Moments", @"[Pyq] MMPageSheetAdapter NOT available");
        }
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[Pyq] open error: %@", e);
    }
}

// 输入变化垫片（主 + 动态 delegate 类共用）：先调对应原实现，再检测 pyq。
// 文本来源双兼容：self 有 text 用 self.text（WCR FUN_017a7970 同款），
// 否则用 textView 参数的 text（动态 delegate 可能是无 text 的 VC/容器）
static void hooked_pyq_didChange(id self, SEL _cmd, id textView) {
    IMP orig = orig_pyq_didChange;
    if (gDynCls1 && [self isMemberOfClass:gDynCls1]) orig = orig_pyq_dyn1;
    else if (gDynCls2 && [self isMemberOfClass:gDynCls2]) orig = orig_pyq_dyn2;
    if (orig) ((void(*)(id, SEL, id))orig)(self, _cmd, textView);
    @try {
        NSString *text = nil;
        SEL textSel = NSSelectorFromString(@"text");
        if ([self respondsToSelector:textSel]) {
            id t = ((id(*)(id, SEL))objc_msgSend)(self, textSel);
            if ([t isKindOfClass:[NSString class]]) text = t;
        }
        if (!text && [textView isKindOfClass:[UITextView class]]) {
            text = [(UITextView *)textView text];
        }
        if (gPyqHandling) return;
        MomentsConfig *cfg = [MomentsConfig shared];
        if (!cfg.convenientMomentsEnabled) return;
        if (text.length == 0) return;
        // trim 空白（WCR FUN_017b0dd8 同款）
        text = [text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (![text isEqualToString:@"pyq"]) return;

        gPyqHandling = YES;
        // 清空输入（self setText 优先，textView setText 兜底，均带守卫）
        SEL setSel = NSSelectorFromString(@"setText:");
        if ([self respondsToSelector:setSel]) {
            ((void(*)(id, SEL, id))objc_msgSend)(self, setSel, @"");
        }
        if ([textView isKindOfClass:[UITextView class]]) {
            [(UITextView *)textView setText:@""];
        }
        // 打开朋友圈半屏（WCR 同款，无需宿主 VC）
        dispatch_async(dispatch_get_main_queue(), ^{
            MioOpenTimelinePageSheet();
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{ gPyqHandling = NO; });
        });
    } @catch (NSException *e) {
        gPyqHandling = NO;
        WPLog(@"Moments", @"[Pyq] error: %@", e);
    }
}

// UITextView setDelegate: 动态挂载器：微信系输入框的 delegate 设给谁，
// 就实时把 pyq 垫片挂到那个 delegate 类的 textViewDidChange: 上（幂等防重）
static void hooked_tv_setDelegate(id self, SEL _cmd, id delegate) {
    if (orig_tv_setDelegate) {
        ((void(*)(id, SEL, id))orig_tv_setDelegate)(self, _cmd, delegate);
    }
    if (!delegate) return;
    @try {
        NSString *tvCn = NSStringFromClass([self class]);
        // 只关注微信输入框系 textView（聊天输入/搜索等）
        if (![tvCn hasPrefix:@"MM"] && ![tvCn containsString:@"GrowTextView"]) return;
        Class dCls = [delegate class];
        if (dCls == objc_getClass("MMGrowTextView")) return;   // 主探测已挂
        SEL didSel = NSSelectorFromString(@"textViewDidChange:");
        Method m = class_getInstanceMethod(dCls, didSel);
        if (!m || method_getImplementation(m) == (IMP)hooked_pyq_didChange) return;
        if (dCls == gDynCls1 || dCls == gDynCls2) return;   // 已挂过
        IMP origImp = method_getImplementation(m);
        if (!gDynCls1) {
            gDynCls1 = dCls; orig_pyq_dyn1 = origImp;
        } else if (!gDynCls2) {
            gDynCls2 = dCls; orig_pyq_dyn2 = origImp;
        } else {
            return;   // 两个动态槽已满
        }
        method_setImplementation(m, (IMP)hooked_pyq_didChange);
        WPLog(@"Moments", @"[Pyq] dyn-hook %@.textViewDidChange:", NSStringFromClass(dCls));
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[Pyq] setDelegate probe error: %@", e);
    }
}

// 安装：MMGrowTextView textViewDidChange:（WCR MSHookMessageEx 同款位置）+
// UITextView setDelegate: 动态挂载器
static void MioInstallPyqHooks(void) {
    SEL didSel = NSSelectorFromString(@"textViewDidChange:");
    Class growCls = objc_getClass("MMGrowTextView");
    if (!growCls) {
        WPLog(@"Moments", @"[Pyq] SKIP: MMGrowTextView NOT found");
        return;
    }
    Method m1 = class_getInstanceMethod(growCls, didSel);
    if (m1) {
        orig_pyq_didChange = method_getImplementation(m1);
        method_setImplementation(m1, (IMP)hooked_pyq_didChange);
        WPLog(@"Moments", @"[Pyq] MMGrowTextView.textViewDidChange: hooked");
    } else {
        WPLog(@"Moments", @"[Pyq] SKIP: textViewDidChange: NOT found");
    }

    Class tvCls = [UITextView class];
    Method m3 = class_getInstanceMethod(tvCls, NSSelectorFromString(@"setDelegate:"));
    if (m3) {
        orig_tv_setDelegate = method_getImplementation(m3);
        method_setImplementation(m3, (IMP)hooked_tv_setDelegate);
        WPLog(@"Moments", @"[Pyq] UITextView.setDelegate: probe hooked");
    }
}

// 重挂自检：微信晚到的初始化可能覆盖 IMP，20s/45s 检查并恢复
static void MioRehookCheck(int round) {
    SEL didSel = NSSelectorFromString(@"textViewDidChange:");
    SEL delSel = NSSelectorFromString(@"setDelegate:");
    int fixed = 0;

    Class growCls = objc_getClass("MMGrowTextView");
    if (growCls) {
        Method m1 = class_getInstanceMethod(growCls, didSel);
        if (m1 && method_getImplementation(m1) != (IMP)hooked_pyq_didChange) {
            orig_pyq_didChange = method_getImplementation(m1);
            method_setImplementation(m1, (IMP)hooked_pyq_didChange);
            fixed++;
        }
    }
    Method m3 = class_getInstanceMethod([UITextView class], delSel);
    if (m3 && method_getImplementation(m3) != (IMP)hooked_tv_setDelegate) {
        orig_tv_setDelegate = method_getImplementation(m3);
        method_setImplementation(m3, (IMP)hooked_tv_setDelegate);
        fixed++;
    }
    WPLog(@"Moments", @"[Pyq] rehook check(%d) fixed=%d", round, fixed);
}

#pragma mark - 高清朋友圈（WCR 同款机制：ActionSheet 注入 + 强制原图重开选图器）

// WCR 证据链（FUN_0033c69c 安装器反编译实锤）：hook WCTimeLineViewController
// configDataReportForActionSheet: 注入「选择高清照片/视频」按钮（WCActionSheetItem +
// setEventAction: + addButtonWithItem:atIndex:，buttonTitleList 防重）→ 点击 dismiss 后
// 200ms 置总闸并重开选图器（KVC 链 poster/m_poster/... 找发图页，showImagePicker 系逐级
// 降级，WCTimelineRouterHelper 7 参兜底）→ 画质生效层 = 4 类 14 个能力/限制 getter 改写
// （MMImagePickerManagerOptionObj 8 + MMAssetInfo 2 + MMConfigMgr 1 + MMImagePickerController 3）：
// 能力类返 1（canSendOriginalImage/forceSendOriginalImage/isOpenSendOriginVideo/
// isNotShowVideoSizeAlertView/canSendOriginImage）、限制类返 0（hideOriginButton/
// m_isJustReturnMMAsset/isWAVideoCompressed/isExceededOriginFileSizeLimit）、大小限制返
// NSUIntegerMax（originLimitSize/getInputLimitVideoSize）、uiMaxVideoDuration 返 18000；
// → 选图器默认原图 + 原图不受文件大小限制 → viewDidPopOrDismiss: 清总闸（ResetFlow 同位）。
// 注意：WCR 不碰 MMAssetTimeLineConfig（此前误挂 compressQuality 等与压缩决策无关，画质不达标根因）；
// MMAssetPickerController 的 4 个 UI hook 为 WCR 原图按钮挪位装饰，与画质无关，不抄

static volatile BOOL gHDPending = NO;   // HD 会话总闸（WCR DAT_028c9ee0/e1 同位）
static IMP orig_hd_configSheet = NULL;  // configDataReportForActionSheet: 原实现
static IMP orig_hd_popDismiss = NULL;   // viewDidPopOrDismiss: 原实现（清窗点）

static BOOL MioHDEnabled(void) {
    return [MomentsConfig shared].hdMomentsEnabled;
}

// WCR FUN_0033eb94 同款反射 setter：NSSelectorFromString + respondsToSelector 守卫
static void MioHDSetB(id obj, NSString *selName, BOOL val) {
    if (!obj) return;
    SEL sel = NSSelectorFromString(selName);
    if (![obj respondsToSelector:sel]) return;
    ((void(*)(id, SEL, BOOL))objc_msgSend)(obj, sel, val);
}

static void MioHDSetN(id obj, NSString *selName, NSInteger val) {
    if (!obj) return;
    SEL sel = NSSelectorFromString(selName);
    if (![obj respondsToSelector:sel]) return;
    ((void(*)(id, SEL, NSInteger))objc_msgSend)(obj, sel, val);
}

// WCR FUN_0033e618 同款：对发图页对象执行强制原图配置（15 项 setter 全序列）
static void MioApplyHDOptions(id poster) {
    if (!poster) return;
    MioHDSetB(poster, @"setCanSendOriginalImage:", YES);
    MioHDSetB(poster, @"setCanSendOriginImage:", YES);
    MioHDSetB(poster, @"setIsOpenSendOriginVideo:", YES);
    MioHDSetB(poster, @"setCanSendVideoMessage:", YES);
    MioHDSetB(poster, @"setCanSendMultiImage:", YES);
    MioHDSetB(poster, @"setButtonEnableAfterSend:", YES);
    MioHDSetB(poster, @"setIsNotShowVideoSizeAlertView:", YES);
    MioHDSetB(poster, @"setHideOriginButton:", NO);
    MioHDSetB(poster, @"setForceSendOriginalImage:", YES);   // 强制原图（WCR 实锤）
    MioHDSetB(poster, @"setShowSkipBtn:", NO);
    MioHDSetB(poster, @"setCanSendMultiVideo:", NO);
    MioHDSetB(poster, @"setCanHybridSendAsset:", NO);
    MioHDSetB(poster, @"setNeedThumbImage:", NO);
    MioHDSetB(poster, @"setIsWAVideoCompressed:", NO);
    MioHDSetB(poster, @"setVideoDirectToEditMode:", NO);
    MioHDSetB(poster, @"setImageDirectToEditMode:", NO);
    MioHDSetB(poster, @"setM_isJustReturnMMAsset:", NO);
    MioHDSetB(poster, @"setIsCamera:", NO);
    MioHDSetN(poster, @"setPreviewEditScene:", 4);
    MioHDSetN(poster, @"setCompressType:", 1);
    MioHDSetN(poster, @"setMaxImageCount:", 9);
    MioHDSetN(poster, @"setVideoQualityType:", 1);
}

// WCR FUN_0033a3a4 同款：取 sheet 的 buttonTitleList（防重 + 注入位置）
static NSArray *MioHDSheetTitles(id sheet) {
    SEL listSel = NSSelectorFromString(@"buttonTitleList");
    if (![sheet respondsToSelector:listSel]) return nil;
    @try {
        id list = ((id(*)(id, SEL))objc_msgSend)(sheet, listSel);
        if ([list isKindOfClass:[NSArray class]]) return list;
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[HD] titleList error: %@", e);
    }
    return nil;
}

// WCR FUN_0033acac 主路径同款：对 vc/poster 逐级降级调 showImagePicker 系重开选图器
static BOOL MioHDTryShowPicker(id obj) {
    if (!obj) return NO;
    struct { const char *sel; int argc; } cands[] = {
        {"showImagePicker:showsCameraButtonInPicker:showsCameraButtonAtBottom:shareInfo:", 4},
        {"showImagePicker:showsCameraButtonInPicker:showsCameraButtonAtBottom:", 3},
        {"showImagePicker:", 1},
    };
    for (int i = 0; i < 3; i++) {
        SEL sel = NSSelectorFromString(@(cands[i].sel));
        if (![obj respondsToSelector:sel]) continue;
        switch (cands[i].argc) {
            case 4: ((void(*)(id, SEL, id, id, id, id))objc_msgSend)(obj, sel, nil, nil, nil, nil); break;
            case 3: ((void(*)(id, SEL, id, id, id))objc_msgSend)(obj, sel, nil, nil, nil); break;
            case 1: ((void(*)(id, SEL, id))objc_msgSend)(obj, sel, nil); break;
        }
        return YES;
    }
    return NO;
}

// WCR FUN_0033d694 同款：KVC 链找发图页（poster/m_poster/timelinePoster/postSessionController）
static id MioHDFindPoster(id vc) {
    NSArray *keys = @[@"poster", @"m_poster", @"timelinePoster", @"m_timelinePoster",
                      @"postSessionController", @"m_postSessionController"];
    for (NSString *k in keys) {
        SEL sel = NSSelectorFromString(k);
        if (![vc respondsToSelector:sel]) continue;
        @try {
            id p = ((id(*)(id, SEL))objc_msgSend)(vc, sel);
            if (p && p != vc) return p;
        } @catch (NSException *e) {
        }
    }
    return nil;
}

// WCR FUN_0033acac 兜底同款：WCTimelineRouterHelper 7 参路由重开选图器
static void MioHDRouterReopen(id vc, id poster) {
    Class routerCls = objc_getClass("WCTimelineRouterHelper");
    SEL routeSel = NSSelectorFromString(@"showImagePickerWithPickerScene:sourceType:showsCameraButtonInPicker:showsCameraButtonAtBottom:customOptionsBlock:delegate:fromViewController:");
    if (!routerCls || ![routerCls respondsToSelector:routeSel]) return;
    NSInteger scene = 1;   // WCR：候选全失败则 1
    if (poster) {
        NSArray *keys = @[@"getPickerScene", @"pickerScene", @"routePickerViewEnterScene",
                          @"albumPickerEnterScene", @"startSourceScene", @"fromSourceScene"];
        for (NSString *k in keys) {
            SEL sel = NSSelectorFromString(k);
            if (![poster respondsToSelector:sel]) continue;
            @try {
                id v = ((id(*)(id, SEL))objc_msgSend)(poster, sel);
                NSInteger n = [v respondsToSelector:@selector(integerValue)] ? [v integerValue] : 0;
                if (n >= 1) { scene = n; break; }
            } @catch (NSException *e) {
            }
        }
    }
    void (^optBlock)(id) = ^(id opt) {
        // WCR FUN_0033e0e0：对配置对象 setIsCamera:0 + 强制原图全序列
        MioHDSetB(opt, @"setIsCamera:", NO);
        MioApplyHDOptions(opt);
    };
    ((void(*)(id, SEL, NSInteger, NSInteger, BOOL, BOOL, void(^)(id), id, id))objc_msgSend)
        (routerCls, routeSel, scene, 0, NO, NO, optBlock, poster ?: vc, vc);
}

// 点击「选择高清照片/视频」→ 200ms 后置总闸并重开选图器（WCR FUN_0033a85c 同款时序）
static void MioHDReopenPicker(id vc) {
    gHDPending = YES;
    id poster = MioHDFindPoster(vc);
    // WCR 主路径（FUN_0033a85c）无 setter 注入：15 项配置只经 RouterHelper 的
    // customOptionsBlock（FUN_0033e0e0）打在选图选项对象上，此处对齐不重复打
    if (MioHDTryShowPicker(vc) || MioHDTryShowPicker(poster)) return;
    MioHDRouterReopen(vc, poster);
    // 超时兜底：异常路径下防总闸残留（正常由 viewDidPopOrDismiss 清窗）
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(600 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        if (gHDPending) gHDPending = NO;
    });
}

// WCR FUN_0033cd10 同款垫片：先原实现，再注入按钮（开关守卫 + 全反射）
static void hooked_hd_configSheet(id self, SEL _cmd, id sheet) {
    if (orig_hd_configSheet) {
        ((void(*)(id, SEL, id))orig_hd_configSheet)(self, _cmd, sheet);
    }
    if (!MioHDEnabled() || !sheet) return;
    @try {
        if (![sheet isKindOfClass:objc_getClass("WCTimelineActionSheet")]) return;
        NSArray *titles = MioHDSheetTitles(sheet);
        if (titles) {
            for (NSString *t in titles) {
                if ([t isKindOfClass:[NSString class]] &&
                    ([t isEqualToString:@"选择高清照片/视频"] || [t containsString:@"高清照片"])) {
                    return;   // 防重（WCR 同款：title 精确/包含匹配）
                }
            }
        }
        Class itemCls = objc_getClass("WCActionSheetItem");
        SEL initSel = NSSelectorFromString(@"initWithTitle:");
        SEL actSel = NSSelectorFromString(@"setEventAction:");
        SEL addSel = NSSelectorFromString(@"addButtonWithItem:atIndex:");
        if (!itemCls || ![itemCls instancesRespondToSelector:initSel]
            || ![itemCls instancesRespondToSelector:actSel]
            || ![sheet respondsToSelector:addSel]) {
            WPLog(@"Moments", @"[HD] ActionSheet API NOT available");
            return;
        }
        __weak id wvc = self;
        __weak id wsheet = sheet;
        id item = ((id(*)(id, SEL, id))objc_msgSend)([itemCls alloc], initSel, @"选择高清照片/视频");
        if (!item) return;
        ((void(*)(id, SEL, id))objc_msgSend)(item, actSel, ^{
            // WCR FUN_0033a85c：dismiss → 200ms → 置总闸 + 重开选图器
            id sv = wsheet;
            if ([sv respondsToSelector:NSSelectorFromString(@"dismissWithClickedButtonIndex:animated:")]) {
                ((void(*)(id, SEL, NSInteger, BOOL))objc_msgSend)(sv, NSSelectorFromString(@"dismissWithClickedButtonIndex:animated:"), (NSInteger)-1, YES);
            }
            id vv = wvc;
            if (!vv) return;
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.2 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{
                @try {
                    MioHDReopenPicker(vv);
                } @catch (NSException *e) {
                    gHDPending = NO;
                    WPLog(@"Moments", @"[HD] reopen error: %@", e);
                }
            });
        });
        NSInteger idx = titles ? (NSInteger)[titles count] : 0;   // WCR：addButtonWithItem:atIndex:[items count]
        ((void(*)(id, SEL, id, NSInteger))objc_msgSend)(sheet, addSel, item, idx);
        WPLog(@"Moments", @"[HD] button injected at %ld", (long)idx);
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[HD] inject error: %@", e);
    }
}

// WCR FUN_0053d0f4 同位清窗：发布页 pop/发布完成 → 关总闸（ResetFlow 同位）
static void hooked_hd_popDismiss(id self, SEL _cmd, BOOL animated) {
    if (orig_hd_popDismiss) {
        ((void(*)(id, SEL, BOOL))orig_hd_popDismiss)(self, _cmd, animated);
    }
    gHDPending = NO;
}

// ===== 画质生效层：4 类 14 个能力/限制 getter 改写（WCR FUN_0033c69c 安装器逐函数反编译实锤）=====
// 带窗（gHDPending）：能力类返 1、限制类返 0、大小限制返 NSUIntegerMax、时长上限返 18000；
// 关窗透传原实现（防普通发图误伤）。每条目用 imp_implementationWithBlock 独立生成垫片，
// 自持各自 orig——canSendOriginalImage/hideOriginButton 同名挂在 OptionObj 与 PickerController
// 两个类上，独立 block 才不会串 orig（查表式垫片会拿错类的原实现）。

typedef struct {
    const char *cls;
    const char *sel;
    long long winVal;   // 窗口内返回值（BOOL: 0/1；整型直传；-1 = NSUIntegerMax 无限制）
} MioHDGetterSpec;

static MioHDGetterSpec gHDGetterSpecs[] = {
    // MMImagePickerManagerOptionObj（选图器选项对象，8 个）
    {"MMImagePickerManagerOptionObj", "m_isJustReturnMMAsset", 0},
    {"MMImagePickerManagerOptionObj", "isWAVideoCompressed", 0},
    {"MMImagePickerManagerOptionObj", "uiMaxVideoDuration", 18000},
    {"MMImagePickerManagerOptionObj", "canSendOriginalImage", 1},
    {"MMImagePickerManagerOptionObj", "forceSendOriginalImage", 1},
    {"MMImagePickerManagerOptionObj", "hideOriginButton", 0},
    {"MMImagePickerManagerOptionObj", "isOpenSendOriginVideo", 1},
    {"MMImagePickerManagerOptionObj", "isNotShowVideoSizeAlertView", 1},
    // MMAssetInfo（资产信息：原图文件大小限制，2 个）
    {"MMAssetInfo", "isExceededOriginFileSizeLimit", 0},
    {"MMAssetInfo", "originLimitSize", -1},
    // MMConfigMgr（全局配置：视频大小限制，1 个）
    {"MMConfigMgr", "getInputLimitVideoSize", -1},
    // MMImagePickerController（选图器 VC，3 个）
    {"MMImagePickerController", "canSendOriginImage", 1},
    {"MMImagePickerController", "canSendOriginalImage", 1},
    {"MMImagePickerController", "hideOriginButton", 0},
};
static const int gHDGetterSpecCount = (int)(sizeof(gHDGetterSpecs) / sizeof(gHDGetterSpecs[0]));

// 首见命中日志：确认压缩/能力查询真的经过被改写的 getter（去重，不刷屏）
static void MioHDLogGetterHit(int idx) {
    static volatile BOOL logged[16];
    if (idx < 0 || idx >= gHDGetterSpecCount || logged[idx]) return;
    logged[idx] = YES;
    WPLog(@"Moments", @"[HD] getter %s on %s intercepted",
          gHDGetterSpecs[idx].sel, gHDGetterSpecs[idx].cls);
}

static void MioHDInstallGetterHooks(void) {
    int ok = 0;
    for (int i = 0; i < gHDGetterSpecCount; i++) {
        MioHDGetterSpec *sp = &gHDGetterSpecs[i];
        Class cls = objc_getClass(sp->cls);
        if (!cls) continue;
        SEL sel = NSSelectorFromString(@(sp->sel));
        Method m = class_getInstanceMethod(cls, sel);
        if (!m) continue;
        IMP orig = method_getImplementation(m);
        char *ret = method_copyReturnType(m);
        IMP newImp = NULL;
        if (ret && (ret[0] == 'c' || ret[0] == 'B')) {
            BOOL winB = (sp->winVal != 0);
            newImp = imp_implementationWithBlock(^BOOL(id self) {
                if (gHDPending) { MioHDLogGetterHit(i); return winB; }
                return ((BOOL(*)(id, SEL))orig)(self, sel);
            });
        } else if (ret && (ret[0] == 'q' || ret[0] == 'l' || ret[0] == 'i'
                        || ret[0] == 'I' || ret[0] == 'Q')) {
            long long w = sp->winVal;
            newImp = imp_implementationWithBlock(^long long(id self) {
                if (gHDPending) { MioHDLogGetterHit(i); return w; }
                return ((long long(*)(id, SEL))orig)(self, sel);
            });
        } else if (ret && (ret[0] == 'f' || ret[0] == 'd')) {
            double w = (double)sp->winVal;
            newImp = imp_implementationWithBlock(^double(id self) {
                if (gHDPending) { MioHDLogGetterHit(i); return w; }
                return ((double(*)(id, SEL))orig)(self, sel);
            });
        }
        if (ret) free(ret);
        if (!newImp) continue;
        method_setImplementation(m, newImp);
        ok++;
    }
    WPLog(@"Moments", @"[HD] quality getter hooks installed: %d/%d", ok, gHDGetterSpecCount);
}

static void MioInstallHDHooks(void) {
    Class tlCls = objc_getClass("WCTimeLineViewController");
    if (!tlCls) {
        WPLog(@"Moments", @"[HD] SKIP: WCTimeLineViewController NOT found");
        return;
    }
    // 1) ActionSheet 配置点 → 注入按钮
    SEL cfgSel = NSSelectorFromString(@"configDataReportForActionSheet:");
    Method m1 = class_getInstanceMethod(tlCls, cfgSel);
    if (m1) {
        orig_hd_configSheet = method_getImplementation(m1);
        method_setImplementation(m1, (IMP)hooked_hd_configSheet);
        WPLog(@"Moments", @"[HD] configDataReportForActionSheet: hooked");
    }
    // 2) 发布页关闭 → 清总闸
    Class commitCls = objc_getClass("WCNewCommitViewController");
    if (commitCls) {
        SEL popSel = NSSelectorFromString(@"viewDidPopOrDismiss:");
        Method m2 = class_getInstanceMethod(commitCls, popSel);
        if (m2) {
            orig_hd_popDismiss = method_getImplementation(m2);
            method_setImplementation(m2, (IMP)hooked_hd_popDismiss);
        }
    }
    // 3) 画质生效层：4 类 14 个能力/限制 getter 改写
    MioHDInstallGetterHooks();
}

#pragma mark - 伪集赞（WCR 同款机制：WCDataItem getter 层增强，仅本人朋友圈生效）

// WCR 证据链（FUN_00545778 核心应用 + FUN_00555580 自动应用层反编译实锤）：
// 读原 likeUsers/commentUsers → 生成假赞/假评（WCUserComment：username/nickName/content）
// → NSMutableArray(orig) addObjectsFromArray:(fake) → setLikeUsers:/setLikeCount:/
//   setCommentUsers:/setCommentCount: 写回 → reloadTableData；re-entrancy 守卫包 setter。
// Mio 等价实现走 getter 层（不动原 item，读时增强 + associated 缓存保证会话内稳定）：
// 固定内置行为（无子配置）：仅「本人发出 且 我已点赞」的帖子生效（WCR 默认模式
// 「需要集赞的朋友圈点赞后生效」——self 出现在原 likeUsers 即已点赞，FUN_0054b750 同款判定）；
// 赞 8~28 随机、评 2~5 随机，昵称/评论取内置池。假数据只在读路径：点赞/评论请求只上报
// self 的 wxid，不携带全量数组，无泄漏面。开关关闭时 getter 原样透传，下次渲染即还原。
// 类名双候选（WCDataItem 主 / WCTimeLineDataItem 兜底），逐条 class_getInstanceMethod
// 判存在才挂（CI 无微信头文件，全反射 + respondsToSelector 守卫）。

static NSString *gFakeMyWxId = nil;      // 懒解析缓存（CContactMgr.getSelfContact.userName）
static volatile int gFakeLogCount = 0;   // 首见式日志限流（防逐条刷屏）
static char kFakeLikArrKey, kFakeCmtArrKey;

// WCR 内置昵称池（dylib __ustring 池同款风格摘录）
static NSString * const kFakeLikeNames[] = {
    @"二狗哥哥的iPhone", @"懒癌晚期已弃疗", @"肉的理想白菜命", @"点赞有惊喜Surprise",
    @"王者内测专用机", @"吃鸡内测专用机", @"生日快乐鸭", @"看到请还钱",
    @"神一样的男人", @"一直被模仿从未被超越", @"祝自己生日快乐", @"别放弃治疗",
    @"叙利亚打工中", @"对方正在输入", @"诺基亚N72", @"摩托罗拉328C",
    @"买菜必涨价超级加倍", @"我是颜值主播不露脸", @"克克克克业业", @"今日还钱打99折",
};
static const int kFakeLikeNameCount = (int)(sizeof(kFakeLikeNames) / sizeof(kFakeLikeNames[0]));

// WCR 内置评论池（dylib 伪集赞预设同款摘录）
static NSString * const kFakeCommentTexts[] = {
    @"好看", @"厉害了", @"收藏了", @"学习了", @"赞啦宝宝", @"支持一下",
    @"来啦", @"绝绝子", @"太棒了", @"我什么时候能像你一样优秀",
};
static const int kFakeCommentTextCount = (int)(sizeof(kFakeCommentTexts) / sizeof(kFakeCommentTexts[0]));

// 反射读第一个命中的 NSString getter（双命名兼容：username/userName、nickName/nickname）
static NSString *MioFakeGetStr(id obj, NSArray *selNames) {
    if (!obj) return nil;
    for (NSString *sn in selNames) {
        SEL sel = NSSelectorFromString(sn);
        if (![obj respondsToSelector:sel]) continue;
        @try {
            id v = ((id(*)(id, SEL))objc_msgSend)(obj, sel);
            if ([v isKindOfClass:[NSString class]]) return v;
        } @catch (NSException *e) {
        }
    }
    return nil;
}

// 我的 wxid（CContactMgr getSelfContact 同款稳定路径，懒解析 + 缓存）
static NSString *MioFakeMyWxId(void) {
    if (gFakeMyWxId) return gFakeMyWxId;
    @try {
        Class ctrCls = objc_getClass("MMServiceCenter");
        Class mgrCls = objc_getClass("CContactMgr");
        if (!ctrCls || !mgrCls) return nil;
        id center = ((id(*)(id, SEL))objc_msgSend)(ctrCls, NSSelectorFromString(@"defaultCenter"));
        id mgr = center ? ((id(*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService"), mgrCls) : nil;
        id selfContact = mgr ? ((id(*)(id, SEL))objc_msgSend)(mgr, NSSelectorFromString(@"getSelfContact")) : nil;
        NSString *wxid = MioFakeGetStr(selfContact, @[@"userName", @"username"]);
        if (wxid.length > 0) {
            gFakeMyWxId = wxid;
            WPLog(@"Moments", @"[FakeLike] myWxId resolved: %@", wxid);
        }
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[FakeLike] myWxId error: %@", e);
    }
    return gFakeMyWxId;
}

// 门 A：帖子本人发出（WCDataItem.userName == 我的 wxid）
static BOOL MioFakeGateOwnPost(id item) {
    NSString *my = MioFakeMyWxId();
    if (!my) return NO;
    NSString *poster = MioFakeGetStr(item, @[@"userName", @"username"]);
    return [poster isEqualToString:my];
}

// 门 B：我已点赞（WCR 默认触发模式；fakes 全部 wxid_fake* 前缀，扫增强数组不误判）
static BOOL MioFakeGateLiked(id item, NSArray *likeUsers) {
    NSString *my = MioFakeMyWxId();
    if (!my) return NO;
    for (id u in likeUsers) {
        NSString *un = MioFakeGetStr(u, @[@"username", @"userName"]);
        if ([un isEqualToString:my]) return YES;
    }
    return NO;
}

// 造 WCUserComment（WCR 同款类）：username=假 wxid、nickName=池内随机；评论追加 content
static id MioFakeMakeUser(NSString *nick, NSString *content) {
    Class ucls = objc_getClass("WCUserComment");
    if (!ucls) return nil;
    id u = [[ucls alloc] init];
    if (!u) return nil;
    NSString *fakeWxid = [NSString stringWithFormat:@"wxid_fake%08u", (unsigned)arc4random()];
    for (NSString *sn in @[@"setUsername:", @"setUserName:"]) {
        SEL sel = NSSelectorFromString(sn);
        if ([u respondsToSelector:sel]) { ((void(*)(id, SEL, id))objc_msgSend)(u, sel, fakeWxid); break; }
    }
    for (NSString *sn in @[@"setNickName:", @"setNickname:"]) {
        SEL sel = NSSelectorFromString(sn);
        if ([u respondsToSelector:sel]) { ((void(*)(id, SEL, id))objc_msgSend)(u, sel, nick); break; }
    }
    if (content) {
        for (NSString *sn in @[@"setContent:", @"setContentStr:"]) {
            SEL sel = NSSelectorFromString(sn);
            if ([u respondsToSelector:sel]) { ((void(*)(id, SEL, id))objc_msgSend)(u, sel, content); break; }
        }
    }
    return u;
}

// 假赞数组（每条 item 会话内稳定：associated 缓存；数量读子配置 fakeLikeCount，钳 0~10000）
static NSArray *MioFakeLikersForItem(id item) {
    NSArray *cached = objc_getAssociatedObject(item, &kFakeLikArrKey);
    if (cached) return cached;
    NSInteger n = [MomentsConfig shared].fakeLikeCount;
    if (n < 0) n = 0;
    if (n > 10000) n = 10000;
    NSMutableArray *arr = [NSMutableArray array];
    for (NSInteger i = 0; i < n; i++) {
        id u = MioFakeMakeUser(kFakeLikeNames[arc4random_uniform(kFakeLikeNameCount)], nil);
        if (u) [arr addObject:u];
    }
    objc_setAssociatedObject(item, &kFakeLikArrKey, arr, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return arr;
}

// 假评数组（数量读子配置 fakeCommentCount，钳 0~300；文本读 fakeCommentTexts 随机取用，空则回退内置池；同缓存策略）
static NSArray *MioFakeCommentsForItem(id item) {
    NSArray *cached = objc_getAssociatedObject(item, &kFakeCmtArrKey);
    if (cached) return cached;
    MomentsConfig *cfg = [MomentsConfig shared];
    NSInteger n = cfg.fakeCommentCount;
    if (n < 0) n = 0;
    if (n > 300) n = 300;
    NSArray<NSString *> *texts = (cfg.fakeCommentTexts.count > 0) ? cfg.fakeCommentTexts : nil;
    NSMutableArray *arr = [NSMutableArray array];
    for (NSInteger i = 0; i < n; i++) {
        NSString *text = texts
            ? texts[arc4random_uniform((u_int32_t)texts.count)]
            : kFakeCommentTexts[arc4random_uniform(kFakeCommentTextCount)];
        id u = MioFakeMakeUser(kFakeLikeNames[arc4random_uniform(kFakeLikeNameCount)], text);
        if (u) [arr addObject:u];
    }
    objc_setAssociatedObject(item, &kFakeCmtArrKey, arr, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return arr;
}

static void MioFakeLogAugment(id item, NSInteger likes, NSInteger comments) {
    if (gFakeLogCount >= 5) return;
    gFakeLogCount++;
    WPLog(@"Moments", @"[FakeLike] augment %@: +%ld likers +%ld comments (item cls %@)",
          MioFakeGetStr(item, @[@"userName", @"username"]) ?: @"?",
          (long)likes, (long)comments, NSStringFromClass([item class]));
}

static void MioInstallFakeLikeHooks(void) {
    struct { const char *sel; BOOL isCount; } specs[] = {
        {"likeUsers", NO}, {"likeCount", YES}, {"commentUsers", NO}, {"commentCount", YES},
    };
    int ok = 0, total = 0;
    for (NSString *cn in @[@"WCDataItem", @"WCTimeLineDataItem"]) {
        Class cls = objc_getClass(cn.UTF8String);
        if (!cls) continue;
        for (int i = 0; i < (int)(sizeof(specs) / sizeof(specs[0])); i++) {
            SEL sel = NSSelectorFromString(@(specs[i].sel));
            Method m = class_getInstanceMethod(cls, sel);
            if (!m) continue;
            total++;
            IMP orig = method_getImplementation(m);
            char *ret = method_copyReturnType(m);
            IMP newImp = NULL;
            if (!specs[i].isCount && ret && ret[0] == '@') {
                BOOL isCmt = [@(specs[i].sel) hasPrefix:@"comment"];
                newImp = imp_implementationWithBlock(^id(id self) {
                    id origArr = ((id(*)(id, SEL))orig)(self, sel);
                    @try {
                        MomentsConfig *cfg = [MomentsConfig shared];
                        if (!cfg.fakeLikeEnabled) return origArr;
                        NSArray *origList = [origArr isKindOfClass:[NSArray class]] ? origArr : @[];
                        if (!MioFakeGateOwnPost(self)) return origArr;
                        if (isCmt) {
                            // 门 B 经 likeUsers（消息发点赞后 self 必在赞列表；fakes 无我方 wxid 不误判）
                            SEL luSel = NSSelectorFromString(@"likeUsers");
                            NSArray *lu = [self respondsToSelector:luSel]
                                ? ((id(*)(id, SEL))objc_msgSend)(self, luSel) : nil;
                            if (!MioFakeGateLiked(self, [lu isKindOfClass:[NSArray class]] ? lu : @[])) return origArr;
                            NSArray *fakes = MioFakeCommentsForItem(self);
                            if (!fakes.count) return origArr;
                            MioFakeLogAugment(self, -1, (NSInteger)fakes.count);
                            NSMutableArray *mm = [NSMutableArray arrayWithArray:origList];
                            [mm addObjectsFromArray:fakes];
                            return mm;
                        }
                        if (!MioFakeGateLiked(self, origList)) return origArr;
                        NSArray *fakes = MioFakeLikersForItem(self);
                        if (!fakes.count) return origArr;
                        MioFakeLogAugment(self, (NSInteger)fakes.count, -1);
                        NSMutableArray *mm = [NSMutableArray arrayWithArray:origList];
                        [mm addObjectsFromArray:fakes];
                        return mm;
                    } @catch (NSException *e) {
                        WPLog(@"Moments", @"[FakeLike] getter error: %@", e);
                        return origArr;
                    }
                });
            } else if (specs[i].isCount && ret &&
                       (ret[0] == 'q' || ret[0] == 'l' || ret[0] == 'i' || ret[0] == 'I' || ret[0] == 'Q')) {
                BOOL isLike = [@(specs[i].sel) hasPrefix:@"like"];   // block 不能捕获局部数组，先取标量
                newImp = imp_implementationWithBlock(^long long(id self) {
                    long long origV = ((long long(*)(id, SEL))orig)(self, sel);
                    @try {
                        MomentsConfig *cfg = [MomentsConfig shared];
                        if (!cfg.fakeLikeEnabled) return origV;
                        if (!MioFakeGateOwnPost(self)) return origV;
                        // 门 B 统一经 likeUsers getter（增强数组内 fakes 无我方 wxid）
                        SEL luSel = NSSelectorFromString(@"likeUsers");
                        NSArray *lu = [self respondsToSelector:luSel]
                            ? ((id(*)(id, SEL))objc_msgSend)(self, luSel) : nil;
                        if (!MioFakeGateLiked(self, [lu isKindOfClass:[NSArray class]] ? lu : @[])) return origV;
                        NSArray *fakes = isLike ? MioFakeLikersForItem(self) : MioFakeCommentsForItem(self);
                        return origV + (long long)fakes.count;
                    } @catch (NSException *e) {
                        return origV;
                    }
                });
            }
            if (ret) free(ret);
            if (!newImp) continue;
            method_setImplementation(m, newImp);
            ok++;
        }
    }
    WPLog(@"Moments", @"[FakeLike] getter hooks installed %d/%d", ok, total);
}

#pragma mark - 安装

@implementation MomentsHook

+ (void)install {
    WPLog(@"Moments", @"[MomentsHook] install start");
    MioInstallPyqHooks();
    MioInstallHDHooks();
    MioInstallFakeLikeHooks();
    // 重挂自检（防微信晚到初始化覆盖 IMP）
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(20 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ MioRehookCheck(1); });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(45 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ MioRehookCheck(2); });
    WPLog(@"Moments", @"[MomentsHook] install complete");
}

@end
