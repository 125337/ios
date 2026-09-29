#import "MomentsHook.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <stdlib.h>
#import <string.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import "../SettingEntry/WPCommonUI.h"
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
static char kFakeLikeAppliedKey, kFakeCmtAppliedKey;   // 各维度已注入假对象集合（NSSet 指针身份，供自愈探测）
// WCDataItem 原生 likeUsers/commentUsers IMP（安装期在 hook 前解析；AutoApply 取 raw
// 统一直调原生 IMP——若走 [item likeUsers] 会经已 hook 的 getter 垫片引发无限递归）
static IMP gFakeOrigLU = NULL, gFakeOrigCU = NULL;

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

// 我的 wxid（WXGetSelfContact 两级服务策略：MMContext 主路径 + 守卫兜底；
// CContact 自身字段为 m_nsUsrName。懒解析 + 缓存，失败 30s 冷却防刷屏）
static NSString *MioFakeMyWxId(void) {
    if (gFakeMyWxId) return gFakeMyWxId;
    static NSTimeInterval gFakeMyWxIdLastFail = 0;
    NSTimeInterval now = [NSDate date].timeIntervalSince1970;
    if (now - gFakeMyWxIdLastFail < 30) return nil;
    @try {
        id selfContact = WXGetSelfContact();
        NSString *wxid = MioFakeGetStr(selfContact, @[@"m_nsUsrName", @"userName", @"username"]);
        if (wxid.length > 0) {
            gFakeMyWxId = wxid;
            WPLog(@"Moments", @"[FakeLike] myWxId resolved: %@", wxid);
        } else {
            gFakeMyWxIdLastFail = now;
        }
    } @catch (NSException *e) {
        gFakeMyWxIdLastFail = now;
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

// 好友池（180.log 重大改版：数据层采集真好友替代联系人库枚举。8.0.60 CContact 无
// m_uiType/isChatroom/m_isPlugin，库枚举 11704 项过滤后仍剩 11227——混入陌生人/群发
// 助手/小程序客服等非好友官方账号，用户实证假赞头像出现官方账号；feed 天然只含真好友）
// 数据层采集：从数据到达处直接收集发帖人 wxid（排除广告 gh_/企业微信 @openim/群聊/
// 本人）。仅主线程数据回调与 fb 触发器调用，无锁
static NSMutableSet *gFakeFeedFriends = nil;

static void MioFakeHarvestFeedFriend(NSString *un) {
    if (un.length < 5) return;
    if ([un hasPrefix:@"gh_"] || [un containsString:@"@openim"] || [un containsString:@"@chatroom"]) return;
    NSString *my = MioFakeMyWxId();
    if (my && [un isEqualToString:my]) return;
    if (!gFakeFeedFriends) gFakeFeedFriends = [NSMutableSet set];
    [gFakeFeedFriends addObject:un];
}

// 好友池=采集集快照，冻结在首次凑满 8 人时（冻结保证后续重注入假人组合稳定，配合按帖
// 播种防服务端覆盖后重注入闪变成另一批）；未冻结前返回 nil（调用方回退内置昵称池）
static NSArray *MioFakeFriendPool(void) {
    static NSArray *gPool;
    static BOOL logged = NO;
    if (!gPool && gFakeFeedFriends.count >= 8) {
        gPool = [[gFakeFeedFriends allObjects] sortedArrayUsingSelector:@selector(compare:)];
        if (!logged && gFakeLogCount < 5) {
            logged = YES;
            gFakeLogCount++;
            WPLog(@"Moments", @"[FakeLike] friend pool frozen: %lu (feed-harvest)", (unsigned long)gPool.count);
        }
    }
    return gPool;
}

// 造 WCUserComment（WCR 2.1.8 实锤分流：假赞 FUN_0056e164 内 setType:1+setIsRichText:1
// 无 commentID；假评 FUN_00571210 setType:2+setCommentID:"WCRefine_%ld" 无 isRichText。
// 182.log 评论不显示根源：评论 type=1 被当赞渲染丢弃，且缺 commentID=评论渲染/diff 的 key。
// 183.log 仍丢条根源：同秒生成 createTime 全等+同文案 → WCUserComment isEqual 合并 →
// UI 去重后 3 条只显示 1-2 条（WCR 把 createTime 做成入参逐条错开，33283 行实锤））
static id MioFakeMakeCommentUser(NSString *wxid, NSString *nickFallback, NSString *content, BOOL isComment, int cTime) {
    Class ucls = objc_getClass("WCUserComment");
    if (!ucls || wxid.length == 0) return nil;
    id u = [[ucls alloc] init];
    if (!u) return nil;
    NSString *nick = nil;
    Class mgrCls = objc_getClass("CContactMgr");
    id mgr = mgrCls ? WXGetService(mgrCls) : nil;
    SEL byNameSel = NSSelectorFromString(@"getContactByName:");
    if (mgr && [mgr respondsToSelector:byNameSel]) {
        id ct = ((id(*)(id, SEL, id))objc_msgSend)(mgr, byNameSel, wxid);
        nick = MioFakeGetStr(ct, @[@"m_nsNickName", @"nickName", @"nickname"]);
    }
    if (nick.length == 0) nick = nickFallback.length > 0 ? nickFallback : wxid;
    for (NSString *sn in @[@"setUsername:", @"setUserName:"]) {
        SEL sel = NSSelectorFromString(sn);
        if ([u respondsToSelector:sel]) { ((void(*)(id, SEL, id))objc_msgSend)(u, sel, wxid); break; }
    }
    for (NSString *sn in @[@"setNickname:", @"setNickName:"]) {
        SEL sel = NSSelectorFromString(sn);
        if ([u respondsToSelector:sel]) { ((void(*)(id, SEL, id))objc_msgSend)(u, sel, nick); break; }
    }
    SEL typeSel = NSSelectorFromString(@"setType:");
    if ([u respondsToSelector:typeSel]) ((void(*)(id, SEL, long long))objc_msgSend)(u, typeSel, isComment ? 2 : 1);
    if (isComment) {
        SEL cidSel = NSSelectorFromString(@"setCommentID:");
        if ([u respondsToSelector:cidSel]) {
            ((void(*)(id, SEL, id))objc_msgSend)(u, cidSel,
                [NSString stringWithFormat:@"Mio_%u_%d", arc4random(), cTime]);
        }
    } else {
        SEL richSel = NSSelectorFromString(@"setIsRichText:");
        if ([u respondsToSelector:richSel]) ((void(*)(id, SEL, BOOL))objc_msgSend)(u, richSel, YES);
    }
    SEL timeSel = NSSelectorFromString(@"setCreateTime:");
    if ([u respondsToSelector:timeSel]) ((void(*)(id, SEL, int))objc_msgSend)(u, timeSel, cTime);
    if (content) {
        for (NSString *sn in @[@"setContent:", @"setContentStr:"]) {
            SEL sel = NSSelectorFromString(sn);
            if ([u respondsToSelector:sel]) { ((void(*)(id, SEL, id))objc_msgSend)(u, sel, content); break; }
        }
    }
    return u;
}

// 帖子稳定 key（WCR FUN_00546750 同款三级：tid 优先 → u:发帖人_t:创建时间 → 兜底 nil
// 不缓存。WCR 兜底 p:%p 指针地址=闪变源，Mio 弃用——拿不到稳定 key 宁可每次随机）
static NSString *MioFakePostKey(id item) {
    NSString *tid = MioFakeGetStr(item, @[@"m_nsTimelineObjectID", @"timelineObjectID",
                                          @"tid", @"objectID", @"m_nsObjectID"]);
    if (tid.length > 0) return [@"tid_" stringByAppendingString:tid];
    NSString *user = MioFakeGetStr(item, @[@"username", @"userName", @"m_nsUsrName"]);
    unsigned long long t = 0;
    for (NSString *tn in @[@"createTime", @"m_uiCreateTime", @"m_ullCreateTime", @"timestamp"]) {
        SEL ts = NSSelectorFromString(tn);
        if (![item respondsToSelector:ts]) continue;
        @try {
            t = ((unsigned long long(*)(id, SEL))objc_msgSend)(item, ts);
        } @catch (NSException *e) {}
        if (t > 0) break;
    }
    if (user.length > 0 && t > 0) return [NSString stringWithFormat:@"u:%@_t:%llu", user, t];
    return nil;
}

// 假数据按帖会话缓存（WCR 2.1.8 FUN_00577df8 RefreshEachOpen 开启路径同款：只写静态内存
// 字典不落盘，进入朋友圈页 viewDidAppear 清空 → 同一次停留内按帖复用不闪变，每次进入
// 重摇新一批人。WCR 的 NSUserDefaults 永久落盘是 RefreshEachOpen 关闭行为=永远同一批，
// 182.log 用户明确不要）
static NSMutableDictionary *gFakeLikeCache = nil;
static NSMutableDictionary *gFakeCmtCache = nil;

static NSArray *MioFakeCacheFetch(NSString *key, BOOL isLike) {
    if (key.length == 0) return nil;
    id v = (isLike ? gFakeLikeCache : gFakeCmtCache)[key];
    return ([v isKindOfClass:[NSArray class]] && [(NSArray *)v count] > 0) ? v : nil;
}

static void MioFakeCacheStore(NSString *key, BOOL isLike, NSArray *arr) {
    if (key.length == 0 || arr.count == 0) return;
    if (isLike && !gFakeLikeCache) gFakeLikeCache = [NSMutableDictionary dictionary];
    if (!isLike && !gFakeCmtCache) gFakeCmtCache = [NSMutableDictionary dictionary];
    (isLike ? gFakeLikeCache : gFakeCmtCache)[key] = arr;
}

// 生成一批假数据（WCR 2.1.8 同款）：好友池纯随机，赞/评都抽一删一防同批同人
//（假评抽删实证=FUN_0056ede4 内 removeObjectAtIndex；仅缓存未命中时调用一次，生成即
// 存会话字典 → 此后同一批）。183.log 丢条修复：评论 createTime 逐条错开（now-i*61-随机，
// 同帖绝不相同，对齐 WCR FUN_00571210 createTime 入参逐条错开），文案也同帖抽一删一——
// 同秒+同文案 → WCUserComment isEqual 合并 → UI 只显示 1-2 条
static NSArray *MioFakeGenerateBatch(BOOL isLike, NSInteger n, NSArray<NSString *> *texts) {
    NSArray *pool = MioFakeFriendPool();
    NSMutableArray *cand = (pool.count > 0) ? [pool mutableCopy] : nil;
    NSMutableArray *out = [NSMutableArray array];
    NSArray<NSString *> *tx = (texts.count > 0) ? texts : nil;
    u_int32_t nT = tx ? (u_int32_t)tx.count : (u_int32_t)kFakeCommentTextCount;
    NSMutableArray *txCand = tx ? [tx mutableCopy] : nil;
    int now = (int)[NSDate date].timeIntervalSince1970;
    for (NSInteger i = 0; i < n; i++) {
        NSString *wxid;
        NSString *nick = nil;
        if (cand.count > 0) {
            u_int32_t pick = arc4random_uniform((u_int32_t)cand.count);
            wxid = cand[pick];
            [cand removeObjectAtIndex:pick];
        } else if (pool.count > 0) {
            wxid = pool[arc4random_uniform((u_int32_t)pool.count)];
        } else {
            wxid = [NSString stringWithFormat:@"wxid_fake%08u", arc4random()];
            nick = kFakeLikeNames[arc4random_uniform((u_int32_t)kFakeLikeNameCount)];
        }
        int cTime = now - (int)(i * 61) - (int)arc4random_uniform(60);
        NSString *text = nil;
        if (!isLike) {
            if (txCand.count > 0) {
                u_int32_t p = arc4random_uniform((u_int32_t)txCand.count);
                text = txCand[p];
                [txCand removeObjectAtIndex:p];
            } else if (nT > 0) {
                text = tx ? tx[arc4random_uniform(nT)] : kFakeCommentTexts[arc4random_uniform(nT)];
            }
        }
        id u = MioFakeMakeCommentUser(wxid, nick, text, !isLike, cTime);
        if (u) [out addObject:u];
    }
    return out;
}

// 已注入假对象是否仍在 item 数组内（NSSet 指针身份探测，O(n)）
static BOOL MioFakeStillApplied(NSSet *applied, NSArray *arr) {
    if (applied.count == 0) return NO;
    for (id obj in arr) {
        if ([applied member:obj]) return YES;
    }
    return NO;
}

// 守卫式 setter 写回（WCR 同款方案：假数据合并进 item 本体，数组与计数一次写平，
// 渲染/详情页/持久化等所有原生路径看到的数据天然一致，getter 层零改动不产生临时数组）
static BOOL MioFakeSetObj(id item, NSString *setterName, id value) {
    SEL sel = NSSelectorFromString(setterName);
    if (![item respondsToSelector:sel]) return NO;
    @try { ((void(*)(id, SEL, id))objc_msgSend)(item, sel, value); return YES; }
    @catch (NSException *e) { return NO; }
}

static BOOL MioFakeSetCount(id item, NSString *setterName, long long v) {
    SEL sel = NSSelectorFromString(setterName);
    if (![item respondsToSelector:sel]) return NO;
    @try { ((void(*)(id, SEL, unsigned long long))objc_msgSend)(item, sel, (unsigned long long)v); return YES; }
    @catch (NSException *e) { return NO; }
}

// 写回执行（自愈式）：探测上次注入的假对象是否仍在 item 数组内——服务端刷新会整体覆盖
// likeUsers/commentUsers（169.log 实证假评显示后即消失），覆盖即丢假数据，丢失的维度
// 重新注入、仍在的维度跳过防重复累积。四 setter 齐全才写（缺一即数组/计数不一致=崩溃源）
static void MioFakeWriteBack(id item, NSArray *rawLikes, NSArray *rawCmts, const char *src) {
    SEL sLU = NSSelectorFromString(@"setLikeUsers:");
    SEL sCU = NSSelectorFromString(@"setCommentUsers:");
    SEL sLC = NSSelectorFromString(@"setLikeCount:");
    SEL sCC = NSSelectorFromString(@"setCommentCount:");
    if (![item respondsToSelector:sLU] || ![item respondsToSelector:sCU] ||
        ![item respondsToSelector:sLC] || ![item respondsToSelector:sCC]) {
        if (gFakeLogCount < 5) {
            gFakeLogCount++;
            WPLog(@"Moments", @"[FakeLike] setters incomplete on %@, skip", NSStringFromClass([item class]));
        }
        return;
    }
    MomentsConfig *cfg = [MomentsConfig shared];
    NSInteger nLike = cfg.fakeLikeCount; if (nLike < 0) nLike = 0; if (nLike > 10000) nLike = 10000;
    NSInteger nCmt  = cfg.fakeCommentCount; if (nCmt < 0) nCmt = 0; if (nCmt > 300) nCmt = 300;
    NSArray<NSString *> *texts = (cfg.fakeCommentTexts.count > 0) ? cfg.fakeCommentTexts : nil;
    NSString *postKey = MioFakePostKey(item);
    NSArray *pool = MioFakeFriendPool();
    NSInteger nLikeEff = (pool.count > 0 && nLike > (NSInteger)pool.count) ? (NSInteger)pool.count : nLike;

    // 赞维度：假赞缺失才重注入；假人取自按帖会话缓存（随机一次→存字典→本次停留同一批）
    if (nLikeEff > 0 && !MioFakeStillApplied(objc_getAssociatedObject(item, &kFakeLikeAppliedKey), rawLikes)) {
        NSArray *add = MioFakeCacheFetch(postKey, YES);
        if (!add) {
            add = MioFakeGenerateBatch(YES, nLikeEff, nil);
            MioFakeCacheStore(postKey, YES, add);
        }
        NSMutableArray *likes = [NSMutableArray arrayWithArray:rawLikes];
        [likes addObjectsFromArray:add];
        NSMutableSet *fakes = [NSMutableSet setWithArray:add];
        if (MioFakeSetObj(item, @"setLikeUsers:", likes) &&
            MioFakeSetCount(item, @"setLikeCount:", (long long)likes.count)) {
            objc_setAssociatedObject(item, &kFakeLikeAppliedKey, [fakes copy], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        if (gFakeLogCount < 40) {   // 40：覆盖 dl-list 全量扫描多个本人帖 + fb 兜底，防额度被先耗尽吞掉关键证据
            gFakeLogCount++;
            WPLog(@"Moments", @"[FakeLike] write-back likes +%ld (%s, src=%s, cls %@)",
                  (long)fakes.count, MioFakeFriendPool().count ? "friends" : "builtin", src, NSStringFromClass([item class]));
        }
    }

    // 评论维度：假评缺失才重注入；同会话字典复用（WCR 假评=选人+选文案各随机一次）
    if (nCmt > 0 && !MioFakeStillApplied(objc_getAssociatedObject(item, &kFakeCmtAppliedKey), rawCmts)) {
        NSArray *add = MioFakeCacheFetch(postKey, NO);
        if (!add) {
            add = MioFakeGenerateBatch(NO, nCmt, texts);
            MioFakeCacheStore(postKey, NO, add);
        }
        NSMutableArray *cmts = [NSMutableArray arrayWithArray:rawCmts];
        [cmts addObjectsFromArray:add];
        NSMutableSet *fakes = [NSMutableSet setWithArray:add];
        if (MioFakeSetObj(item, @"setCommentUsers:", cmts) &&
            MioFakeSetCount(item, @"setCommentCount:", (long long)cmts.count)) {
            objc_setAssociatedObject(item, &kFakeCmtAppliedKey, [fakes copy], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        if (gFakeLogCount < 40) {
            gFakeLogCount++;
            WPLog(@"Moments", @"[FakeLike] write-back comments +%ld (%s, src=%s, cls %@)",
                  (long)fakes.count, MioFakeFriendPool().count ? "friends" : "builtin", src, NSStringFromClass([item class]));
        }
    }
}

// 双门（本人帖 + 已赞）通过后自愈式写回。getter 触发器与数据层预注入共用：
// 门 A=userName==我方 wxid；门 B=原生 likeFlag 优先（WCR FUN_00545778 实证），
// 回退扫原生 likeUsers 找我方 wxid。取 raw 一律走安装期原生 IMP（防 getter 递归）。
static int gFakeDLLogCount = 0;

static void MioFakeAutoApplyItem(id item, const char *src) {
    @try {
        MomentsConfig *cfg = [MomentsConfig shared];
        if (!cfg.fakeLikeEnabled) return;
        // 数据层采集真好友（180.log 定论：feed 只含真好友帖+广告 gh_，比联系人库枚举精确）
        NSString *un = MioFakeGetStr(item, @[@"username", @"userName", @"m_nsUsrName"]);
        MioFakeHarvestFeedFriend(un);
        // WCR FUN_00555580 同款门：likeFlag=1（已点赞的任何人的帖）或本人帖（OwnPostsAuto
        // Enable 恒开）。181.log 用户实证：给别人帖子点赞也要出假赞
        BOOL isMy = MioFakeGateOwnPost(item);
        BOOL liked = NO;
        SEL lfSel = NSSelectorFromString(@"likeFlag");
        if ([item respondsToSelector:lfSel]) {
            @try { liked = ((BOOL(*)(id, SEL))objc_msgSend)(item, lfSel); } @catch (NSException *e) {}
        }
        if (!liked && gFakeOrigLU) {
            NSArray *lu = ((id(*)(id, SEL))gFakeOrigLU)(item, @selector(likeUsers));
            NSString *my = MioFakeMyWxId();
            if ([lu isKindOfClass:[NSArray class]] && my) {
                for (id u in lu) {
                    NSString *luName = MioFakeGetStr(u, @[@"username", @"userName", @"m_nsUsrName"]);
                    if ([luName isEqualToString:my]) { liked = YES; break; }
                }
            }
        }
        if (!isMy && !liked) {
            if (src && src[0] == 'd' && strncmp(src, "dl-list", 7) != 0 && gFakeDLLogCount < 60) {
                gFakeDLLogCount++;
                WPLog(@"Moments", @"[FakeLike] dl-reject (%s): user=%@ likeFlag=%d (not mine, not liked)", src, un, liked ? 1 : 0);
            }
            return;
        }
        NSArray *rawLikes = @[], *rawCmts = @[];
        if (gFakeOrigLU) {
            id v = ((id(*)(id, SEL))gFakeOrigLU)(item, @selector(likeUsers));
            if ([v isKindOfClass:[NSArray class]]) rawLikes = v;
        }
        if (gFakeOrigCU) {
            id v = ((id(*)(id, SEL))gFakeOrigCU)(item, @selector(commentUsers));
            if ([v isKindOfClass:[NSArray class]]) rawCmts = v;
        }
        MioFakeWriteBack(item, rawLikes, rawCmts, src);
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[FakeLike] auto-apply error: %@", e);
    }
}

// 批量应用（WCR FUN_005581fc 同款：datas 数组里 isKindOfClass:WCDataItem 才应用）
static void MioFakeAutoApplyArray(NSArray *datas, const char *src) {
    if (![datas isKindOfClass:[NSArray class]]) {
        WPLog(@"Moments", @"[FakeLike] dl-arrive skip: not-array (%@)", NSStringFromClass([datas class]));
        return;
    }
    Class itemCls = objc_getClass("WCDataItem");
    if (!itemCls) return;
    // dl 到达诊断（176.log：fired 后无 src=dl，须区分"回调没来"还是"来了没命中门"）
    unsigned long raw = datas.count, hitCls = 0;
    for (id it in datas) if ([it isKindOfClass:itemCls]) hitCls++;
    WPLog(@"Moments", @"[FakeLike] dl-arrive (%s): raw=%lu wcitem=%lu", src, raw, hitCls);
    for (id it in datas) {
        if ([it isKindOfClass:itemCls]) MioFakeAutoApplyItem(it, src);
    }
}

// install 期日志早于文件日志窗口必然丢失（174.log 定论），安装结果存全局，
// 由 install 的 30s 补打任务在日志窗口内重放
static NSString *gFakeTriggerSummary = nil;
static NSString *gFakeDLInstallSummary = nil;

static void MioInstallFakeLikeHooks(void) {
    // 主注入 = 数据层四挂点（WCTimelineMgr，见 MioInstallFakeDataLayerHooks，WCR 同款：
    // item 落地即写回，头像与正文同步加载）；getter 触发器降级为自愈兜底（服务端覆盖后
    // 渲染路径重注入）。getter 本身透传，双门逻辑收敛进 MioFakeAutoApplyItem。
    int ok = 0, total = 0;
    for (NSString *cn in @[@"WCDataItem", @"WCTimeLineDataItem"]) {
        Class cls = objc_getClass(cn.UTF8String);
        if (!cls) continue;
        // hook 前解析原生 getter IMP（AutoApply 取 raw 共用；只认 WCDataItem 本体，170.log 实证 item 类即它）
        if ([cn isEqualToString:@"WCDataItem"] && !gFakeOrigLU) {
            Method mLU = class_getInstanceMethod(cls, NSSelectorFromString(@"likeUsers"));
            Method mCU = class_getInstanceMethod(cls, NSSelectorFromString(@"commentUsers"));
            if (mLU) gFakeOrigLU = method_getImplementation(mLU);
            if (mCU) gFakeOrigCU = method_getImplementation(mCU);
        }
        for (int i = 0; i < 2; i++) {
            const char *selName = (i == 0) ? "likeUsers" : "commentUsers";
            SEL sel = NSSelectorFromString(@(selName));
            Method m = class_getInstanceMethod(cls, sel);
            if (!m) continue;
            char *ret = method_copyReturnType(m);
            BOOL isArr = (ret && ret[0] == '@');
            if (ret) free(ret);
            if (!isArr) continue;
            total++;
            IMP orig = method_getImplementation(m);
            IMP newImp = imp_implementationWithBlock(^id(id self) {
                id origArr = ((id(*)(id, SEL))orig)(self, sel);
                @try {
                    MomentsConfig *cfg = [MomentsConfig shared];
                    if (cfg.fakeLikeEnabled && MioFakeGateOwnPost(self)) {
                        MioFakeAutoApplyItem(self, "fb");                 // 双门+写回（自愈兜底）
                        return ((id(*)(id, SEL))orig)(self, sel);         // 返回写回后的数组
                    }
                } @catch (NSException *e) {
                    WPLog(@"Moments", @"[FakeLike] trigger error: %@", e);
                }
                return origArr;
            });
            method_setImplementation(m, newImp);
            ok++;
        }
    }
    gFakeTriggerSummary = [NSString stringWithFormat:@"%d/%d", ok, total];
    WPLog(@"Moments", @"[FakeLike] trigger hooks installed %d/%d", ok, total);
    // 每次进入朋友圈重摇（WCR 2.1.8 FUN_00567a08 同款：WCTimeLineViewController viewDidAppear
    // 清空赞/评会话字典 → 本次停留按帖稳定不闪变，每次进入重新随机新一批人）
    Class tlVC = objc_getClass("WCTimeLineViewController");
    if (tlVC) {
        Method mVD = class_getInstanceMethod(tlVC, NSSelectorFromString(@"viewDidAppear:"));
        if (mVD) {
            IMP origVD = method_getImplementation(mVD);
            IMP newVD = imp_implementationWithBlock(^(id self, BOOL animated) {
                ((void(*)(id, SEL, BOOL))origVD)(self, NSSelectorFromString(@"viewDidAppear:"), animated);
                MomentsConfig *cfg = [MomentsConfig shared];
                if (cfg.fakeLikeEnabled) {
                    gFakeLikeCache = nil;
                    gFakeCmtCache = nil;
                    WPLog(@"Moments", @"[FakeLike] session cache reset (viewDidAppear)");
                }
            });
            method_setImplementation(mVD, newVD);
            WPLog(@"Moments", @"[FakeLike] viewDidAppear reset hook installed");
        }
    } else {
        WPLog(@"Moments", @"[FakeLike] WCTimeLineViewController not found, reset hook skipped");
    }
}

// ===== 数据层预注入（WCR FUN_005474f4 实锤挂点，头像慢根因修复：WCR 在数据落地时注入，
// 头像与正文图同步入队；旧版渲染路径 getter 才注入，头像入队晚一个渲染周期）=====
// WCTimelineMgr 四个数据回调 + WCCommentDetailViewControllerFB 评论详情页。
// 垫片参数表照抄 WCR 垫片（FUN_00549550/5495fc/49714/4982c 反编译：datas 数组位于
// onPre/onNext 第 2 参、onFirst 第 3 参、modify 单 item）。方法名运行时前缀匹配
// （Ghidra PTR 名有截断，selector 全名以 runtime 为准），返回类型 void 才挂。

typedef void (*MioDLModOrig)(id, SEL, id, BOOL);
typedef void (*MioDL7Orig)(id, SEL, id, id, id, unsigned int, id);
typedef void (*MioDL10Orig)(id, SEL, id, BOOL, id, id, unsigned int, id, id, id);
static MioDLModOrig gOrigMod = NULL;
static MioDL7Orig gOrigPre = NULL, gOrigNext = NULL;
static MioDL10Orig gOrigFirst = NULL;

static void MioFakeDLMod(id self, SEL _cmd, id item, BOOL notify) {
    MioFakeAutoApplyItem(item, "dl");
    if (gOrigMod) gOrigMod(self, _cmd, item, notify);
}

static void MioFakeDLPre(id self, SEL _cmd, id p1, NSArray *datas, id p4, unsigned int p5, id p6) {
    MioFakeAutoApplyArray(datas, "dl-pre");
    if (gOrigPre) gOrigPre(self, _cmd, p1, datas, p4, p5, p6);
}

static void MioFakeDLNext(id self, SEL _cmd, id p1, NSArray *datas, id p4, unsigned int p5, id p6) {
    MioFakeAutoApplyArray(datas, "dl-next");
    if (gOrigNext) gOrigNext(self, _cmd, p1, datas, p4, p5, p6);
}

static void MioFakeDLFirst(id self, SEL _cmd, id p1, BOOL p2, NSArray *datas, id p5, unsigned int p6, id p7, id p8, id p9) {
    MioFakeAutoApplyArray(datas, "dl-first");
    if (gOrigFirst) gOrigFirst(self, _cmd, p1, p2, datas, p5, p6, p7, p8, p9);
}

// 缓存填充路径（头文件 WCTimelineMgr.h 实证）：首屏走本地缓存不经过网络回调
//（172.log 实证 src=dl 为 0），updateDataHead/PrePage/Tail 才是缓存数据的入口。
// 无参方法：先 orig 填充列表，再遍历 timelineDataList 注入。
typedef void (*MioDL0Orig)(id, SEL);
static MioDL0Orig gOrigUDHead = NULL, gOrigUDPre = NULL, gOrigUDTail = NULL;

static void MioFakeDLUDHead(id self, SEL _cmd) {
    if (gOrigUDHead) gOrigUDHead(self, _cmd);
    MioFakeAutoApplyArray(((id(*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"timelineDataList")), "dl-udHead");
}

static void MioFakeDLUDPre(id self, SEL _cmd) {
    if (gOrigUDPre) gOrigUDPre(self, _cmd);
    MioFakeAutoApplyArray(((id(*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"timelineDataList")), "dl-udPre");
}

static void MioFakeDLUDTail(id self, SEL _cmd) {
    if (gOrigUDTail) gOrigUDTail(self, _cmd);
    MioFakeAutoApplyArray(((id(*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"timelineDataList")), "dl-udTail");
}

// 不强制返回类型：垫片末句透传 orig，ARM64 x0 返回值天然透传，任何类型安全；
// 头文件 dump 工具返回类型全写 id 不可信，真实编码打进日志供诊断
static BOOL MioFakeHookMethod(Method m, IMP newImp, IMP *origOut, NSString **retCodeOut) {
    if (!m || !newImp || *origOut) return NO;
    if (retCodeOut) {
        char *ret = method_copyReturnType(m);
        if (ret) {
            *retCodeOut = [NSString stringWithUTF8String:ret];
            free(ret);
        }
    }
    *origOut = method_getImplementation(m);
    method_setImplementation(m, newImp);
    return YES;
}

static void MioInstallFakeDataLayerHooks(void) {
    Class mgr = objc_getClass("WCTimelineMgr");
    if (!mgr) {
        WPLog(@"Moments", @"[FakeLike] data-layer hooks 0/7 (WCTimelineMgr not found)");
        return;
    }
    unsigned int n = 0;
    Method *list = class_copyMethodList(mgr, &n);
    if (!list) {
        WPLog(@"Moments", @"[FakeLike] data-layer hooks 0/7 (no method list)");
        return;
    }
    int installed = 0;
    NSMutableString *hit = [NSMutableString string];
    for (unsigned int i = 0; i < n; i++) {
        NSString *nm = NSStringFromSelector(method_getName(list[i]));
        NSString *rc = nil;
        if (!gOrigMod && [nm isEqualToString:@"modifyDataItem:notify:"] &&
            MioFakeHookMethod(list[i], (IMP)MioFakeDLMod, (IMP *)&gOrigMod, &rc)) {
            installed++; [hit appendFormat:@" mod(%@)", rc];
        } else if (!gOrigPre && [nm hasPrefix:@"onPrePageUpdated:datas:"] &&
                   MioFakeHookMethod(list[i], (IMP)MioFakeDLPre, (IMP *)&gOrigPre, &rc)) {
            installed++; [hit appendFormat:@" pre(%@)", rc];
        } else if (!gOrigNext && [nm hasPrefix:@"onNextPageUpdated:datas:"] &&
                   MioFakeHookMethod(list[i], (IMP)MioFakeDLNext, (IMP *)&gOrigNext, &rc)) {
            installed++; [hit appendFormat:@" next(%@)", rc];
        } else if (!gOrigFirst && [nm hasPrefix:@"onFirstPageUpdated:dataChanged:"] &&
                   MioFakeHookMethod(list[i], (IMP)MioFakeDLFirst, (IMP *)&gOrigFirst, &rc)) {
            installed++; [hit appendFormat:@" first(%@)", rc];
        } else if (!gOrigUDHead && [nm isEqualToString:@"updateDataHead"] &&
                   MioFakeHookMethod(list[i], (IMP)MioFakeDLUDHead, (IMP *)&gOrigUDHead, &rc)) {
            installed++; [hit appendFormat:@" udHead(%@)", rc];
        } else if (!gOrigUDPre && [nm isEqualToString:@"updateDataPrePage"] &&
                   MioFakeHookMethod(list[i], (IMP)MioFakeDLUDPre, (IMP *)&gOrigUDPre, &rc)) {
            installed++; [hit appendFormat:@" udPre(%@)", rc];
        } else if (!gOrigUDTail && [nm isEqualToString:@"updateDataTail"] &&
                   MioFakeHookMethod(list[i], (IMP)MioFakeDLUDTail, (IMP *)&gOrigUDTail, &rc)) {
            installed++; [hit appendFormat:@" udTail(%@)", rc];
        }
    }
    free(list);
    gFakeDLInstallSummary = [NSString stringWithFormat:@"%d/7:%@", installed, hit];
    WPLog(@"Moments", @"[FakeLike] data-layer hooks installed %d/7:%@", installed, hit);
}

// ===== App 激活主动刷新（WCR FUN_00551580 同款复刻）=====
// 根因定论（173.log + WCR 反编译 FUN_00551580/FUN_005512e0/FUN_00551994）：朋友圈首屏走本地
// 缓存、不经网络回调，src=dl 恒为 0；WCR 靠 didBecomeActive 时主动调 WCFacade 的
// beginTimeline + updateTimelineHead（头文件 WCFacade.h L416/L429 实锤）制造数据刷新，
// 数据流经 WCTimelineMgr 回调 → 数据层挂点在用户打开朋友圈前命中注入 → 假赞随微信持久化
// 进缓存，下次打开即命中。节流取 WCR 钳位区间（61~3600s，FUN_00551868）中值 300s 固定。
static NSTimeInterval gFakeLastActiveRefresh = 0;

// 顶 VC 链是否在朋友圈页面（WCR FUN_00554fd4 同款：WCTimeLine/WCCommentDetail 在栈即跳过，
// 避免与用户正在浏览的刷新叠加导致列表跳动）
static BOOL MioFakeVCCoveringTimeline(void) {
    UIViewController *vc = WPGetTopVCForPresentation();
    int depth = 0;
    while (vc && depth++ < 16) {
        NSString *cls = NSStringFromClass(vc.class);
        if ([cls containsString:@"WCTimeLine"] || [cls containsString:@"WCCommentDetail"]) return YES;
        vc = vc.parentViewController;
    }
    return NO;
}

// timelineDataList 全量扫描注入（WCR FUN_005512e0 同源思路）：数据回调只送"最新增量"，
// 旧本人帖不在其中（178.log 实锤 70 条回调 item 全 rejectA 而 fb 渲染能命中），对管理器
// 持有的全量列表直接写回。tag 区分首扫（dl-list，请求前扫既有列表）与重扫（dl-list2，
// 回包落地后扫刷新后列表）
static void MioFakeScanTimelineList(id facade, const char *tag) {
    @try {
        SEL gtm = NSSelectorFromString(@"getTimelineMgr");
        id mgr = nil;
        if ([facade respondsToSelector:gtm]) {
            mgr = ((id(*)(id, SEL))objc_msgSend)(facade, gtm);
        }
        if (!mgr) mgr = WXGetService(objc_getClass("WCTimelineMgr"));
        SEL tdl = NSSelectorFromString(@"timelineDataList");
        if (mgr && [mgr respondsToSelector:tdl]) {
            NSArray *list = ((id(*)(id, SEL))objc_msgSend)(mgr, tdl);
            if ([list isKindOfClass:[NSArray class]]) {
                WPLog(@"Moments", @"[FakeLike] dl-list scan (%s): %lu items", tag, (unsigned long)list.count);
                MioFakeAutoApplyArray(list, tag);
            }
        } else {
            WPLog(@"Moments", @"[FakeLike] dl-list scan: timelineDataList unavailable");
        }
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[FakeLike] dl-list scan error: %@", e);
    }
}

static void MioFakeActiveRefresh(const char *reason) {
    @try {
        MomentsConfig *cfg = [MomentsConfig shared];
        if (!cfg.fakeLikeEnabled) {
            WPLog(@"Moments", @"[FakeLike] active-refresh skipped (%s, fakeLike=NO)", reason);
            return;
        }
        if ([UIApplication sharedApplication].applicationState != UIApplicationStateActive) {
            WPLog(@"Moments", @"[FakeLike] active-refresh skipped (%s, not active)", reason);
            return;
        }
        if (MioFakeVCCoveringTimeline()) {
            WPLog(@"Moments", @"[FakeLike] active-refresh skipped (%s, timeline VC on screen)", reason);
            return;
        }
        NSTimeInterval now = [NSDate date].timeIntervalSince1970;
        if (gFakeLastActiveRefresh > 0 && now - gFakeLastActiveRefresh < 300) {
            WPLog(@"Moments", @"[FakeLike] active-refresh skipped (%s, throttled, %.0fs left)",
                  reason, 300 - (now - gFakeLastActiveRefresh));
            return;
        }
        id facade = WXGetService(objc_getClass("WCFacade"));
        if (!facade) {
            WPLog(@"Moments", @"[FakeLike] active-refresh: WCFacade unavailable (%s)", reason);
            return;
        }
        gFakeLastActiveRefresh = now;   // WCR 同款：取到 facade 才记账
        // 全量兜底首扫：请求前扫既有列表（热激活时列表尚有上次会话数据，WCR FUN_005512e0 同序）
        MioFakeScanTimelineList(facade, "dl-list");
        SEL begin = NSSelectorFromString(@"beginTimeline");
        if ([facade respondsToSelector:begin]) {
            ((void(*)(id, SEL))objc_msgSend)(facade, begin);
        }
        SEL head = NSSelectorFromString(@"updateTimelineHead");
        if ([facade respondsToSelector:head]) {
            ((void(*)(id, SEL))objc_msgSend)(facade, head);
            WPLog(@"Moments", @"[FakeLike] active-refresh: updateTimelineHead fired (%s, t=%.0f)", reason, now);
            // 回包落地后二次全量（179.log 实证：冷启动请求与回包同秒，首扫 0 items——
            // 回包经数据层回调写入列表需数秒，延迟重扫才能覆盖刷新后全量含旧本人帖）
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(6 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{
                MioFakeScanTimelineList(facade, "dl-list2");
            });
        } else {
            WPLog(@"Moments", @"[FakeLike] active-refresh: WCFacade lacks updateTimelineHead");
        }
    } @catch (NSException *e) {
        WPLog(@"Moments", @"[FakeLike] active-refresh error: %@", e);
    }
}

static void MioFakeInstallActiveRefresh(void) {
    // 回前台触发（PrivacyHook 同款通知监听，零 hook）
    [[NSNotificationCenter defaultCenter]
        addObserverForName:UIApplicationDidBecomeActiveNotification object:nil queue:nil
        usingBlock:^(NSNotification *note) { MioFakeActiveRefresh("fg"); }];
    WPLog(@"Moments", @"[FakeLike] active-refresh listener installed");
    // 冷启动补偿：install 早于首次 didBecomeActive 通知时也能在服务就绪后刷一次
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(60 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ MioFakeActiveRefresh("coldstart"); });
}

#pragma mark - 安装

@implementation MomentsHook

+ (void)install {
    WPLog(@"Moments", @"[MomentsHook] install start");
    MioInstallPyqHooks();
    MioInstallHDHooks();
    MioInstallFakeLikeHooks();
    MioInstallFakeDataLayerHooks();
    MioFakeInstallActiveRefresh();
    // 重挂自检（防微信晚到初始化覆盖 IMP）
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(20 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ MioRehookCheck(1); });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(45 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ MioRehookCheck(2); });
    WPLog(@"Moments", @"[MomentsHook] install complete");
    // install 期日志在文件窗口开之前必然丢失：30s 后（appReady 已过、窗口已开）补打安装摘要
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(30 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        WPLog(@"Moments", @"[FakeLike] install summary: triggers %@, data-layer %@, active-refresh=on",
              gFakeTriggerSummary, gFakeDLInstallSummary);
    });
}

@end
