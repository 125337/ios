#import "FontBeautifyVC.h"
#import "../../Modules/FontBeautify/FontBeautifyConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import "FontPickerVC.h"

// 字体美化设置页（同款 UI 框架：普通开关行 + 按钮行 + hint 平铺，无手风琴）
// 主页只留开关 + "选择字体"入口（push FontPickerVC）；
// 导入/删除/预览都在 FontPickerVC 内完成。配置只存字体文件名，
// 运行时按 Library/MioFonts/<文件名> 解析（容器迁移不失效）。
@interface FontBeautifyVC ()
@end

@implementation FontBeautifyVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"字体美化";
    // 不在此处构建：viewWillAppear 统一 wpReloadUI（同 SettingRedEnvelopController 模式）
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self wpReloadUI]; // 从选择页返回后刷新"当前字体"右值
}

// ── 页面构建（SettingCategoryController 同款） ──
- (void)wpBuildRows {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    y = [self addSectionHeader:@"字体美化" y:y width:w];
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    // 当前启用字体：只存文件名，空 = 系统默认
    NSString *curFont = cfg.fontBeautifyFileName.length ? cfg.fontBeautifyFileName : @"系统默认";

    // 普通开关行（非手风琴）：只控制整体生效；按钮/hint 平铺常驻在开关下方
    cy = [self addSubSwitchRowInGroup:group
                                title:@"启用字体美化"
                                  key:@"enableFontBeautify"
                                 isOn:cfg.enableFontBeautify
                                   cy:cy
                                width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addButtonRowInGroup:group
                             title:@"选择字体"
                              hint:[NSString stringWithFormat:@"当前字体: %@", curFont]
                               key:@"pickFont"
                                cy:cy
                             width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addHintRowInGroup:group
                            text:@"全局替换微信原生界面字体（列表/聊天/设置页均生效）\n支持 .ttf / .otf 字体文件"
                              cy:cy
                           width:w];

    y = [self finishGroup:group atY:y height:cy];

    [self addSectionFooter:@"字体来源需自行保证可正常使用" y:y width:w];
}

// ── 按钮行回调（基类统一入口） ──
- (void)buttonClicked:(NSString *)key {
    WPLog(@"FontBeautify", @"[BUTTON] key=%@", key);
    if ([key isEqualToString:@"pickFont"]) {
        [self.navigationController pushViewController:[[FontPickerVC alloc] init] animated:YES];
    }
}

@end
