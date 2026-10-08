#import "HomeCardVC.h"
#import "HomeCardConfig.h"
#import "../../Settings/Controllers/MioContactPicker.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/MioAlertHelper.h"
#import "../../Core/MioImageVault.h"
#import "../SettingEntry/WPCommonUI.h"
#import <PhotosUI/PhotosUI.h>
#import <MobileCoreServices/MobileCoreServices.h>

// 图片选择目标：0 = 浅色模式，1 = 深色模式
typedef NS_ENUM(NSInteger, HomeCardPickerTarget) {
    HomeCardPickerLight = 0,
    HomeCardPickerDark  = 1,
};

@interface HomeCardVC () <PHPickerViewControllerDelegate, MioContactPickerDelegate>
@property (nonatomic, assign) HomeCardPickerTarget pickerTarget;
@end

@implementation HomeCardVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"首页卡片";
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    HomeCardConfig *config = [HomeCardConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ──── 卡片1：基础设置（启用卡片 = 整页总开关，子配置行常显，非手风琴） ────
    y = [self addSectionHeader:@"基础设置" y:y width:w];
    UIView *g1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addSwitchRowInGroup:g1
                             title:@"启用卡片"
                              desc:nil
                               key:@"hcEnabled"
                              isOn:config.hcEnabled
                                cy:cy
                             width:w];

    y = [self finishGroup:g1 atY:y height:cy];
    y += 8;

    // ──── 卡片2：卡片图片（浅/深色独立，同卡片背景页的图片上传方式） ────
    y = [self addSectionHeader:@"卡片图片" y:y width:w];
    UIView *g2 = [self addTableGroupAtY:y width:w];
    cy = 0;

    NSString *lightSub = [HomeCardConfig hasLightImage] ? @"已设置" : @"未设置";
    cy = [self addNavRowInGroup:g2
                          title:@"浅色模式"
                       subtitle:lightSub
                            tag:0
                         action:@selector(onLightImageTap)
                             cy:cy
                          width:w];
    cy = [self addSeparatorInGroup:g2 cy:cy width:w];

    NSString *darkSub = [HomeCardConfig hasDarkImage] ? @"已设置" : @"未设置";
    cy = [self addNavRowInGroup:g2
                          title:@"深色模式"
                       subtitle:darkSub
                            tag:1
                         action:@selector(onDarkImageTap)
                             cy:cy
                          width:w];

    y = [self finishGroup:g2 atY:y height:cy];
    y += 8;

    // ──── 卡片3：卡片数值（XOS CadisCard* 同构参数） ────
    y = [self addSectionHeader:@"卡片数值" y:y width:w];
    UIView *g3 = [self addTableGroupAtY:y width:w];
    cy = 0;

    // 卡片高度（默认 100，<=0 按 100 处理）
    cy = [self addInputRowInGroup:g3
                            title:@"卡片高度"
                              key:@"hcCardHeight"
                            value:config.hcCardHeight != 100 ? [self numText:config.hcCardHeight] : nil
                             hint:@"100"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置卡片高度"
                     alertMessage:@"卡片高度，0 或留空按默认 100 处理"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g3 cy:cy width:w];

    // 卡片Y偏移（默认 0）
    cy = [self addInputRowInGroup:g3
                            title:@"卡片Y偏移"
                              key:@"hcCardOffsetY"
                            value:config.hcCardOffsetY != 0 ? [self numText:config.hcCardOffsetY] : nil
                             hint:@"0"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置卡片Y偏移"
                     alertMessage:@"卡片Y偏移，可为负"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g3 cy:cy width:w];

    // 底部占位修正（默认 0）
    cy = [self addInputRowInGroup:g3
                            title:@"底部占位修正"
                              key:@"hcCardBottomFix"
                            value:config.hcCardBottomFix != 0 ? [self numText:config.hcCardBottomFix] : nil
                             hint:@"0"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置底部占位修正"
                     alertMessage:@"header 高度追加量，可为负"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g3 cy:cy width:w];

    // 卡片边距（默认 16）
    cy = [self addInputRowInGroup:g3
                            title:@"卡片边距"
                              key:@"hcCardMargin"
                            value:config.hcCardMargin != 16 ? [self numText:config.hcCardMargin] : nil
                             hint:@"16"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置卡片边距"
                     alertMessage:@"卡片左右边距"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g3 cy:cy width:w];

    // 边框粗细（默认 0 = 无边框）
    cy = [self addInputRowInGroup:g3
                            title:@"边框粗细"
                              key:@"hcBorderWidth"
                            value:config.hcBorderWidth != 0 ? [self numText:config.hcBorderWidth] : nil
                             hint:@"0.0"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置边框粗细"
                     alertMessage:@"边框粗细，0 为无边框"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g3 cy:cy width:w];

    // 边框颜色（颜色选择器，浅/深色双预览，同消息时间设置）
    cy = [self addColorRowInGroup:g3
                            title:@"边框颜色"
                              key:@"hcBorderColor"
                            value:(config.hcBorderColor.length > 0 ? config.hcBorderColor : nil)
                               cy:cy
                            width:w
                          darkKey:@"hcBorderColorDark"
                        darkValue:(config.hcBorderColorDark.length > 0 ? config.hcBorderColorDark : nil)];
    cy = [self addSeparatorInGroup:g3 cy:cy width:w];

    // 背景颜色（颜色选择器，浅/深色双预览，同消息时间设置）
    cy = [self addColorRowInGroup:g3
                            title:@"背景颜色"
                              key:@"hcCardBgColor"
                            value:(config.hcCardBgColor.length > 0 ? config.hcCardBgColor : nil)
                               cy:cy
                            width:w
                          darkKey:@"hcCardBgColorDark"
                        darkValue:(config.hcCardBgColorDark.length > 0 ? config.hcCardBgColorDark : nil)];

    y = [self finishGroup:g3 atY:y height:cy];
    y += 8;

    // ──── 卡片4：天气（XOS CadisWeather* 同构：Mode/Pos/OffsetX/OffsetY/Alpha/Color） ────
    y = [self addSectionHeader:@"天气" y:y width:w];
    UIView *g4 = [self addTableGroupAtY:y width:w];
    cy = 0;

    cy = [self addSwitchRowInGroup:g4
                             title:@"显示天气"
                              desc:nil
                               key:@"hcWeatherEnabled"
                              isOn:config.hcWeatherEnabled
                                cy:cy
                             width:w];
    cy = [self addSeparatorInGroup:g4 cy:cy width:w];

    // 显示位置（XOS CadisWeatherPos：0卡片内 1日历内 2联系人内，分段选择器同电报分组）
    cy = [self addSegmentRowInGroup:g4
                              title:@"显示位置"
                                key:@"hcWeatherPos"
                              names:@[@"卡片内部", @"日历内部", @"联系人内部"]
                              index:config.hcWeatherPos
                                 cy:cy
                              width:w];
    cy = [self addSeparatorInGroup:g4 cy:cy width:w];

    // X位置（百分比，默认 85 = CadisWeatherOffsetX 未设兜底）
    cy = [self addInputRowInGroup:g4
                            title:@"X位置"
                              key:@"hcWeatherX"
                            value:config.hcWeatherX != 85 ? [self numText:config.hcWeatherX] : nil
                             hint:@"85"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置X位置"
                     alertMessage:@"天气水平位置百分比（0-100），默认 85"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g4 cy:cy width:w];

    // Y位置（百分比，默认 5 = CadisWeatherOffsetY 未设兜底 5.0）
    cy = [self addInputRowInGroup:g4
                            title:@"Y位置"
                              key:@"hcWeatherY"
                            value:config.hcWeatherY != 5 ? [self numText:config.hcWeatherY] : nil
                             hint:@"5"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置Y位置"
                     alertMessage:@"天气垂直位置百分比（0-100），默认 5"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g4 cy:cy width:w];

    // 透明度（0-100，应用时 /100，XOS FUN_0014b634：存 90 → alpha 0.9）
    cy = [self addInputRowInGroup:g4
                            title:@"透明度"
                              key:@"hcWeatherAlpha"
                            value:config.hcWeatherAlpha != 90 ? [self numText:config.hcWeatherAlpha] : nil
                             hint:@"90"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置透明度"
                     alertMessage:@"天气背景透明度（0-100），默认 90"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g4 cy:cy width:w];

    // 背景颜色（XOS CadisWeatherColor 药丸底色，浅/深双预览）
    cy = [self addColorRowInGroup:g4
                            title:@"背景颜色"
                              key:@"hcWeatherBgColor"
                            value:(config.hcWeatherBgColor.length > 0 ? config.hcWeatherBgColor : nil)
                               cy:cy
                            width:w
                          darkKey:@"hcWeatherBgColorDark"
                        darkValue:(config.hcWeatherBgColorDark.length > 0 ? config.hcWeatherBgColorDark : nil)];

    y = [self finishGroup:g4 atY:y height:cy];
    y += 8;

    // ──── 卡片5：日历（XOS CadisCalendar* 同构：Mode/Pos/OffsetY/BgHeight/ContentScale/三色） ────
    y = [self addSectionHeader:@"日历" y:y width:w];
    UIView *g5 = [self addTableGroupAtY:y width:w];
    cy = 0;

    cy = [self addSwitchRowInGroup:g5
                             title:@"显示日历"
                              desc:nil
                               key:@"hcCalEnabled"
                              isOn:config.hcCalEnabled
                                cy:cy
                             width:w];
    cy = [self addSeparatorInGroup:g5 cy:cy width:w];

    // 显示位置（XOS CadisCalendarPos：0上 1中 2下，未设默认 1）
    cy = [self addSegmentRowInGroup:g5
                              title:@"显示位置"
                                key:@"hcCalPos"
                              names:@[@"卡片上方", @"卡片中", @"卡片下方"]
                              index:config.hcCalPos
                                 cy:cy
                              width:w];
    cy = [self addSeparatorInGroup:g5 cy:cy width:w];

    // Y位置（百分比，默认 50 = CadisCalendarOffsetY 未设兜底 50.0，仅"卡片中"生效）
    cy = [self addInputRowInGroup:g5
                            title:@"Y位置"
                              key:@"hcCalY"
                            value:config.hcCalY != 50 ? [self numText:config.hcCalY] : nil
                             hint:@"50"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置Y位置"
                     alertMessage:@"日历垂直位置百分比（0-100），默认 50，显示位置为卡片中时生效"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g5 cy:cy width:w];

    // 背景高度（默认 0，日历总高 = 值 + 128，CadisCalendarBgHeight）
    cy = [self addInputRowInGroup:g5
                            title:@"背景高度"
                              key:@"hcCalBgHeight"
                            value:config.hcCalBgHeight != 0 ? [self numText:config.hcCalBgHeight] : nil
                             hint:@"0"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置背景高度"
                     alertMessage:@"日历额外背景高度，默认 0（总高 = 值 + 128）"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g5 cy:cy width:w];

    // 内容缩放（百分比，默认 100，应用钳制 50-200；预览数值带 %）
    cy = [self addInputRowInGroup:g5
                            title:@"内容缩放"
                              key:@"hcCalScale"
                            value:(config.hcCalScale != 100
                                       ? [NSString stringWithFormat:@"%@%%", [self numText:config.hcCalScale]]
                                       : nil)
                             hint:@"100%"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置内容缩放"
                     alertMessage:@"日历内容缩放百分比（50-200），默认 100"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g5 cy:cy width:w];

    // 背景颜色（XOS CadisCalendarColor）
    cy = [self addColorRowInGroup:g5
                            title:@"背景颜色"
                              key:@"hcCalBgColor"
                            value:(config.hcCalBgColor.length > 0 ? config.hcCalBgColor : nil)
                               cy:cy
                            width:w
                          darkKey:@"hcCalBgColorDark"
                        darkValue:(config.hcCalBgColorDark.length > 0 ? config.hcCalBgColorDark : nil)];
    cy = [self addSeparatorInGroup:g5 cy:cy width:w];

    // 节假日颜色（XOS CadisCalendarAccentColor，周末/节假日日期色）
    cy = [self addColorRowInGroup:g5
                            title:@"节假日颜色"
                              key:@"hcCalHolidayColor"
                            value:(config.hcCalHolidayColor.length > 0 ? config.hcCalHolidayColor : nil)
                               cy:cy
                            width:w
                          darkKey:@"hcCalHolidayColorDark"
                        darkValue:(config.hcCalHolidayColorDark.length > 0 ? config.hcCalHolidayColorDark : nil)];
    cy = [self addSeparatorInGroup:g5 cy:cy width:w];

    // 选中日期颜色（XOS CadisCalendarSelectedColor，今天圆点底色）
    cy = [self addColorRowInGroup:g5
                            title:@"选中日期颜色"
                              key:@"hcCalSelectedColor"
                            value:(config.hcCalSelectedColor.length > 0 ? config.hcCalSelectedColor : nil)
                               cy:cy
                            width:w
                          darkKey:@"hcCalSelectedColorDark"
                        darkValue:(config.hcCalSelectedColorDark.length > 0 ? config.hcCalSelectedColorDark : nil)];

    y = [self finishGroup:g5 atY:y height:cy];
    y += 8;

    // ──── 卡片6：联系人（XOS CadisContact* 同构：Mode/Pos/OffsetY/Spacing/Color/头像参数） ────
    y = [self addSectionHeader:@"联系人" y:y width:w];
    UIView *g6 = [self addTableGroupAtY:y width:w];
    cy = 0;

    cy = [self addSwitchRowInGroup:g6
                             title:@"联系人模式"
                              desc:nil
                               key:@"hcContactEnabled"
                              isOn:config.hcContactEnabled
                                cy:cy
                             width:w];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    cy = [self addSwitchRowInGroup:g6
                             title:@"隐藏昵称"
                              desc:nil
                               key:@"hcContactHideNick"
                              isOn:config.hcContactHideNick
                                cy:cy
                             width:w];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    // 显示位置（XOS CadisContactPos：0上 1中 2下，未设默认 0）
    cy = [self addSegmentRowInGroup:g6
                              title:@"显示位置"
                                key:@"hcContactPos"
                              names:@[@"卡片上方", @"卡片中", @"卡片下方"]
                              index:config.hcContactPos
                                 cy:cy
                              width:w];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    // Y位置（百分比，默认 50，仅"卡片中"生效，CadisContactOffsetY）
    cy = [self addInputRowInGroup:g6
                            title:@"Y位置"
                              key:@"hcContactY"
                            value:config.hcContactY != 50 ? [self numText:config.hcContactY] : nil
                             hint:@"50"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置Y位置"
                     alertMessage:@"联系人垂直位置百分比（0-100），默认 50，显示位置为卡片中时生效"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    // 与卡片间距（默认 10，显示位置为上/下方时生效）
    cy = [self addInputRowInGroup:g6
                            title:@"与卡片间距"
                              key:@"hcContactSpacing"
                            value:config.hcContactSpacing != 10 ? [self numText:config.hcContactSpacing] : nil
                             hint:@"10"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置与卡片间距"
                     alertMessage:@"联系人挂件与卡片的间距，默认 10，显示位置为卡片上方/下方时生效"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    // 背景颜色（XOS CadisContactColor，浅/深双预览）
    cy = [self addColorRowInGroup:g6
                            title:@"背景颜色"
                              key:@"hcContactBgColor"
                            value:(config.hcContactBgColor.length > 0 ? config.hcContactBgColor : nil)
                               cy:cy
                            width:w
                          darkKey:@"hcContactBgColorDark"
                        darkValue:(config.hcContactBgColorDark.length > 0 ? config.hcContactBgColorDark : nil)];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    // 头像大小（默认 48，应用钳 ≥20，CadisContactAvatarSize）
    cy = [self addInputRowInGroup:g6
                            title:@"头像大小"
                              key:@"hcContactAvatarSize"
                            value:config.hcContactAvatarSize != 48 ? [self numText:config.hcContactAvatarSize] : nil
                             hint:@"48"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置头像大小"
                     alertMessage:@"头像尺寸（最小 20），默认 48"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    // 头像间距（pt，默认 3）
    cy = [self addInputRowInGroup:g6
                            title:@"头像间距"
                              key:@"hcContactAvatarSpacing"
                            value:config.hcContactAvatarSpacing != 3 ? [self numText:config.hcContactAvatarSpacing] : nil
                             hint:@"3"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置头像间距"
                     alertMessage:@"头像之间间距，默认 3"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    // 显示数量（XOS CadisContactMaxVisible：5/6，应用钳 5-6，默认 5）
    cy = [self addSegmentRowInGroup:g6
                              title:@"显示数量"
                                key:@"hcContactMaxVisible"
                              names:@[@"5个", @"6个"]
                              index:(config.hcContactMaxVisible == 6 ? 1 : 0)
                                 cy:cy
                              width:w];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    cy = [self addSwitchRowInGroup:g6
                             title:@"在线状态"
                              desc:nil
                               key:@"hcContactOnline"
                              isOn:config.hcContactOnline
                                cy:cy
                             width:w];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    // 在线圆点颜色（空 = 微信绿 #07C160 兜底，浅/深双预览）
    cy = [self addColorRowInGroup:g6
                            title:@"在线圆点颜色"
                              key:@"hcContactDotColor"
                            value:(config.hcContactDotColor.length > 0 ? config.hcContactDotColor : nil)
                               cy:cy
                            width:w
                          darkKey:@"hcContactDotColorDark"
                        darkValue:(config.hcContactDotColorDark.length > 0 ? config.hcContactDotColorDark : nil)];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    // 在线圆点位置（弹出选择器：0右下 1右上 2左上 3左下，CadisContactOnlineDotPosition）
    NSString *dotName = @[@"右下角", @"右上角", @"左上角", @"左下角"][
        MIN(MAX(config.hcContactDotPos, 0), 3)];
    cy = [self addNavRowInGroup:g6
                          title:@"在线圆点位置"
                       subtitle:dotName
                            tag:0
                         action:@selector(onDotPosTap)
                             cy:cy
                          width:w];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    cy = [self addSwitchRowInGroup:g6
                             title:@"全屏显示聊天"
                              desc:nil
                               key:@"hcContactFullScreen"
                              isOn:config.hcContactFullScreen
                                cy:cy
                             width:w];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    // 背景高度（默认 0，总高 = 基础60/80 + 值，CadisContactBgHeight）
    cy = [self addInputRowInGroup:g6
                            title:@"背景高度"
                              key:@"hcContactBgHeight"
                            value:config.hcContactBgHeight != 0 ? [self numText:config.hcContactBgHeight] : nil
                             hint:@"0"
                        valueType:InputValueTypeNumber
                       alertTitle:@"设置背景高度"
                     alertMessage:@"联系人额外背景高度，默认 0（总高 = 基础高度 + 值）"
                               cy:cy
                            width:w];
    cy = [self addSeparatorInGroup:g6 cy:cy width:w];

    // 管理联系人（多选+顺序保存，返回后刷新行文案）
    NSUInteger savedCount = [HomeCardConfig savedContacts].count;
    cy = [self addNavRowInGroup:g6
                          title:@"管理联系人"
                       subtitle:(savedCount > 0
                                 ? [NSString stringWithFormat:@"已选 %lu 位（按选择顺序）", (unsigned long)savedCount]
                                 : @"未选择（未选择时不显示挂件）")
                            tag:0
                         action:@selector(onManageContactsTap)
                             cy:cy
                          width:w];

    y = [self finishGroup:g6 atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

#pragma mark - 联系人（圆点位置弹出选择 / 管理联系人）

- (void)onDotPosTap {
    HomeCardConfig *config = [HomeCardConfig shared];
    NSArray<NSString *> *names = @[@"右下角", @"右上角", @"左上角", @"左下角"];
    NSMutableArray<NSString *> *btns = [NSMutableArray arrayWithCapacity:names.count];
    for (NSInteger i = 0; i < (NSInteger)names.count; i++) {
        [btns addObject:(i == config.hcContactDotPos)
            ? [NSString stringWithFormat:@"✓ %@", names[i]] : names[i]];
    }
    [MioAlertHelper showMenuAlert:@"选择圆点位置" buttons:btns onButton:^(NSInteger index) {
        [HomeCardConfig shared].hcContactDotPos = index;   // 取消不回调，index 恒 0-3
        [ConfigManager saveAll];
        [self wpRebuildWeChatTable];
        [self buildUI];
    }];
}

- (void)onManageContactsTap {
    // 弹窗选类型：联系人 / 群聊（原 All 模式 SessionSelectController 布局有问题，已移除）
    [MioAlertHelper showMenuAlert:@"管理联系人" buttons:@[@"联系人", @"群聊"] onButton:^(NSInteger index) {
        // 取消不回调，index 恒 0/1；已选名单回显，完成后按选择顺序保存
        MioContactPickerMode mode = (index == 1) ? MioContactPickerModeGroups : MioContactPickerModeContacts;
        NSString *title = (index == 1) ? @"管理群聊" : @"管理联系人";
        [MioContactPicker presentPickerWithMode:mode
                                          title:title
                                    preselected:[HomeCardConfig savedContacts]
                                       delegate:self
                                           from:self];
    }];
}

#pragma mark - MioContactPickerDelegate

- (void)pickerDidFinish:(NSArray<NSString *> *)wxids {
    [HomeCardConfig saveContacts:wxids];   // 选择顺序 = 展示顺序
    // 当场刷新"管理联系人"行文案（表格重建 + 内容重建，与 onDotPosTap 同款，只 buildUI 行文案不动）
    dispatch_async(dispatch_get_main_queue(), ^{
        [self wpRebuildWeChatTable];
        [self buildUI];
    });
}

- (void)pickerDidCancel {
}

#pragma mark - 卡片图片（浅/深色，同卡片背景页：菜单选图/删图 → PHPicker）

- (void)onLightImageTap {
    [self showImageMenuForTarget:HomeCardPickerLight];
}

- (void)onDarkImageTap {
    [self showImageMenuForTarget:HomeCardPickerDark];
}

- (void)showImageMenuForTarget:(HomeCardPickerTarget)target {
    BOOL hasImage = (target == HomeCardPickerLight) ? [HomeCardConfig hasLightImage]
                                                    : [HomeCardConfig hasDarkImage];
    NSString *modeName = (target == HomeCardPickerLight) ? @"浅色模式" : @"深色模式";

    NSMutableArray<NSString *> *buttons = [NSMutableArray arrayWithObject:@"选择静态图片"];
    if (hasImage) {
        [buttons addObject:@"删除图片"];
    }

    [MioAlertHelper showMenuAlert:modeName buttons:buttons onButton:^(NSInteger index) {
        if (index == 0) {
            [self pickImageWithTarget:target];
        } else if (index == 1) {
            if (target == HomeCardPickerLight) {
                [HomeCardConfig deleteLightImage];
            } else {
                [HomeCardConfig deleteDarkImage];
            }
            [ConfigManager saveAll];
            [self wpRebuildWeChatTable];
            [self buildUI];
        }
    }];
}

#pragma mark - 图片选择器

- (void)pickImageWithTarget:(HomeCardPickerTarget)target {
    self.pickerTarget = target;

    PHPickerConfiguration *phConfig = [[PHPickerConfiguration alloc] init];
    phConfig.selectionLimit = 1;
    phConfig.filter = [PHPickerFilter imagesFilter];

    PHPickerViewController *picker = [[PHPickerViewController alloc] initWithConfiguration:phConfig];
    picker.delegate = self;
    [self presentViewController:picker animated:YES completion:nil];
}

#pragma mark - PHPickerViewControllerDelegate

- (void)picker:(PHPickerViewController *)picker didFinishPicking:(NSArray<PHPickerResult *> *)results {
    if (results.count == 0) {
        [picker dismissViewControllerAnimated:YES completion:nil];
        return;
    }

    PHPickerResult *result = results.firstObject;
    HomeCardPickerTarget target = self.pickerTarget;

    // 只保存为 PNG（同卡片背景页，只支持静态图片选择）；路径与 Keychain 备份由 MioImageVault 统一管理

    [result.itemProvider loadDataRepresentationForTypeIdentifier:@"public.image"
                                               completionHandler:^(NSData *data, NSError *error) {
        if (error || !data) {
            dispatch_async(dispatch_get_main_queue(), ^{
                [picker dismissViewControllerAnimated:YES completion:nil];
            });
            return;
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            [MioImageVault storeData:data
                             dirName:@"MioHomeCard"
                            fileName:(target == HomeCardPickerLight ?
                                      @"HomeCardLight.png" : @"HomeCardDark.png")
                                 key:(target == HomeCardPickerLight ?
                                      @"HomeCardLight" : @"HomeCardDark")];
            [ConfigManager saveAll];
            [picker dismissViewControllerAnimated:YES completion:^{
                [self wpRebuildWeChatTable];
                [self buildUI];
            }];
        });
    }];
}

#pragma mark - 工具

- (NSString *)numText:(CGFloat)v {
    return (v == floor(v)) ? [NSString stringWithFormat:@"%ld", (long)v]
                           : [NSString stringWithFormat:@"%.1f", v];
}

@end
