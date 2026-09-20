#import "WPVoicePackPickerVC.h"
#import "VoiceConfig.h"
#import "VoicePackStore.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"
#import <AVFoundation/AVFoundation.h>

// 分区 0=收藏+最近 1=当前目录
static NSInteger const kSectionQuick = 0;
static NSInteger const kSectionFolder = 1;

@interface WPVoicePackPickerVC () <UITableViewDelegate, UITableViewDataSource, AVAudioPlayerDelegate>
@property (nonatomic, copy) NSString *chatName;
@property (nonatomic, copy) NSString *currentRelPath;
@property (nonatomic, strong) UITableView *table;
@property (nonatomic, strong) NSArray<VoicePackItem *> *folderItems; // 当前目录
@property (nonatomic, strong) NSArray<VoicePackItem *> *quickItems;  // 收藏+最近去重
@property (nonatomic, strong) NSMutableArray<NSString *> *dirStack;  // 子目录栈（relPath）
// WCR 架构：播放器与播放状态由页面自持（previewingPath 在开播时落定）
@property (nonatomic, strong) AVAudioPlayer *previewPlayer;
@property (nonatomic, copy) NSString *previewingPath;
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
    [self stopPreviewPlayback];
}

- (void)dealloc {
    [_previewPlayer stop];
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
        cell.accessoryView = nil;
    } else {
        long long ms = [VoicePackStore durationMsForRelPath:it.relPath];
        cell.detailTextLabel.text = ms > 0 ? [NSString stringWithFormat:@"%lld KB · %lld 秒", it.fileSize / 1024, ms / 1000] : [NSString stringWithFormat:@"%lld KB", it.fileSize / 1024];
        cell.imageView.image = [UIImage systemImageNamed:@"waveform"];
        cell.accessoryType = UITableViewCellAccessoryNone;
        // 试听按钮（系统格式 + silk 均支持）
        UIButton *pb = (UIButton *)cell.accessoryView;
        if (![pb isKindOfClass:[UIButton class]]) {
            pb = [UIButton buttonWithType:UIButtonTypeSystem];
            pb.frame = CGRectMake(0, 0, 40, 40);
            [pb addTarget:self action:@selector(previewButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
            cell.accessoryView = pb;
        }
        pb.hidden = ![VoicePackStore isPreviewSupportedRelPath:it.relPath];
        // WCR：图标由 previewingPath 派生（开播时落定，rebuild 时刷新）
        BOOL playing = [self.previewingPath isEqualToString:it.relPath];
        [pb setImage:[UIImage systemImageNamed:playing ? @"stop.circle.fill" : @"play.circle"] forState:UIControlStateNormal];
        pb.tintColor = WPAccent();
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
    [self stopPreviewPlayback]; // 发送前停掉试听
    [self sendItem:it];
}

#pragma mark 试听（WCR 架构：previewPlayer/previewingPath 自持）

/// 对齐 WCR stopPreviewPlayback：停播 + 清状态 + 刷新列表
- (void)stopPreviewPlayback {
    [_previewPlayer stop];
    _previewPlayer = nil;
    _previewingPath = nil;
    [_table reloadData];
}

/// 对齐 WCR previewItem:：异步解码 → 主队列停旧播新，状态在开播时落定
- (void)previewItem:(VoicePackItem *)it {
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        NSData *data = [VoicePackStore previewPlayableDataForRelPath:it.relPath];
        dispatch_async(dispatch_get_main_queue(), ^{
            if (!data.length) {
                WPLog(@"Voice", @"[Preview] 解码失败: %@", it.relPath);
                WPShowToast(@"试听失败");
                return;
            }
            // 固定扬声器外放（聊天页会话可能配置为听筒路由）
            [[AVAudioSession sharedInstance] setCategory:AVAudioSessionCategoryPlayback error:nil];
            [[AVAudioSession sharedInstance] setActive:YES error:nil];
            NSError *err = nil;
            AVAudioPlayer *player = [[AVAudioPlayer alloc] initWithData:data error:&err];
            if (!player) {
                WPLog(@"Voice", @"[Preview] 初始化失败: %@", err.localizedDescription);
                WPShowToast(@"试听失败");
                return;
            }
            // ★ WCR：替换前在主队列停掉旧播放（主队列串行，绝不漏停）
            [_previewPlayer stop];
            player.delegate = self;
            _previewPlayer = player;
            _previewingPath = it.relPath;
            [player prepareToPlay];
            [player play];
            WPLog(@"Voice", @"[Pick] 试听: %@ (%.1fKB, %.1fs)", it.relPath, data.length / 1024.0, player.duration);
            [_table reloadData];
        });
    });
}

// AVAudioPlayer 委托不保证主线程——回主队列再动共享状态
- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer *)player successfully:(BOOL)flag {
    dispatch_async(dispatch_get_main_queue(), ^{
        [self stopPreviewPlayback];
    });
}

- (void)previewButtonTapped:(UIButton *)sender {
    // 通过按钮所属 cell 反查条目（WCR：点正在播的停，点别的切）
    UIView *v = sender;
    while (v && ![v isKindOfClass:[UITableViewCell class]]) v = v.superview;
    NSIndexPath *ip = [self.table indexPathForCell:(UITableViewCell *)v];
    if (!ip) return;
    VoicePackItem *it = ip.section == kSectionQuick ? self.quickItems[ip.row] : self.folderItems[ip.row];
    if (!it || it.isDirectory) return;
    if ([_previewingPath isEqualToString:it.relPath]) {
        [self stopPreviewPlayback];
    } else {
        [self previewItem:it];
    }
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
