#import "../../Settings/Common/SettingCategoryController.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"

@interface WPUIAttachmentLayoutVC : SettingCategoryController
@end

@implementation WPUIAttachmentLayoutVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"附件布局优化";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    y = [self addSectionHeader:@"附件布局优化" y:y width:w];

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"附件布局优化"
                                     key:@"AttachLayoutEnabled"
                                    isOn:config.attachLayoutEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addInputRowInGroup:expand title:@"每行列数"
                                    key:@"attachLayoutColumns"
                                  value:config.attachLayoutColumns
                                   hint:@"3"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"显示行数"
                                    key:@"attachLayoutRows"
                                  value:config.attachLayoutRows
                                   hint:@"自动"
                                    cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    if (!config.attachLayoutEnabled) {
        UILabel *hint = [[UILabel alloc] initWithFrame:CGRectMake(16, y, w - 32, 16)];
        hint.text = @"开启附件布局优化后可配置详细选项";
        hint.font = [UIFont systemFontOfSize:12];
        hint.textColor = [UIColor colorWithRed:0.722 green:0.722 blue:0.749 alpha:1.0];
        [self.contentView addSubview:hint];
        [hint release];
        y += 20;
    }

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] WPUIAttachmentLayoutVC buildUI done");
}

@end