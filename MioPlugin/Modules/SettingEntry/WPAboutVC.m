// 关于页 - 渲染：全微信引擎（hero 卡 = 自定义视图行 WPWCViewCell，架构行 = 信息行）

#import "WPAboutVC.h"
#import "../../Settings/Common/WPWeChatTable.h"
#import "../../Config/Constants.h"
#import "../../Core/LogManager.h"
#import "../../Config/WPColors.h"

@implementation WPAboutVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"关于";
    [self buildUI];
}

- (void)buildUI {
    CGFloat w = [UIScreen mainScreen].bounds.size.width;

    // ── Hero：自定义视图行（WPWCViewCell，点击无动作） ──
    UIView *heroGroup = [self addTableGroupAtY:0 width:w];
    if (heroGroup) {
        CGFloat heroH = 130;
        UIView *heroView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, w, heroH)];
        heroView.backgroundColor = [UIColor clearColor];

        UILabel *nameLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 24, w, 30)];
        nameLabel.text = @"Mio助手";
        nameLabel.font = [UIFont systemFontOfSize:22 weight:UIFontWeightBold];
        nameLabel.textColor = WPAccentColor();
        nameLabel.textAlignment = NSTextAlignmentCenter;
        [heroView addSubview:nameLabel];

        UILabel *verLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, 58, w, 20)];
        verLabel.text = @"v2.0.0";
        verLabel.font = [UIFont systemFontOfSize:13];
        verLabel.textColor = [UIColor colorWithRed:0.400 green:0.800 blue:0.451 alpha:1.0];
        verLabel.textAlignment = NSTextAlignmentCenter;
        [heroView addSubview:verLabel];

        UILabel *descLabel = [[UILabel alloc] initWithFrame:CGRectMake(20, 84, w - 40, 34)];
        descLabel.text = @"模块化微信插件，支持自动抢红包、防撤回等功能";
        descLabel.font = [UIFont systemFontOfSize:13];
        descLabel.textColor = WPTextTertiaryColor();
        descLabel.textAlignment = NSTextAlignmentCenter;
        descLabel.numberOfLines = 2;
        [heroView addSubview:descLabel];

        id cell = WPWCViewCell((SEL)0, self, @"", heroView);
        if (cell) [(WPWGroup *)heroGroup addCell:cell];
        [self finishGroup:heroGroup atY:0 height:0];
    }

    // ── 架构：信息行 ──
    [self addSectionHeader:@"架构" y:0 width:w];
    UIView *archGroup = [self addTableGroupAtY:0 width:w];
    CGFloat ay = 0;
    NSArray *archs = @[@[@"RedEnvelopHook", @"自动抢红包"],
                        @[@"PreventRecallHook", @"防撤回"],
                        @[@"MioSubstrate", @"Hook引擎"],
                        @[@"MioPlugin", @"配置中心"]];
    for (NSUInteger i = 0; i < archs.count; i++) {
        ay = [self addInfoRowInGroup:archGroup title:archs[i][0] rightValue:archs[i][1] copyText:nil cy:ay width:w];
    }
    [self finishGroup:archGroup atY:0 height:0];

    WPLog(@"UI", @"[Sub] WPAboutVC buildUI done");
}

@end
