#import "FontBeautifyVC.h"
#import "../../Modules/FontBeautify/FontBeautifyConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import <CoreText/CoreText.h>
#import <objc/message.h>

// 字体美化设置页（同款 UI 框架：master switch 手风琴 + 按钮行 + hint）
// 导入流程：UIDocumentPicker 选 ttf/otf → 拷入沙盒 Library/MioFonts →
//           CTFontManager 注册（进程级）→ 读出字族名存配置 → 即时生效
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
    [self wpReloadUI];
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
                                  text:@"全局替换微信原生界面字体（列表/聊天/设置页均生效）\n导入后立即生效，无需重启微信\n支持 .ttf / .otf，可多选批量导入"
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
// WCR 2.1.8 反编译同款：initWithDocumentTypes:inMode:（UIDocumentPickerModeImport=0）
// 上古 API 在新系统上依然存在（WCR 实测通吃）；现代 init 名字多变不可靠，弃用
// UTI 参考 WCR：public.truetype-ttf-font / public.opentype-font
- (void)presentFontPicker {
    @try {
        SEL sel = NSSelectorFromString(@"initWithDocumentTypes:inMode:");
        if (![UIDocumentPickerViewController instancesRespondToSelector:sel]) {
            WPLog(@"FontBeautify", @"[PICKER] initWithDocumentTypes:inMode: 不可用");
            [self showAlert:@"无法打开" message:@"当前系统不支持文件选择器"];
            return;
        }
        id (*initFn)(id, SEL, NSArray *, long) = (id (*)(id, SEL, NSArray *, long))objc_msgSend;
        id picker = initFn([UIDocumentPickerViewController alloc], sel,
                           @[@"public.truetype-ttf-font", @"public.opentype-font",
                             @"public.data", @"public.item"],
                           0 /* UIDocumentPickerModeImport */);
        WPLog(@"FontBeautify", @"[PICKER] legacy inMode: init → %@", picker ?: @"nil");
        if (!picker) {
            [self showAlert:@"无法打开" message:@"文件选择器创建失败"];
            return;
        }
        ((void (*)(id, SEL, id))objc_msgSend)(picker, NSSelectorFromString(@"setDelegate:"), self);
        ((void (*)(id, SEL, BOOL))objc_msgSend)(picker, NSSelectorFromString(@"setAllowsMultipleSelection:"), YES);
        [self presentViewController:picker animated:YES completion:nil];
    } @catch (NSException *e) {
        WPLog(@"FontBeautify", @"[PICKER] exception: %@", e);
        [self showAlert:@"无法打开文件选择器" message:e.reason ?: @"未知错误"];
    }
}

- (void)documentPicker:(UIDocumentPickerViewController *)controller
didPickDocumentsAtURLs:(NSArray<NSURL *> *)urls {
    if (urls.count == 0) return;
    [self importFontsFromURLs:urls];
}

// ── 导入：批量拷贝 → 注册 → 读字族名 → 单个直接启用 / 多个弹选择 ──
// 单个文件的「拷贝+注册+读元数据」，成功时回填 family/psName/dstPath
- (BOOL)importOneFont:(NSURL *)srcURL outFamily:(NSString **)outFamily outPS:(NSString **)outPS outPath:(NSString **)outPath errText:(NSString **)errText {
    NSString *dir = [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES)
                     firstObject];
    dir = [dir stringByAppendingPathComponent:@"MioFonts"];
    [[NSFileManager defaultManager] createDirectoryAtPath:dir
                              withIntermediateDirectories:YES
                                               attributes:nil
                                                    error:nil];

    NSString *fileName = srcURL.lastPathComponent;
    NSString *dstPath = [dir stringByAppendingPathComponent:fileName];
    NSURL *dstURL = [NSURL fileURLWithPath:dstPath];

    // 同名旧文件先删（覆盖导入）
    [[NSFileManager defaultManager] removeItemAtPath:dstPath error:nil];
    NSError *fsErr = nil;
    if (![[NSFileManager defaultManager] copyItemAtURL:srcURL toURL:dstURL error:&fsErr]) {
        *errText = [NSString stringWithFormat:@"拷贝 %@ 失败: %@", fileName, fsErr.localizedDescription];
        return NO;
    }

    // 注册进进程字体表（已注册会报错，忽略）
    CFErrorRef regErr = NULL;
    CTFontManagerRegisterFontsForURL((__bridge CFURLRef)dstURL, kCTFontManagerScopeProcess, &regErr);
    if (regErr) {
        CFIndex code = CFErrorGetCode(regErr);
        CFRelease(regErr);
        if (code != 105 /* kCTFontManagerErrorAlreadyRegistered */) {
            *errText = [NSString stringWithFormat:@"注册 %@ 失败: 错误码 %ld", fileName, (long)code];
            return NO;
        }
    }

    // 读字体内部元数据：字族名 + PostScript 名
    CFArrayRef descs = CTFontManagerCreateFontDescriptorsFromURL((__bridge CFURLRef)dstURL);
    if (!descs || CFArrayGetCount(descs) == 0) {
        if (descs) CFRelease(descs);
        *errText = [NSString stringWithFormat:@"%@ 中未找到字体描述符", fileName];
        return NO;
    }
    CTFontDescriptorRef d0 = (CTFontDescriptorRef)CFArrayGetValueAtIndex(descs, 0);
    NSString *family = CFBridgingRelease(CTFontDescriptorCopyAttribute(d0, kCTFontFamilyNameAttribute));
    NSString *psName = CFBridgingRelease(CTFontDescriptorCopyAttribute(d0, kCTFontNameAttribute));
    CFRelease(descs);

    if (family.length == 0) {
        *errText = [NSString stringWithFormat:@"%@ 未读取到字族名", fileName];
        return NO;
    }
    *outFamily = family;
    *outPS = psName ?: @"";
    *outPath = dstPath;
    return YES;
}

- (void)importFontsFromURLs:(NSArray<NSURL *> *)urls {
    NSMutableArray<NSString *> *families = [NSMutableArray array];
    NSMutableArray<NSString *> *psNames  = [NSMutableArray array];
    NSMutableArray<NSString *> *paths    = [NSMutableArray array];
    NSMutableArray<NSString *> *errs     = [NSMutableArray array];

    for (NSURL *src in urls) {
        NSString *fam = nil, *ps = nil, *path = nil, *err = nil;
        if ([self importOneFont:src outFamily:&fam outPS:&ps outPath:&path errText:&err]) {
            [families addObject:fam];
            [psNames addObject:ps];
            [paths addObject:path];
        } else if (err) {
            [errs addObject:err];
        }
    }

    if (families.count == 0) {
        [self showAlert:@"导入失败" message:errs.firstObject ?: @"未导入任何字体"];
        return;
    }

    if (families.count == 1) {
        [self activateFontFamily:families[0] ps:psNames[0] path:paths[0]];
    } else {
        // 多选导入：弹 action sheet 选要启用的字体
        UIAlertController *sheet =
            [UIAlertController alertControllerWithTitle:[NSString stringWithFormat:@"已导入 %lu 个字体，启用哪个？", (unsigned long)families.count]
                                                message:errs.count ? [errs componentsJoinedByString:@"\n"] : nil
                                         preferredStyle:UIAlertControllerStyleActionSheet];
        [families enumerateObjectsUsingBlock:^(NSString *fam, NSUInteger idx, BOOL *stop) {
            [sheet addAction:[UIAlertAction actionWithTitle:fam style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
                [self activateFontFamily:fam ps:psNames[idx] path:paths[idx]];
            }]];
        }];
        [sheet addAction:[UIAlertAction actionWithTitle:@"仅导入不启用" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
            [self wpReloadUI];
        }]];
        [sheet addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
        [self presentViewController:sheet animated:YES completion:nil];
    }
}

- (void)activateFontFamily:(NSString *)family ps:(NSString *)psName path:(NSString *)dstPath {
    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
    cfg.fontBeautifyFamilyName = family;
    cfg.fontBeautifyPostScriptName = psName;
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
