#import "../../Settings/Common/SettingCategoryController.h"
#import "../Layout/AttachLayoutConfig.h"
#import "../../Core/LogManager.h"
#import "../../Config/WPColors.h"

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

    AttachLayoutConfig *config = [AttachLayoutConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    y = [self addSectionHeader:@"附件布局优化" y:y width:w];

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"附件布局优化"
                                     key:@"attachLayoutEnabled"
                                    isOn:config.attachLayoutEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addInputRowInGroup:expand title:@"每行列数"
                                    key:@"attachLayoutColumns"
                                  value:config.attachLayoutColumns
                                   hint:@"5"
                              valueType:InputValueTypeNumber
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addInputRowInGroup:expand title:@"显示行数"
                                    key:@"attachLayoutRows"
                                  value:config.attachLayoutRows
                                   hint:@"2"
                              valueType:InputValueTypeNumber
                                    cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    if (!config.attachLayoutEnabled) {
        y = [self addSectionFooter:@"开启附件布局优化后可配置详细选项" y:y width:w];
    }

    WPLog(@"UI", @"[Sub] WPUIAttachmentLayoutVC buildUI done");
}

@end