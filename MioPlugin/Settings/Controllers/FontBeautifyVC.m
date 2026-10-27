#import "FontBeautifyVC.h"
#import "../../Modules/FontBeautify/FontBeautifyConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import <CoreText/CoreText.h>

// 字体美化设置页（同款 UI 框架：master switch 手风琴 + 按钮行 + hint）
// 导入流程：UIDocumentPicker 选 ttf/otf → 拷入沙盒 Library/MioFonts →
//           CTFontManager 注册（进程级）→ 读出字族名存配置 → 即时生效
@interface FontBeautifyVC ()
@end

@implementation FontBeautifyVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"字体美化";
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

    NSString *curFont = cfg.fontBeautifyFamilyName.length ? cfg.fontBeautifyFamilyName : @"默认（未导入）";

    cy = [self addMasterSwitchRowInGroup:group
                                    title:@"启用字体美化"
                                      key:@"enableFontBeautify"
                                     isOn:cfg.enableFontBeautify
                               subBuilder:^(UIView *expand, CGFloat *ecy) {
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addButtonRowInGroup:expand
                                   title:@"导入字体文件 (.ttf/.otf)"
                                    hint:[NSString stringWithFormat:@"当前字体: %@", curFont]
                                     key:@"importFont"
                                      cy:*ecy
                                   width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addButtonRowInGroup:expand
                                   title:@"恢复默认字体"
                                    hint:@"清除已导入的字体配置"
                                     key:@"resetFont"
                                      cy:*ecy
                                   width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        *ecy = [self addHintRowInGroup:expand
                                  text:@"全局替换微信原生界面字体（列表/聊天/设置页均生效）\n导入后立即生效，无需重启微信\n支持 .ttf / .otf 字体文件"
                                    cy:*ecy
                                 width:w];
    } cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    [self addSectionFooter:@"字体来源需自行保证可正常使用" y:y width:w];
}

// ── 按钮行回调（基类统一入口） ──
- (void)buttonClicked:(NSString *)key {
    WPLog(@"FontBeautify", @"[BUTTON] key=%@", key);
    if ([key isEqualToString:@"importFont"]) {
        [self presentFontPicker];
    } else if ([key isEqualToString:@"resetFont"]) {
        [self resetFont];
    }
}

// ── 导入：文件选择器 ──
- (void)presentFontPicker {
    NSArray<NSString *> *types = @[
        @"public.truetype-typeface",   // ttf
        @"public.opentype-typeface",   // otf
        @"public.font",                // 通用字体
    ];
    UIDocumentPickerViewController *picker =
        [[UIDocumentPickerViewController alloc] initWithDocumentTypes:types inPlace:NO];
    picker.delegate = self;
    picker.allowsMultipleSelection = NO;
    [self presentViewController:picker animated:YES completion:nil];
}

- (void)documentPicker:(UIDocumentPickerViewController *)controller
didPickDocumentsAtURLs:(NSArray<NSURL *> *)urls {
    NSURL *src = urls.firstObject;
    if (!src) return;
    [self importFontFromURL:src];
}

// ── 导入：拷贝 → 注册 → 读字族名 → 存配置 ──
- (void)importFontFromURL:(NSURL *)srcURL {
    NSError *fsErr = nil;
    NSString *dir = [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES)
                     firstObject];
    dir = [dir stringByAppendingPathComponent:@"MioFonts"];
    [[NSFileManager defaultManager] createDirectoryAtPath:dir
                              withIntermediateDirectories:YES
                                               attributes:nil
                                                    error:&fsErr];
    if (fsErr) {
        [self showAlert:@"导入失败" message:[NSString stringWithFormat:@"创建目录失败: %@", fsErr.localizedDescription]];
        return;
    }

    NSString *fileName = srcURL.lastPathComponent;
    NSString *dstPath = [dir stringByAppendingPathComponent:fileName];
    NSURL *dstURL = [NSURL fileURLWithPath:dstPath];

    // 同名旧文件先删（覆盖导入）
    [[NSFileManager defaultManager] removeItemAtPath:dstPath error:nil];
    if (![[NSFileManager defaultManager] copyItemAtURL:srcURL toURL:dstURL error:&fsErr]) {
        [self showAlert:@"导入失败" message:[NSString stringWithFormat:@"拷贝文件失败: %@", fsErr.localizedDescription]];
        return;
    }

    // 注册进进程字体表（已注册会报错，忽略）
    CFErrorRef regErr = NULL;
    CTFontManagerRegisterFontsForURL((__bridge CFURLRef)dstURL, kCTFontManagerScopeProcess, &regErr);
    if (regErr) {
        CFIndex code = CFErrorGetCode(regErr);
        CFRelease(regErr);
        if (code != 105 /* kCTFontManagerErrorAlreadyRegistered */) {
            [self showAlert:@"注册失败" message:[NSString stringWithFormat:@"错误码 %ld，字体文件可能已损坏", (long)code]];
            return;
        }
    }

    // 读字体内部元数据：字族名 + PostScript 名
    CFArrayRef descs = CTFontManagerCreateFontDescriptorsFromURL((__bridge CFURLRef)dstURL);
    if (!descs || CFArrayGetCount(descs) == 0) {
        if (descs) CFRelease(descs);
        [self showAlert:@"导入失败" message:@"文件中未找到字体描述符"];
        return;
    }
    CTFontDescriptorRef d0 = (CTFontDescriptorRef)CFArrayGetValueAtIndex(descs, 0);
    NSString *family = CFBridgingRelease(CTFontDescriptorCopyAttribute(d0, kCTFontFamilyNameAttribute));
    NSString *psName = CFBridgingRelease(CTFontDescriptorCopyAttribute(d0, kCTFontNameAttribute));
    CFRelease(descs);

    if (family.length == 0) {
        [self showAlert:@"导入失败" message:@"未读取到字族名"];
        return;
    }

    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
    cfg.fontBeautifyFamilyName = family;
    cfg.fontBeautifyPostScriptName = psName ?: @"";
    cfg.fontBeautifyFilePath = dstPath;
    [ConfigManager saveAll];
    [self wpReloadUI];
    [self showAlert:@"导入成功" message:[NSString stringWithFormat:@"字体「%@」已生效", family]];
}

// ── 恢复默认 ──
- (void)resetFont {
    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
    cfg.fontBeautifyFamilyName = @"";
    cfg.fontBeautifyPostScriptName = @"";
    [ConfigManager saveAll];
    [self wpReloadUI];
    WPLog(@"FontBeautify", @"[RESET] font cleared");
}

// ── 结果提示 ──
- (void)showAlert:(NSString *)title message:(NSString *)msg {
    UIAlertController *alert =
        [UIAlertController alertControllerWithTitle:title message:msg
                                    preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"好"
                                              style:UIAlertActionStyleDefault
                                            handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

@end
