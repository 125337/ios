#import "FontPickerVC.h"
#import <CoreText/CoreText.h>
#import <objc/message.h>
#import "../../Modules/FontBeautify/FontBeautifyConfig.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"

// 字体选择页（WCR"选择字体"同款）：
//   Section 0「默认」：系统默认字体（fontBeautifyFileName 为空时打勾）
//   Section 1「自定义字体 (N)」：扫描 Library/MioFonts，每行「文件名 · 大小」+
//              预览文本用该字体渲染（PostScript 名从 CTFontManager 描述符读取）
//   右上「添加」：系统文件选择器（WCR 同款 legacy initWithDocumentTypes:inMode:，
//              绕过 SDK 头文件裁剪），批量导入 → 拷贝 → 进程级注册 → 刷新列表
//   自定义行左滑：红色「删除」按钮删除文件（若是当前启用字体则同步清配置）
// 性能：字体元数据扫一次存静态缓存（fileName/fileSize/postScriptName/familyName），
//       导入/删除后失效重扫

#pragma mark - 字体模型（一次扫描静态缓存）

@interface MioFontItem : NSObject
@property (nonatomic, copy) NSString *fileName;            // 文件名（配置只存它，容器迁移不失效）
@property (nonatomic, assign) unsigned long long fileSize; // 字节数
@property (nonatomic, copy) NSString *postScriptName;      // kCTFontNameAttribute
@property (nonatomic, copy) NSString *familyName;          // kCTFontFamilyNameAttribute
@end

@implementation MioFontItem
@end

static NSArray<MioFontItem *> *g_fontItems = nil; // 静态缓存：扫一次存全部模型

static void MioInvalidateFontCache(void) { g_fontItems = nil; }

// 扫描 MioFonts 目录构建列表（默认按文件名排序）；PostScript/字族名从字体描述符读取
static NSArray<MioFontItem *> *MioScanFonts(void) {
    if (g_fontItems) return g_fontItems;
    NSString *dir = [FontBeautifyConfig mioFontsDir];
    NSArray *names = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:dir error:nil] ?: @[];
    names = [names sortedArrayUsingSelector:@selector(localizedStandardCompare:)];
    NSMutableArray<MioFontItem *> *items = [NSMutableArray array];
    for (NSString *name in names) {
        NSString *ext = name.pathExtension.lowercaseString;
        if (![ext isEqualToString:@"ttf"] && ![ext isEqualToString:@"otf"]) continue;
        NSString *path = [dir stringByAppendingPathComponent:name];
        MioFontItem *item = [MioFontItem new];
        item.fileName = name;
        item.fileSize = [[NSFileManager defaultManager] attributesOfItemAtPath:path error:nil].fileSize;
        // 字体文件已注册进进程字体表，直接从描述符取内部元数据（多字重字体取第一个描述符）
        NSURL *url = [NSURL fileURLWithPath:path];
        CFArrayRef descs = CTFontManagerCreateFontDescriptorsFromURL((__bridge CFURLRef)url);
        if (descs && CFArrayGetCount(descs) > 0) {
            CTFontDescriptorRef d0 = (CTFontDescriptorRef)CFArrayGetValueAtIndex(descs, 0);
            item.familyName = CFBridgingRelease(CTFontDescriptorCopyAttribute(d0, kCTFontFamilyNameAttribute));
            item.postScriptName = CFBridgingRelease(CTFontDescriptorCopyAttribute(d0, kCTFontNameAttribute));
        }
        if (descs) CFRelease(descs);
        [items addObject:item];
    }
    g_fontItems = [items copy];
    return g_fontItems;
}

// 固定多行预览模板：经典句 / 英文数字 / 标点样例（整体用该字体的 PostScript 名渲染）
static NSString *MioPreviewTemplate(void) {
    return @"我见众生皆草木，唯你是青山。\n"
           @"Mio助手 2025～2026 ABC abc 0123\n"
           @"今天是个好日子，@#¥%……&*！（标点符号样例）";
}

// 按字体的 PostScript 名取渲染字体（size 15；读取失败/加载失败回退系统字体）
static UIFont *MioFontForItem(MioFontItem *item, CGFloat size) {
    if (item.postScriptName.length) {
        UIFont *f = [UIFont fontWithName:item.postScriptName size:size];
        if (f) return f;
    }
    return [UIFont systemFontOfSize:size];
}

// 预览文本在指定字体/宽度下的自适应高度（行高与 label frame 同源，防裁切）
static CGFloat MioPreviewHeightForFont(UIFont *font, CGFloat width) {
    CGFloat h = [MioPreviewTemplate() boundingRectWithSize:CGSizeMake(width, CGFLOAT_MAX)
                                                   options:NSStringDrawingUsesLineFragmentOrigin
                                                attributes:@{NSFontAttributeName: font ?: [UIFont systemFontOfSize:15]}
                                                   context:nil].size.height;
    return ceil(h);
}

// 字节数 → "20.3M" / "856.0K"
static NSString *MioFileSizeText(unsigned long long bytes) {
    if (bytes >= 1024 * 1024) {
        return [NSString stringWithFormat:@"%.1fM", (double)bytes / (1024.0 * 1024.0)];
    }
    return [NSString stringWithFormat:@"%.1fK", (double)bytes / 1024.0];
}

#pragma mark - 页面

@interface FontPickerVC () <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UIDocumentPickerDelegate>
@property (nonatomic, strong) UITableView *table;
@property (nonatomic, strong) UISearchBar *searchBar;             // 按文件名过滤
@property (nonatomic, copy) NSArray<MioFontItem *> *visibleItems; // 搜索过滤后的自定义字体
@end

@implementation FontPickerVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"选择字体";
    self.view.backgroundColor = WPBgColor();

    self.navigationItem.rightBarButtonItem =
        [[UIBarButtonItem alloc] initWithTitle:@"添加"
                                         style:UIBarButtonItemStylePlain
                                        target:self
                                        action:@selector(presentFontPicker)];

    [self setupTable];
    [self refreshItems];
}

- (void)setupTable {
    // 搜索框挂表头：placeholder"搜索字体名称"，按文件名包含匹配
    self.searchBar = [[UISearchBar alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, 44)];
    self.searchBar.placeholder = @"搜索字体名称";
    self.searchBar.delegate = self;
    self.searchBar.searchBarStyle = UISearchBarStyleMinimal;

    self.table = [[UITableView alloc] initWithFrame:self.view.bounds
                                              style:UITableViewStylePlain];
    self.table.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.table.dataSource = self;
    self.table.delegate = self;
    self.table.tableHeaderView = self.searchBar;
    self.table.backgroundColor = [UIColor clearColor];
    self.table.rowHeight = 62;
    [self.view addSubview:self.table];
}

// 重新扫描并应用搜索过滤（导入/删除后统一走这里）
- (void)refreshItems {
    NSArray<MioFontItem *> *all = MioScanFonts();
    NSString *kw = self.searchBar.text ?: @"";
    if (kw.length > 0) {
        NSMutableArray<MioFontItem *> *filtered = [NSMutableArray array];
        for (MioFontItem *it in all) {
            if ([it.fileName localizedCaseInsensitiveContainsString:kw]) [filtered addObject:it];
        }
        self.visibleItems = filtered;
    } else {
        self.visibleItems = all;
    }
    [self.table reloadData];
}

#pragma mark - 选择 / 删除

// 选中系统默认：清空三个配置 → 返回
- (void)pickSystemDefault {
    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
    cfg.fontBeautifyFileName = @"";
    cfg.fontBeautifyFamilyName = @"";
    cfg.fontBeautifyPostScriptName = @"";
    [ConfigManager saveAll];
    WPLog(@"FontBeautify", @"[PICK] 系统默认字体");
    [self.navigationController popViewControllerAnimated:YES];
}

// 选中自定义字体：存文件名 + 字族名 + PostScript 名 → 返回
- (void)pickFontItem:(MioFontItem *)item {
    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
    cfg.fontBeautifyFileName = item.fileName;
    cfg.fontBeautifyFamilyName = item.familyName ?: @"";
    cfg.fontBeautifyPostScriptName = item.postScriptName ?: @"";
    [ConfigManager saveAll];
    WPLog(@"FontBeautify", @"[PICK] %@ family=%@ ps=%@", item.fileName, item.familyName, item.postScriptName);
    [self.navigationController popViewControllerAnimated:YES];
}

// 删除文件；若是当前启用字体则同步清配置；刷新列表
- (void)deleteFontItem:(MioFontItem *)item {
    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
    NSString *path = [[FontBeautifyConfig mioFontsDir]
                      stringByAppendingPathComponent:item.fileName];
    NSError *err = nil;
    BOOL ok = [[NSFileManager defaultManager] removeItemAtPath:path error:&err];
    WPLog(@"FontBeautify", @"[DELETE] %@ → %@", item.fileName, ok ? @"成功" : err.localizedDescription);
    if (!ok) {
        WPShowToast([NSString stringWithFormat:@"删除失败：%@", err.localizedDescription ?: @"未知错误"]);
        return;
    }
    if ([cfg.fontBeautifyFileName isEqualToString:item.fileName]) {
        cfg.fontBeautifyFileName = @"";
        cfg.fontBeautifyFamilyName = @"";
        cfg.fontBeautifyPostScriptName = @"";
        [ConfigManager saveAll];
        WPLog(@"FontBeautify", @"[DELETE] 当前启用字体被删除，配置已清空");
    }
    MioInvalidateFontCache();
    [self refreshItems];
    WPShowToast(@"已删除");
}

#pragma mark - 导入（WCR 同款 legacy 文件选择器，自 FontBeautifyVC 搬入）

// WCR 2.1.8 反编译同款：initWithDocumentTypes:inMode:（UIDocumentPickerModeImport=0）
// 上古 API 在新系统上依然存在（WCR 实测通吃）；现代 init 名字多变不可靠，弃用
// UTI 参考 WCR：public.truetype-ttf-font / public.opentype-font
- (void)presentFontPicker {
    @try {
        SEL sel = NSSelectorFromString(@"initWithDocumentTypes:inMode:");
        if (![UIDocumentPickerViewController instancesRespondToSelector:sel]) {
            WPLog(@"FontBeautify", @"[PICKER] initWithDocumentTypes:inMode: 不可用");
            WPShowToast(@"当前系统不支持文件选择器");
            return;
        }
        id (*initFn)(id, SEL, NSArray *, long) = (id (*)(id, SEL, NSArray *, long))objc_msgSend;
        id picker = initFn([UIDocumentPickerViewController alloc], sel,
                           @[@"public.truetype-ttf-font", @"public.opentype-font",
                             @"public.data", @"public.item"],
                           0 /* UIDocumentPickerModeImport */);
        WPLog(@"FontBeautify", @"[PICKER] legacy inMode: init → %@", picker ?: @"nil");
        if (!picker) {
            WPShowToast(@"文件选择器创建失败");
            return;
        }
        ((void (*)(id, SEL, id))objc_msgSend)(picker, NSSelectorFromString(@"setDelegate:"), self);
        ((void (*)(id, SEL, BOOL))objc_msgSend)(picker, NSSelectorFromString(@"setAllowsMultipleSelection:"), YES);
        [self presentViewController:picker animated:YES completion:nil];
    } @catch (NSException *e) {
        WPLog(@"FontBeautify", @"[PICKER] exception: %@", e);
        WPShowToast([NSString stringWithFormat:@"无法打开文件选择器：%@", e.reason ?: @"未知错误"]);
    }
}

- (void)documentPicker:(UIDocumentPickerViewController *)controller
didPickDocumentsAtURLs:(NSArray<NSURL *> *)urls {
    if (urls.count == 0) return;
    [self importFontsFromURLs:urls];
}

// 单个文件的「拷贝 + 注册 + 读元数据」，成功回填 family/psName
- (BOOL)importOneFont:(NSURL *)srcURL
            outFamily:(NSString **)outFamily
                outPS:(NSString **)outPS
              errText:(NSString **)errText {
    NSString *dir = [FontBeautifyConfig mioFontsDir];
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

    // 注册进进程字体表（已注册报错码 105，忽略）
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
    return YES;
}

// 批量导入：拷入 MioFonts → 进程级注册 → 失效缓存刷新列表（选择交给列表点选）
- (void)importFontsFromURLs:(NSArray<NSURL *> *)urls {
    NSInteger okCount = 0;
    NSMutableArray<NSString *> *errs = [NSMutableArray array];

    for (NSURL *src in urls) {
        NSString *fam = nil, *ps = nil, *err = nil;
        if ([self importOneFont:src outFamily:&fam outPS:&ps errText:&err]) {
            okCount++;
            WPLog(@"FontBeautify", @"[IMPORT] %@ → family=%@ ps=%@", src.lastPathComponent, fam, ps);
        } else if (err) {
            [errs addObject:err];
        }
    }

    MioInvalidateFontCache();
    [self refreshItems];

    if (okCount > 0 && errs.count == 0) {
        WPShowToast([NSString stringWithFormat:@"已导入 %lu 个字体", (unsigned long)okCount]);
    } else if (okCount > 0) {
        WPShowToast([NSString stringWithFormat:@"已导入 %lu 个，%lu 个失败",
                     (unsigned long)okCount, (unsigned long)errs.count]);
    } else {
        UIAlertController *alert =
            [UIAlertController alertControllerWithTitle:@"导入失败"
                                                message:errs.firstObject ?: @"未导入任何字体"
                                         preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"好"
                                                  style:UIAlertActionStyleDefault
                                                handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
    }
}

#pragma mark - UITableViewDataSource / Delegate

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 2;
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section {
    return section == 0
        ? @"默认"
        : [NSString stringWithFormat:@"自定义字体 (%lu)", (unsigned long)self.visibleItems.count];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return section == 0 ? 1 : (NSInteger)self.visibleItems.count;
}

- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section {
    return 36;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *cellId = @"MioFontCell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellId];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellId];
        // 第一行小字：文件名 · 大小
        UILabel *nameLabel = [[UILabel alloc] initWithFrame:CGRectMake(16, 9, 240, 15)];
        nameLabel.tag = 101;
        nameLabel.font = [UIFont systemFontOfSize:12];
        nameLabel.textColor = WPT3();
        [cell.contentView addSubview:nameLabel];
        // 第二行：固定多行预览模板，整体用该字体渲染（行高自适应）
        UILabel *previewLabel = [[UILabel alloc] initWithFrame:CGRectMake(16, 28, 300, 24)];
        previewLabel.tag = 102;
        previewLabel.font = [UIFont systemFontOfSize:15];
        previewLabel.textColor = WPT1();
        previewLabel.numberOfLines = 0;
        [cell.contentView addSubview:previewLabel];
    }
    UILabel *nameLabel = (UILabel *)[cell.contentView viewWithTag:101];
    UILabel *previewLabel = (UILabel *)[cell.contentView viewWithTag:102];

    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];

    if (indexPath.section == 0) {
        // 系统默认字体
        cell.textLabel.text = @"系统默认字体";
        cell.textLabel.font = [UIFont systemFontOfSize:16];
        cell.textLabel.textColor = WPT1();
        nameLabel.text = @"";
        previewLabel.text = @"";
        cell.accessoryType = (cfg.fontBeautifyFileName.length == 0)
            ? UITableViewCellAccessoryCheckmark : UITableViewCellAccessoryNone;
        return cell;
    }

    MioFontItem *item = self.visibleItems[indexPath.row];
    cell.textLabel.text = @"";
    nameLabel.text = [NSString stringWithFormat:@"%@ · %@",
                      item.fileName, MioFileSizeText(item.fileSize)];
    // 固定多行模板整体用该字体的 PostScript 名渲染（size 15，行高自适应）
    previewLabel.font = MioFontForItem(item, 15);
    CGFloat previewW = self.view.bounds.size.width - 32;
    previewLabel.frame = CGRectMake(16, 28, previewW,
                                    MioPreviewHeightForFont(previewLabel.font, previewW));
    previewLabel.text = MioPreviewTemplate();
    cell.accessoryType = [cfg.fontBeautifyFileName isEqualToString:item.fileName]
        ? UITableViewCellAccessoryCheckmark : UITableViewCellAccessoryNone;
    return cell;
}

// 自定义行高：名称行 28 + 预览文本自适应高度 + 底部留白 10（默认区固定 62）
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.section != 1) return 62;
    if (indexPath.row < 0 || indexPath.row >= (NSInteger)self.visibleItems.count) return 62;
    MioFontItem *item = self.visibleItems[indexPath.row];
    CGFloat previewW = self.view.bounds.size.width - 32;
    return 28 + MioPreviewHeightForFont(MioFontForItem(item, 15), previewW) + 10;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    if (indexPath.section == 0) {
        [self pickSystemDefault];
        return;
    }
    if (indexPath.row >= 0 && indexPath.row < (NSInteger)self.visibleItems.count) {
        [self pickFontItem:self.visibleItems[indexPath.row]];
    }
}

// 左滑自定义行：红色「删除」按钮，动作与原长按删除一致（deleteFontItem：删文件 +
// 若是该字体当前启用则清空 fileName/familyName/postScriptName + 刷新列表）
- (UISwipeActionsConfiguration *)tableView:(UITableView *)tableView
trailingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.section != 1) return nil;
    if (indexPath.row < 0 || indexPath.row >= (NSInteger)self.visibleItems.count) return nil;
    MioFontItem *item = self.visibleItems[indexPath.row];
    UIContextualAction *del =
        [UIContextualAction contextualActionWithStyle:UIContextualActionStyleDestructive
                                                title:@"删除"
                                              handler:^(UIContextualAction *action, UIView *sourceView,
                                                        void (^completion)(BOOL actionPerformed)) {
        [self deleteFontItem:item];
        completion(YES);
    }];
    UISwipeActionsConfiguration *config =
        [UISwipeActionsConfiguration configurationWithActions:@[del]];
    // 关闭整行全滑直删：必须显式点「删除」按钮，防误删
    config.performsFirstActionWithFullSwipe = NO;
    return config;
}

#pragma mark - UISearchBarDelegate

- (void)searchBar:(UISearchBar *)searchBar textDidChange:(NSString *)searchText {
    [self refreshItems];
}

- (void)searchBarSearchButtonClicked:(UISearchBar *)searchBar {
    [searchBar resignFirstResponder];
}

@end
