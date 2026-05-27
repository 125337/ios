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
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
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

// kRowH/kPad/kRadius 由 WPCommonUI.h 提供 (extern)
static const CGFloat kCellHPadding = 16.0;
static char kExpandedAssociationKey;

#define bgColor() WPBackgroundColor()
#define cardBgColor() WPCardBackgroundColor()
#define textPrimary() WPTextPrimaryColor()
#define textSecondary() WPTextSecondaryColor()
#define textTertiary() WPTextTertiaryColor()
#define switchOnColor() WPSwitchOnColor()
#define separatorColor() WPSeparatorColor()

static NSString *configPropertyForKey(NSString *key) {
    static NSDictionary<NSString *, NSString *> *mapping = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        mapping = @{
            @"PreventRecall": @"preventRecall",
            @"DebugLogging": @"debugLogging",
            @"HideContent": @"hideContent",
            @"NoTip": @"noTip",
            @"BottomPosition": @"bottomPosition",
            @"SendInterceptedContent": @"sendInterceptedContent",
            @"InterceptNotifyEnabled": @"interceptNotifyEnabled",
            @"CustomNotifyEnabled": @"customNotifyEnabled",
            @"ClearUnreadEnabled": @"clearUnreadEnabled",
            @"HideDiscoverBadge": @"hideDiscoverBadge",
            @"HideEnterpriseBadge": @"hideEnterpriseBadge",
            @"CustomColorsEnabled": @"customColorsEnabled",
            @"AutoRedEnvelop": @"autoRedEnvelop",
            @"RedEnvelopCatchMe": @"redEnvelopCatchMe",
            @"PersonalRedEnvelopEnable": @"personalRedEnvelopEnable",
            @"RedEnvelopeDetail": @"redEnvelopeDetail",
            @"RedEnvelopTextFilterEnabled": @"redEnvelopTextFilterEnabled",
            @"RedEnvelopGroupFilterEnabled": @"redEnvelopGroupFilterEnabled",
            @"RedEnvelopAutoReply": @"redEnvelopAutoReply",
            @"RedEnvelopAutoReplyInGroup": @"redEnvelopAutoReplyInGroup",
            @"EnableJoker": @"enableJoker",
            @"EnableGroupExitMonitor": @"enableGroupExitMonitor",
            @"AutoConfirmTransfer": @"autoConfirmTransfer",
            @"AutoConfirmTransferPersonal": @"autoConfirmTransferPersonal",
            @"AutoConfirmTransferGroup": @"autoConfirmTransferGroup",
            @"AutoConfirmTransferAutoReply": @"autoConfirmTransferAutoReply",
            @"ShowMessageTime": @"showMessageTime",
            @"MessageTimeBoldFont": @"messageTimeBoldFont",
            @"MessageTimeTextColor": @"messageTimeTextColor",
            @"HideChatTime": @"hideChatTime",
            @"NotifySender": @"notifySender",
            @"HideC2COtherAvatar": @"hideC2COtherAvatar",
            @"HideC2CSelfAvatar": @"hideC2CSelfAvatar",
            @"HideGroupOtherAvatar": @"hideGroupOtherAvatar",
            @"HideGroupSelfAvatar": @"hideGroupSelfAvatar",
            @"HideOAOtherAvatar": @"hideOAOtherAvatar",
            @"HideOASelfAvatar": @"hideOASelfAvatar",
            @"ShowChatAvatar": @"showChatAvatar",
            @"AvatarTapFeedback": @"avatarTapFeedback",
            @"ShowAddTime": @"showAddTime",
            @"ShowGroupMemberCount": @"showGroupMemberCount",
            @"EnableChatNameColor": @"enableChatNameColor",
            @"EnableChatNameSize": @"enableChatNameSize",
            @"EnableMomentsNameColor": @"enableMomentsNameColor",
            @"EnableMomentsNameSize": @"enableMomentsNameSize"
        };
    });
    return mapping[key];
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

@interface SettingCategoryController ()
@end

@implementation SettingCategoryController

- (void)viewDidLoad {
    WPLog(@"Config", @"[UI] SettingCategoryController viewDidLoad");
    @try {
        [super viewDidLoad];
        self.title = self.categoryName;
        self.view.backgroundColor = bgColor();
        
        CGFloat w = [UIScreen mainScreen].bounds.size.width;
        CGFloat h = [UIScreen mainScreen].bounds.size.height;
        CGRect frame = CGRectMake(0, 0, w, h);
        
        self.scrollView = [[[UIScrollView alloc] initWithFrame:frame] autorelease];
        self.scrollView.backgroundColor = bgColor();
        if (@available(iOS 13.0, *)) {
            self.scrollView.automaticallyAdjustsScrollIndicatorInsets = NO;
        }
        [self.view addSubview:self.scrollView];
        
        self.contentView = [[[UIView alloc] initWithFrame:CGRectMake(0, 0, w, 2000)] autorelease];
        [self.scrollView addSubview:self.contentView];
        
        self.masterSwitchKeys = [NSMutableSet set];
        WPLog(@"Config", @"[UI] SettingCategoryController viewDidLoad 完成");
    } @catch (NSException *e) {
        WPLog(@"Config", @"[UI] SettingCategoryController viewDidLoad 异常: %@ - %@", e.name, e.reason);
    }
}

- (UIView *)addTableGroupAtY:(CGFloat)y width:(CGFloat)w {
    UIView *group = WPMakeCard(y, w);
    [self.contentView addSubview:group];
    return group;
}

- (CGFloat)finishGroup:(UIView *)group atY:(CGFloat)y height:(CGFloat)h {
    CGRect f = group.frame;
    f.size.height = h;
    group.frame = f;
    return y + h + 8;
}

- (CGFloat)addSectionHeader:(NSString *)text y:(CGFloat)y width:(CGFloat)w {
    UILabel *l = WPMakeSectionHeader(text, y, w);
    l.text = text.uppercaseString;
    // WPMakeSectionHeader 默认 x=kPad+4, w=w-kPad*2-8，适配 Setting*Controller 布局
    CGRect f = l.frame;
    f.origin.x = kPad;
    f.size.width = w - kPad * 2;
    l.frame = f;
    [self.contentView addSubview:l];
    [l release];
    return y + 32;
}

- (CGFloat)addSectionFooter:(NSString *)text y:(CGFloat)y width:(CGFloat)w {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 0)];
    l.text = text;
    l.font = [UIFont systemFontOfSize:12];
    l.textColor = textTertiary();
    l.numberOfLines = 0;
    [l sizeToFit];
    [self.contentView addSubview:l];
    [l release];
    return y + l.frame.size.height + 6;
}

- (CGFloat)addNavRowInGroup:(UIView *)group title:(NSString *)title subtitle:(NSString *)subtitle tag:(NSInteger)tag action:(SEL)action cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kPad * 2;
    BOOL hasSubtitle = subtitle.length > 0;
    CGFloat titleY = hasSubtitle ? cy + 4 : cy;
    CGFloat titleH = hasSubtitle ? 18 : kRowH;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, titleY, gw - kCellHPadding * 2 - 20, titleH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = textPrimary();
    [group addSubview:tl];
    [tl release];

    if (hasSubtitle) {
        UILabel *dl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 22, gw - kCellHPadding * 2 - 20, 14)];
        dl.text = subtitle;
        dl.font = [UIFont systemFontOfSize:12];
        dl.textColor = textSecondary();
        [group addSubview:dl];
        [dl release];
    }

    WPDrawDisclosureArrow(group, cy, gw, kCellHPadding);

    UIButton *btn = [[UIButton alloc] initWithFrame:CGRectMake(0, cy, gw, kRowH)];
    btn.tag = tag;
    [btn addTarget:self action:action forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:btn];
    [btn release];
    return cy + kRowH;
}

- (CGFloat)addSwitchRowInGroup:(UIView *)group title:(NSString *)title desc:(NSString *)desc key:(NSString *)key isOn:(BOOL)on cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kPad * 2;
    CGFloat textW = gw - kCellHPadding * 2 - 70;

    CGFloat titleY = desc.length > 0 ? cy + 4 : cy + (kRowH - 18) / 2;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, titleY, textW, 18)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = textPrimary();
    [group addSubview:tl];
    [tl release];

    if (desc.length > 0) {
        UILabel *dl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 22, textW, 14)];
        dl.text = desc;
        dl.font = [UIFont systemFontOfSize:12];
        dl.textColor = textSecondary();
        [group addSubview:dl];
        [dl release];
    }

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = on;
    sw.onTintColor = switchOnColor();
    sw.frame = CGRectMake(gw - kCellHPadding - 51, cy + (kRowH - 31) / 2, 51, 31);
    objc_setAssociatedObject(sw, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [sw addTarget:self action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
    [group addSubview:sw];
    [sw release];
    WPLog(@"Config", @"[SWITCH] 创建 switch: key=%@, isOn=%d, target=%@, action=switchChanged:", key, on, self);
    return cy + kRowH;
}

- (CGFloat)addSubSwitchRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key isOn:(BOOL)on cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kPad * 2;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy, gw - kCellHPadding * 2 - 70, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = textPrimary();
    [group addSubview:tl];
    [tl release];

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = on;
    sw.onTintColor = switchOnColor();
    sw.frame = CGRectMake(gw - kCellHPadding - 51, cy + (kRowH - 31) / 2, 51, 31);
    objc_setAssociatedObject(sw, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [sw addTarget:self action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
    [group addSubview:sw];
    [sw release];
    return cy + kRowH;
}

- (CGFloat)addInputRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key value:(NSString *)value hint:(NSString *)hint cy:(CGFloat)cy width:(CGFloat)w {
    id handler = [objc_getClass("WeChatPluginSwitchHandler") sharedInstance];
    NSString *displayValue = (value && value.length > 0) ? value : hint;
    UIButton *row = WPAddEditableRowWithArrow(group, cy, w, title, displayValue, handler);
    objc_setAssociatedObject(row, "editConfigKey", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    if (hint) objc_setAssociatedObject(row, "editConfigHint", hint, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return cy + kRowH;
}

- (CGFloat)addHintRowInGroup:(UIView *)group text:(NSString *)text cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kPad * 2;
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy, gw - kCellHPadding * 2, 16)];
    l.text = text;
    l.font = [UIFont systemFontOfSize:12];
    l.textColor = textTertiary();
    [group addSubview:l];
    [l release];
    return cy + 20;
}

- (CGFloat)addButtonRowInGroup:(UIView *)group title:(NSString *)title hint:(NSString *)hint key:(NSString *)key cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kPad * 2;
    
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 4, gw - kCellHPadding * 2 - 20, 18)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = textPrimary();
    [group addSubview:tl];
    [tl release];
    
    UILabel *hl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 22, gw - kCellHPadding * 2 - 20, 14)];
    hl.text = hint;
    hl.font = [UIFont systemFontOfSize:12];
    hl.textColor = textSecondary();
    [group addSubview:hl];
    [hl release];
    
    WPDrawDisclosureArrow(group, cy, gw, kCellHPadding);
    
    UIButton *btn = [[UIButton alloc] initWithFrame:CGRectMake(0, cy, gw, kRowH)];
    objc_setAssociatedObject(btn, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [btn addTarget:self action:@selector(buttonTapped:) forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:btn];
    [btn release];
    
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

- (CGFloat)addSubSectionLabelInGroup:(UIView *)group text:(NSString *)text cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kPad * 2;
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy, gw - kCellHPadding * 2, 16)];
    l.text = text.uppercaseString;
    l.font = [UIFont systemFontOfSize:11 weight:UIFontWeightSemibold];
    l.textColor = textSecondary();
    [group addSubview:l];
    [l release];
    return cy + 24;
}

- (CGFloat)addColorRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key value:(NSString *)value cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kPad * 2;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 4, gw - kCellHPadding - 56, kRowH - 8)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = textPrimary();
    [group addSubview:tl];
    [tl release];

    UIColor *currentColor = [[PluginConfig shared] colorFromHex:value] ?: [UIColor grayColor];

    // 使用统一颜色选择器工具类
    UIButton *btn = [WPColorPicker makeColorButtonWithColor:currentColor];
    btn.frame = CGRectMake(gw - kCellHPadding - 36, cy + (kRowH - 30) / 2, 30, 30);
    objc_setAssociatedObject(btn, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [btn addTarget:self action:@selector(colorButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:btn];
    return cy + kRowH;
}

- (CGFloat)addSeparatorInGroup:(UIView *)group cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kPad * 2;
    CGFloat scale = [UIScreen mainScreen].scale;
    CGFloat pixelY = round(cy * scale) / scale;
    CGFloat onePixel = 1.0 / scale;
    UIView *sepView = [[UIView alloc] initWithFrame:CGRectMake(kCellHPadding, pixelY, gw - kCellHPadding, onePixel)];
    sepView.backgroundColor = separatorColor();
    [group addSubview:sepView];
    [sepView release];
    return cy + onePixel;
}

- (UIView *)addExpandContainerInGroup:(UIView *)group cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kPad * 2;
    UIView *container = [[UIView alloc] initWithFrame:CGRectMake(0, cy, gw, 0)];
    container.backgroundColor = cardBgColor();
    [container setExpanded:YES animated:NO];
    [group addSubview:container];
    [container release];
    return container;
}

- (CGFloat)finishExpandContainer:(UIView *)container currentCy:(CGFloat)cy {
    CGRect f = container.frame;
    f.size.height = cy;
    container.frame = f;
    return f.origin.y + f.size.height;
}

- (CGFloat)addMasterSwitchRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key isOn:(BOOL)on subBuilder:(void (^)(UIView *expand, CGFloat *ecy))subBuilder cy:(CGFloat)cy width:(CGFloat)w {
    [self.masterSwitchKeys addObject:key];
    WPLog(@"Config", @"[MASTER] 注册 masterSwitchKey=%@, isOn=%d, masterKeys当前=%@", key, on, self.masterSwitchKeys);

    CGFloat resultCy = [self addSwitchRowInGroup:group title:title desc:nil key:key isOn:on cy:cy width:w];

    if (on && subBuilder) {
        UIView *expand = [self addExpandContainerInGroup:group cy:resultCy width:w];
        CGFloat ecy = 0;
        subBuilder(expand, &ecy);
        resultCy = [self finishExpandContainer:expand currentCy:ecy];
        WPLog(@"Config", @"[MASTER] 子功能已展开: key=%@, ecy=%.1f, resultCy=%.1f", key, ecy, resultCy);
    } else {
        WPLog(@"Config", @"[MASTER] 子功能未展开: key=%@, on=%d, hasBuilder=%d", key, on, subBuilder != nil);
    }

    return resultCy;
}

- (void)switchChanged:(UISwitch *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    WPLog(@"Config", @"[SWITCH] switchChanged 触发! key=%@, isOn=%d, sender=%@", key, sender.on, sender);
    if (!key) {
        WPLog(@"Config", @"[SWITCH] key 为空! 无法处理");
        return;
    }

    NSString *propertyName = configPropertyForKey(key);
    if (propertyName.length == 0) {
        WPLog(@"Config", @"[ERR] Config save failed: no property mapping for key %@", key);
        return;
    }

    PluginConfig *config = [PluginConfig shared];
    @try {
        WPLog(@"Config", @"[SAVE] Saving config: key=%@, property=%@, value=%@", key, propertyName, sender.on ? @"YES" : @"NO");
        [config setValue:@(sender.on) forKey:propertyName];
        WPLog(@"Config", @"[OK] Config value after KVC: %d", sender.on);
    } @catch (NSException *e) {
        WPLog(@"Config", @"[WARN] Config save exception: %@ - %@", e.name, e.reason);
        return;
    }
    [config save];
    WPLog(@"Config", @"[OK] Config saved successfully for key: %@", key);

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
            [[NSUserDefaults standardUserDefaults] setObject:hex forKey:key];
            [[NSUserDefaults standardUserDefaults] synchronize];
        }
    }];
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

- (void)dealloc {
    [_scrollView release];
    [_contentView release];
    [_categoryName release];
    [_masterSwitchKeys release];
    [super dealloc];
}

@end
