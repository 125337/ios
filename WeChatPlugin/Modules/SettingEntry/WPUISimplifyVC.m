#import "../../Settings/Common/SettingCategoryController.h"
#import "../../Config/PluginConfig.h"
#import "SettingEntryHook.h"
#import "WPCommonUI.h"
#import "../../Core/LogManager.h"
#import "../../Core/WeChatRestartHelper.h"

static NSString *const kSimplifyEnabledKey = @"SimplifyEnabled";

/// ========== 编辑行 tap — 弹窗 + 持久化 ==========
@implementation WeChatPluginSwitchHandler (WPUISimplify)

- (void)onEditRowTap:(UIButton *)sender {
    NSString *title = objc_getAssociatedObject(sender, "editTitle");
    UILabel *valueLabel = objc_getAssociatedObject(sender, "editValueLabel");
    NSString *nsKey = objc_getAssociatedObject(sender, "editNSKey");
    NSString *dictKey = objc_getAssociatedObject(sender, "editDictKey");
    if (!title) return;

    UIViewController *topVC = WPGetTopVCForPresentation();
    if (!topVC) return;

    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];

    NSString *currentVal = valueLabel.text;
    NSString *prefill = (currentVal && currentVal.length > 0) ? currentVal : @"";

    UIAlertController *alert = [UIAlertController alertControllerWithTitle:title
                                                                   message:nil
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) {
        tf.text = prefill;
        tf.clearButtonMode = UITextFieldViewModeWhileEditing;
    }];

    __unsafe_unretained UILabel *weakLabel = valueLabel;
    __unsafe_unretained UIViewController *weakTopVC = topVC;
    BOOL needsRestart = [objc_getAssociatedObject(sender, "needsRestart") boolValue];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
        NSString *newText = alert.textFields.firstObject.text;
        if (weakLabel) {
            weakLabel.text = (newText && newText.length > 0) ? newText : @"";
        }

        if (dictKey && nsKey) {
            NSMutableDictionary *dict = [[d dictionaryForKey:nsKey] ?: @{} mutableCopy];
            if (newText && newText.length > 0) {
                dict[dictKey] = newText;
            } else {
                [dict removeObjectForKey:dictKey];
            }
            [d setObject:dict forKey:nsKey];
        } else if (nsKey) {
            if (newText && newText.length > 0) {
                [d setObject:newText forKey:nsKey];
            } else {
                [d removeObjectForKey:nsKey];
            }
        }
        [d synchronize];

        // PluginConfig 保存分支（Setting*Controller 迁移用）
        NSString *configKey = objc_getAssociatedObject(sender, "editConfigKey");
        if (configKey) {
            PluginConfig *config = [PluginConfig shared];
            @try {
                [config setValue:@([newText floatValue]) forKey:configKey];
            } @catch (NSException *e) {
                [config setValue:newText forKey:configKey];
            }
            [config save];
        }

        // 仅标记了 needsRestart 的行（界面简化）保存后立即弹重启
        if (needsRestart && weakTopVC) {
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.35 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{
                [WeChatRestartHelper showRestartAlertFromVC:weakTopVC];
            });
        }
    }]];
    
    [topVC presentViewController:alert animated:YES completion:nil];
}

@end


#pragma mark - ========== WPUISimplifyVC ==========

@interface WPUISimplifyVC : SettingCategoryController
@end

@implementation WPUISimplifyVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"界面简化";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    CGFloat w = self.view.bounds.size.width;
    BOOL enabled = [d boolForKey:kSimplifyEnabledKey];
    CGFloat y = 8;

    y = [self addSectionHeader:@"界面名称简化" y:y width:w];

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"界面名称简化"
                                     key:kSimplifyEnabledKey
                                    isOn:enabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        id handler = [objc_getClass("WeChatPluginSwitchHandler") sharedInstance];
        NSUserDefaults *ud = [NSUserDefaults standardUserDefaults];

        // ========== 顶部标签自定义 ==========
        *ecy = [self addSubSectionLabelInGroup:expand text:@"顶部标签自定义" cy:*ecy width:w];

        NSArray *topDefs = @[
            @[@"微信标题",      @"Simplify_MainTitle"],
            @[@"通讯录标题",    @"Simplify_ContactsTitle"],
            @[@"发现标题",      @"Simplify_DiscoverTitle"],
        ];
        for (NSUInteger i = 0; i < topDefs.count; i++) {
            if (i > 0) {
                *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
            }
            NSString *rowTitle  = topDefs[i][0];
            NSString *nsKey     = topDefs[i][1];
            NSString *curVal    = [ud stringForKey:nsKey];
            NSString *showVal   = (curVal && curVal.length > 0) ? curVal : @"";
            UIButton *row = WPAddEditableRowWithArrow(expand, *ecy, w, rowTitle, showVal, handler);
            objc_setAssociatedObject(row, "editNSKey", nsKey, OBJC_ASSOCIATION_COPY_NONATOMIC);
            objc_setAssociatedObject(row, "needsRestart", @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            *ecy += kRowH;
        }

        // ========== 特殊自定义 ==========
        *ecy = [self addSubSectionLabelInGroup:expand text:@"特殊自定义" cy:*ecy width:w];

        NSString *fcCur = [ud stringForKey:@"Simplify_FriendsCount"];
        NSString *fcShow = (fcCur && fcCur.length > 0) ? fcCur : @"";
        UIButton *fcRow = WPAddEditableRowWithArrow(expand, *ecy, w, @"通讯录底部好友", fcShow, handler);
        objc_setAssociatedObject(fcRow, "editNSKey", @"Simplify_FriendsCount", OBJC_ASSOCIATION_COPY_NONATOMIC);
        objc_setAssociatedObject(fcRow, "needsRestart", @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        *ecy += kRowH;

        // ========== 我的页面菜单名称自定义 ==========
        *ecy = [self addSubSectionLabelInGroup:expand text:@"我的页面菜单名称自定义" cy:*ecy width:w];

        NSDictionary *menuDict = [ud dictionaryForKey:@"Simplify_MenuNames"] ?: @{};
        NSArray *menuDefs = @[
            @[@"服务/支付与服务", @"服务"],
            @[@"收藏",             @"收藏"],
            @[@"朋友圈",           @"朋友圈"],
            @[@"视频号",           @"视频号"],
            @[@"卡片/订单与卡包", @"卡包"],
            @[@"表情",             @"表情"],
            @[@"设置",             @"设置"],
            @[@"插件",             @"插件"],
        ];
        for (NSUInteger i = 0; i < menuDefs.count; i++) {
            if (i > 0) {
                *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
            }
            NSString *rowTitle   = menuDefs[i][0];
            NSString *dictKeyVal = menuDefs[i][1];
            NSString *curVal     = menuDict[dictKeyVal];
            NSString *showVal    = (curVal && curVal.length > 0) ? curVal : @"";
            UIButton *row = WPAddEditableRowWithArrow(expand, *ecy, w, rowTitle, showVal, handler);
            objc_setAssociatedObject(row, "editNSKey", @"Simplify_MenuNames", OBJC_ASSOCIATION_COPY_NONATOMIC);
            objc_setAssociatedObject(row, "editDictKey", dictKeyVal, OBJC_ASSOCIATION_COPY_NONATOMIC);
            objc_setAssociatedObject(row, "needsRestart", @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            *ecy += kRowH;
        }

        // ========== 底部标签自定义 ==========
        *ecy = [self addSubSectionLabelInGroup:expand text:@"底部标签自定义" cy:*ecy width:w];

        NSDictionary *tabDict = [ud dictionaryForKey:@"Simplify_Tab_Names"] ?: @{};
        NSArray *tabDefs = @[
            @[@"微信",   @"微信"],
            @[@"通讯录", @"通讯录"],
            @[@"发现",   @"发现"],
            @[@"我",     @"我"],
        ];
        for (NSUInteger i = 0; i < tabDefs.count; i++) {
            if (i > 0) {
                *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
            }
            NSString *rowTitle   = tabDefs[i][0];
            NSString *dictKeyVal = tabDefs[i][1];
            NSString *curVal     = tabDict[dictKeyVal];
            NSString *showVal    = (curVal && curVal.length > 0) ? curVal : @"";
            UIButton *row = WPAddEditableRowWithArrow(expand, *ecy, w, rowTitle, showVal, handler);
            objc_setAssociatedObject(row, "editNSKey", @"Simplify_Tab_Names", OBJC_ASSOCIATION_COPY_NONATOMIC);
            objc_setAssociatedObject(row, "editDictKey", dictKeyVal, OBJC_ASSOCIATION_COPY_NONATOMIC);
            objc_setAssociatedObject(row, "needsRestart", @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            *ecy += kRowH;
        }
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    // 关闭时提示文字
    if (!enabled) {
        UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 40)];
        footer.text = @"修改后将在下次启动时生效";
        footer.font = [UIFont systemFontOfSize:12];
        footer.textColor = WPT3();
        footer.textAlignment = NSTextAlignmentCenter;
        [self.contentView addSubview:footer];
        [footer release];
        y += 48;
    }

    // 底部间隔
    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] WPUISimplifyVC buildUI done (enabled=%d)", enabled);
}

@end