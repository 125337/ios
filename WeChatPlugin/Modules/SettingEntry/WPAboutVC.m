#import "../../Settings/Common/SettingCategoryController.h"
#import "WPCommonUI.h"
#import "../../Config/Constants.h"
#import "../../Core/LogManager.h"
#import "../../Config/WPColors.h"

@interface WPAboutVC : SettingCategoryController
@end

@implementation WPAboutVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"关于";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // Hero 卡片
    UIView *heroGroup = [self addTableGroupAtY:y width:w];
    CGFloat hy = 24;

    UILabel *nameLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, hy, w - kPad * 2, 30)];
    nameLabel.text = @"Mio助手";
    nameLabel.font = [UIFont systemFontOfSize:22 weight:UIFontWeightBold];
    nameLabel.textColor = WPAccent();
    nameLabel.textAlignment = NSTextAlignmentCenter;
    [heroGroup addSubview:nameLabel];
    [nameLabel release];
    hy += 34;

    UILabel *verLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, hy, w - kPad * 2, 20)];
    verLabel.text = @"v2.0.0";
    verLabel.font = [UIFont systemFontOfSize:13];
    verLabel.textColor = [UIColor colorWithRed:0.400 green:0.800 blue:0.451 alpha:1.0];
    verLabel.textAlignment = NSTextAlignmentCenter;
    [heroGroup addSubview:verLabel];
    [verLabel release];
    hy += 24;

    UILabel *descLabel = [[UILabel alloc] initWithFrame:CGRectMake(20, hy, w - kPad * 2 - 40, 40)];
    descLabel.text = @"模块化微信插件，支持自动抢红包、防撤回等功能";
    descLabel.font = [UIFont systemFontOfSize:13];
    descLabel.textColor = WPT3();
    descLabel.textAlignment = NSTextAlignmentCenter;
    descLabel.numberOfLines = 2;
    [heroGroup addSubview:descLabel];
    [descLabel release];
    hy += 48;

    y = [self finishGroup:heroGroup atY:y height:hy];

    // 架构
    y = [self addSectionHeader:@"架构" y:y width:w];

    UIView *archGroup = [self addTableGroupAtY:y width:w];
    CGFloat ay = 0;
    NSArray *archs = @[@[@"RedEnvelopHook", @"自动抢红包"],
                        @[@"PreventRecallHook", @"防撤回"],
                        @[@"HookEngine", @"Hook引擎"],
                        @[@"PluginConfig", @"配置中心"]];
    for (NSUInteger i = 0; i < archs.count; i++) {
        if (i > 0) ay = [self addSeparatorInGroup:archGroup cy:ay width:w];
        UILabel *leftLabel = [[UILabel alloc] initWithFrame:CGRectMake(kPad, ay, (w - kPad * 2) / 2, kRowH)];
        leftLabel.text = archs[i][0];
        leftLabel.font = [UIFont systemFontOfSize:15];
        leftLabel.textColor = WPT1();
        [archGroup addSubview:leftLabel];
        [leftLabel release];

        UILabel *rightLabel = [[UILabel alloc] initWithFrame:CGRectMake(kPad + (w - kPad * 2) / 2, ay, (w - kPad * 2) / 2, kRowH)];
        rightLabel.text = archs[i][1];
        rightLabel.font = [UIFont systemFontOfSize:13];
        rightLabel.textColor = WPT3();
        rightLabel.textAlignment = NSTextAlignmentRight;
        [archGroup addSubview:rightLabel];
        [rightLabel release];
        ay += kRowH;
    }
    y = [self finishGroup:archGroup atY:y height:ay];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] WPAboutVC buildUI done");
}

@end