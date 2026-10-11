//
//  MsgMergeHook.m — 消息合并本体（Phase1：分组打标 + 组内非首条藏头像/藏群昵称）
//
//  对齐 XOS mesMsgMerge 分组算法：
//    - 分组 pass（XOS FUN_000acf2c）：遍历 BaseMsgContentViewController.m_arrMessageNodeData，
//      相邻同发送者的消息打「组内非首条」关联对象标志
//    - 组中断判定（XOS FUN_000af458）：时间条 / 系统消息 / 撤回 / 拍一拍 / 消息类型 10000
//    - 仅群聊合并（XOS 同款：isChatroom 才走合并分支，私聊只减间距属后续阶段）
//    - 触发时机：viewWillAppear / reloadTableData 前全量重算（幂等，无缓存链）
//
//  生效点：CommonMessageViewModel.isShowHeadImage / isShowChatRoomDisplayName
//  （微信原生头像与群昵称显示决策方法，组内非首条返回 NO 即呈现合并外观）
//
//  与 HideAvatarHook 的链式共存：本 Hook 安装顺序在其后，orig 指向其垫片；
//  合并标志命中时短路返回 NO，未命中时透传 orig，两个功能语义正交可叠加。
//

#import "MsgMergeHook.h"
#import "MsgMergeConfig.h"
#import "MessageTimeFormatParser.h"
#import "../../Config/WPColorUtil.h"
#import "../../Core/LogManager.h"
#import <UIKit/UIKit.h>
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <dlfcn.h>

// ============================================================
// MARK: - 关联对象 key
// ============================================================

/// 组内非首条标志（藏头像 + 藏群昵称）
static char kMioMergeHidden;
/// 合并组首条标志（组内 ≥2 条时的第一条，时间标注挂它上面）
static char kMioAabGroupHead;
/// 合并组尾条标志（组内 ≥2 条时的最后一条，虚线段收尾用）
static char kMioAabGroupTail;
/// 时间标注 label（挂在 cell 上）
static char kMioAabTimeLabel;
/// 时间板渲染侧别缓存（cell 复用换侧时强制重建 attributedText）
static char kMioAabSideMark;
/// 时间板明暗缓存（明暗切换时强制重建 attributedText）
static char kMioAabDarkMark;
/// 虚线竖线段（挂在 cell 上）
static char kMioAabDashLayer;
/// 引导线终点视图（挂在 cell 上）
static char kMioAabGuideView;

// ============================================================
// MARK: - Original IMPs
// ============================================================

static IMP orig_BaseVC_viewDidLoad            = NULL;
static IMP orig_BaseVC_viewWillAppear         = NULL;
static IMP orig_BaseVC_reloadTableData        = NULL;
static IMP orig_VM_isShowHeadImage            = NULL;
static IMP orig_VM_isShowChatRoomDisplayName  = NULL;

// ============================================================
// MARK: - 组中断判定（对齐 XOS FUN_000af458，per-class 结果缓存）
// ============================================================

static CFMutableDictionaryRef _wpBreakerClassCache = NULL;

static BOOL wpIsGroupBreaker(id vm) {
    Class cls = object_getClass(vm);
    if (!_wpBreakerClassCache) {
        _wpBreakerClassCache = CFDictionaryCreateMutable(kCFAllocatorDefault, 0,
                                                         NULL, &kCFTypeDictionaryValueCallBacks);
    }
    NSNumber *cached = (__bridge NSNumber *)CFDictionaryGetValue(_wpBreakerClassCache, (__bridge const void *)cls);
    if (!cached) {
        NSString *name = NSStringFromClass(cls);
        // 对齐 XOS：containsString 类名匹配（时间条/系统/撤回/拍一拍/回铃）
        BOOL isBreaker = [name containsString:@"ChatTime"] ||
                         [name containsString:@"SystemMessage"] ||
                         [name containsString:@"Revoke"] ||
                         [name containsString:@"PatMessage"] ||
                         [name containsString:@"RingBack"];
        cached = @(isBreaker);
        CFDictionarySetValue(_wpBreakerClassCache, (__bridge const void *)cls, (__bridge const void *)cached);
    }
    if (cached.boolValue) return YES;

    // messageWrap.m_uiMessageType == 10000 → 系统消息，组中断
    id wrap = ((id (*)(id, SEL))objc_msgSend)(vm, @selector(messageWrap));
    if (wrap && [(id)wrap respondsToSelector:@selector(m_uiMessageType)]) {
        unsigned int msgType = ((unsigned int (*)(id, SEL))objc_msgSend)(wrap, @selector(m_uiMessageType));
        if (msgType == 10000) return YES;
    }
    return NO;
}

// ============================================================
// MARK: - 会话用户名（复用 HideAvatarHook 已验证的 GetContact 路径）
// ============================================================

static NSString *wpChatUsername(id chatVC) {
    id contact = nil;
    @try {
        contact = ((id (*)(id, SEL))objc_msgSend)(chatVC, @selector(GetContact));
    } @catch (NSException *e) {
        return nil;
    }
    if (!contact) return nil;
    @try {
        return ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_nsUsrName));
    } @catch (NSException *e) {
        return nil;
    }
}

// ============================================================
// MARK: - 分组 pass（对齐 XOS FUN_000acf2c 主循环）
// ============================================================

static void wpRunGroupPass(id chatVC) {
    MsgMergeConfig *config = [MsgMergeConfig shared];
    if (!config.msgMergeEnabled || !chatVC) return;

    // 仅群聊合并（对齐 XOS：私聊只走间距缩减，Phase1 不做）
    NSString *username = wpChatUsername(chatVC);
    if (![username containsString:@"@chatroom"]) return;

    // m_arrMessageNodeData 是 ivar 非 property，按 XOS 同款 class_getInstanceVariable 取
    Ivar ivar = class_getInstanceVariable(object_getClass(chatVC), "m_arrMessageNodeData");
    if (!ivar) return;
    NSArray *arr = object_getIvar(chatVC, ivar);
    NSUInteger n = arr.count;
    if (n == 0) return;

    NSString *prevFrom = nil;
    id firstInGroup = nil;
    id lastInGroup = nil;
    NSUInteger groupCount = 0;
    // 组收尾：组内 ≥2 条时给首条打组首标、末条打组尾标
    #define WP_FLUSH_GROUP() do { \
        if (groupCount > 1 && firstInGroup) { \
            objc_setAssociatedObject(firstInGroup, &kMioAabGroupHead, kCFBooleanTrue, OBJC_ASSOCIATION_RETAIN); \
            if (lastInGroup) objc_setAssociatedObject(lastInGroup, &kMioAabGroupTail, kCFBooleanTrue, OBJC_ASSOCIATION_RETAIN); \
        } \
        firstInGroup = nil; lastInGroup = nil; groupCount = 0; \
    } while (0)

    for (NSUInteger i = 0; i < n; i++) {
        id vm = arr[i];

        // 幂等重算：先清标志（含中断元素，保证关闭开关/分组变化后无残留）
        objc_setAssociatedObject(vm, &kMioMergeHidden, kCFBooleanFalse, OBJC_ASSOCIATION_RETAIN);
        objc_setAssociatedObject(vm, &kMioAabGroupHead, kCFBooleanFalse, OBJC_ASSOCIATION_RETAIN);
        objc_setAssociatedObject(vm, &kMioAabGroupTail, kCFBooleanFalse, OBJC_ASSOCIATION_RETAIN);

        if (wpIsGroupBreaker(vm)) {
            WP_FLUSH_GROUP();
            prevFrom = nil;
            continue;
        }

        id wrap = ((id (*)(id, SEL))objc_msgSend)(vm, @selector(messageWrap));
        // 分组键 = 真实发送者：群聊收到的消息 m_nsFromUsr 恒为群 ID（探针实证），
        // 按 fromUsr 分组会把全群非本人消息并成一个大组；m_nsRealChatUsr 才是群消息
        // 真实发送者（探针实证文本/图片/表情均带正确 wxid；KeywordAlert 同源用法）。
        // 特例：type49 等 appmsg 的 realChatUsr 被塞入 XML 内容（探针实证），不可信 →
        // 回退 fromUsr 后若仍是群 ID（@chatroom）则发送者不可判定，该条不参与合并（防误并）
        NSString *from = wrap ? ((id (*)(id, SEL))objc_msgSend)(wrap, @selector(m_nsRealChatUsr)) : nil;
        if (from.length && [from hasPrefix:@"<"]) from = nil;
        if (!from.length) from = wrap ? ((id (*)(id, SEL))objc_msgSend)(wrap, @selector(m_nsFromUsr)) : nil;
        if (!from.length || [from containsString:@"@chatroom"]) {
            WP_FLUSH_GROUP();
            prevFrom = nil;
            continue;
        }

        // 与前一条同真实发送者 → 组内非首条
        if (prevFrom && [from isEqualToString:prevFrom]) {
            objc_setAssociatedObject(vm, &kMioMergeHidden, kCFBooleanTrue, OBJC_ASSOCIATION_RETAIN);
            groupCount++;
        } else {
            WP_FLUSH_GROUP();
            firstInGroup = vm;
            groupCount = 1;
        }
        lastInGroup = vm;
        prevFrom = from;
    }
    WP_FLUSH_GROUP();
    #undef WP_FLUSH_GROUP
}

// ============================================================
// MARK: - Hook 垫片
// ============================================================

static void hook_viewDidLoad(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_BaseVC_viewDidLoad)(self, _cmd);
    wpRunGroupPass(self);
}

static void hook_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    wpRunGroupPass(self);
    ((void (*)(id, SEL, BOOL))orig_BaseVC_viewWillAppear)(self, _cmd, animated);
}

static id hook_reloadTableData(id self, SEL _cmd) {
    wpRunGroupPass(self);
    return ((id (*)(id, SEL))orig_BaseVC_reloadTableData)(self, _cmd);
}

static BOOL hook_isShowHeadImage(id self, SEL _cmd) {
    if (![MsgMergeConfig shared].msgMergeEnabled) {
        return ((BOOL (*)(id, SEL))orig_VM_isShowHeadImage)(self, _cmd);
    }
    NSNumber *hidden = objc_getAssociatedObject(self, &kMioMergeHidden);
    if (hidden.boolValue) return NO;  // 组内非首条 → 藏头像
    return ((BOOL (*)(id, SEL))orig_VM_isShowHeadImage)(self, _cmd);
}

static BOOL hook_isShowChatRoomDisplayName(id self, SEL _cmd) {
    if (![MsgMergeConfig shared].msgMergeEnabled) {
        return ((BOOL (*)(id, SEL))orig_VM_isShowChatRoomDisplayName)(self, _cmd);
    }
    NSNumber *hidden = objc_getAssociatedObject(self, &kMioMergeHidden);
    if (hidden.boolValue) return NO;  // 组内非首条 → 藏群昵称
    return ((BOOL (*)(id, SEL))orig_VM_isShowChatRoomDisplayName)(self, _cmd);
}

// ============================================================
// MARK: - Phase2 AAB 布局垫片（头像移到气泡上/下方）
// ============================================================

static IMP orig_Common_layoutSubviews    = NULL;
static IMP orig_VM_rowHeight_common      = NULL;
static IMP orig_VM_rowHeight_text        = NULL;

static char kMioAabAvatarH;   // vm 上缓存实测头像高（rowHeight 先于 cell 构建，用实测值补偿）
static char kMioAabContBaseY; // 气泡容器/引用板首过自然 y（绝对定位基准，防逐轮累加）
static char kMioAabSepLayer;  // 时间板下水平虚线分隔（XOS 20260220 对应件）

/// AAB 是否对该 viewModel 生效；outMode 返回 0=上方 1=下方，outDelta 返回高度增量
static BOOL wpAabActive(id vm, NSInteger *outMode, CGFloat *outDelta, CGFloat *outShift) {
    MsgMergeConfig *config = [MsgMergeConfig shared];
    if (outMode) *outMode = 2;
    if (outDelta) *outDelta = 0;
    if (outShift) *outShift = 0;
    if (!config.msgMergeEnabled || !config.msgMergeAabEnabled || !vm) return NO;

    BOOL isSender = NO;
    @try {
        isSender = ((BOOL (*)(id, SEL))objc_msgSend)(vm, @selector(isSender));
    } @catch (NSException *e) { return NO; }

    NSInteger mode = isSender ? config.msgMergePositionModeSelf : config.msgMergePositionModeOther;
    if (mode != 0 && mode != 1) return NO;
    if (outMode) *outMode = mode;

    // 组内非首条头像已被合并隐藏，aab 只作用于有头像的 cell（经 hook 链后的真实值）
    BOOL showHead = ((BOOL (*)(id, SEL))objc_msgSend)(vm, @selector(isShowHeadImage));
    if (!showHead) return NO;

    CGFloat textShift = isSender ? config.msgMergeTextYShiftSelf : config.msgMergeTextYShiftOther;
    if (outShift) *outShift = textShift;
    // 高度补偿（XOS 探针实证）：上方模式 delta=头像高（接收 43），自身侧 +2（容器 16→61）；
    // 下方模式保持头像高+4
    NSNumber *cachedH = objc_getAssociatedObject(vm, &kMioAabAvatarH);
    CGFloat avatarH = cachedH.doubleValue > 1 ? cachedH.doubleValue : 42;
    CGFloat base = (mode == 0) ? (isSender ? 2.0 : 0.0) : 4.0;
    if (outDelta) *outDelta = avatarH + base + fabs(textShift);
    return YES;
}

// ============================================================
// MARK: - Phase3 时间标注
// ============================================================

static BOOL wpIsDarkMode(id cellView);

/// 按配置格式化消息时间（显示样式 0-8 / 时间格式 / 时间语音）
static NSString *wpAabTimeString(NSDate *date, MsgMergeConfig *config) {
    if (!date) return nil;
    NSInteger mode = config.msgMergeTimeDisplayMode;
    if (mode == 7) return nil;
    if (mode == 8) {
        if (config.msgMergeTimeCustomFormat.length == 0) return nil;
        return [MessageTimeFormatParser formatDate:date
                                     customFormat:config.msgMergeTimeCustomFormat
                                       isDarkMode:NO];
    }

    // 时间语音：0=跟随系统 1=中文 2=英文
    NSLocale *locale = nil;
    if (config.msgMergeTimeLocaleStyle == 1) locale = [NSLocale localeWithLocaleIdentifier:@"zh_CN"];
    else if (config.msgMergeTimeLocaleStyle == 2) locale = [NSLocale localeWithLocaleIdentifier:@"en_US"];
    BOOL isCN = (locale == nil)
        ? [[[NSLocale currentLocale] languageCode] isEqualToString:@"zh"]
        : [locale.languageCode isEqualToString:@"zh"];

    // 时间格式：0=24小时 1=24小时(秒) 2=12小时 3=12小时(秒)
    NSString *timeFmt = @[@"HH:mm", @"HH:mm:ss", @"h:mm a", @"h:mm:ss a"][config.msgMergeTimeFormatStyle >= 0 && config.msgMergeTimeFormatStyle <= 3 ? config.msgMergeTimeFormatStyle : 0];

    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    if (locale) fmt.locale = locale;

    NSString *datePart;
    switch (mode) {
        case 0: datePart = isCN ? @"M月d日 " : @"MMM d "; break;   // 日期+时间
        case 2: datePart = isCN ? @"M月d日"  : @"MMM d";  break;   // 仅日期
        case 3: datePart = nil; break;                              // 时间+星期（星期走末尾追加 E）
        case 4: datePart = isCN ? @"M/d " : @"M/d "; break;        // 紧凑单行
        case 5: {                                                   // 相对日期+时间
            NSCalendar *cal = [NSCalendar currentCalendar];
            NSDate *startOfToday = [cal startOfDayForDate:[NSDate date]];
            NSDate *startOfMsg = [cal startOfDayForDate:date];
            NSDateComponents *diff = [cal components:NSCalendarUnitDay fromDate:startOfMsg toDate:startOfToday options:0];
            NSInteger days = diff.day;
            if (days == 0) { datePart = @""; timeFmt = @"HH:mm"; }
            else if (days == 1) datePart = isCN ? @"昨天 " : @"Yesterday ";
            else if (days > 1 && days < 7) datePart = @"E ";
            else datePart = isCN ? @"M月d日 " : @"MMM d ";
            break;
        }
        case 6: datePart = isCN ? @"yyyy年M月d日 " : @"yyyy MMM d "; break;  // 完整日期+时间
        default: datePart = nil; break;                             // 1=仅时间
    }

    // 日期与时间两行显示（对齐 XOS 时间板；紧凑单行模式 4 保持一行）
    NSMutableString *pattern = [NSMutableString string];
    if (datePart.length) [pattern appendFormat:@"%@%@", datePart, (mode == 4) ? @" " : @"\n"];
    [pattern appendString:timeFmt];
    if (mode == 3) [pattern appendString:@" E"];

    fmt.dateFormat = pattern;
    return [fmt stringFromDate:date];
}

/// 组首 cell 的时间标注 label（常驻 cellView，随布局更新）
static CGRect wpApplyAabTimeLabel(id cellView, id vm, CGRect headF, CGRect bgF, NSInteger mode) {
    MsgMergeConfig *config = [MsgMergeConfig shared];
    UILabel *label = objc_getAssociatedObject(cellView, &kMioAabTimeLabel);

    // 非组首 / 显示样式=不显示 → 隐藏并返回
    BOOL isGroupHead = [objc_getAssociatedObject(vm, &kMioAabGroupHead) boolValue];
    if (!isGroupHead || config.msgMergeTimeDisplayMode == 7) {
        if (label && !label.hidden) label.hidden = YES;
        return CGRectZero;
    }

    // 时间文本（缓存上次渲染的文本，相同则跳过重设）
    id wrap = ((id (*)(id, SEL))objc_msgSend)(vm, @selector(messageWrap));
    NSDate *date = nil;
    if (wrap) {
        @try {
            NSNumber *ts = [wrap valueForKey:@"m_uiCreateTime"];
            if (ts.doubleValue > 0) date = [NSDate dateWithTimeIntervalSince1970:ts.doubleValue];
        } @catch (NSException *e) {}
    }
    NSString *text = wpAabTimeString(date, config);
    if (!text.length) {
        if (label && !label.hidden) label.hidden = YES;
        return CGRectZero;
    }

    if (!label) {
        label = [[UILabel alloc] initWithFrame:CGRectZero];
        label.tag = 20260219;  // 对齐 XOS 时间板 tag，双端探针对账用
        label.numberOfLines = 2;  // 日期/时间两行（XOS 同款）
        objc_setAssociatedObject(cellView, &kMioAabTimeLabel, label, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [cellView addSubview:label];
    }
    label.hidden = NO;
    UIColor *color = [WPColorUtil dynamicColorFromLightHex:config.msgMergeTimeColorHex
                                                   darkHex:config.msgMergeTimeColorDarkHex
                                             lightFallback:[UIColor secondaryLabelColor]
                                              darkFallback:[UIColor secondaryLabelColor]];
    // XOS 时间板是「两个独立 10pt label」结构（FUN_001a0c34：label2.y = h1 + 5，行距 5），
    // 自身侧两行右对齐（L46159-46163）。用单 label + attributedText 行距 5 + 侧别对齐等效还原
    CGFloat cellW = ((CGRect (*)(id, SEL))objc_msgSend)(cellView, @selector(frame)).size.width;
    BOOL rightSide = headF.origin.x > cellW / 2;
    NSMutableParagraphStyle *ps = [NSMutableParagraphStyle new];
    ps.lineSpacing = 5;
    ps.alignment = rightSide ? NSTextAlignmentRight : NSTextAlignmentLeft;
    BOOL isDark = wpIsDarkMode(cellView);
    // attributedText 固化了行距/对齐/颜色：文本变化、cell 复用换侧、明暗切换任一发生都重建
    NSString *oldText = label.attributedText.string;
    NSNumber *lastSide = objc_getAssociatedObject(label, &kMioAabSideMark);
    NSNumber *lastDark = objc_getAssociatedObject(label, &kMioAabDarkMark);
    BOOL sideChanged = !lastSide || lastSide.boolValue != rightSide;
    BOOL darkChanged = !lastDark || lastDark.boolValue != isDark;
    if (![oldText isEqualToString:text] || sideChanged || darkChanged) {
        label.attributedText = [[NSAttributedString alloc] initWithString:text attributes:@{
            NSFontAttributeName: [UIFont systemFontOfSize:10],
            NSParagraphStyleAttributeName: ps,
            NSForegroundColorAttributeName: color,
        }];
        objc_setAssociatedObject(label, &kMioAabSideMark, @(rightSide), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(label, &kMioAabDarkMark, @(isDark), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    [label sizeToFit];
    CGRect lf = label.frame;
    // 板位按头像侧别镜像（XOS 公式 FUN_001a0c34）：固定放头像右侧会把自己（右缘头像）
    // 的时间板推出屏外（截图实证）
    if (mode == 0) {
        // 接收侧 x = head.maxX + 11、自身侧 x = head.minX - 11 - 板宽（L46087-46088/L46151）；
        // y = head.minY + 16（两行竖排 L46165-46171，非垂直居中——探针实证 20 = 4+16）
        lf.origin.x = rightSide ? (headF.origin.x - 11 - lf.size.width)
                                : (headF.origin.x + headF.size.width + 11);
        lf.origin.y = headF.origin.y + 16;
    } else {
        lf.origin.x = rightSide ? (headF.origin.x + headF.size.width - lf.size.width) : headF.origin.x;
        lf.origin.y = headF.origin.y - lf.size.height - 2;
    }
    label.frame = lf;
    return lf;
}

// ============================================================
// MARK: - Phase3 虚线（头像列竖向连接线，10 种样式）
// ============================================================

/// 明暗模式判定（cell 视图特性）
static BOOL wpIsDarkMode(id cellView) {
    @try {
        UITraitCollection *tc = ((UITraitCollection *(*)(id, SEL))objc_msgSend)(cellView, @selector(traitCollection));
        return tc ? ((NSInteger)tc.userInterfaceStyle == 2) : NO;  // UIUserInterfaceStyleDark
    } @catch (NSException *e) { return NO; }
}

/// 按侧别与明暗取虚线样式
static NSInteger wpDashStyleFor(MsgMergeConfig *config, BOOL isSender, BOOL isDark) {
    return isSender ? (isDark ? config.msgMergeDashStyleSelfDark : config.msgMergeDashStyleSelfLight)
                    : (isDark ? config.msgMergeDashStyleOtherDark : config.msgMergeDashStyleOtherLight);
}

/// 竖向虚线段样式绘制（样式 0-9，9=不显示）
static void wpApplyAabDash(id cellView, id vm, CGRect headF, BOOL isSender) {
    MsgMergeConfig *config = [MsgMergeConfig shared];
    CAShapeLayer *layer = objc_getAssociatedObject(cellView, &kMioAabDashLayer);

    BOOL inGroup = [objc_getAssociatedObject(vm, &kMioMergeHidden) boolValue]
                || [objc_getAssociatedObject(vm, &kMioAabGroupTail) boolValue];
    NSInteger style = wpDashStyleFor(config, isSender, wpIsDarkMode(cellView));
    if (!inGroup || style == 9 || headF.size.height < 1) {
        if (layer) { [layer removeFromSuperlayer]; objc_setAssociatedObject(cellView, &kMioAabDashLayer, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC); }
        return;
    }

    BOOL isHead = [objc_getAssociatedObject(vm, &kMioAabGroupHead) boolValue];
    BOOL isDark = wpIsDarkMode(cellView);
    CGRect cellFrame = ((CGRect (*)(id, SEL))objc_msgSend)(cellView, @selector(frame));
    CGFloat cellH = cellFrame.size.height;
    // 连接线沿屏幕外缘走（XOS 同款：接收侧最左、自身侧最右）——画在头像中心会被
    // 齐头像列的整排气泡盖住（截图实证不可见）
    BOOL rightSide = headF.origin.x > cellFrame.size.width / 2;
    CGFloat x = rightSide ? (cellFrame.size.width - 7.5) : 7.5;
    CGFloat ext = config.msgMergeDashExtendPt;

    // 线段 y 范围：组首从头像顶上方延到 cell 底（外缘线与头像不同列不相压），
    // 其余满段；旧组尾特判用隐藏头像 frame 算出 y1≈0 导致尾条无线（截图实证），删
    CGFloat y0, y1;
    if (isHead) { y0 = headF.origin.y - 2 - ext; y1 = cellH + ext; }
    else        { y0 = -ext; y1 = cellH + ext; }
    if (y1 - y0 < 2) { if (layer) [layer removeFromSuperlayer]; return; }

    if (!layer) {
        layer = [CAShapeLayer new];
        layer.fillColor = nil;
        objc_setAssociatedObject(cellView, &kMioAabDashLayer, layer, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        CALayer *hostLayer = ((CALayer *(*)(id, SEL))objc_msgSend)(cellView, @selector(layer));
        [hostLayer addSublayer:layer];
    }
    layer.hidden = NO;

    UIBezierPath *path;
    switch (style) {
        case 7: {  // 波浪
            path = [UIBezierPath bezierPath];
            [path moveToPoint:CGPointMake(x, y0)];
            CGFloat amp = 2.5, wl = 8;
            for (CGFloat y = y0; y < y1; y += wl / 2) {
                CGFloat dir = ((NSInteger)((y - y0) / (wl / 2)) % 2 == 0) ? 1 : -1;
                [path addQuadCurveToPoint:CGPointMake(x, MIN(y + wl / 2, y1))
                            controlPoint:CGPointMake(x + amp * dir, y + wl / 4)];
            }
            layer.lineWidth = 1.2; layer.lineDashPattern = nil;
            break;
        }
        case 8: {  // 锯齿
            path = [UIBezierPath bezierPath];
            [path moveToPoint:CGPointMake(x, y0)];
            CGFloat amp = 2.5, seg = 5;
            CGFloat y = y0;
            while (y < y1) {
                CGFloat dir = ((NSInteger)((y - y0) / seg) % 2 == 0) ? 1 : -1;
                [path addLineToPoint:CGPointMake(x + amp * dir, MIN(y + seg, y1))];
                y += seg;
            }
            layer.lineWidth = 1.2; layer.lineDashPattern = nil;
            break;
        }
        default: {
            path = [UIBezierPath bezierPath];
            [path moveToPoint:CGPointMake(x, y0)];
            [path addLineToPoint:CGPointMake(x, y1)];
            layer.lineWidth = (style == 3) ? 2.0 : 1.2;
            switch (style) {
                case 0: layer.lineDashPattern = @[@4, @3]; break;               // 默认虚线
                case 1: layer.lineDashPattern = nil; break;                      // 实线
                case 2: layer.lineDashPattern = @[@0.1, @3]; break;              // 细点线
                case 3: layer.lineDashPattern = @[@6, @4]; break;                // 粗虚线
                case 4: layer.lineDashPattern = @[@4, @3]; break;                // 流光
                case 5: layer.lineDashPattern = @[@2, @4]; break;                // 律动
                default: layer.lineDashPattern = @[@5, @3]; break;               // 彩虹及其他
            }
            break;
        }
    }
    layer.path = path.CGPath;
    switch (style) {
        case 4: layer.strokeColor = [UIColor colorWithRed:0.3 green:0.6 blue:1.0 alpha:0.9].CGColor; break;  // 流光 蓝
        case 5: layer.strokeColor = [UIColor colorWithRed:0.2 green:0.8 blue:0.5 alpha:0.9].CGColor; break;  // 律动 绿
        case 6: layer.strokeColor = [UIColor colorWithRed:0.8 green:0.4 blue:1.0 alpha:0.9].CGColor; break;  // 彩虹 紫
        default: layer.strokeColor = [UIColor colorWithWhite:isDark ? 0.55 : 0.7 alpha:1].CGColor; break;
    }
}

/// 时间板下水平虚线分隔（XOS 20260220 对应件）：头像列到时间板边缘，气泡上方 6pt
static void wpApplyAabSepLine(id cellView, CGRect boardF, CGRect headF, CGFloat bubbleTopY, NSInteger mode) {
    CAShapeLayer *layer = objc_getAssociatedObject(cellView, &kMioAabSepLayer);
    CGFloat cellW = ((CGRect (*)(id, SEL))objc_msgSend)(cellView, @selector(frame)).size.width;
    BOOL rightSide = headF.origin.x > cellW / 2;
    BOOL show = (mode == 0) && boardF.size.height > 0.5 && bubbleTopY > 1;
    if (!show) {
        if (layer) { [layer removeFromSuperlayer]; objc_setAssociatedObject(cellView, &kMioAabSepLayer, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC); }
        return;
    }
    // XOS FUN_001a2190：y = board.maxY + 6.5 - 线高/2（探针实证 53 = 板底 49 + 4）
    CGFloat sepY = boardF.origin.y + boardF.size.height + 4;
    CGFloat x0 = rightSide ? boardF.origin.x : headF.origin.x + 7;
    CGFloat x1 = rightSide ? (headF.origin.x + headF.size.width - 7) : (boardF.origin.x + boardF.size.width);
    if (x1 - x0 < 4) {
        if (layer) [layer removeFromSuperlayer];
        return;
    }
    if (!layer) {
        layer = [CAShapeLayer new];
        layer.fillColor = nil;
        layer.lineWidth = 1;
        layer.lineDashPattern = @[@4, @3];
        objc_setAssociatedObject(cellView, &kMioAabSepLayer, layer, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        CALayer *hostLayer = ((CALayer *(*)(id, SEL))objc_msgSend)(cellView, @selector(layer));
        [hostLayer addSublayer:layer];
    }
    BOOL isDark = wpIsDarkMode(cellView);
    layer.strokeColor = [UIColor colorWithWhite:isDark ? 0.55 : 0.7 alpha:1].CGColor;
    UIBezierPath *path = [UIBezierPath bezierPath];
    [path moveToPoint:CGPointMake(x0, sepY)];
    [path addLineToPoint:CGPointMake(x1, sepY)];
    layer.path = path.CGPath;
}

// ============================================================
// MARK: - Phase3 引导线（组首/组尾终点标记，7 种样式）
// ============================================================

static NSInteger wpGuideStyleFor(MsgMergeConfig *config, BOOL isSender, BOOL isDark) {
    return isSender ? (isDark ? config.msgMergeGuideLineSelfDark : config.msgMergeGuideLineSelfLight)
                    : (isDark ? config.msgMergeGuideLineOtherDark : config.msgMergeGuideLineOtherLight);
}

/// 引导线终点标记：SF Symbol 拐弯箭头 / 方括号，画在组首或组尾的头像旁
static void wpApplyAabGuideLine(id cellView, id vm, CGRect headF, BOOL isSender) {
    MsgMergeConfig *config = [MsgMergeConfig shared];
    UIView *view = objc_getAssociatedObject(cellView, &kMioAabGuideView);

    BOOL isHead = [objc_getAssociatedObject(vm, &kMioAabGroupHead) boolValue];
    BOOL isTail = [objc_getAssociatedObject(vm, &kMioAabGroupTail) boolValue];
    NSInteger endPos = isSender ? config.msgMergeGuideLineEndPosSelf : config.msgMergeGuideLineEndPosOther;
    NSInteger style = wpGuideStyleFor(config, isSender, wpIsDarkMode(cellView));

    // 终点命中：样式非不显示 && 该 cell 是配置的终点（0=首条 1=末条）&& 组内 ≥2 条
    BOOL isEndpoint = (endPos == 0) ? isHead : isTail;
    if (!isEndpoint || style == 6 || headF.size.height < 1) {
        if (view && !view.hidden) view.hidden = YES;
        return;
    }

    if (!view) {
        view = [[UIView alloc] initWithFrame:CGRectZero];
        objc_setAssociatedObject(cellView, &kMioAabGuideView, view, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [cellView addSubview:view];
    }
    view.hidden = NO;

    BOOL isDark = wpIsDarkMode(cellView);
    BOOL wantLabel = (style == 4);
    // 视图类型不匹配（样式切换 UILabel ↔ UIImageView）时移除重建
    if (view && wantLabel && ![view isKindOfClass:[UILabel class]]) {
        [view removeFromSuperview];
        objc_setAssociatedObject(cellView, &kMioAabGuideView, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        view = nil;
    }
    if (view && !wantLabel && ![view isKindOfClass:[UIImageView class]]) {
        [view removeFromSuperview];
        objc_setAssociatedObject(cellView, &kMioAabGuideView, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        view = nil;
    }

    if (wantLabel) {
        UILabel *label = (UILabel *)view;
        if (!label) {
            label = [UILabel new];
            objc_setAssociatedObject(cellView, &kMioAabGuideView, label, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            [cellView addSubview:label];
            view = label;
        }
        label.text = @"⌐";
        label.font = [UIFont systemFontOfSize:13];
        label.textColor = [UIColor colorWithWhite:isDark ? 0.6 : 0.45 alpha:1];
        [label sizeToFit];
    } else {
        // SF Symbol：0=流光顶角 1=脉冲底角 2=顶部拐弯↱ 3=底部拐弯↳ 5=彩虹拐角
        UIImageView *iv = (UIImageView *)view;
        if (!iv) {
            iv = [UIImageView new];
            objc_setAssociatedObject(cellView, &kMioAabGuideView, iv, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            [cellView addSubview:iv];
            view = iv;
        }
        NSString *sym;
        switch (style) {
            case 0: sym = @"arrow.turn.left.up"; break;
            case 1: sym = @"arrow.turn.left.down"; break;
            case 2: sym = @"arrow.turn.up.right"; break;
            case 3: sym = @"arrow.turn.down.right"; break;
            default: sym = @"arrow.turn.up.right"; break;  // 5 彩虹拐角
        }
        UIImage *img = [UIImage systemImageNamed:sym];
        if (!img) { view.hidden = YES; return; }
        UIColor *color;
        if (style == 5) color = [UIColor colorWithRed:0.8 green:0.4 blue:1.0 alpha:1];
        else color = [UIColor colorWithWhite:isDark ? 0.6 : 0.45 alpha:1];
        UIImage *tinted = [img imageWithTintColor:color];
        iv.image = tinted ?: img;
        iv.frame = CGRectMake(0, 0, 14, 14);
    }

    CGFloat offset = isSender ? config.msgMergeGuideLineOffsetSelf : config.msgMergeGuideLineOffsetOther;
    // 自身（右头像）镜像到头像左侧，否则箭头被推出屏外（同时间板）
    CGFloat cellW = ((CGRect (*)(id, SEL))objc_msgSend)(cellView, @selector(frame)).size.width;
    BOOL rightSide = headF.origin.x > cellW / 2;
    CGFloat ax = rightSide ? (headF.origin.x - offset - view.frame.size.width)
                           : (headF.origin.x + headF.size.width + offset);
    view.frame = CGRectMake(ax,
                            headF.origin.y + (headF.size.height - view.frame.size.height) / 2,
                            view.frame.size.width, view.frame.size.height);
}

/// 布局垫片：orig 完成原生布局后，将头像移到气泡上/下方
static void wpApplyAabLayout(id cellView) {
    id vm = nil;
    @try { vm = ((id (*)(id, SEL))objc_msgSend)(cellView, @selector(viewModel)); } @catch (NSException *e) {}
    if (!vm) return;

    MsgMergeConfig *config = [MsgMergeConfig shared];
    if (!config.msgMergeEnabled || !config.msgMergeAabEnabled) return;

    BOOL isSender = NO;
    @try { isSender = ((BOOL (*)(id, SEL))objc_msgSend)(vm, @selector(isSender)); } @catch (NSException *e) {}

    id head = ((id (*)(id, SEL))objc_msgSend)(cellView, @selector(getHeadImageView));
    id bg   = ((id (*)(id, SEL))objc_msgSend)(cellView, @selector(getBgImageView));
    if (!head || !bg) return;
    CGRect headF = ((CGRect (*)(id, SEL))objc_msgSend)(head, @selector(frame));
    if (headF.size.height < 1) return;  // 头像尚未布局
    CGRect bgF = ((CGRect (*)(id, SEL))objc_msgSend)(bg, @selector(frame));

    // 引用消息面板：cellView 直接子视图（不在气泡容器内），native 按「文本气泡自然 y+高+4」
    // 链定位（探针实证自然 y=57）。它不随容器走，AAB 位移时必须单独带上，
    // 否则下移后的气泡与引用板重叠（探针实证：气泡 63..100 压在引用板 57..99.7 上）
    id refer = nil;
    Class referCls = objc_getClass("MMInputMsgReferView");
    if (referCls) {
        NSArray *subs = ((NSArray *(*)(id, SEL))objc_msgSend)(cellView, @selector(subviews));
        for (UIView *sub in subs) {
            if ([sub isKindOfClass:referCls]) { refer = sub; break; }
        }
    }

    // 视觉件（虚线/引导线）：覆盖组内所有 cell（含隐藏头像的中间条），独立于头像位移 gate
    wpApplyAabDash(cellView, vm, headF, isSender);
    wpApplyAabGuideLine(cellView, vm, headF, isSender);

    // 头像位移：仅对位置模式启用且头像可见（组首）的 cell
    NSInteger mode; CGFloat textShift;
    if (!wpAabActive(vm, &mode, NULL, &textShift)) {
        // cell 复用为非 AAB 行（含组内非首条）：清时间板/分隔线防残留（此路径不走晚段视觉件）
        wpApplyAabTimeLabel(cellView, vm, headF, bgF, 0);
        wpApplyAabSepLine(cellView, CGRectZero, headF, 0, 0);
        return;
    }
    // 缓存实测头像高（rowHeight 垫片用）
    objc_setAssociatedObject(vm, &kMioAabAvatarH, @(headF.size.height), OBJC_ASSOCIATION_RETAIN);

    CGFloat gap = 4;
    // XOS 探针实证：上方模式 delta=头像高（接收侧 16→59），自身侧 +2（16→61）；下方保持 +4
    CGFloat delta = headF.size.height + (mode == 0 ? (isSender ? 2 : 0) : gap) + fabs(textShift);

    if (mode == 0) {
        // 上方：整个头部重排（XOS 探针实证组首 AppFile/Text）：
        //   头像 (9,2)→(12,4) 接收 +3、自身 (341,2)→(338,4) -3；昵称 (61,0)→(64,4)；
        //   气泡容器 (61,16)→(15,59)：x 左移到 cell 边距 15（占满头像下方整行）、y += delta；
        //   自身侧容器 x 不动（314 已靠右缘），仅 y += delta。
        // ★ 不能只移容器内的气泡图：文字（RichTextView）与气泡图同容器，
        //   只移图会让文字悬空在上、气泡空白（v3 探针实证 bg y=47 而 RichText y=10）。
        //   移容器则文字随行；容器 y/x 用首过自然值 + delta 绝对定位，orig 每轮是否
        //   重置容器 frame 都不会累加。
        CGRect newHead = headF;
        newHead.origin.x = headF.origin.x + (isSender ? -3 : 3);
        newHead.origin.y = 4;
        if (fabs(newHead.origin.x - headF.origin.x) > 0.5 || fabs(newHead.origin.y - headF.origin.y) > 0.5)
            ((void (*)(id, SEL, CGRect))objc_msgSend)(head, @selector(setFrame:), newHead);
        if (!isSender) {
            // 昵称随头像偏移（XOS 实证 (64,4) = 头像新右缘 + 9、y = 头像 y）；自身侧无昵称
            Class nickCls = objc_getClass("MMCPLabel");
            if (nickCls) {
                NSArray *subs = ((NSArray *(*)(id, SEL))objc_msgSend)(cellView, @selector(subviews));
                CGFloat nickX = newHead.origin.x + newHead.size.width + 9;
                for (UIView *sub in subs) {
                    if ([sub isKindOfClass:nickCls] && !sub.hidden &&
                        sub.frame.origin.x > 40 && sub.frame.origin.y < 20) {
                        CGRect nf = sub.frame;
                        if (fabs(nf.origin.x - nickX) > 0.5 || fabs(nf.origin.y - 4) > 0.5) {
                            nf.origin.x = nickX;
                            nf.origin.y = 4;
                            ((void (*)(id, SEL, CGRect))objc_msgSend)(sub, @selector(setFrame:), nf);
                        }
                        break;
                    }
                }
            }
        }
        if (fabs(delta) > 0.5) {
            id container = ((id (*)(id, SEL))objc_msgSend)(bg, @selector(superview));
            if (container) {
                CGRect contF = ((CGRect (*)(id, SEL))objc_msgSend)(container, @selector(frame));
                NSNumber *baseY = objc_getAssociatedObject(bg, &kMioAabContBaseY);
                if (!baseY) {
                    baseY = @(contF.origin.y);
                    objc_setAssociatedObject(bg, &kMioAabContBaseY, baseY, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                }
                contF.origin.y = baseY.doubleValue + delta;
                if (!isSender) contF.origin.x = 15;  // 接收侧：气泡左缘对齐 cell 边距（XOS 实证 61→15）
                if (fabs(contF.origin.y - ((CGRect (*)(id, SEL))objc_msgSend)(container, @selector(frame)).origin.y) > 0.5 ||
                    fabs(contF.origin.x - ((CGRect (*)(id, SEL))objc_msgSend)(container, @selector(frame)).origin.x) > 0.5)
                    ((void (*)(id, SEL, CGRect))objc_msgSend)(container, @selector(setFrame:), contF);
            }
            if (refer) {
                // 引用板同款 baseY+delta 绝对下移（native 每轮重置其 y，不会累加）；接收侧同款左移
                CGRect refF = ((CGRect (*)(id, SEL))objc_msgSend)(refer, @selector(frame));
                NSNumber *rBase = objc_getAssociatedObject(refer, &kMioAabContBaseY);
                if (!rBase) {
                    rBase = @(refF.origin.y);
                    objc_setAssociatedObject(refer, &kMioAabContBaseY, rBase, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                }
                refF.origin.y = rBase.doubleValue + delta;
                if (!isSender) refF.origin.x = 15;
                if (fabs(refF.origin.y - ((CGRect (*)(id, SEL))objc_msgSend)(refer, @selector(frame)).origin.y) > 0.5 ||
                    fabs(refF.origin.x - ((CGRect (*)(id, SEL))objc_msgSend)(refer, @selector(frame)).origin.x) > 0.5)
                    ((void (*)(id, SEL, CGRect))objc_msgSend)(refer, @selector(setFrame:), refF);
            }
            // 昵称 y/x 见上方 mode0 头像段：XOS 实证昵称随头像偏移到 (64,4)，非累加路径
        }
    } else {
        // 下方：气泡/昵称不动，头像放到气泡容器底。
        // ★ bgF 是容器内坐标，必须叠加容器 y，否则头像定位错位
        CGRect newHead = headF;
        CGFloat contY = 0;
        id container = ((id (*)(id, SEL))objc_msgSend)(bg, @selector(superview));
        if (container) contY = ((CGRect (*)(id, SEL))objc_msgSend)(container, @selector(frame)).origin.y;
        newHead.origin.y = contY + bgF.origin.y + bgF.size.height + gap;
        if (refer) {
            // 有引用板时头像放引用板底（refer frame 已是 cellView 坐标）
            CGRect refF = ((CGRect (*)(id, SEL))objc_msgSend)(refer, @selector(frame));
            newHead.origin.y = refF.origin.y + refF.size.height + gap;
        }
        if (fabs(newHead.origin.y - headF.origin.y) > 0.5)
            ((void (*)(id, SEL, CGRect))objc_msgSend)(head, @selector(setFrame:), newHead);
    }

    // 视觉件取移动后的头像 frame（下方模式时间标注要贴新头像位）
    headF = ((CGRect (*)(id, SEL))objc_msgSend)(head, @selector(frame));

    CGFloat bubbleTopY = 0;
    id contNow = ((id (*)(id, SEL))objc_msgSend)(bg, @selector(superview));
    if (contNow) bubbleTopY = ((CGRect (*)(id, SEL))objc_msgSend)(contNow, @selector(frame)).origin.y;

    CGRect boardF = wpApplyAabTimeLabel(cellView, vm, headF, bgF, mode);
    wpApplyAabSepLine(cellView, boardF, headF, bubbleTopY, mode);
    wpApplyAabDash(cellView, vm, headF, isSender);
    wpApplyAabGuideLine(cellView, vm, headF, isSender);
}

// 挂 CommonMessageCellView 自有 layoutSubviews（类自有方法，8.0.78 头文件 L64 实证）：
// native 在 layoutContentView 之后还有一轮容器定位（探针实证：垫片把容器挪到 63，
// 最终仍被打回 16），垫片必须挂在最后执行的 layoutSubviews 才能盖住原生坐标；
// 同时天然覆盖 Text/Image/Emoticon/AppFile 等全部消息类型（对齐 XOS 行为）
static void hook_Common_layoutSubviews(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_Common_layoutSubviews)(self, _cmd);
    wpApplyAabLayout(self);
}

static CGFloat hook_VM_rowHeight_common(id self, SEL _cmd) {
    CGFloat h = ((CGFloat (*)(id, SEL))orig_VM_rowHeight_common)(self, _cmd);
    NSInteger mode; CGFloat delta;
    if (!wpAabActive(self, &mode, &delta, NULL)) return h;
    return h + delta;
}

static CGFloat hook_VM_rowHeight_text(id self, SEL _cmd) {
    CGFloat h = ((CGFloat (*)(id, SEL))orig_VM_rowHeight_text)(self, _cmd);
    NSInteger mode; CGFloat delta;
    if (!wpAabActive(self, &mode, &delta, NULL)) return h;
    return h + delta;
}

// ============================================================
// MARK: - Install
// ============================================================

static void wpSafeHook(Class cls, SEL sel, IMP newImp, IMP *origOut, const char *label) {
    if (!cls) {
        WPLog(@"MsgMerge", @"[Hook] ✗ %s: class not found", label);
        return;
    }
    // dladdr 检查 IMP 归属：来自其他 .dylib（如 WCR）则让位不挂（项目硬规则）
    Method m = class_getInstanceMethod(cls, sel);
    if (!m) {
        WPLog(@"MsgMerge", @"[Hook] ✗ %s: method not found", label);
        return;
    }
    IMP cur = method_getImplementation(m);
    Dl_info info;
    if (dladdr((void *)cur, &info) && info.dli_fname &&
        !strstr(info.dli_fname, "WeChat") && !strstr(info.dli_fname, "Mio")) {
        WPLog(@"MsgMerge", @"[Hook] ⇢ %s: IMP from %s, yield", label, info.dli_fname);
        return;
    }
    MSHookMessageEx(cls, sel, newImp, origOut);
    WPLog(@"MsgMerge", @"[Hook] ✓ %s", label);
}

@implementation MsgMergeHook

+ (void)install {
    WPLog(@"MsgMerge", @"MsgMergeHook install (Phase1 合并本体)");

    Class baseVC = objc_getClass("BaseMsgContentViewController");
    Class vmCls  = objc_getClass("CommonMessageViewModel");

    wpSafeHook(baseVC, @selector(viewDidLoad),
               (IMP)hook_viewDidLoad, &orig_BaseVC_viewDidLoad, "BaseMsgContentViewController.viewDidLoad");
    wpSafeHook(baseVC, @selector(viewWillAppear:),
               (IMP)hook_viewWillAppear, &orig_BaseVC_viewWillAppear, "BaseMsgContentViewController.viewWillAppear:");
    wpSafeHook(baseVC, @selector(reloadTableData),
               (IMP)hook_reloadTableData, &orig_BaseVC_reloadTableData, "BaseMsgContentViewController.reloadTableData");
    wpSafeHook(vmCls, @selector(isShowHeadImage),
               (IMP)hook_isShowHeadImage, &orig_VM_isShowHeadImage, "CommonMessageViewModel.isShowHeadImage");
    wpSafeHook(vmCls, NSSelectorFromString(@"isShowChatRoomDisplayName"),
               (IMP)hook_isShowChatRoomDisplayName, &orig_VM_isShowChatRoomDisplayName,
               "CommonMessageViewModel.isShowChatRoomDisplayName");

    // Phase2 AAB 布局垫片
    Class commonCellCls = objc_getClass("CommonMessageCellView");
    Class textVmCls     = objc_getClass("TextMessageViewModel");
    wpSafeHook(commonCellCls, @selector(layoutSubviews),
               (IMP)hook_Common_layoutSubviews, &orig_Common_layoutSubviews,
               "CommonMessageCellView.layoutSubviews");
    wpSafeHook(vmCls, @selector(rowHeight),
               (IMP)hook_VM_rowHeight_common, &orig_VM_rowHeight_common,
               "CommonMessageViewModel.rowHeight");
    wpSafeHook(textVmCls, @selector(rowHeight),
               (IMP)hook_VM_rowHeight_text, &orig_VM_rowHeight_text,
               "TextMessageViewModel.rowHeight");

    WPLog(@"MsgMerge", @"MsgMergeHook install complete");
}

@end
