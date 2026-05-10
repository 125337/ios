#import "SettingCategoryController.h"
#import "WPBorderLayer.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/Constants.h"
#import "../../Config/WPColors.h"
#import <objc/runtime.h>

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

static const CGFloat kRowH = 44.0;
static const CGFloat kCardRadius = 10.0;
static const CGFloat kCardPadding = 16.0;
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
            @"QuickPinEnabled": @"quickPinEnabled",
            @"FoldTopSessionEnabled": @"foldTopSessionEnabled",
            @"BrandTopEnabled": @"brandTopEnabled",
            @"ChatBoxTopEnabled": @"chatBoxTopEnabled",
            @"QuickRemarkEnabled": @"quickRemarkEnabled",
            @"QuickMuteEnabled": @"quickMuteEnabled",
            @"AddMuteMenuItemEnabled": @"addMuteMenuItemEnabled",
            @"AddChatBoxEnabled": @"addChatBoxEnabled",
            @"ManagerChatBoxEnabled": @"managerChatBoxEnabled",
            @"SessionGestureEnabled": @"sessionGestureEnabled"
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

@implementation SettingCategoryController

- (void)viewDidLoad {
    configLog(@"[UI] SettingCategoryController viewDidLoad");
    @try {
        [super viewDidLoad];
        self.title = self.categoryName;
        self.view.backgroundColor = bgColor();
        
        CGFloat w = [UIScreen mainScreen].bounds.size.width;
        CGFloat h = [UIScreen mainScreen].bounds.size.height;
        CGRect frame = CGRectMake(0, 0, w, h);
        
        self.scrollView = [[UIScrollView alloc] initWithFrame:frame];
        self.scrollView.backgroundColor = bgColor();
        if (@available(iOS 13.0, *)) {
            self.scrollView.automaticallyAdjustsScrollIndicatorInsets = NO;
        }
        [self.view addSubview:self.scrollView];
        
        self.contentView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, w, 2000)];
        [self.scrollView addSubview:self.contentView];
        
        self.inputFields = [NSMutableDictionary dictionary];
        self.masterSwitchKeys = [NSMutableSet set];
        configLog(@"[UI] SettingCategoryController viewDidLoad 完成");
    } @catch (NSException *e) {
        configLog([NSString stringWithFormat:@"[UI] SettingCategoryController viewDidLoad 异常: %@ - %@", e.name, e.reason]);
    }
}

- (UIView *)addTableGroupAtY:(CGFloat)y width:(CGFloat)w {
    UIView *group = [[UIView alloc] initWithFrame:CGRectMake(kCardPadding, y, w - kCardPadding * 2, 0)];
    group.backgroundColor = cardBgColor();
    group.layer.cornerRadius = kCardRadius;
    if (@available(iOS 13.0, *)) group.layer.cornerCurve = kCACornerCurveContinuous;
    group.clipsToBounds = YES;
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
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kCardPadding, y, w - kCardPadding * 2, 20)];
    l.text = text.uppercaseString;
    l.font = [UIFont systemFontOfSize:13 weight:UIFontWeightSemibold];
    l.textColor = textSecondary();
    [self.contentView addSubview:l];
    return y + 32;
}

- (CGFloat)addSectionFooter:(NSString *)text y:(CGFloat)y width:(CGFloat)w {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kCardPadding, y, w - kCardPadding * 2, 0)];
    l.text = text;
    l.font = [UIFont systemFontOfSize:12];
    l.textColor = textTertiary();
    l.numberOfLines = 0;
    [l sizeToFit];
    [self.contentView addSubview:l];
    return y + l.frame.size.height + 6;
}

- (CGFloat)addNavRowInGroup:(UIView *)group title:(NSString *)title subtitle:(NSString *)subtitle tag:(NSInteger)tag action:(SEL)action cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kCardPadding * 2;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 4, gw - kCellHPadding * 2 - 20, 18)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = textPrimary();
    [group addSubview:tl];

    if (subtitle.length > 0) {
        UILabel *dl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 22, gw - kCellHPadding * 2 - 20, 14)];
        dl.text = subtitle;
        dl.font = [UIFont systemFontOfSize:12];
        dl.textColor = textSecondary();
        [group addSubview:dl];
    }

    UILabel *arrow = [[UILabel alloc] initWithFrame:CGRectMake(gw - kCellHPadding - 4, cy + 10, 12, 14)];
    arrow.text = @"›";
    arrow.font = [UIFont systemFontOfSize:14];
    arrow.textColor = textTertiary();
    arrow.textAlignment = NSTextAlignmentRight;
    [group addSubview:arrow];

    UIButton *btn = [[UIButton alloc] initWithFrame:CGRectMake(0, cy, gw, kRowH)];
    btn.tag = tag;
    [btn addTarget:self action:action forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:btn];
    return cy + kRowH;
}

- (CGFloat)addSwitchRowInGroup:(UIView *)group title:(NSString *)title desc:(NSString *)desc key:(NSString *)key isOn:(BOOL)on cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kCardPadding * 2;
    CGFloat textW = gw - kCellHPadding * 2 - 70;

    CGFloat titleY = desc.length > 0 ? cy + 4 : cy + (kRowH - 18) / 2;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, titleY, textW, 18)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = textPrimary();
    [group addSubview:tl];

    if (desc.length > 0) {
        UILabel *dl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 22, textW, 14)];
        dl.text = desc;
        dl.font = [UIFont systemFontOfSize:12];
        dl.textColor = textSecondary();
        [group addSubview:dl];
    }

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = on;
    sw.onTintColor = switchOnColor();
    sw.frame = CGRectMake(gw - kCellHPadding - 51, cy + (kRowH - 31) / 2, 51, 31);
    objc_setAssociatedObject(sw, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [sw addTarget:self action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
    [group addSubview:sw];
    configLog([NSString stringWithFormat:@"[SWITCH] 创建 switch: key=%@, isOn=%d, target=%@, action=switchChanged:", key, on, self]);
    return cy + kRowH;
}

- (CGFloat)addSubSwitchRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key isOn:(BOOL)on cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kCardPadding * 2;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy, gw - kCellHPadding * 2 - 70, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = textPrimary();
    [group addSubview:tl];

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = on;
    sw.onTintColor = switchOnColor();
    sw.frame = CGRectMake(gw - kCellHPadding - 51, cy + (kRowH - 31) / 2, 51, 31);
    objc_setAssociatedObject(sw, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [sw addTarget:self action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
    [group addSubview:sw];
    return cy + kRowH;
}

- (CGFloat)addInputRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key value:(NSString *)value hint:(NSString *)hint cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kCardPadding * 2;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy, 80, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = textPrimary();
    [group addSubview:tl];

    UITextField *tf = [[UITextField alloc] initWithFrame:CGRectMake(kCellHPadding + 84, cy, gw - kCellHPadding * 2 - 94, kRowH)];
    tf.font = [UIFont systemFontOfSize:14];
    tf.textColor = textSecondary();
    tf.placeholder = hint;
    tf.text = value;
    tf.textAlignment = NSTextAlignmentRight;
    tf.returnKeyType = UIReturnKeyDone;
    tf.clearButtonMode = UITextFieldViewModeWhileEditing;
    [tf addTarget:self action:@selector(textFieldChanged:) forControlEvents:UIControlEventEditingChanged];
    [tf addTarget:self action:@selector(textFieldDone:) forControlEvents:UIControlEventEditingDidEndOnExit];
    [tf addTarget:self action:@selector(textFieldDone:) forControlEvents:UIControlEventEditingDidEnd];
    objc_setAssociatedObject(tf, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [group addSubview:tf];
    self.inputFields[key] = tf;
    return cy + kRowH;
}

- (CGFloat)addHintRowInGroup:(UIView *)group text:(NSString *)text cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kCardPadding * 2;
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy, gw - kCellHPadding * 2, 16)];
    l.text = text;
    l.font = [UIFont systemFontOfSize:12];
    l.textColor = textTertiary();
    [group addSubview:l];
    return cy + 20;
}

- (CGFloat)addButtonRowInGroup:(UIView *)group title:(NSString *)title hint:(NSString *)hint key:(NSString *)key cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kCardPadding * 2;
    
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 4, gw - kCellHPadding * 2 - 20, 18)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = textPrimary();
    [group addSubview:tl];
    
    UILabel *hl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 22, gw - kCellHPadding * 2 - 20, 14)];
    hl.text = hint;
    hl.font = [UIFont systemFontOfSize:12];
    hl.textColor = textSecondary();
    [group addSubview:hl];
    
    UILabel *arrow = [[UILabel alloc] initWithFrame:CGRectMake(gw - kCellHPadding - 4, cy + 10, 12, 14)];
    arrow.text = @"›";
    arrow.font = [UIFont systemFontOfSize:14];
    arrow.textColor = textTertiary();
    arrow.textAlignment = NSTextAlignmentRight;
    [group addSubview:arrow];
    
    UIButton *btn = [[UIButton alloc] initWithFrame:CGRectMake(0, cy, gw, kRowH)];
    objc_setAssociatedObject(btn, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [btn addTarget:self action:@selector(buttonTapped:) forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:btn];
    
    return cy + kRowH;
}

- (void)buttonTapped:(UIButton *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    configLog([NSString stringWithFormat:@"[BUTTON] buttonTapped called, key=%@, self=%@, respondsToSelector=%d", key, self, [self respondsToSelector:@selector(buttonClicked:)]]);
    if (key && [self respondsToSelector:@selector(buttonClicked:)]) {
        configLog([NSString stringWithFormat:@"[BUTTON] calling buttonClicked: with key=%@", key]);
        [self performSelector:@selector(buttonClicked:) withObject:key];
        configLog(@"[BUTTON] buttonClicked: returned");
    }
}

- (CGFloat)addSubSectionLabelInGroup:(UIView *)group text:(NSString *)text cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kCardPadding * 2;
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy, gw - kCellHPadding * 2, 16)];
    l.text = text.uppercaseString;
    l.font = [UIFont systemFontOfSize:11 weight:UIFontWeightSemibold];
    l.textColor = textSecondary();
    [group addSubview:l];
    return cy + 24;
}

- (CGFloat)addColorRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key value:(NSString *)value cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kCardPadding * 2;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy + 4, 80, kRowH - 8)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = textPrimary();
    [group addSubview:tl];

    UIView *preview = [[UIView alloc] initWithFrame:CGRectMake(gw - kCellHPadding - 36, cy + (kRowH - 24) / 2, 36, 24)];
    preview.layer.cornerRadius = 6;
    if (@available(iOS 13.0, *)) preview.layer.cornerCurve = kCACornerCurveContinuous;
    preview.backgroundColor = [[PluginConfig shared] colorFromHex:value] ?: [UIColor grayColor];
    [preview wp_addRoundedBorderWithWidth:0.5
                                    color:[UIColor colorWithWhite:0.85 alpha:0.5]
                                   radius:6];
    [group addSubview:preview];

    UITextField *tf = [[UITextField alloc] initWithFrame:CGRectMake(gw - kCellHPadding - 100, cy + 8, 56, kRowH - 16)];
    tf.font = [UIFont systemFontOfSize:12];
    tf.textColor = textSecondary();
    tf.text = value;
    tf.textAlignment = NSTextAlignmentCenter;
    tf.returnKeyType = UIReturnKeyDone;
    [tf addTarget:self action:@selector(textFieldChanged:) forControlEvents:UIControlEventEditingChanged];
    [tf addTarget:self action:@selector(textFieldDone:) forControlEvents:UIControlEventEditingDidEndOnExit];
    [tf addTarget:self action:@selector(textFieldDone:) forControlEvents:UIControlEventEditingDidEnd];
    objc_setAssociatedObject(tf, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [group addSubview:tf];
    self.inputFields[key] = tf;
    return cy + kRowH;
}

- (CGFloat)addSeparatorInGroup:(UIView *)group cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kCardPadding * 2;
    CGFloat scale = [UIScreen mainScreen].scale;
    CGFloat pixelY = round(cy * scale) / scale;
    CGFloat onePixel = 1.0 / scale;
    UIView *sepView = [[UIView alloc] initWithFrame:CGRectMake(kCellHPadding, pixelY, gw - kCellHPadding, onePixel)];
    sepView.backgroundColor = separatorColor();
    [group addSubview:sepView];
    return cy + onePixel;
}

- (UIView *)addExpandContainerInGroup:(UIView *)group cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kCardPadding * 2;
    UIView *container = [[UIView alloc] initWithFrame:CGRectMake(0, cy, gw, 0)];
    container.backgroundColor = cardBgColor();
    [container setExpanded:YES animated:NO];
    [group addSubview:container];
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
    configLog([NSString stringWithFormat:@"[MASTER] 注册 masterSwitchKey=%@, isOn=%d, masterKeys当前=%@", key, on, self.masterSwitchKeys]);

    CGFloat resultCy = [self addSwitchRowInGroup:group title:title desc:nil key:key isOn:on cy:cy width:w];

    if (on && subBuilder) {
        UIView *expand = [self addExpandContainerInGroup:group cy:resultCy width:w];
        CGFloat ecy = 0;
        subBuilder(expand, &ecy);
        resultCy = [self finishExpandContainer:expand currentCy:ecy];
        configLog([NSString stringWithFormat:@"[MASTER] 子功能已展开: key=%@, ecy=%.1f, resultCy=%.1f", key, ecy, resultCy]);
    } else {
        configLog([NSString stringWithFormat:@"[MASTER] 子功能未展开: key=%@, on=%d, hasBuilder=%d", key, on, subBuilder != nil]);
    }

    return resultCy;
}

- (void)switchChanged:(UISwitch *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    configLog([NSString stringWithFormat:@"[SWITCH] switchChanged 触发! key=%@, isOn=%d, sender=%@", key, sender.on, sender]);
    if (!key) {
        configLog(@"[SWITCH] key 为空! 无法处理");
        return;
    }

    NSString *propertyName = configPropertyForKey(key);
    if (propertyName.length == 0) {
        configLog([NSString stringWithFormat:@"[ERR] Config save failed: no property mapping for key %@", key]);
        return;
    }

    PluginConfig *config = [PluginConfig shared];
    @try {
        configLog([NSString stringWithFormat:@"[SAVE] Saving config: key=%@, property=%@, value=%@", key, propertyName, sender.on ? @"YES" : @"NO"]);
        [config setValue:@(sender.on) forKey:propertyName];
        configLog([NSString stringWithFormat:@"[OK] Config value after KVC: %d", sender.on]);
    } @catch (NSException *e) {
        configLog([NSString stringWithFormat:@"[WARN] Config save exception: %@ - %@", e.name, e.reason]);
        return;
    }
    [config save];
    configLog([NSString stringWithFormat:@"[OK] Config saved successfully for key: %@", key]);

    configLog([NSString stringWithFormat:@"[SWITCH] 检查 masterSwitchKeys: self=%@, masterSwitchKeys=%@, containsKey=%d", self, self.masterSwitchKeys, [self.masterSwitchKeys containsObject:key]]);

    if ([self.masterSwitchKeys containsObject:key]) {
        configLog([NSString stringWithFormat:@"[SWITCH] 是 master key! 直接重建 UI: key=%@, 新值=%d", key, sender.on]);
        [self.view endEditing:YES];
        @try {
            [self buildUI];
            [self.scrollView setNeedsLayout];
            [self.scrollView layoutIfNeeded];
        } @catch (NSException *e) {
            configLog([NSString stringWithFormat:@"[ERR] buildUI 重建异常: %@ - %@", e.name, e.reason]);
        }
    } else {
        configLog([NSString stringWithFormat:@"[SWITCH] 不是 master key, 跳过重建: key=%@", key]);
    }
}

- (void)textFieldChanged:(UITextField *)tf {
    [self autoSaveTextField:tf];
}

- (void)textFieldDone:(UITextField *)tf {
    [tf resignFirstResponder];
    [self autoSaveTextField:tf];
}

- (void)autoSaveTextField:(UITextField *)tf {
    NSString *key = objc_getAssociatedObject(tf, "key");
    if (!key) return;
    NSString *value = tf.text.length > 0 ? tf.text : nil;
    PluginConfig *config = [PluginConfig shared];
    @try {
        if ([key isEqualToString:@"NotifyFormat"]) config.notifyFormat = value ?: kDefaultNotifyFormat;
        else if ([key isEqualToString:@"DateFormat"]) config.dateFormat = value ?: kDefaultDateFormat;
        else if ([key isEqualToString:@"CustomText"]) config.customText = value;
        else if ([key isEqualToString:@"InterceptNotifyTemplate"]) config.interceptNotifyTemplate = value ?: kDefaultInterceptTemplate;
        else if ([key isEqualToString:@"CustomNotifyFormat"]) config.customNotifyFormat = value ?: kDefaultCustomNotifyFormat;
        else if ([key isEqualToString:@"NameColorHex"]) config.nameColorHex = value ?: kDefaultNameColor;
        else if ([key isEqualToString:@"TimeColorHex"]) config.timeColorHex = value ?: kDefaultTimeColor;
        else if ([key isEqualToString:@"ContentColorHex"]) config.contentColorHex = value ?: kDefaultContentColor;
        else if ([key isEqualToString:@"DarkNameColorHex"]) config.darkNameColorHex = value ?: kDefaultDarkNameColor;
        else if ([key isEqualToString:@"DarkTimeColorHex"]) config.darkTimeColorHex = value ?: kDefaultDarkTimeColor;
        else if ([key isEqualToString:@"DarkContentColorHex"]) config.darkContentColorHex = value ?: kDefaultDarkContentColor;
        else if ([key isEqualToString:@"MessageTimeFontSize"]) config.messageTimeFontSize = [value floatValue] > 0 ? [value floatValue] : 11.0;
        else if ([key isEqualToString:@"MessageTimeFormat"]) config.messageTimeFormat = value ?: @"{HH}:{mm}";
        else if ([key isEqualToString:@"MessageTimePosition"]) config.messageTimePosition = [value integerValue];
        else if ([key isEqualToString:@"MessageTimeOffsetX"]) config.messageTimeOffsetX = [value floatValue];
        else if ([key isEqualToString:@"MessageTimeOffsetY"]) config.messageTimeOffsetY = [value floatValue];
        else if ([key isEqualToString:@"MessageTimeTextColor"]) config.messageTimeTextColor = value ?: @"#999999";
        else if ([key isEqualToString:@"MessageTimeBubbleExtWidth"]) config.messageTimeBubbleExtWidth = [value floatValue];
        else if ([key isEqualToString:@"MuteAutoReplyMsg"]) config.muteAutoReplyMsg = value ?: @"";
        else if ([key isEqualToString:@"MuteWorkingTime"]) config.muteWorkingTime = value ?: @"";
    } @catch (NSException *e) {
        return;
    }
    [config save];
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
    configLog([NSString stringWithFormat:@"[BUILD] buildUI 调用! self=%@, 注意: 基类空实现, 子类应重写", self]);
}

- (void)buttonClicked:(NSString *)key {
}

@end
