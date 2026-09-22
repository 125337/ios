#import "SettingAboutController.h"
#import "../../Settings/Common/WPWeChatTable.h"
#import "../../Config/Constants.h"
#import "../../Config/WPColors.h"
#import "../../Core/LogManager.h"

@implementation SettingAboutController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"关于";
    [self loadAboutView];
}

// 全微信引擎：hero 卡 = 自定义视图行（WPWCViewCell），架构行 = 信息行
- (void)loadAboutView {
    CGFloat w = [UIScreen mainScreen].bounds.size.width;

    // ===== Hero 卡片（自定义视图行） =====
    UIView *heroGroup = [self addTableGroupAtY:0 width:w];
    if (heroGroup) {
        CGFloat heroH = 120;
        UIView *heroView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, w, heroH)];
        heroView.backgroundColor = [UIColor clearColor];

        UILabel *heroName = [[UILabel alloc] initWithFrame:CGRectMake(0, 24, w, 26)];
        heroName.text = @"Mio助手";
        heroName.font = [UIFont systemFontOfSize:22 weight:UIFontWeightBold];
        heroName.textColor = WPAccentColor();
        heroName.textAlignment = NSTextAlignmentCenter;
        [heroView addSubview:heroName];

        UILabel *heroVersion = [[UILabel alloc] initWithFrame:CGRectMake(0, 54, w, 18)];
        heroVersion.text = [NSString stringWithFormat:@"v%@", kPluginVersion];
        heroVersion.font = [UIFont systemFontOfSize:13];
        heroVersion.textColor = [UIColor colorWithRed:0.4 green:0.8 blue:0.451 alpha:1.0];
        heroVersion.textAlignment = NSTextAlignmentCenter;
        [heroView addSubview:heroVersion];

        UILabel *heroDesc = [[UILabel alloc] initWithFrame:CGRectMake(20, 76, w - 40, 34)];
        heroDesc.text = @"模块化插件框架，支持防撤回、未读清零、外观自定义等功能";
        heroDesc.font = [UIFont systemFontOfSize:13];
        heroDesc.textColor = WPTextTertiaryColor();
        heroDesc.textAlignment = NSTextAlignmentCenter;
        heroDesc.numberOfLines = 2;
        [heroView addSubview:heroDesc];

        id cell = WPWCViewCell((SEL)0, self, @"", heroView);
        if (cell) [(WPWGroup *)heroGroup addCell:cell];
        [self finishGroup:heroGroup atY:0 height:0];
    }

    // ===== 架构（信息行） =====
    [self addSectionHeader:@"架构" y:0 width:w];
    UIView *archGroup = [self addTableGroupAtY:0 width:w];
    CGFloat cy = 0;
    NSArray *modules = @[
        @"RevokeHook", @"防撤回",
        @"ClearUnreadHook", @"未读清零",
        @"MioSubstrate", @"Hook引擎",
        @"MioPlugin", @"配置中心"
    ];

    for (NSUInteger i = 0; i < modules.count; i += 2) {
        cy = [self addInfoRowInGroup:archGroup title:modules[i] rightValue:modules[i + 1] copyText:nil cy:cy width:w];
    }
    [self finishGroup:archGroup atY:0 height:cy];
}

@end
