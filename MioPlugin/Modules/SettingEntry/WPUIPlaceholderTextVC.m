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
    [self wpReloadUI];
}

- (void)wpBuildRows {
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
                               darkKey:@"placeholderTextColorHexDark"
                             darkValue:(config.placeholderTextColorHexDark ?: @"")
                            allowClear:YES];
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
        y = [self addSectionFooter:@"开启后可自定义输入框占位文本样式" y:y width:w];
    }

    WPLog(@"UI", @"[Sub] WPUIPlaceholderTextVC wpBuildRows done");
}

#pragma mark - 搜索自声明（首页搜索汇总遍历，见 SettingCategoryController.h）

+ (NSString *)wpSearchPageTitle {
    return @"文本占位";
}

+ (NSArray<NSDictionary *> *)wpSearchItems {
    return @[
        @{ @"title": @"输入框占位文本", @"kw": @"占位 输入框 文本 提示 placeholder" },
        @{ @"title": @"显示占位文本", @"kw": @"占位 文本 显示 输入框" },
        @{ @"title": @"占位文本", @"kw": @"占位 文本 内容 placeholder" },
        @{ @"title": @"使用粗体文字", @"kw": @"粗体 文字 字体 bold" },
        @{ @"title": @"字体大小", @"kw": @"字体 大小 font size" },
        @{ @"title": @"字体颜色", @"kw": @"字体 颜色 color" },
        @{ @"title": @"文字透明度", @"kw": @"透明度 文字 alpha" },
    ];
}

@end