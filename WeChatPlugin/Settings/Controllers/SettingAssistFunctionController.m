#import "../Common/SettingController.h"

@implementation SettingAssistFunctionController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"辅助功能";
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = [self addSectionHeader:@"开发中" y:0 width:w];
    UIView *group = [self addTableGroupAtY:y width:w];

    UILabel *ph = [[UILabel alloc] initWithFrame:CGRectMake(16, 10, w - 64, 30)];
    ph.text = @"朋友圈监控、红包助手、文本替换等功能正在开发中";
    ph.font = [UIFont systemFontOfSize:12];
    ph.textColor = [UIColor secondaryLabelColor];
    ph.textAlignment = NSTextAlignmentCenter;
    [group addSubview:ph];

    y = [self finishGroup:group atY:y height:50];
    self.contentView.frame = CGRectMake(0, 0, w, y + 20);
    self.scrollView.contentSize = CGSizeMake(w, y + 20);
}

@end
