#import "../Common/SettingController.h"
#import "../../Config/PluginConfig.h"

@implementation SettingRevokeController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"防撤回设置";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    [self.inputFields removeAllObjects];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                    title:@"启用消息防撤回"
                                      key:@"PreventRecall"
                                     isOn:config.preventRecall
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSwitchRowInGroup:expand title:@"拦截系统通知" desc:nil key:@"InterceptNotifyEnabled" isOn:config.interceptNotifyEnabled cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"拦截通知模板" key:@"InterceptNotifyTemplate" value:config.interceptNotifyTemplate hint:kDefaultInterceptTemplate cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"发送拦截内容" desc:nil key:@"SendInterceptedContent" isOn:config.sendInterceptedContent cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"撤回消息不提示" desc:@"开启后不显示撤回提示" key:@"NoTip" isOn:config.noTip cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"隐藏撤回消息内容" desc:nil key:@"HideContent" isOn:config.hideContent cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"底部位置显示" desc:nil key:@"BottomPosition" isOn:config.bottomPosition cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"日期格式" key:@"DateFormat" value:config.dateFormat hint:kDefaultDateFormat cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"撤回消息显示模板" key:@"RevokeTemplate" value:config.revokeTemplate hint:@"空=默认格式；支持{name}{content}{time}" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"名称颜色" key:@"NameColorHex" value:config.nameColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"名称颜色(深色)" key:@"DarkNameColorHex" value:config.darkNameColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"时间颜色" key:@"TimeColorHex" value:config.timeColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"时间颜色(深色)" key:@"DarkTimeColorHex" value:config.darkTimeColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"内容颜色" key:@"ContentColorHex" value:config.contentColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"内容颜色(深色)" key:@"DarkContentColorHex" value:config.darkContentColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"自定义拦截文本" key:@"CustomText" value:config.customText hint:@"替换撤回提示中的文字" cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"自定义通知格式" key:@"CustomNotifyFormat" value:config.customNotifyFormat hint:kDefaultCustomNotifyFormat cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addSwitchRowInGroup:expand title:@"启用调试日志" desc:nil key:@"DebugLogging" isOn:config.debugLogging cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

@end