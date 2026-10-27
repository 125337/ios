#import "FontBeautifyVC.h"
#import "../../Modules/FontBeautify/FontBeautifyConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import "FontPickerVC.h"

// 字体美化设置页（同款 UI 框架：master switch 手风琴 + 按钮行 + hint）
// 主页只留开关 + "选择字体"入口（push FontPickerVC）+ "恢复默认字体"；
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

    cy = [self addMasterSwitchRowInGroup:group
                                    title:@"启用字体美化"
                                      key:@"enableFontBeautify"
                                     isOn:cfg.enableFontBeautify
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addButtonRowInGroup:expand
                                   title:@"选择字体"
                                    hint:[NSString stringWithFormat:@"当前字体: %@", curFont]
                                     key:@"pickFont"
                                      cy:*ecy
                                   width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addButtonRowInGroup:expand
                                   title:@"恢复默认字体"
                                    hint:@"清除已启用的字体配置"
                                     key:@"resetFont"
                                      cy:*ecy
                                   width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addHintRowInGroup:expand
                                  text:@"全局替换微信原生界面字体（列表/聊天/设置页均生效）\n支持 .ttf / .otf 字体文件"
                                    cy:*ecy
                                 width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    [self addSectionFooter:@"字体来源需自行保证可正常使用" y:y width:w];
}

// ── 按钮行回调（基类统一入口） ──
- (void)buttonClicked:(NSString *)key {
    WPLog(@"FontBeautify", @"[BUTTON] key=%@", key);
    if ([key isEqualToString:@"pickFont"]) {
        [self.navigationController pushViewController:[[FontPickerVC alloc] init] animated:YES];
    } else if ([key isEqualToString:@"resetFont"]) {
        [self resetFont];
    }
}

// ── 恢复默认：清空文件名/字族名/PostScript 名 ──
- (void)resetFont {
    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
    cfg.fontBeautifyFileName = @"";
    cfg.fontBeautifyFamilyName = @"";
    cfg.fontBeautifyPostScriptName = @"";
    [ConfigManager saveAll];
    [self wpReloadUI];
    WPLog(@"FontBeautify", @"[RESET] font cleared");
}

@end
