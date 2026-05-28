#import "../../Settings/Common/SettingCategoryController.h"
#import "../../Settings/Common/SettingController.h"
#import "../../Settings/Controllers/SettingChatTopBarController.h"
#import "../../Settings/Controllers/SettingNameColorController.h"
#import "../../Core/LogManager.h"

@interface WPUIVC : SettingCategoryController
@end

@implementation WPUIVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"界面定制";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    y = [self addSectionHeader:@"界面定制" y:y width:w];

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    NSArray *items = @[
        @[@"聊天顶栏", @(100)],
        @[@"名字颜色", @(101)],
        @[@"附件布局", @(102)],
        @[@"文本占位", @(103)],
        @[@"界面简化", @(104)],
        @[@"界面净化", @(105)],
        @[@"隐藏头像", @(106)],
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
    WPLog(@"UI", @"[Sub] WPUIVC buildUI done");
}

- (void)navigateTo:(UIButton *)sender {
    NSInteger tag = sender.tag;
    UIViewController *subVC = nil;

    switch (tag) {
        case 100:
            subVC = [[SettingChatTopBarController alloc] init];
            break;
        case 101:
            subVC = [[SettingNameColorController alloc] init];
            break;
        case 102:
            subVC = [[NSClassFromString(@"WPUIAttachmentLayoutVC") alloc] init];
            break;
        case 103:
            subVC = [[NSClassFromString(@"WPUIPlaceholderTextVC") alloc] init];
            break;
        
        case 105:
            subVC = [[NSClassFromString(@"WPUIPurifyVC") alloc] init];
            break;
        case 106:
            subVC = [[SettingAvatarHideController alloc] init];
            break;
    }

    if (subVC) {
        [self.navigationController pushViewController:subVC animated:YES];
        [subVC release];
    }
}

@end