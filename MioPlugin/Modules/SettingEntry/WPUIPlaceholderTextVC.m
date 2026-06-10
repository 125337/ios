#import "../../Settings/Common/SettingCategoryController.h"
#import "../PlaceholderText/PlaceholderTextConfig.h"
#import "../../Core/LogManager.h"
#import "../../Config/WPColors.h"

@interface WPUIPlaceholderTextVC : SettingCategoryController
@end

@implementation WPUIPlaceholderTextVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"文本占位";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    PlaceholderTextConfig *config = [PlaceholderTextConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    y = [self addSectionHeader:@"占位文本设置" y:y width:w];

    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"显示占位文本"
                                     key:@"placeholderTextEnabled"
                                    isOn:config.placeholderTextEnabled
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        // 占位文本内容
        *ecy = [self addInputRowInGroup:expand title:@"占位文本"
                                    key:@"placeholderTextText"
                                  value:config.placeholderTextText
                                   hint:@""
                              valueType:InputValueTypeText
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 使用粗体文字
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"使用粗体文字"
                                        key:@"placeholderTextBold"
                                       isOn:config.placeholderTextBold
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 字体大小
        NSString *fontSizeStr = config.placeholderTextFontSize > 0
            ? [NSString stringWithFormat:@"%.0f", config.placeholderTextFontSize] : nil;
        *ecy = [self addInputRowInGroup:expand title:@"字体大小"
                                    key:@"placeholderTextFontSize"
                                  value:fontSizeStr
                                   hint:@"14"
                              valueType:InputValueTypeNumber
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 字体颜色
        *ecy = [self addColorRowInGroup:expand
                                  title:@"字体颜色"
                                    key:@"placeholderTextColorHex"
                                  value:config.placeholderTextColorHex
                                     cy:*ecy width:w
                               darkKey:nil darkValue:nil];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 文字透明度
        NSString *alphaStr = config.placeholderTextAlpha > 0
            ? [NSString stringWithFormat:@"%.2f", config.placeholderTextAlpha] : nil;
        *ecy = [self addInputRowInGroup:expand title:@"文字透明度"
                                    key:@"placeholderTextAlpha"
                                  value:alphaStr
                                   hint:@"1.0"
                              valueType:InputValueTypeNumber
                                    cy:*ecy width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    if (!config.placeholderTextEnabled) {
        UILabel *hint = [[UILabel alloc] initWithFrame:CGRectMake(16, y, w - 32, 16)];
        hint.text = @"开启后可自定义输入框占位文本样式";
        hint.font = [UIFont systemFontOfSize:12];
        hint.textColor = WPTextTertiaryColor();
        [self.contentView addSubview:hint];
        y += 20;
    }

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] WPUIPlaceholderTextVC buildUI done");
}

@end