#import "SettingCategoryController.h"
#import "WPBorderLayer.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/Constants.h"
#import "../../Config/WPColors.h"
#import "../../Config/WPColorPicker.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import <objc/runtime.h>
#import <QuartzCore/QuartzCore.h>
#import "../../Core/LogManager.h"

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
static char kExpandedAssociationKey;
static char kTableRowsKey;

static NSString * const kCellSwitch   = @"sw";
static NSString * const kCellSubSwitch = @"ss";
static NSString * const kCellNav      = @"nv";
static NSString * const kCellButton   = @"bt";
static NSString * const kCellColor    = @"cl";
static NSString * const kCellHint     = @"ht";
static NSString * const kCellInput    = @"in";
static NSString * const kCellSubLabel = @"sl";

static NSMutableArray *rowsForTable(UITableView *table) {
    NSMutableArray *rows = objc_getAssociatedObject(table, &kTableRowsKey);
    if (!rows) {
        rows = [NSMutableArray array];
        objc_setAssociatedObject(table, &kTableRowsKey, rows, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return rows;
}

@implementation UIView (ExpandHelper)

- (void)setIsExpanded:(BOOL)isExpanded {
    objc_setAssociatedObject(self, &kExpandedAssociationKey, @(isExpanded), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (BOOL)isExpanded {
    return [objc_getAssociatedObject(self, &kExpandedAssociationKey) boolValue];
}

- (void)setExpanded:(BOOL)expanded animated:(BOOL)animated {
    [self setIsExpanded:expanded];
    void (^changes)(void) = ^{
        self.hidden = !expanded;
        self.alpha = expanded ? 1.0 : 0.0;
    };
    if (animated) {
        [UIView animateWithDuration:0.35
                              delay:0
                            options:(UIViewAnimationOptionCurveEaseInOut | UIViewAnimationOptionAllowAnimatedContent)
                         animations:changes
                         completion:nil];
    } else {
        changes();
    }
}

@end

@interface SettingCategoryController () <UITableViewDelegate, UITableViewDataSource>
@end

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

        self.scrollView = [[UIScrollView alloc] initWithFrame:frame];
        self.scrollView.backgroundColor = WPBgColor();
        if (@available(iOS 13.0, *)) {
            self.scrollView.automaticallyAdjustsScrollIndicatorInsets = NO;
        }
        [self.view addSubview:self.scrollView];

        self.contentView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, w, 2000)];
        [self.scrollView addSubview:self.contentView];

        self.masterSwitchKeys = [NSMutableSet set];
        WPLog(@"Config", @"[UI] SettingCategoryController viewDidLoad 完成");
    } @catch (NSException *e) {
        WPLog(@"Config", @"[UI] SettingCategoryController viewDidLoad 异常: %@ - %@", e.name, e.reason);
    }
}

#pragma mark - Group (UITableView)

- (UIView *)addTableGroupAtY:(CGFloat)y width:(CGFloat)w {
    CGFloat cardW = w - kPad * 2;
    UITableView *table = [[UITableView alloc] initWithFrame:CGRectMake(kPad, y, cardW, 0)
                                                      style:UITableViewStylePlain];
    table.backgroundColor = WPCardBg();
    table.scrollEnabled = NO;
    table.rowHeight = kRowH;
    table.estimatedRowHeight = kRowH;
    table.separatorInset = UIEdgeInsetsMake(0, kCellHPadding, 0, 0);
    table.separatorColor = WPSepColor();
    table.separatorStyle = UITableViewCellSeparatorStyleSingleLine;
    table.layer.cornerRadius = kRadius;
    table.layer.masksToBounds = YES;
    table.tableFooterView = [[UIView alloc] initWithFrame:CGRectZero];
    table.delegate = self;
    table.dataSource = self;
    rowsForTable(table);
    [self.contentView addSubview:table];
    return table;
}

- (CGFloat)finishGroup:(UIView *)group atY:(CGFloat)y height:(CGFloat)h {
    if ([group isKindOfClass:[UITableView class]]) {
        UITableView *table = (UITableView *)group;
        NSInteger rowCount = rowsForTable(table).count;
        CGFloat tableHeight = rowCount * kRowH;
        CGRect f = table.frame;
        f.size.height = tableHeight;
        table.frame = f;
        [table reloadData];
        return y + tableHeight + 8;
    }
    CGRect f = group.frame;
    f.size.height = h;
    group.frame = f;
    return y + h + 8;
}

#pragma mark - Section Header / Footer

- (CGFloat)addSectionHeader:(NSString *)text y:(CGFloat)y width:(CGFloat)w {
    UILabel *l = WPMakeSectionHeader(text, y, w);
    l.text = text.uppercaseString;
    CGRect f = l.frame;
    f.origin.x = kPad;
    f.size.width = w - kPad * 2;
    l.frame = f;
    [self.contentView addSubview:l];
    return y + 32;
}

- (CGFloat)addSectionFooter:(NSString *)text y:(CGFloat)y width:(CGFloat)w {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 0)];
    l.text = text;
    l.font = [UIFont systemFontOfSize:12];
    l.textColor = WPT3();
    l.numberOfLines = 0;
    [l sizeToFit];
    [self.contentView addSubview:l];
    return y + l.frame.size.height + 6;
}

#pragma mark - Row: Nav

- (CGFloat)addNavRowInGroup:(UIView *)group title:(NSString *)title subtitle:(NSString *)subtitle tag:(NSInteger)tag action:(SEL)action cy:(CGFloat)cy width:(CGFloat)w {
    if ([group isKindOfClass:[UITableView class]]) {
        UITableView *table = (UITableView *)group;
        NSMutableDictionary *row = [NSMutableDictionary dictionary];
        row[@"type"] = @"nav";
        row[@"title"] = title;
        row[@"tag"] = @(tag);
        row[@"action"] = NSStringFromSelector(action);
        if (subtitle.length > 0) row[@"subtitle"] = subtitle;
        [rowsForTable(table) addObject:row];
        return cy + kRowH;
    }

    CGFloat gw = w - kPad * 2;
    BOOL hasSubtitle = subtitle.length > 0;
    CGFloat titleY = hasSubtitle ? cy + 4 : cy;
    CGFloat titleH = hasSubtitle ? 18 : kRowH;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, titleY, gw - kCellHPadding * 2 - 20, titleH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [group addSubview:tl];

    if (hasSubtitle) {
        UILabel *dl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 22, gw - kCellHPadding * 2 - 20, 14)];
        dl.text = subtitle;
        dl.font = [UIFont systemFontOfSize:12];
        dl.textColor = WPT2();
        [group addSubview:dl];
    }

    WPDrawDisclosureArrow(group, cy, gw, kCellHPadding);

    UIButton *btn = [[UIButton alloc] initWithFrame:CGRectMake(0, cy, gw, kRowH)];
    btn.tag = tag;
    [btn addTarget:self action:action forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:btn];
    return cy + kRowH;
}

#pragma mark - Row: Switch

- (CGFloat)addSwitchRowInGroup:(UIView *)group title:(NSString *)title desc:(NSString *)desc key:(NSString *)key isOn:(BOOL)on cy:(CGFloat)cy width:(CGFloat)w {
    if ([group isKindOfClass:[UITableView class]]) {
        UITableView *table = (UITableView *)group;
        NSMutableDictionary *row = [NSMutableDictionary dictionary];
        row[@"type"] = @"switch";
        row[@"title"] = title;
        row[@"key"] = key;
        row[@"isOn"] = @(on);
        if (desc.length > 0) row[@"desc"] = desc;
        [rowsForTable(table) addObject:row];
        WPLog(@"Config", @"[SWITCH] 添加 cell: key=%@, isOn=%d", key, on);
        return cy + kRowH;
    }

    CGFloat gw = w - kPad * 2;
    CGFloat textW = gw - kCellHPadding * 2 - 70;

    CGFloat titleY = desc.length > 0 ? cy + 4 : cy + (kRowH - 18) / 2;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, titleY, textW, 18)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [group addSubview:tl];

    if (desc.length > 0) {
        UILabel *dl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 22, textW, 14)];
        dl.text = desc;
        dl.font = [UIFont systemFontOfSize:12];
        dl.textColor = WPT2();
        [group addSubview:dl];
    }

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = on;
    sw.onTintColor = WPSwOn();
    sw.frame = CGRectMake(gw - kCellHPadding - 51, cy + (kRowH - 31) / 2, 51, 31);
    objc_setAssociatedObject(sw, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [sw addTarget:self action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
    [group addSubview:sw];
    WPLog(@"Config", @"[SWITCH] 创建 switch: key=%@, isOn=%d, target=%@, action=switchChanged:", key, on, self);
    return cy + kRowH;
}

#pragma mark - Row: Sub-Switch

- (CGFloat)addSubSwitchRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key isOn:(BOOL)on cy:(CGFloat)cy width:(CGFloat)w {
    if ([group isKindOfClass:[UITableView class]]) {
        UITableView *table = (UITableView *)group;
        NSMutableDictionary *row = [NSMutableDictionary dictionary];
        row[@"type"] = @"subSwitch";
        row[@"title"] = title;
        row[@"key"] = key;
        row[@"isOn"] = @(on);
        [rowsForTable(table) addObject:row];
        return cy + kRowH;
    }

    CGFloat gw = w - kPad * 2;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy, gw - kCellHPadding * 2 - 70, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [group addSubview:tl];

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = on;
    sw.onTintColor = WPSwOn();
    sw.frame = CGRectMake(gw - kCellHPadding - 51, cy + (kRowH - 31) / 2, 51, 31);
    objc_setAssociatedObject(sw, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [sw addTarget:self action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
    [group addSubview:sw];
    return cy + kRowH;
}

#pragma mark - Row: Input

- (CGFloat)addInputRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key value:(NSString *)value hint:(NSString *)hint cy:(CGFloat)cy width:(CGFloat)w {
    if ([group isKindOfClass:[UITableView class]]) {
        UITableView *table = (UITableView *)group;
        NSMutableDictionary *row = [NSMutableDictionary dictionary];
        row[@"type"] = @"input";
        row[@"title"] = title;
        row[@"key"] = key;
        if (value.length > 0) row[@"value"] = value;
        if (hint.length > 0) row[@"hint"] = hint;
        [rowsForTable(table) addObject:row];
        return cy + kRowH;
    }

    Class handlerClass = objc_getClass("MioPluginSwitchHandler");
    id handler = [handlerClass performSelector:@selector(sharedInstance)];
    NSString *displayValue = (value && value.length > 0) ? value : hint;
    UIButton *row = WPAddEditableRowWithArrow(group, cy, w, title, displayValue, handler);
    objc_setAssociatedObject(row, "editConfigKey", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (hint) objc_setAssociatedObject(row, "editConfigHint", hint, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return cy + kRowH;
}

#pragma mark - Row: Hint

- (CGFloat)addHintRowInGroup:(UIView *)group text:(NSString *)text cy:(CGFloat)cy width:(CGFloat)w {
    if ([group isKindOfClass:[UITableView class]]) {
        UITableView *table = (UITableView *)group;
        NSMutableDictionary *row = [NSMutableDictionary dictionary];
        row[@"type"] = @"hint";
        row[@"text"] = text;
        [rowsForTable(table) addObject:row];
        return cy + 20;
    }

    CGFloat gw = w - kPad * 2;
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy, gw - kCellHPadding * 2, 16)];
    l.text = text;
    l.font = [UIFont systemFontOfSize:12];
    l.textColor = WPT3();
    [group addSubview:l];
    return cy + 20;
}

#pragma mark - Row: Button

- (CGFloat)addButtonRowInGroup:(UIView *)group title:(NSString *)title hint:(NSString *)hint key:(NSString *)key cy:(CGFloat)cy width:(CGFloat)w {
    if ([group isKindOfClass:[UITableView class]]) {
        UITableView *table = (UITableView *)group;
        NSMutableDictionary *row = [NSMutableDictionary dictionary];
        row[@"type"] = @"button";
        row[@"title"] = title;
        row[@"key"] = key;
        if (hint.length > 0) row[@"hint"] = hint;
        [rowsForTable(table) addObject:row];
        return cy + kRowH;
    }

    CGFloat gw = w - kPad * 2;

    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 4, gw - kCellHPadding * 2 - 20, 18)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [group addSubview:tl];

    UILabel *hl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 22, gw - kCellHPadding * 2 - 20, 14)];
    hl.text = hint;
    hl.font = [UIFont systemFontOfSize:12];
    hl.textColor = WPT2();
    [group addSubview:hl];

    WPDrawDisclosureArrow(group, cy, gw, kCellHPadding);

    UIButton *btn = [[UIButton alloc] initWithFrame:CGRectMake(0, cy, gw, kRowH)];
    objc_setAssociatedObject(btn, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [btn addTarget:self action:@selector(buttonTapped:) forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:btn];

    return cy + kRowH;
}

- (void)buttonTapped:(UIButton *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    WPLog(@"Config", @"[BUTTON] buttonTapped called, key=%@, self=%@, respondsToSelector=%d", key, self, [self respondsToSelector:@selector(buttonClicked:)]);
    if (key && [self respondsToSelector:@selector(buttonClicked:)]) {
        WPLog(@"Config", @"[BUTTON] calling buttonClicked: with key=%@", key);
        [self performSelector:@selector(buttonClicked:) withObject:key];
        WPLog(@"Config", @"[BUTTON] buttonClicked: returned");
    }
}

#pragma mark - Row: Sub-Section Label

- (CGFloat)addSubSectionLabelInGroup:(UIView *)group text:(NSString *)text cy:(CGFloat)cy width:(CGFloat)w {
    if ([group isKindOfClass:[UITableView class]]) {
        UITableView *table = (UITableView *)group;
        NSMutableDictionary *row = [NSMutableDictionary dictionary];
        row[@"type"] = @"subLabel";
        row[@"text"] = text;
        [rowsForTable(table) addObject:row];
        return cy + 24;
    }

    CGFloat gw = w - kPad * 2;
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy, gw - kCellHPadding * 2, 16)];
    l.text = text.uppercaseString;
    l.font = [UIFont systemFontOfSize:11 weight:UIFontWeightSemibold];
    l.textColor = WPT2();
    [group addSubview:l];
    return cy + 24;
}

#pragma mark - Row: Color

- (CGFloat)addColorRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key value:(NSString *)value cy:(CGFloat)cy width:(CGFloat)w {
    if ([group isKindOfClass:[UITableView class]]) {
        UITableView *table = (UITableView *)group;
        NSMutableDictionary *row = [NSMutableDictionary dictionary];
        row[@"type"] = @"color";
        row[@"title"] = title;
        row[@"key"] = key;
        if (value.length > 0) row[@"value"] = value;
        [rowsForTable(table) addObject:row];
        return cy + kRowH;
    }

    CGFloat gw = w - kPad * 2;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 4, gw - kCellHPadding - 56, kRowH - 8)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [group addSubview:tl];

    UIColor *currentColor = [[PluginConfig shared] colorFromHex:value] ?: [UIColor grayColor];

    UIButton *btn = [WPColorPicker makeColorButtonWithColor:currentColor];
    btn.frame = CGRectMake(gw - kCellHPadding - 36, cy + (kRowH - 30) / 2, 30, 30);
    objc_setAssociatedObject(btn, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [btn addTarget:self action:@selector(colorButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:btn];
    return cy + kRowH;
}

#pragma mark - Separator (no-op for UITableView, native handles it)

- (CGFloat)addSeparatorInGroup:(UIView *)group cy:(CGFloat)cy width:(CGFloat)w {
    if ([group isKindOfClass:[UITableView class]]) {
        return cy;
    }

    CGFloat gw = w - kPad * 2;
    CGFloat scale = [UIScreen mainScreen].scale;
    CGFloat pixelY = round(cy * scale) / scale;
    CGFloat onePixel = 1.0 / scale;
    UIView *sepView = [[UIView alloc] initWithFrame:CGRectMake(kCellHPadding, pixelY, gw - kCellHPadding, onePixel)];
    sepView.backgroundColor = WPSepColor();
    [group addSubview:sepView];
    return cy + onePixel;
}

#pragma mark - Expand Container (deprecated for UITableView — sub-rows are cells)

- (UIView *)addExpandContainerInGroup:(UIView *)group cy:(CGFloat)cy width:(CGFloat)w {
    if ([group isKindOfClass:[UITableView class]]) {
        return group;
    }
    CGFloat gw = w - kPad * 2;
    UIView *container = [[UIView alloc] initWithFrame:CGRectMake(0, cy, gw, 0)];
    container.backgroundColor = WPCardBg();
    [container setExpanded:YES animated:NO];
    [group addSubview:container];
    return container;
}

- (CGFloat)finishExpandContainer:(UIView *)container currentCy:(CGFloat)cy {
    if ([container isKindOfClass:[UITableView class]]) {
        return cy;
    }
    CGRect f = container.frame;
    f.size.height = cy;
    container.frame = f;
    return f.origin.y + f.size.height;
}

#pragma mark - Master Switch

- (CGFloat)addMasterSwitchRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key isOn:(BOOL)on subBuilder:(void (^)(UIView *expand, CGFloat *ecy))subBuilder cy:(CGFloat)cy width:(CGFloat)w {
    [self.masterSwitchKeys addObject:key];
    WPLog(@"Config", @"[MASTER] 注册 masterSwitchKey=%@, isOn=%d, masterKeys当前=%@", key, on, self.masterSwitchKeys);

    CGFloat resultCy = [self addSwitchRowInGroup:group title:title desc:nil key:key isOn:on cy:cy width:w];

    if (on && subBuilder) {
        if ([group isKindOfClass:[UITableView class]]) {
            CGFloat ecy = 0;
            subBuilder(group, &ecy);
            resultCy = cy + kRowH + ecy;
            WPLog(@"Config", @"[MASTER] 子功能已展开 (UITableView): key=%@, ecy=%.1f, resultCy=%.1f", key, ecy, resultCy);
        } else {
            UIView *expand = [self addExpandContainerInGroup:group cy:resultCy width:w];
            CGFloat ecy = 0;
            subBuilder(expand, &ecy);
            resultCy = [self finishExpandContainer:expand currentCy:ecy];
            WPLog(@"Config", @"[MASTER] 子功能已展开: key=%@, ecy=%.1f, resultCy=%.1f", key, ecy, resultCy);
        }
    } else {
        WPLog(@"Config", @"[MASTER] 子功能未展开: key=%@, on=%d, hasBuilder=%d", key, on, subBuilder != nil);
    }

    return resultCy;
}

#pragma mark - Switch Changed

- (void)switchChanged:(UISwitch *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    WPLog(@"Config", @"[SWITCH] switchChanged 触发! key=%@, isOn=%d, sender=%@", key, sender.on, sender);
    if (!key) {
        WPLog(@"Config", @"[SWITCH] key 为空! 无法处理");
        return;
    }

    PluginConfig *config = [PluginConfig shared];
    @try {
        WPLog(@"Config", @"[SAVE] Saving config: key=%@, value=%@", key, sender.on ? @"YES" : @"NO");
        [config setValue:@(sender.on) forKey:key];
        WPLog(@"Config", @"[OK] Config value after KVC: %d", sender.on);
    } @catch (NSException *e) {
        WPLog(@"Config", @"[WARN] Config save exception: %@ - %@", e.name, e.reason);
        return;
    }
    [config save];
    WPLog(@"Config", @"[OK] Config saved successfully for key: %@", key);

    for (UIView *sv in self.contentView.subviews) {
        if ([sv isKindOfClass:[UITableView class]]) {
            NSMutableArray *rows = rowsForTable((UITableView *)sv);
            for (NSMutableDictionary *row in rows) {
                if ([row[@"key"] isEqualToString:key]) {
                    row[@"isOn"] = @(sender.on);
                }
            }
        }
    }

    if ([key isEqualToString:@"hideSeparatorLine"]) {
        for (UIView *sv in self.contentView.subviews) {
            if ([sv isKindOfClass:[UITableView class]]) {
                [(UITableView *)sv reloadData];
            }
        }
    }

    WPLog(@"Config", @"[SWITCH] 检查 masterSwitchKeys: self=%@, masterSwitchKeys=%@, containsKey=%d", self, self.masterSwitchKeys, [self.masterSwitchKeys containsObject:key]);

    if ([self.masterSwitchKeys containsObject:key]) {
        WPLog(@"Config", @"[SWITCH] 是 master key! 直接重建 UI: key=%@, 新值=%d", key, sender.on);
        [self.view endEditing:YES];
        @try {
            [self buildUI];
            [self.scrollView setNeedsLayout];
            [self.scrollView layoutIfNeeded];
        } @catch (NSException *e) {
            WPLog(@"Config", @"[ERR] buildUI 重建异常: %@ - %@", e.name, e.reason);
        }
    } else {
        WPLog(@"Config", @"[SWITCH] 不是 master key, 跳过重建: key=%@", key);
    }
}

- (void)colorButtonTapped:(UIButton *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) return;

    UIColor *currentColor = sender.backgroundColor ?: [UIColor grayColor];

    [WPColorPicker presentOnViewController:self
                             currentColor:currentColor
                             sourceButton:sender
                               onSelected:^(UIColor *color, NSString *hex) {
        PluginConfig *config = [PluginConfig shared];
        @try {
            [config setValue:hex forKey:key];
            [config save];
        } @catch (NSException *e) {
            [[NSUserDefaults standardUserDefaults] setObject:hex forKey:[kPluginPrefix stringByAppendingString:key]];
            [[NSUserDefaults standardUserDefaults] synchronize];
        }
    }];
}

#pragma mark - UITableViewDataSource

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return rowsForTable(tableView).count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    NSArray *rows = rowsForTable(tableView);
    NSDictionary *row = rows[indexPath.row];
    NSString *type = row[@"type"];

    if ([type isEqualToString:@"switch"] || [type isEqualToString:@"subSwitch"]) {
        return [self cellSwitch:tableView row:row];
    } else if ([type isEqualToString:@"nav"]) {
        return [self cellNav:tableView row:row];
    } else if ([type isEqualToString:@"button"]) {
        return [self cellButton:tableView row:row];
    } else if ([type isEqualToString:@"color"]) {
        return [self cellColor:tableView row:row];
    } else if ([type isEqualToString:@"hint"]) {
        return [self cellHint:tableView row:row];
    } else if ([type isEqualToString:@"input"]) {
        return [self cellInput:tableView row:row];
    } else if ([type isEqualToString:@"subLabel"]) {
        return [self cellSubLabel:tableView row:row];
    }

    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"default"];
    if (!cell) cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"default"];
    return cell;
}

#pragma mark - Cell Builders

- (UITableViewCell *)cellSwitch:(UITableView *)tableView row:(NSDictionary *)row {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:kCellSwitch];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:kCellSwitch];
        cell.selectionStyle = UITableViewCellSelectionStyleNone;
        cell.backgroundColor = WPCardBg();
        cell.textLabel.font = [UIFont systemFontOfSize:15];
        cell.textLabel.textColor = WPT1();
        UISwitch *sw = [[UISwitch alloc] init];
        sw.onTintColor = WPSwOn();
        sw.tag = 999;
        [sw addTarget:self action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
        cell.accessoryView = sw;
    }

    cell.textLabel.text = row[@"title"];
    UISwitch *sw = (UISwitch *)cell.accessoryView;
    sw.on = [row[@"isOn"] boolValue];
    objc_setAssociatedObject(sw, "key", row[@"key"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return cell;
}

- (UITableViewCell *)cellNav:(UITableView *)tableView row:(NSDictionary *)row {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:kCellNav];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:kCellNav];
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
        cell.backgroundColor = WPCardBg();
        cell.textLabel.font = [UIFont systemFontOfSize:15];
        cell.textLabel.textColor = WPT1();
        cell.detailTextLabel.font = [UIFont systemFontOfSize:12];
        cell.detailTextLabel.textColor = WPT2();
    }

    cell.textLabel.text = row[@"title"];
    cell.detailTextLabel.text = row[@"subtitle"];
    cell.tag = [row[@"tag"] integerValue];
    return cell;
}

- (UITableViewCell *)cellButton:(UITableView *)tableView row:(NSDictionary *)row {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:kCellButton];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:kCellButton];
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
        cell.backgroundColor = WPCardBg();
        cell.textLabel.font = [UIFont systemFontOfSize:15];
        cell.textLabel.textColor = WPT1();
        cell.detailTextLabel.font = [UIFont systemFontOfSize:12];
        cell.detailTextLabel.textColor = WPT2();
    }

    cell.textLabel.text = row[@"title"];
    cell.detailTextLabel.text = row[@"hint"];
    return cell;
}

- (UITableViewCell *)cellColor:(UITableView *)tableView row:(NSDictionary *)row {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:kCellColor];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:kCellColor];
        cell.selectionStyle = UITableViewCellSelectionStyleNone;
        cell.backgroundColor = WPCardBg();
        cell.textLabel.font = [UIFont systemFontOfSize:15];
        cell.textLabel.textColor = WPT1();
    }

    cell.textLabel.text = row[@"title"];

    UIView *existingSwatch = [cell.contentView viewWithTag:888];
    [existingSwatch removeFromSuperview];

    UIColor *currentColor = [[PluginConfig shared] colorFromHex:row[@"value"]] ?: [UIColor grayColor];
    UIButton *swatch = [WPColorPicker makeColorButtonWithColor:currentColor];
    swatch.tag = 888;
    CGFloat cellW = tableView.bounds.size.width;
    swatch.frame = CGRectMake(cellW - kCellHPadding - 36, (kRowH - 30) / 2, 30, 30);
    objc_setAssociatedObject(swatch, "key", row[@"key"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [swatch addTarget:self action:@selector(colorButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
    [cell.contentView addSubview:swatch];

    return cell;
}

- (UITableViewCell *)cellHint:(UITableView *)tableView row:(NSDictionary *)row {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:kCellHint];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:kCellHint];
        cell.selectionStyle = UITableViewCellSelectionStyleNone;
        cell.backgroundColor = WPCardBg();
        cell.textLabel.font = [UIFont systemFontOfSize:12];
        cell.textLabel.textColor = WPT3();
    }

    cell.textLabel.text = row[@"text"];
    return cell;
}

- (UITableViewCell *)cellInput:(UITableView *)tableView row:(NSDictionary *)row {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:kCellInput];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:kCellInput];
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
        cell.backgroundColor = WPCardBg();
        cell.textLabel.font = [UIFont systemFontOfSize:15];
        cell.textLabel.textColor = WPT1();
        cell.detailTextLabel.font = [UIFont systemFontOfSize:13];
        cell.detailTextLabel.textColor = WPT2();
    }

    cell.textLabel.text = row[@"title"];
    NSString *value = row[@"value"];
    NSString *hint = row[@"hint"];
    cell.detailTextLabel.text = (value.length > 0) ? value : hint;
    return cell;
}

- (UITableViewCell *)cellSubLabel:(UITableView *)tableView row:(NSDictionary *)row {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:kCellSubLabel];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:kCellSubLabel];
        cell.selectionStyle = UITableViewCellSelectionStyleNone;
        cell.backgroundColor = WPCardBg();
        cell.textLabel.font = [UIFont systemFontOfSize:11 weight:UIFontWeightSemibold];
        cell.textLabel.textColor = WPT2();
    }

    cell.textLabel.text = [row[@"text"] uppercaseString];
    return cell;
}

#pragma mark - UITableViewDelegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];

    NSArray *rows = rowsForTable(tableView);
    NSDictionary *row = rows[indexPath.row];
    NSString *type = row[@"type"];

    if ([type isEqualToString:@"nav"]) {
        NSInteger tag = [row[@"tag"] integerValue];
        NSString *actionStr = row[@"action"];
        if (actionStr.length > 0) {
            SEL action = NSSelectorFromString(actionStr);
            if (tag != 0 && [self respondsToSelector:action]) {
                BOOL needsArgument = [actionStr hasSuffix:@":"];
                if (needsArgument) {
                    UIButton *dummySender = [UIButton buttonWithType:UIButtonTypeCustom];
                    dummySender.tag = tag;
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
                    [self performSelector:action withObject:dummySender];
#pragma clang diagnostic pop
                } else {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
                    [self performSelector:action];
#pragma clang diagnostic pop
                }
            }
        }
    } else if ([type isEqualToString:@"button"]) {
        NSString *key = row[@"key"];
        if (key && [self respondsToSelector:@selector(buttonClicked:)]) {
            [self performSelector:@selector(buttonClicked:) withObject:key];
        }
    } else if ([type isEqualToString:@"input"]) {
        NSString *key = row[@"key"];
        NSString *title = row[@"title"];
        NSString *hint = row[@"hint"];
        Class handlerClass = objc_getClass("MioPluginSwitchHandler");
        id handler = [handlerClass performSelector:@selector(sharedInstance)];
        if (handler && [handler respondsToSelector:@selector(onEditRowTap:)]) {
            UITableViewCell *cell = [tableView cellForRowAtIndexPath:indexPath];
            objc_setAssociatedObject(cell, "editConfigKey", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            objc_setAssociatedObject(cell, "editTitle", title, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            objc_setAssociatedObject(cell, "editValueLabel", cell.detailTextLabel, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            if (hint.length > 0) objc_setAssociatedObject(cell, "editConfigHint", hint, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
            [handler performSelector:@selector(onEditRowTap:) withObject:cell];
#pragma clang diagnostic pop
        }
    }
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self.view endEditing:YES];
}

- (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection {
    [super traitCollectionDidChange:previousTraitCollection];
    if (@available(iOS 13.0, *)) {
        BOOL isDark = self.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
        [self.contentView wp_updateBorderAppearanceForDarkMode:isDark];
    }
}

- (void)buildUI {
    WPLog(@"Config", @"[BUILD] buildUI 调用! self=%@, 注意: 基类空实现, 子类应重写", self);
}

- (void)buttonClicked:(NSString *)key {
}

@end