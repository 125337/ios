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
/// 时间标注 label（挂在 cell 上）
static char kMioAabTimeLabel;

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
    NSUInteger groupCount = 0;
    for (NSUInteger i = 0; i < n; i++) {
        id vm = arr[i];

        // 幂等重算：先清标志（含中断元素，保证关闭开关/分组变化后无残留）
        objc_setAssociatedObject(vm, &kMioMergeHidden, kCFBooleanFalse, OBJC_ASSOCIATION_RETAIN);
        objc_setAssociatedObject(vm, &kMioAabGroupHead, kCFBooleanFalse, OBJC_ASSOCIATION_RETAIN);

        if (wpIsGroupBreaker(vm)) {
            // 组被时间条/系统消息截断：给上一组首条打标
            if (groupCount > 1 && firstInGroup)
                objc_setAssociatedObject(firstInGroup, &kMioAabGroupHead, kCFBooleanTrue, OBJC_ASSOCIATION_RETAIN);
            firstInGroup = nil; groupCount = 0; prevFrom = nil;
            continue;
        }

        id wrap = ((id (*)(id, SEL))objc_msgSend)(vm, @selector(messageWrap));
        NSString *from = wrap ? ((id (*)(id, SEL))objc_msgSend)(wrap, @selector(m_nsFromUsr)) : nil;
        if (!from.length) {
            if (groupCount > 1 && firstInGroup)
                objc_setAssociatedObject(firstInGroup, &kMioAabGroupHead, kCFBooleanTrue, OBJC_ASSOCIATION_RETAIN);
            firstInGroup = nil; groupCount = 0; prevFrom = nil;
            continue;
        }

        // 与前一条同发送者 → 组内非首条（XOS：群聊内 m_nsFromUsr 相等才合并）
        if (prevFrom && [from isEqualToString:prevFrom]) {
            objc_setAssociatedObject(vm, &kMioMergeHidden, kCFBooleanTrue, OBJC_ASSOCIATION_RETAIN);
            groupCount++;
        } else {
            // 新组开始：先给上一组首条打标
            if (groupCount > 1 && firstInGroup)
                objc_setAssociatedObject(firstInGroup, &kMioAabGroupHead, kCFBooleanTrue, OBJC_ASSOCIATION_RETAIN);
            firstInGroup = vm; groupCount = 1;
        }
        prevFrom = from;
    }
    // 收尾：最后一组
    if (groupCount > 1 && firstInGroup)
        objc_setAssociatedObject(firstInGroup, &kMioAabGroupHead, kCFBooleanTrue, OBJC_ASSOCIATION_RETAIN);
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

static IMP orig_Cell_layoutContentView   = NULL;
static IMP orig_VM_rowHeight_common      = NULL;
static IMP orig_VM_rowHeight_text        = NULL;

static char kMioAabAvatarH;   // vm 上缓存实测头像高（rowHeight 先于 cell 构建，用实测值补偿）

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
    // 高度补偿 = 头像高 + 间隙 + 文字 Y 偏移（上下两个方向都占高度）
    NSNumber *cachedH = objc_getAssociatedObject(vm, &kMioAabAvatarH);
    CGFloat avatarH = cachedH.doubleValue > 1 ? cachedH.doubleValue : 42;
    if (outDelta) *outDelta = avatarH + 4 + fabs(textShift);
    return YES;
}

// ============================================================
// MARK: - Phase3 时间标注
// ============================================================

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

    NSMutableString *pattern = [NSMutableString string];
    if (datePart.length) [pattern appendFormat:@"%@ ", datePart];
    [pattern appendString:timeFmt];
    if (mode == 3) [pattern appendString:@" E"];

    fmt.dateFormat = pattern;
    return [fmt stringFromDate:date];
}

/// 组首 cell 的时间标注 label（常驻 cellView，随布局更新）
static void wpApplyAabTimeLabel(id cellView, id vm, CGRect headF, CGRect bgF, NSInteger mode) {
    MsgMergeConfig *config = [MsgMergeConfig shared];
    UILabel *label = objc_getAssociatedObject(cellView, &kMioAabTimeLabel);

    // 非组首 / 显示样式=不显示 → 隐藏并返回
    BOOL isGroupHead = [objc_getAssociatedObject(vm, &kMioAabGroupHead) boolValue];
    if (!isGroupHead || config.msgMergeTimeDisplayMode == 7) {
        if (label && !label.hidden) label.hidden = YES;
        return;
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
        return;
    }

    if (!label) {
        label = [[UILabel alloc] initWithFrame:CGRectZero];
        label.font = [UIFont systemFontOfSize:10];
        label.textAlignment = NSTextAlignmentLeft;
        objc_setAssociatedObject(cellView, &kMioAabTimeLabel, label, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [cellView addSubview:label];
    }
    label.hidden = NO;
    if (![label.text isEqualToString:text]) label.text = text;
    UIColor *color = [WPColorUtil dynamicColorFromLightHex:config.msgMergeTimeColorHex
                                                   darkHex:config.msgMergeTimeColorDarkHex];
    label.textColor = color ?: [UIColor secondaryLabelColor];

    [label sizeToFit];
    CGRect lf = label.frame;
    // 时间统一放头像旁：上方模式头像在顶 → 时间在头像右侧；下方模式 → 时间在头像上方
    if (mode == 0) {
        lf.origin = CGPointMake(headF.origin.x + headF.size.width + 6,
                                headF.origin.y + (headF.size.height - lf.size.height) / 2);
    } else {
        lf.origin = CGPointMake(headF.origin.x, headF.origin.y - lf.size.height - 2);
    }
    label.frame = lf;
}

/// 布局垫片：orig 完成原生布局后，将头像移到气泡上/下方
static void wpApplyAabLayout(id cellView) {
    id vm = nil;
    @try { vm = ((id (*)(id, SEL))objc_msgSend)(cellView, @selector(viewModel)); } @catch (NSException *e) {}
    NSInteger mode; CGFloat textShift;
    if (!wpAabActive(vm, &mode, NULL, &textShift)) return;

    id head = ((id (*)(id, SEL))objc_msgSend)(cellView, @selector(getHeadImageView));
    id bg   = ((id (*)(id, SEL))objc_msgSend)(cellView, @selector(getBgImageView));
    id name = ((id (*)(id, SEL))objc_msgSend)(cellView, @selector(getNameLabel));
    if (!head || !bg) return;

    CGRect headF = ((CGRect (*)(id, SEL))objc_msgSend)(head, @selector(frame));
    if (headF.size.height < 1) return;  // 头像尚未布局
    // 缓存实测头像高（rowHeight 垫片用）
    objc_setAssociatedObject(vm, &kMioAabAvatarH, @(headF.size.height), OBJC_ASSOCIATION_RETAIN);

    CGRect bgF = ((CGRect (*)(id, SEL))objc_msgSend)(bg, @selector(frame));
    CGFloat gap = 4;
    CGFloat delta = headF.size.height + gap + fabs(textShift);

    if (mode == 0) {
        // 上方：头像贴顶，气泡/昵称整体下移
        CGRect newHead = headF;
        newHead.origin.y = 2;
        if (fabs(newHead.origin.y - headF.origin.y) > 0.5)
            ((void (*)(id, SEL, CGRect))objc_msgSend)(head, @selector(setFrame:), newHead);
        if (fabs(delta) > 0.5) {
            if (fabs(bgF.origin.y + delta - bgF.origin.y) > 0.5) {
                bgF.origin.y += delta;
                ((void (*)(id, SEL, CGRect))objc_msgSend)(bg, @selector(setFrame:), bgF);
            }
            if (name) {
                CGRect nameF = ((CGRect (*)(id, SEL))objc_msgSend)(name, @selector(frame));
                if (fabs(nameF.origin.y + delta - nameF.origin.y) > 0.5) {
                    nameF.origin.y += delta;
                    ((void (*)(id, SEL, CGRect))objc_msgSend)(name, @selector(setFrame:), nameF);
                }
            }
        }
    } else {
        // 下方：气泡/昵称不动，头像放到气泡底
        CGRect newHead = headF;
        newHead.origin.y = bgF.origin.y + bgF.size.height + gap;
        if (fabs(newHead.origin.y - headF.origin.y) > 0.5)
            ((void (*)(id, SEL, CGRect))objc_msgSend)(head, @selector(setFrame:), newHead);
    }

    wpApplyAabTimeLabel(cellView, vm, headF, bgF, mode);
}

static void hook_Cell_layoutContentView(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_Cell_layoutContentView)(self, _cmd);
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
    Class textCellCls = objc_getClass("TextMessageCellView");
    Class textVmCls   = objc_getClass("TextMessageViewModel");
    wpSafeHook(textCellCls, NSSelectorFromString(@"layoutContentView"),
               (IMP)hook_Cell_layoutContentView, &orig_Cell_layoutContentView,
               "TextMessageCellView.layoutContentView");
    wpSafeHook(vmCls, @selector(rowHeight),
               (IMP)hook_VM_rowHeight_common, &orig_VM_rowHeight_common,
               "CommonMessageViewModel.rowHeight");
    wpSafeHook(textVmCls, @selector(rowHeight),
               (IMP)hook_VM_rowHeight_text, &orig_VM_rowHeight_text,
               "TextMessageViewModel.rowHeight");

    WPLog(@"MsgMerge", @"MsgMergeHook install complete");
}

@end
