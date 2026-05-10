#import "../Common/SettingController.h"

@implementation SettingUIBeautifyController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"界面美化";
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = [self addSectionHeader:@"开发中" y:0 width:w];
    UIView *group = [self addTableGroupAtY:y width:w];

    UILabel *ph = [[UILabel alloc] initWithFrame:CGRectMake(16, 10, w - 64, 30)];
    ph.text = @"圆角美化、菜单定制、截图边框等功能正在开发中";
    ph.font = [UIFont systemFontOfSize:12];
    ph.textColor = [UIColor secondaryLabelColor];
    ph.textAlignment = NSTextAlignmentCenter;
    [group addSubview:ph];

    y = [self finishGroup:group atY:y height:50];
    self.contentView.frame = CGRectMake(0, 0, w, y + 20);
    self.scrollView.contentSize = CGSizeMake(w, y + 20);
}

@end
