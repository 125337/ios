#import "SettingCategoryController.h"
#import "../../Core/ConfigManager.h"
#import "../../Config/Constants.h"
#import "../../Config/WPColors.h"
#import "../../Config/WPColorPicker.h"
#import "../../Config/WPColorUtil.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <malloc/malloc.h>
#import <QuartzCore/QuartzCore.h>
#import "../../Core/LogManager.h"
#import "WPWeChatTable.h"
#import "../../Core/MioAlertHelper.h"

// 微信引擎 switch 回调 trampoline：每行独立 selector（wpSw_<key>_<hash>），共享 IMP 从 _cmd 反解行身份。
// 回调入参按反编译实证处理：响应 isOn 的对象（handleSettingEntrySwitch_ 直接 [arg isOn]）；
// 若传入的是 cellManager 则顺带取 userInfo 载荷。ABI 兜底：纯整数（BOOL 走 w 寄存器）按 p&1 处理。
static void wpWCSwitchTramp(id self, SEL _cmd, id arg) {
    @autoreleasepool {
        NSString *selName = NSStringFromSelector(_cmd);
        // 反解 "wpSw_<hash>_<原始key>"：剥前缀后去掉第一段纯数字哈希
        NSString *key = selName;
        if ([selName hasPrefix:@"wpSw_"]) {
            key = [selName substringFromIndex:5];
            NSRange r = [key rangeOfString:@"_"];
            if (r.location != NSNotFound && r.location > 0 && r.location <= 20) {
                key = [key substringFromIndex:r.location + 1];
            }
        }
        id row = nil;
        BOOL on = NO, haveOn = NO;
        if (arg) {
            uintptr_t p = (uintptr_t)arg;
            if (p <= 0x1000) {
                on = (BOOL)(p & 1);
                haveOn = YES;
            } else if (malloc_size((const void *)p) > 0) {
                if ([arg isKindOfClass:[UISwitch class]]) {
                    on = [(UISwitch *)arg isOn];
                    haveOn = YES;
                } else if ([arg respondsToSelector:@selector(isOn)]) {
                    on = (BOOL)((BOOL (*)(id, SEL))objc_msgSend)(arg, @selector(isOn));
                    haveOn = YES;
                }
                if (!haveOn || ![arg isKindOfClass:[UISwitch class]]) {
                    @try {
                        id ui = [arg valueForKey:@"userInfo"];
                        if ([ui isKindOfClass:[NSDictionary class]]) row = ui;
                    } @catch (NSException *e) {}
                    if (!row) row = objc_getAssociatedObject(arg, "wprow");
                }
            }
        }
        WPLog(@"WCTable", @"[WCSW] 回调: selKey=%@ rowKey=%@ on=%d(have=%d) arg=%@",
              key,
              ([row isKindOfClass:[NSDictionary class]] ? row[@"key"] : @"无"),
              on, haveOn, arg ? NSStringFromClass([arg class]) : @"nil");
        if ([self respondsToSelector:@selector(wpHandleSwitchKey:row:on:haveOn:)]) {
            ((void (*)(id, SEL, id, id, BOOL, BOOL))objc_msgSend)(self,
                @selector(wpHandleSwitchKey:row:on:haveOn:), key, row, on, haveOn);
        }
    }
}

static void configLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"MioPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"redenvelop.log"];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

static const CGFloat kCellHPadding = 16.0;

@interface SettingCategoryController ()
// 微信引擎状态（wcTable 非 nil = 微信渲染就绪；关键类缺失时为 nil，页面不可渲染——旧引擎已删除）
@property (nonatomic, strong) WPWeChatTable *wcTable;
@property (nonatomic, strong) WPWGroup *wcLastGroup;                 // 最近一个组（hint/footer 挂靠）
@property (nonatomic, copy) NSString *wcPendingHeader;               // addSectionHeader 暂存，建组时消费
@property (nonatomic, assign) BOOL wpBuildingSubRows;                // 手风琴展开构建中（子配置行标题加「空格+↑」前缀）
@end

// 全站唯一渲染引擎 = 微信引擎（WCR 同款）。旧 UITableView/手绘引擎已删除；
// scrollView/contentView 仅作遗留壳保留（子类清理代码对其操作为无害 no-op）。
@implementation SettingCategoryController

- (void)viewDidLoad {
    WPLog(@"Config", @"[UI] SettingCategoryController viewDidLoad");
    @try {
        [super viewDidLoad];
        self.title = self.categoryName;
        self.view.backgroundColor = WPBgColor();

        CGFloat w = [UIScreen mainScreen].bounds.size.width;
        CGFloat h = [UIScreen mainScreen].bounds.size.height;
        CGRect frame = CGRectMake(0, 0, w, h);

        // 遗留壳：不再承载任何行渲染，仅为兼容子类清理代码
        self.scrollView = [[UIScrollView alloc] initWithFrame:frame];
        self.scrollView.backgroundColor = WPBgColor();
        if (@available(iOS 13.0, *)) {
            self.scrollView.automaticallyAdjustsScrollIndicatorInsets = NO;
        }
        [self.view addSubview:self.scrollView];

        self.contentView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, w, 2000)];
        [self.scrollView addSubview:self.contentView];

        self.masterSwitchKeys = [NSMutableSet set];

        // 微信引擎：四大关键类齐全即建表接管渲染
        [self wpRebuildWeChatTable];

        WPLog(@"Config", @"[UI] SettingCategoryController viewDidLoad 完成 (微信引擎=%d)", self.wcTable != nil);
    } @catch (NSException *e) {
        WPLog(@"Config", @"[UI] SettingCategoryController viewDidLoad 异常: %@ - %@", e.name, e.reason);
    }
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    // 顶栏颜色与页面背景统一，pop 回微信页面时由 viewWillDisappear 恢复原样
    WPApplyNavAppearance(self);
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    WPRestoreNavAppearance(self);
}

#pragma mark - WeChat Engine Helpers

// 重建微信引擎表（首次进入 / 总开关切换 / 输入保存后均走这里）
- (void)wpRebuildWeChatTable {
    if (![WPWeChatTable available]) {
        WPLog(@"WCTable", @"[WCTABLE] 微信 cell 框架不可用，本页无法渲染（旧引擎已移除，无兜底）");
        return;
    }
    // 保存滚动位置：WCR reloadTableData 复用同一 manager 只 reload，UITableView 不重置
    // contentOffset；我们是整表重建（新 tableView offset 归零），需显式保存/恢复，
    // 否则滑到底部切手风琴/输入保存后整页跳回顶部
    CGPoint savedOffset = CGPointZero;
    BOOL needRestore = NO;
    if (self.wcTable.tableView) {
        savedOffset = self.wcTable.tableView.contentOffset;
        needRestore = savedOffset.y > 0.5;
    }
    [self.wcTable.containerView removeFromSuperview];
    self.wcTable = [WPWeChatTable tableForVC:self];
    if (!self.wcTable) return;
    self.wcLastGroup = nil;
    self.wcPendingHeader = nil;
    [self.view addSubview:self.wcTable.containerView];
    // 数据由后续 buildUI 同步填充，此处延迟 reload 兜底（首帧 layout 早于 buildUI 时表会空一帧）
    [self.wcTable reloadAsync];
    if (needRestore) {
        UITableView *newTV = self.wcTable.tableView;
        __weak typeof(self) wself = self;
        dispatch_async(dispatch_get_main_queue(), ^{
            __strong typeof(wself) sself = wself;
            if (!sself.wcTable || sself.wcTable.tableView != newTV) return;  // 期间又重建过
            // reloadAsync 两连刷已排在本块之前执行完；强制布局拿到真实 contentSize 后恢复
            [newTV layoutIfNeeded];
            CGFloat maxOffset = MAX(0, newTV.contentSize.height - newTV.bounds.size.height + newTV.adjustedContentInset.bottom);
            CGPoint p = savedOffset;
            p.y = MIN(p.y, maxOffset);
            if (p.y > 0.5) [newTV setContentOffset:p animated:NO];
            WPLog(@"WCTable", @"[WCTABLE] 恢复滚动位置 y=%.1f (max=%.1f)", p.y, maxOffset);
        });
    }
    WPLog(@"WCTable", @"[WCTABLE] 引擎表已重建: %@", self.wcTable.containerView);
}

// 为配置 key 注册动态 switch 回调 selector（wpSw_<hash>_<原始key>，IMP 共享 wpWCSwitchTramp）。
// 用「哈希_」前缀防碰撞，原始 key 原样进 selector（sel_registerName 接受任意非空 C 字符串），
// trampoline 反解时只剥掉第一段纯数字哈希，保证带 . _ - 的配置键原样还原。
- (SEL)wpRegisterSwitchSelectorForKey:(NSString *)key {
    NSString *name = [NSString stringWithFormat:@"wpSw_%lu_%@", (unsigned long)key.hash, key];
    SEL s = NSSelectorFromString(name);
    if (!class_getInstanceMethod([self class], s)) {
        class_addMethod([self class], s, (IMP)wpWCSwitchTramp, "v@:@");
    }
    return s;
}

// switch 回调落地：写配置；总开关 key 触发整页重建
- (void)wpHandleSwitchKey:(NSString *)key row:(id)row on:(BOOL)on haveOn:(BOOL)haveOn {
    NSString *cfgKey = key;
    if ([row isKindOfClass:[NSDictionary class]] && [row[@"key"] isKindOfClass:[NSString class]]) {
        cfgKey = row[@"key"];
    }
    if (cfgKey.length == 0) return;
    if (!haveOn) {
        // 拿不到真实开关值：按当前配置取反
        @try {
            id cur = [ConfigManager valueForKey:cfgKey];
            on = ![cur boolValue];
        } @catch (NSException *e) {
            on = YES;
        }
    }
    @try {
        [ConfigManager setValue:@(on) forKey:cfgKey];
        [ConfigManager saveAll];
    } @catch (NSException *e) {
        WPLog(@"Config", @"[WCSW] 写配置失败 key=%@ err=%@", cfgKey, e);
        return;
    }
    WPLog(@"Config", @"[WCSW] %@ = %@", cfgKey, on ? @"ON" : @"OFF");

    if ([self.masterSwitchKeys containsObject:cfgKey]) {
        // 手风琴状态 = 总开关状态：开即展开子行，关即收起（整页重建时按 isOn 决定是否构建子行）
        [self wpRebuildWeChatTable];
        [self buildUI];
    }

    // 每页钩子（如圆角页提示重启生效）
    [self wpAfterSwitchChanged:cfgKey on:on];
}

// 子类重写：微信引擎开关落地后的页级联动（旧 switchChanged: UISwitch 入口已不被微信引擎触发）
- (void)wpAfterSwitchChanged:(NSString *)key on:(BOOL)on {
}

// 微信引擎 tap 回调统一入口：入参 = cellManager（反编译实证），userInfo/wprow 载荷取行描述
- (void)wpWCTapRow:(id)arg {
    id row = nil;
    if (arg) {
        @try {
            id ui = [arg valueForKey:@"userInfo"];
            if ([ui isKindOfClass:[NSDictionary class]]) row = ui;
        } @catch (NSException *e) {}
        if (!row) row = objc_getAssociatedObject(arg, "wprow");
    }
    if (![row isKindOfClass:[NSDictionary class]]) {
        WPLog(@"WCTable", @"[WCTAP] 未识别回调载荷 arg=%@", arg ? NSStringFromClass([arg class]) : @"nil");
        return;
    }
    NSString *type = row[@"type"];
    WPLog(@"WCTable", @"[WCTAP] type=%@ key=%@", type, row[@"key"]);

    if ([type isEqualToString:@"nav"]) {
        NSString *actionStr = row[@"action"];
        if (actionStr.length == 0) return;
        SEL action = NSSelectorFromString(actionStr);
        if (![self respondsToSelector:action]) return;
        if ([actionStr hasSuffix:@":"]) {
            UIButton *dummy = [UIButton buttonWithType:UIButtonTypeCustom];
            dummy.tag = [row[@"tag"] integerValue];
            ((void (*)(id, SEL, id))objc_msgSend)(self, action, dummy);
        } else {
            ((void (*)(id, SEL))objc_msgSend)(self, action);
        }
    } else if ([type isEqualToString:@"button"]) {
        if ([self respondsToSelector:@selector(buttonClicked:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(self, @selector(buttonClicked:), row[@"key"]);
        }
    } else if ([type isEqualToString:@"input"]) {
        [self wpRunInputFlow:row];
    } else if ([type isEqualToString:@"colorTap"]) {
        // rightView 包装失败时的兜底：模拟色块按钮打开取色器
        UIButton *dummy = [UIButton buttonWithType:UIButtonTypeCustom];
        objc_setAssociatedObject(dummy, "key", row[@"key"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        if ([self respondsToSelector:@selector(colorButtonTapped:)]) {
            ((void (*)(id, SEL, id))objc_msgSend)(self, @selector(colorButtonTapped:), dummy);
        }
    } else if ([type isEqualToString:@"copy"]) {
        NSString *text = row[@"copyText"];
        if (text.length > 0) {
            [UIPasteboard generalPasteboard].string = text;
            WPShowToast([NSString stringWithFormat:@"已复制%@: %@", row[@"copyTitle"] ?: @"", text]);
        }
    } else if ([type isEqualToString:@"info"]) {
        // 纯信息行：无动作
    }
}

// 输入行流程（MioAlertHelper 直连，保存后整页重建以反显新值）
- (void)wpRunInputFlow:(NSDictionary *)row {
    NSString *key = row[@"key"];
    if (![key isKindOfClass:[NSString class]] || key.length == 0) return;
    NSString *at = row[@"alertTitle"];
    NSString *title = ([at isKindOfClass:[NSString class]] && at.length > 0) ? at : row[@"title"];
    NSString *hint = row[@"hint"];
    NSInteger valueType = [row[@"valueType"] integerValue];

    NSString *currentValue = @"";
    @try {
        id v = [ConfigManager valueForKey:key];
        if ([v isKindOfClass:[NSString class]]) currentValue = v;
        else if ([v isKindOfClass:[NSNumber class]]) currentValue = [(NSNumber *)v stringValue];
    } @catch (NSException *e) {}

    WPLog(@"WCTable", @"[WCEDIT] 打开输入弹窗 key=%@ 当前=%@", key, currentValue);
    [MioAlertHelper showInputAlert:title
                           message:(row[@"alertMessage"] ?: @"")
                       initialText:currentValue ?: @""
                       placeholder:(hint ?: @"")
                          keyboard:(valueType == InputValueTypeNumber) ? UIKeyboardTypeNumbersAndPunctuation : UIKeyboardTypeDefault
                            secure:NO
                        onConfirm:^(NSString *inputText) {
        NSString *nv = inputText ?: @"";
        if (nv.length == 0 && hint.length > 0) nv = hint;
        @try {
            if (valueType == InputValueTypeText) {
                [ConfigManager setValue:nv forKey:key];
            } else {
                [ConfigManager setValue:[NSDecimalNumber decimalNumberWithString:nv] forKey:key];
            }
            [ConfigManager saveAll];
            WPLog(@"Config", @"[WCEDIT] %@ = %@", key, nv);
        } @catch (NSException *e) {
            WPLog(@"Config", @"[WCEDIT] 保存失败 key=%@ err=%@", key, e);
            return;
        }
        // 落地验证：读回实例值，诊断 descriptor 注册/key 匹配问题
        @try {
            id back = [ConfigManager valueForKey:key];
            WPLog(@"Config", @"[WCEDIT] 验证读回 key=%@ 值=%@(%@)", key, back, NSStringFromClass([back class]));
        } @catch (NSException *e) {}
        [self wpRebuildWeChatTable];
        [self buildUI];
    }];
}

// 给 cellManager 挂行描述载荷（KVC userInfo 优先 = 微信框架官方通道，assoc 兜底）
static void wpAttachRow(id cellMgr, NSDictionary *row) {
    if (!cellMgr) return;
    objc_setAssociatedObject(cellMgr, "wprow", row, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    @try {
        [(id)cellMgr setValue:row forKey:@"userInfo"];
    } @catch (NSException *e) {
        WPLog(@"WCTable", @"[WCTABLE] userInfo KVC 失败（已用 assoc 兜底）: %@", e.name);
    }
}

#pragma mark - Group

- (UIView *)addTableGroupAtY:(CGFloat)y width:(CGFloat)w {
    // 微信引擎：返回 WPWGroup 手柄（后续 addXxxRowInGroup 逐个 addCell:）
    if (!self.wcTable) {
        WPLog(@"WCTable", @"[WCTABLE] addTableGroupAtY 失败: 微信引擎未就绪");
        return nil;
    }
    WPWGroup *g = [self.wcTable addGroup];
    if (!g) return nil;
    if (self.wcPendingHeader.length > 0) {
        [g wpSetHeader:self.wcPendingHeader footer:nil];
        self.wcPendingHeader = nil;
    }
    self.wcLastGroup = g;
    return (UIView *)g;
}

- (CGFloat)finishGroup:(UIView *)group atY:(CGFloat)y height:(CGFloat)h {
    // 微信引擎：section 已挂 manager，行高由微信自理，无布局收尾
    return y + 8;
}

#pragma mark - Section Header / Footer

- (CGFloat)addSectionHeader:(NSString *)text y:(CGFloat)y width:(CGFloat)w {
    // section 头（WCR setHeaderTitle: 同款），建组时消费
    self.wcPendingHeader = text;
    return y + 32;
}

- (CGFloat)addSectionFooter:(NSString *)text y:(CGFloat)y width:(CGFloat)w {
    // 组 footer（WCR setFooterTitle: 同款），挂最近一个组
    [self.wcLastGroup wpSetHeader:nil footer:text];
    return y + 20;
}

#pragma mark - Row: Nav

- (CGFloat)addNavRowInGroup:(UIView *)group title:(NSString *)title subtitle:(NSString *)subtitle tag:(NSInteger)tag action:(SEL)action cy:(CGFloat)cy width:(CGFloat)w {
    WPWGroup *g = (WPWGroup *)group;
    if (![g isKindOfClass:[WPWGroup class]]) return cy;
    NSDictionary *row = @{@"type": @"nav",
                          @"title": title ?: @"",
                          @"tag": @(tag),
                          @"action": NSStringFromSelector(action)};
    id cell = WPWCNavCell(@selector(wpWCTapRow:), self, [self wpSubTitle:title], subtitle);
    if (cell) {
        wpAttachRow(cell, row);
        [g addCell:cell];
        return cy + kRowH;
    }
    WPLog(@"WCTable", @"[WCTABLE] navCell 构造失败，该行缺失: %@", title);
    return cy + kRowH;
}

#pragma mark - Row: Switch

- (CGFloat)addSwitchRowInGroup:(UIView *)group title:(NSString *)title desc:(NSString *)desc key:(NSString *)key isOn:(BOOL)on cy:(CGFloat)cy width:(CGFloat)w {
    WPWGroup *g = (WPWGroup *)group;
    if (![g isKindOfClass:[WPWGroup class]]) return cy;
    NSDictionary *row = @{@"type": @"switch",
                          @"title": title ?: @"",
                          @"key": key ?: @""};
    id cell = WPWCSwitchCell([self wpRegisterSwitchSelectorForKey:key], self, [self wpSubTitle:title], on);
    if (cell) {
        wpAttachRow(cell, row);
        [g addCell:cell];
    } else {
        WPLog(@"WCTable", @"[WCTABLE] switchCell 构造失败，该行缺失: %@", title);
    }
    return cy + kRowH;
}

#pragma mark - Row: Sub-Switch

- (CGFloat)addSubSwitchRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key isOn:(BOOL)on cy:(CGFloat)cy width:(CGFloat)w {
    // 子开关行 = switchCell（WCR 同款无前置小箭头，层级由缩进语义弱化）
    return [self addSwitchRowInGroup:group title:title desc:nil key:key isOn:on cy:cy width:w];
}

#pragma mark - Row: Info（只读信息/复制行）

- (CGFloat)addInfoRowInGroup:(UIView *)group title:(NSString *)title rightValue:(NSString *)value copyText:(NSString *)copyText cy:(CGFloat)cy width:(CGFloat)w {
    WPWGroup *g = (WPWGroup *)group;
    if (![g isKindOfClass:[WPWGroup class]]) return cy;
    NSDictionary *row = @{@"type": (copyText.length > 0 ? @"copy" : @"info"),
                          @"title": title ?: @"",
                          @"copyText": copyText ?: @"",
                          @"copyTitle": title ?: @""};
    id cell = WPWCNavCell(@selector(wpWCTapRow:), self, [self wpSubTitle:title], value);
    if (cell) {
        wpAttachRow(cell, row);
        [g addCell:cell];
    } else {
        WPLog(@"WCTable", @"[WCTABLE] infoCell 构造失败，该行缺失: %@", title);
    }
    return cy + kRowH;
}

#pragma mark - Row: Input

- (CGFloat)addInputRowInGroup:(UIView *)group
                        title:(NSString *)title
                          key:(NSString *)key
                        value:(NSString *)value
                         hint:(NSString *)hint
                    valueType:(InputValueType)valueType
                           cy:(CGFloat)cy
                        width:(CGFloat)w
{
    return [self addInputRowInGroup:group title:title key:key value:value
                               hint:hint valueType:valueType
                         alertTitle:nil alertMessage:nil cy:cy width:w];
}

- (CGFloat)addInputRowInGroup:(UIView *)group
                        title:(NSString *)title
                          key:(NSString *)key
                        value:(NSString *)value
                         hint:(NSString *)hint
                    valueType:(InputValueType)valueType
                   alertTitle:(NSString *)alertTitle
                 alertMessage:(NSString *)alertMessage
                           cy:(CGFloat)cy
                        width:(CGFloat)w
{
    // NavCell（右值 = 当前值/占位提示），点击走 wpRunInputFlow
    WPWGroup *g = (WPWGroup *)group;
    if (![g isKindOfClass:[WPWGroup class]]) return cy;
    NSMutableDictionary *row = [NSMutableDictionary dictionary];
    row[@"type"] = @"input";
    row[@"title"] = title ?: @"";
    row[@"key"] = key ?: @"";
    row[@"valueType"] = @(valueType);
    if (hint.length > 0) row[@"hint"] = hint;
    if (alertTitle.length > 0) row[@"alertTitle"] = alertTitle;
    if (alertMessage.length > 0) row[@"alertMessage"] = alertMessage;
    id cell = WPWCNavCell(@selector(wpWCTapRow:), self, [self wpSubTitle:title], (value.length > 0) ? value : hint);
    if (cell) {
        wpAttachRow(cell, row);
        [g addCell:cell];
    } else {
        WPLog(@"WCTable", @"[WCTABLE] inputCell 构造失败，该行缺失: %@", title);
    }
    return cy + kRowH;
}

#pragma mark - Row: Hint

- (CGFloat)addHintRowInGroup:(UIView *)group text:(NSString *)text cy:(CGFloat)cy width:(CGFloat)w {
    // 提示行 → 组 footer（微信原生小灰字，WCR 同款）
    if ([group isKindOfClass:[WPWGroup class]]) {
        [(WPWGroup *)group wpSetHeader:nil footer:text];
    }
    return cy + 20;
}

#pragma mark - Row: Button

- (CGFloat)addButtonRowInGroup:(UIView *)group title:(NSString *)title hint:(NSString *)hint key:(NSString *)key cy:(CGFloat)cy width:(CGFloat)w {
    WPWGroup *g = (WPWGroup *)group;
    if (![g isKindOfClass:[WPWGroup class]]) return cy;
    NSDictionary *row = @{@"type": @"button",
                          @"title": title ?: @"",
                          @"key": key ?: @""};
    id cell = WPWCNavCell(@selector(wpWCTapRow:), self, [self wpSubTitle:title], hint);
    if (cell) {
        wpAttachRow(cell, row);
        [g addCell:cell];
    } else {
        WPLog(@"WCTable", @"[WCTABLE] buttonCell 构造失败，该行缺失: %@", title);
    }
    return cy + kRowH;
}

#pragma mark - Row: Sub-Section Label

- (CGFloat)addSubSectionLabelInGroup:(UIView *)group text:(NSString *)text cy:(CGFloat)cy width:(CGFloat)w {
    // 组内小标题暂无对应 API，跳过（纯装饰；后续可用独立 section header 精化）
    WPLog(@"WCTable", @"[WCTABLE] subLabel 行已跳过（微信引擎暂不支持组内小标题）: %@", text);
    return cy;
}

#pragma mark - Row: Color

- (CGFloat)addColorRowInGroup:(UIView *)group
                        title:(NSString *)title
                          key:(NSString *)key
                        value:(NSString *)value
                           cy:(CGFloat)cy
                        width:(CGFloat)w
                     darkKey:(NSString *)darkKey
                   darkValue:(NSString *)darkValue {
    // WCR 同款（addColorCellToSection 反编译实证）：title 传给微信原生 label 渲染，
    // rightView 只挂小色块预览容器。禁止整行自绘——整宽 rightView 会被微信
    // 布局算法按 width 定位（x=cellW-width-margin 变负值），文字被推出左边界。
    WPWGroup *g = (WPWGroup *)group;
    if (![g isKindOfClass:[WPWGroup class]]) return cy;

    BOOL dual = (darkKey != nil);
    CGFloat cvW = dual ? 58 : 34;
    UIView *cv = [[UIView alloc] initWithFrame:CGRectMake(0, 0, cvW, kRowH)];
    cv.backgroundColor = [UIColor clearColor];

    if (!dual) {
        UIColor *color = [WPColorUtil colorFromHexString:value] ?: [UIColor grayColor];
        UIButton *btn = [WPColorPicker makeColorButtonWithColor:color size:30];
        btn.frame = CGRectMake(2, (kRowH - 30) / 2, 30, 30);
        objc_setAssociatedObject(btn, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [btn addTarget:self action:@selector(colorButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
        [cv addSubview:btn];
    } else {
        CGFloat btnSize = 24;
        UIColor *darkColor = [[WPColorUtil class] colorFromHexString:darkValue] ?: [UIColor darkGrayColor];
        UIButton *darkBtn = [WPColorPicker makeColorButtonWithColor:darkColor size:btnSize];
        darkBtn.frame = CGRectMake(cvW - 4 - btnSize, (kRowH - btnSize) / 2, btnSize, btnSize);
        objc_setAssociatedObject(darkBtn, "key", darkKey, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [darkBtn addTarget:self action:@selector(colorButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
        [cv addSubview:darkBtn];

        UIColor *lightColor = [[WPColorUtil class] colorFromHexString:value] ?: [UIColor whiteColor];
        UIButton *lightBtn = [WPColorPicker makeColorButtonWithColor:lightColor size:btnSize];
        lightBtn.frame = CGRectMake(darkBtn.frame.origin.x - 6 - btnSize, darkBtn.frame.origin.y, btnSize, btnSize);
        objc_setAssociatedObject(lightBtn, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [lightBtn addTarget:self action:@selector(colorButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
        [cv addSubview:lightBtn];
    }

    id cell = WPWCViewCell((SEL)0, self, [self wpSubTitle:title], cv);
    if (cell) {
        [g addCell:cell];
        return cy + kRowH;
    }
    // 兜底：rightView 包装不可用 → NavCell + colorTap 行（右值显示当前色值）
    WPLog(@"WCTable", @"[WCTABLE] viewCell 不可用，颜色行走 NavCell 兜底: %@", title);
    NSDictionary *row = @{@"type": @"colorTap",
                          @"title": title ?: @"",
                          @"key": key ?: @""};
    id fb = WPWCNavCell(@selector(wpWCTapRow:), self, [self wpSubTitle:title], value);
    if (fb) {
        wpAttachRow(fb, row);
        [g addCell:fb];
    }
    return cy + kRowH;
}

#pragma mark - Separator

- (CGFloat)addSeparatorInGroup:(UIView *)group cy:(CGFloat)cy width:(CGFloat)w {
    // 微信引擎 cell 自带原生分隔线，no-op
    return cy;
}

#pragma mark - Master Switch（手风琴：状态 = 总开关状态）

// 手风琴展开期间构建的行 = 子配置：标题统一加「空格+↑」前缀（视觉归属上方的总开关）。
// row 载荷里存原始标题（弹窗标题/日志不受前缀影响），仅 cell 显示串加前缀。
- (NSString *)wpSubTitle:(NSString *)title {
    if (!self.wpBuildingSubRows) return title;
    NSString *t = title ?: @"";
    if (t.length == 0 || [t hasPrefix:@"↑"] || [t hasPrefix:@" ↑"]) return t; // 防重复前缀
    return [@" ↑" stringByAppendingString:t];
}

- (CGFloat)addMasterSwitchRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key isOn:(BOOL)on subBuilder:(void (^)(UIView *expand, CGFloat *ecy))subBuilder cy:(CGFloat)cy width:(CGFloat)w {
    [self.masterSwitchKeys addObject:key];
    WPLog(@"Config", @"[MASTER] 注册 masterSwitchKey=%@, isOn=%d, masterKeys当前=%@", key, on, self.masterSwitchKeys);

    CGFloat resultCy = [self addSwitchRowInGroup:group title:title desc:nil key:key isOn:on cy:cy width:w];

    // 开即展开、关即收起：无独立「展开/收起」触发行，总开关为唯一入口。
    // 展开期间置 wpBuildingSubRows（保存/恢复以支持嵌套手风琴，如防撤回页子开关）
    BOOL prevSub = self.wpBuildingSubRows;
    self.wpBuildingSubRows = YES;
    if (on && subBuilder && [group isKindOfClass:[WPWGroup class]]) {
        CGFloat ecy = 0;
        subBuilder(group, &ecy);
        resultCy = cy + kRowH + ecy;
        WPLog(@"Config", @"[MASTER] 手风琴已展开: key=%@, ecy=%.1f", key, ecy);
    }
    self.wpBuildingSubRows = prevSub;

    return resultCy;
}

#pragma mark - Switch Changed（遗留 UISwitch 入口，微信引擎不触发；保留供子类重写链）

- (void)switchChanged:(UISwitch *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) return;

    @try {
        [ConfigManager setValue:@(sender.on) forKey:key];
        [ConfigManager saveAll];
    } @catch (NSException *e) {
        WPLog(@"Config", @"[SWITCH] 配置保存异常: %@ - %@", e.name, e.reason);
        return;
    }

    if ([self.masterSwitchKeys containsObject:key]) {
        [self.view endEditing:YES];
        [self wpRebuildWeChatTable];
        [self buildUI];
    }
}

/// Light ↔ Dark 颜色 key 配对表
/// key = light 侧属性名, value = dark 侧属性名
static NSDictionary *ColorPairMap(void) {
    static NSDictionary *map;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        map = @{
            // SettingListCornerRadiusController
            @"listCellLightBgColor": @"listCellDarkBgColor",

            // SettingListCornerRadiusController (新增暗色支持)
            @"listCellBorderColor": @"listCellBorderColorDarkHex",

            // SettingCardBackgroundController
            @"cardBgCornerBgColor": @"cardBgCornerDarkBgColor",
            @"cardBgBorderColor": @"cardBgBorderColorDarkHex",

            // SettingMessageTimeController (发送方)
            @"senderTextColorHex": @"senderTextColorDarkHex",

            // SettingMessageTimeController (接收方)
            @"receiverTextColorHex": @"receiverTextColorDarkHex",
        };
    });
    return map;
}

/// Dark → Light 反向映射
static NSString *LightKeyForDarkKey(NSString *darkKey) {
    __block NSString *result = nil;
    [ColorPairMap() enumerateKeysAndObjectsUsingBlock:^(NSString *light, NSString *dark, BOOL *stop) {
        if ([dark isEqualToString:darkKey]) {
            result = light;
            *stop = YES;
        }
    }];
    return result;
}

- (void)colorButtonTapped:(UIButton *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) return;

    UIColor *currentColor = sender.backgroundColor ?: [UIColor grayColor];

    // ─── 判断是否有配对 ───
    NSString *lightKey = nil, *darkKey = nil;
    NSString *pairedDark = ColorPairMap()[key];
    if (pairedDark) {
        // 当前 key 是 light 侧
        lightKey = key;
        darkKey = pairedDark;
    } else {
        // 检查当前 key 是否是 dark 侧
        NSString *pairedLight = LightKeyForDarkKey(key);
        if (pairedLight) {
            lightKey = pairedLight;
            darkKey = key;
        }
    }

    // ★ 统一用双模式入口
    // 无配对时 lightKey=nil, darkKey=nil, 内部自动走单色模式
    NSString *lightHex = lightKey ? [ConfigManager valueForKey:lightKey] : [WPColorUtil hexStringFromColor:currentColor];
    NSString *darkHex  = darkKey  ? [ConfigManager valueForKey:darkKey]  : nil;
    BOOL activeIsLight = lightKey ? [key isEqualToString:lightKey] : YES;

    [WPColorPicker presentCustomPickerOnViewController:self
                                              lightHex:lightHex
                                               darkHex:darkHex
                                         activeIsLight:activeIsLight
                                          sourceButton:sender
                                            onSelected:^(NSString *lHex, NSString *dHex) {
        if (lightKey) {
            [ConfigManager setValue:lHex forKey:lightKey];
        } else {
            // 单色 → 用 valueForKey: 直接设
            [ConfigManager setValue:dHex forKey:key];
        }
        if (darkKey)  [ConfigManager setValue:dHex forKey:darkKey];
        [ConfigManager saveAll];
    }];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self.view endEditing:YES];
}

- (void)buildUI {
    WPLog(@"Config", @"[BUILD] buildUI 调用! self=%@, 注意: 基类空实现, 子类应重写", self);
}

- (void)buttonClicked:(NSString *)key {
}

@end
