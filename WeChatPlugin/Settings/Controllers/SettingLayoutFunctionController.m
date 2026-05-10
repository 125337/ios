#import "../Common/SettingController.h"
#import "../../Config/PluginConfig.h"

@implementation SettingLayoutFunctionController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"界面布局";
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

    y = [self addSectionHeader:@"外观" y:y width:w];
    UIView *appearanceGroup = [self addTableGroupAtY:y width:w];
    CGFloat acy = 0;

    acy = [self addMasterSwitchRowInGroup:appearanceGroup
                                     title:@"自定义颜色"
                                       key:@"CustomColorsEnabled"
                                      isOn:config.customColorsEnabled
                                subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSubSectionLabelInGroup:expand text:@"浅色模式" cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"名称颜色" key:@"NameColorHex" value:config.nameColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"时间颜色" key:@"TimeColorHex" value:config.timeColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"内容颜色" key:@"ContentColorHex" value:config.contentColorHex cy:*ecy width:w];
        *ecy = [self addSubSectionLabelInGroup:expand text:@"深色模式" cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"名称颜色" key:@"DarkNameColorHex" value:config.darkNameColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"时间颜色" key:@"DarkTimeColorHex" value:config.darkTimeColorHex cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addColorRowInGroup:expand title:@"内容颜色" key:@"DarkContentColorHex" value:config.darkContentColorHex cy:*ecy width:w];
    } cy:acy width:w];

    y = [self finishGroup:appearanceGroup atY:y height:acy];
    y = [self addSectionFooter:@"颜色值使用 Hex 格式，如 #FA5151" y:y width:w];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

@end
