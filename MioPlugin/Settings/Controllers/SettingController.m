#import "SettingController.h"
#import "../../Config/Constants.h"
#import "../../Config/WPColors.h"
#import "../../Core/LogManager.h"

@implementation SettingController

- (void)viewDidLoad {
    WPLog(@"Setting", @"[UI] SettingController viewDidLoad 开始");
    @try {
        [super viewDidLoad];
        self.title = @"Mio助手";
        WPLog(@"Setting", @"[UI] scrollView=%@ contentView=%@", self.scrollView ? @"有" : @"无", self.contentView ? @"有" : @"无");
        
        CGFloat w = [UIScreen mainScreen].bounds.size.width;
        CGFloat y = 0;

        UIView *heroCard = [[UIView alloc] initWithFrame:CGRectMake(16, y, w - 32, 130)];
        heroCard.backgroundColor = WPCardBackgroundColor();
        heroCard.layer.cornerRadius = 10;
        if (@available(iOS 13.0, *)) heroCard.layer.cornerCurve = kCACornerCurveContinuous;
        heroCard.clipsToBounds = YES;
        [self.contentView addSubview:heroCard];

        UIView *avatar = [[UIView alloc] initWithFrame:CGRectMake((w - 32 - 80) / 2, 20, 80, 80)];
        avatar.backgroundColor = [UIColor colorWithRed:0.851 green:0.851 blue:0.859 alpha:1.0];
        avatar.layer.cornerRadius = 40;
        [heroCard addSubview:avatar];

        UILabel *heroName = [[UILabel alloc] initWithFrame:CGRectMake(0, 108, w - 32, 26)];
        heroName.text = @"Mio助手";
        heroName.font = [UIFont systemFontOfSize:22 weight:UIFontWeightBold];
        heroName.textColor = WPAccentColor();
        heroName.textAlignment = NSTextAlignmentCenter;
        [heroCard addSubview:heroName];
        y += 146;

        y = [self addSectionHeader:@"功能列表" y:y width:w];

        UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(0, y + 12, w, 40)];
        footer.text = @"Mio助手 © 2024 ~ 2026\nDeveloped with <3\nAll Rights Reserved";
        footer.font = [UIFont systemFontOfSize:12];
        footer.textColor = WPTextTertiaryColor();
        footer.textAlignment = NSTextAlignmentCenter;
        footer.numberOfLines = 3;
        [self.contentView addSubview:footer];

        self.contentView.frame = CGRectMake(0, 0, w, y + 60);
        self.scrollView.contentSize = CGSizeMake(w, y + 60);
        WPLog(@"Setting", @"[UI] SettingController viewDidLoad 完成");
    } @catch (NSException *e) {
        WPLog(@"Setting", @"[UI] SettingController viewDidLoad 异常: %@ - %@", e.name, e.reason);
    }
}

@end