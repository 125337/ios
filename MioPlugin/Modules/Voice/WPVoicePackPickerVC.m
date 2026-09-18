#import "WPVoicePackPickerVC.h"
#import "VoiceConfig.h"
#import "VoicePackStore.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"

// 分区 0=收藏+最近 1=当前目录
static NSInteger const kSectionQuick = 0;
static NSInteger const kSectionFolder = 1;

@interface WPVoicePackPickerVC () <UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, copy) NSString *chatName;
@property (nonatomic, copy) NSString *currentRelPath;
@property (nonatomic, strong) UITableView *table;
@property (nonatomic, strong) NSArray<VoicePackItem *> *folderItems; // 当前目录
@property (nonatomic, strong) NSArray<VoicePackItem *> *quickItems;  // 收藏+最近去重
@property (nonatomic, strong) NSMutableArray<NSString *> *dirStack;  // 子目录栈（relPath）
@end

@implementation WPVoicePackPickerVC

- (instancetype)initWithChatName:(NSString *)chatName {
    if (self = [super init]) {
        _chatName = [chatName copy];
        _dirStack = [NSMutableArray array];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    [VoicePackStore ensureRootDirectoryExists];
    self.view.backgroundColor = WPBgColor();

    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat h = [UIScreen mainScreen].bounds.size.height;
    self.table = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, w, h) style:UITableViewStylePlain];
    self.table.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.table.backgroundColor = WPBgColor();
    self.table.delegate = self;
    self.table.dataSource = self;
    self.table.rowHeight = 52;
    self.table.tableFooterView = [[UIView alloc] initWithFrame:CGRectZero];
    self.table.separatorInset = UIEdgeInsetsMake(0, 16, 0, 0);
    if (@available(iOS 15.0, *)) { self.table.sectionHeaderTopPadding = 0; }
    [self.view addSubview:self.table];

    [self reloadAll];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    WPApplyNavAppearance(self);
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    WPRestoreNavAppearance(self);
    [VoicePackStore previewStop];
}

#pragma mark 数据

- (void)reloadAll {
    [self rebuildQuickItems];
    self.folderItems = [[VoicePackStore listItemsInRelPath:self.currentRelPath] ?: @[] copy];
    [self.table reloadData];
    self.title = self.currentRelPath.length > 0 ? self.currentRelPath.lastPathComponent : @"选择语音包";
    [self updateBackButton];
    // 诊断：打印根目录绝对路径与当前目录下的文件清单，用于排查外部存储路径是否正确
    if (self.currentRelPath.length == 0) {
        NSString *root = [VoicePackStore rootDirectory];
        NSArray<NSString *> *names = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:root error:nil];
        WPLog(@"Voice", @"[Pick] 根目录: %@", root);
        WPLog(@"Voice", @"[Pick] 根目录内容(%lu): %@", (unsigned long)names.count, names);
    }
}

/// 子目录状态下用「返回上级」拦截导航返回（根目录恢复默认返回按钮）
- (void)updateBackButton {
    if (self.dirStack.count > 0) {
        self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"返回上级"
            style:UIBarButtonItemStylePlain target:self action:@selector(popFolder)];
    } else {
        self.navigationItem.leftBarButtonItem = nil;
    }
}

/// 收藏 + 最近合并去重（各取前 10），只保留仍存在的文件
- (void)rebuildQuickItems {
    NSMutableArray<NSString *> *rels = [NSMutableArray array];
    for (NSString *p in [VoicePackStore favoriteRelPaths]) {
        if (rels.count >= 10) break;
        if (![rels containsObject:p]) [rels addObject:p];
    }
    for (NSString *p in [VoicePackStore recentRelPaths]) {
        if (rels.count >= 20) break;
        if (![rels containsObject:p]) [rels addObject:p];
    }
    NSMutableArray<VoicePackItem *> *items = [NSMutableArray array];
    for (NSString *p in rels) {
        VoicePackItem *it = [VoicePackStore itemForRelPath:p];
        if (it && !it.isDirectory) [items addObject:it];
    }
    self.quickItems = items;
}

#pragma mark UITableView

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 2;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return section == kSectionQuick ? self.quickItems.count : self.folderItems.count;
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section {
    if (section == kSectionQuick) return self.quickItems.count > 0 ? @"收藏 / 最近" : nil;
    return self.folderItems.count > 0 ? @"全部语音包" : nil;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *cellId = @"VPPickCell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellId];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:cellId];
        cell.textLabel.font = [UIFont systemFontOfSize:15];
        cell.detailTextLabel.font = [UIFont systemFontOfSize:12];
        cell.detailTextLabel.textColor = WPT2();
        cell.separatorInset = UIEdgeInsetsMake(0, 16, 0, 0);
    }
    VoicePackItem *it = indexPath.section == kSectionQuick ? self.quickItems[indexPath.row] : self.folderItems[indexPath.row];
    cell.textLabel.text = it.name;
    if (it.isDirectory) {
        cell.detailTextLabel.text = @"文件夹";
        cell.imageView.image = [UIImage systemImageNamed:@"folder.fill"];
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    } else {
        long long ms = [VoicePackStore durationMsForRelPath:it.relPath];
        cell.detailTextLabel.text = ms > 0 ? [NSString stringWithFormat:@"%lld KB · %lld 秒", it.fileSize / 1024, ms / 1000] : [NSString stringWithFormat:@"%lld KB", it.fileSize / 1024];
        cell.imageView.image = [UIImage systemImageNamed:@"waveform"];
        cell.accessoryType = UITableViewCellAccessoryNone;
    }
    cell.imageView.tintColor = [VoicePackStore isFavoriteRelPath:it.relPath] ? WPAccent() : WPT2();
    return cell;
}

- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath { return YES; }

- (UISwipeActionsConfiguration *)tableView:(UITableView *)tableView trailingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)indexPath {
    VoicePackItem *it = indexPath.section == kSectionQuick ? self.quickItems[indexPath.row] : self.folderItems[indexPath.row];
    if (it.isDirectory) return nil;
    __weak typeof(self) ws = self;

    UIContextualAction *fav = [UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal
                                                                      title:([VoicePackStore isFavoriteRelPath:it.relPath] ? @"取消收藏" : @"收藏")
                                                                    handler:^(UIContextualAction *act, UIView *src, void(^complete)(BOOL)) {
        [VoicePackStore toggleFavoriteForRelPath:it.relPath];
        [ws reloadAll];
        complete(YES);
    }];
    fav.backgroundColor = WPAccent();
    return [UISwipeActionsConfiguration configurationWithActions:@[fav]];
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    VoicePackItem *it = indexPath.section == kSectionQuick ? self.quickItems[indexPath.row] : self.folderItems[indexPath.row];
    if (it.isDirectory) {
        [self.dirStack addObject:it.relPath];
        self.currentRelPath = it.relPath;
        [self reloadAll];
        return;
    }
    WPLog(@"Voice", @"[Pick] 点击文件: section=%ld, rel=%@", (long)indexPath.section, it.relPath);
    [self sendItem:it];
}

#pragma mark 目录导航（侧滑返回上层）

- (BOOL)canPopFolder {
    return self.dirStack.count > 0;
}

- (void)popFolder {
    if (!self.canPopFolder) return;
    [self.dirStack removeLastObject];
    self.currentRelPath = self.dirStack.lastObject;
    [self reloadAll];
}

#pragma mark 发送

- (void)sendItem:(VoicePackItem *)it {
    if (self.chatName.length == 0) {
        WPShowToast(@"未识别到当前会话");
        return;
    }
    // 收藏/最近元数据可能残留已不存在的文件，先校验再发送
    if ([VoicePackStore itemForRelPath:it.relPath] == nil) {
        WPLog(@"Voice", @"[Pick] 条目已失效（文件不存在）: %@，刷新列表", it.relPath);
        WPShowToast(@"文件不存在，列表已刷新");
        [self rebuildQuickItems];
        self.folderItems = [[VoicePackStore listItemsInRelPath:self.currentRelPath] ?: @[] copy];
        [self.table reloadData];
        return;
    }
    NSError *err = nil;
    if ([VoicePackStore sendVoiceAtRelPath:it.relPath toChat:self.chatName error:&err]) {
        WPShowToast([NSString stringWithFormat:@"已发送「%@」", it.name]);
        if (![VoiceConfig shared].voicePackContinuousSendEnabled) {
            [self.navigationController popViewControllerAnimated:YES];
        } else {
            [self reloadAll];
        }
    } else {
        WPShowToast(err.localizedDescription ?: @"发送失败");
        if (err.code == 11) [self reloadAll]; // 文件读取失败也刷新，清掉失效条目
    }
}

@end
