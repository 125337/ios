#import "../Common/SettingController.h"
#import "../../Config/Constants.h"

@implementation SettingAboutController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"关于";
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    UIView *heroCard = [[UIView alloc] initWithFrame:CGRectMake(16, y, w - 32, 120)];
    heroCard.backgroundColor = [UIColor whiteColor];
    heroCard.layer.cornerRadius = 12;
    if (@available(iOS 13.0, *)) heroCard.layer.cornerCurve = kCACornerCurveContinuous;
    heroCard.clipsToBounds = YES;
    [self.contentView addSubview:heroCard];

    UILabel *heroName = [[UILabel alloc] initWithFrame:CGRectMake(0, 24, w - 32, 26)];
    heroName.text = @"Mio助手";
    heroName.font = [UIFont systemFontOfSize:22 weight:UIFontWeightBold];
    heroName.textColor = [UIColor colorWithRed:0.2 green:0.78 blue:0.349 alpha:1.0];
    heroName.textAlignment = NSTextAlignmentCenter;
    [heroCard addSubview:heroName];

    UILabel *heroVersion = [[UILabel alloc] initWithFrame:CGRectMake(0, 54, w - 32, 18)];
    heroVersion.text = [NSString stringWithFormat:@"v%@", kPluginVersion];
    heroVersion.font = [UIFont systemFontOfSize:13];
    heroVersion.textColor = [UIColor colorWithRed:0.4 green:0.8 blue:0.451 alpha:1.0];
    heroVersion.textAlignment = NSTextAlignmentCenter;
    [heroCard addSubview:heroVersion];

    UILabel *heroDesc = [[UILabel alloc] initWithFrame:CGRectMake(20, 76, w - 52, 34)];
    heroDesc.text = @"模块化插件框架，支持防撤回、未读清零、外观自定义等功能";
    heroDesc.font = [UIFont systemFontOfSize:13];
    if (@available(iOS 13.0, *)) heroDesc.textColor = [UIColor tertiaryLabelColor];
    else heroDesc.textColor = [UIColor colorWithRed:0.722 green:0.722 blue:0.749 alpha:1.0];
    heroDesc.textAlignment = NSTextAlignmentCenter;
    heroDesc.numberOfLines = 2;
    [heroCard addSubview:heroDesc];
    y += 136;

    y = [self addSectionHeader:@"架构" y:y width:w];
    UIView *archGroup = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    NSArray *modules = @[
        @"RevokeHook", @"防撤回",
        @"TintHook", @"染色渲染",
        @"ClearUnreadHook", @"未读清零",
        @"HookEngine", @"Hook引擎",
        @"PluginConfig", @"配置中心"
    ];

    for (NSUInteger i = 0; i < modules.count; i += 2) {
        if (i > 0) cy = [self addSeparatorInGroup:archGroup cy:cy width:w];

        cy = [self addArchRowInGroup:archGroup name:modules[i] desc:modules[i+1] cy:cy width:w];
    }
    y = [self finishGroup:archGroup atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (CGFloat)addArchRowInGroup:(UIView *)group name:(NSString *)name desc:(NSString *)desc cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - 16 * 2;

    UILabel *nl = [[UILabel alloc] initWithFrame:CGRectMake(16 + 10, cy + 4, 140, 36)];
    nl.text = name;
    nl.font = [UIFont systemFontOfSize:15 weight:UIFontWeightMedium];
    if (@available(iOS 13.0, *)) nl.textColor = [UIColor labelColor];
    else nl.textColor = [UIColor blackColor];
    [group addSubview:nl];

    UILabel *dl = [[UILabel alloc] initWithFrame:CGRectMake(gw - 16 - 140, cy + 4, 140, 36)];
    dl.text = desc;
    dl.font = [UIFont systemFontOfSize:13];
    if (@available(iOS 13.0, *)) dl.textColor = [UIColor secondaryLabelColor];
    else dl.textColor = [UIColor colorWithRed:0.56 green:0.56 blue:0.58 alpha:1.0];
    dl.textAlignment = NSTextAlignmentRight;
    [group addSubview:dl];

    return cy + 44;
}

@end
