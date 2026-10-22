#import "SettingCornerRadiusController.h"
#import "SettingListCornerRadiusController.h"
#import "SettingCardBackgroundController.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"

@implementation SettingCornerRadiusController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"圆角美化";
    [self wpReloadUI];
}

- (void)wpBuildRows {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    y = [self addSectionHeader:@"圆角美化" y:y width:w];

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    NSArray *items = @[
        @[@"列表圆角", @(200)],
        @[@"卡片背景", @(201)],
    ];

    for (NSUInteger i = 0; i < items.count; i++) {
        if (i > 0) {
            cy = [self addSeparatorInGroup:group cy:cy width:w];
        }
        NSInteger tag = [items[i][1] integerValue];
        cy = [self addNavRowInGroup:group
                              title:items[i][0]
                           subtitle:nil
                                tag:tag
                             action:@selector(navigateTo:)
                                 cy:cy width:w];
    }

    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] SettingCornerRadiusController wpBuildRows done");
}

- (void)navigateTo:(UIButton *)sender {
    NSInteger tag = sender.tag;
    UIViewController *subVC = nil;

    switch (tag) {
        case 200:
            subVC = [[SettingListCornerRadiusController alloc] init];
            break;
        case 201:
            subVC = [[SettingCardBackgroundController alloc] init];
            break;
    }

    if (subVC) {
        [self.navigationController pushViewController:subVC animated:YES];
    }
}

#pragma mark - 搜索自声明（首页搜索汇总遍历，见 SettingCategoryController.h）

+ (NSString *)wpSearchPageTitle {
    return @"圆角美化";
}

+ (NSArray<NSDictionary *> *)wpSearchItems {
    return @[
        @{ @"title": @"列表圆角", @"kw": @"列表 圆角 corner" },
        @{ @"title": @"卡片背景", @"kw": @"卡片 背景 card" },
    ];
}

@end