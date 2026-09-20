#import "WPVoicePackManagerVC.h"
#import "VoiceConfig.h"
#import "VoicePackStore.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"
#import <AVFoundation/AVFoundation.h>

@interface WPVoicePackManagerVC () <UITableViewDelegate, UITableViewDataSource, UIDocumentPickerDelegate, AVAudioPlayerDelegate>
@property (nonatomic, strong) UITableView *table;
@property (nonatomic, copy) NSString *currentRelPath; // nil = root
@property (nonatomic, strong) NSMutableArray<VoicePackItem *> *items;
@property (nonatomic, assign) BOOL selecting;
// WCR 架构：播放器与播放状态由页面自持（previewingPath 在开播时落定）
@property (nonatomic, strong) AVAudioPlayer *previewPlayer;
@property (nonatomic, copy) NSString *previewingPath;
@end

@implementation WPVoicePackManagerVC

#pragma mark 生命周期

- (void)viewDidLoad {
    [super viewDidLoad];
    [VoicePackStore ensureRootDirectoryExists];
    self.title = self.currentRelPath ? self.currentRelPath.lastPathComponent : @"语音包";
    self.view.backgroundColor = WPBgColor();

    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat h = [UIScreen mainScreen].bounds.size.height;
    self.table = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, w, h) style:UITableViewStylePlain];
    self.table.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.table.backgroundColor = WPBgColor();
    self.table.delegate = self;
    self.table.dataSource = self;
    self.table.rowHeight = 56;
    self.table.tableFooterView = [[UIView alloc] initWithFrame:CGRectZero];
    self.table.separatorInset = UIEdgeInsetsMake(0, 16, 0, 0);
    if (@available(iOS 15.0, *)) { self.table.sectionHeaderTopPadding = 0; }
    [self.view addSubview:self.table];

    [self reloadItems];

    UIBarButtonItem *addBtn = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemAdd target:self action:@selector(showAddMenu)];
    self.navigationItem.rightBarButtonItem = addBtn;
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    WPApplyNavAppearance(self);
    [self reloadItems];
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

- (void)reloadItems {
    NSArray<VoicePackItem *> *list = [VoicePackStore listItemsInRelPath:self.currentRelPath];
    self.items = list ? [list mutableCopy] : [NSMutableArray array];
    [self.table reloadData];
    self.title = self.currentRelPath.length > 0 ? self.currentRelPath.lastPathComponent : @"语音包";
}

#pragma mark UITableView

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.items.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *cellId = @"VPCell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellId];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:cellId];
        cell.textLabel.font = [UIFont systemFontOfSize:15];
        cell.detailTextLabel.font = [UIFont systemFontOfSize:12];
        cell.detailTextLabel.textColor = WPT2();
        cell.accessoryType = UITableViewCellAccessoryNone;
        cell.separatorInset = UIEdgeInsetsMake(0, 16, 0, 0);
        UIButton *playBtn = [UIButton buttonWithType:UIButtonTypeSystem];
        playBtn.frame = CGRectMake(0, 0, 44, 44);
        [playBtn setImage:[UIImage systemImageNamed:@"play.fill"] forState:UIControlStateNormal];
        playBtn.tag = 2000;
        [playBtn addTarget:self action:@selector(playButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
        [cell.contentView addSubview:playBtn];
        playBtn.translatesAutoresizingMaskIntoConstraints = NO;
        [NSLayoutConstraint activateConstraints:@[
            [playBtn.trailingAnchor constraintEqualToAnchor:cell.contentView.trailingAnchor constant:-12],
            [playBtn.centerYAnchor constraintEqualToAnchor:cell.contentView.centerYAnchor],
            [playBtn.widthAnchor constraintEqualToConstant:36],
            [playBtn.heightAnchor constraintEqualToConstant:36],
        ]];
    }
    VoicePackItem *it = self.items[indexPath.row];
    cell.textLabel.text = it.name;
    NSString *sub = nil;
    if (it.isDirectory) {
        sub = @"文件夹";
    } else {
        long long ms = [VoicePackStore durationMsForRelPath:it.relPath];
        if (ms > 0) {
            sub = [NSString stringWithFormat:@"%lld KB · %lld 秒", it.fileSize / 1024, ms / 1000];
        } else {
            sub = [NSString stringWithFormat:@"%lld KB", it.fileSize / 1024];
        }
    }
    cell.detailTextLabel.text = sub;
    cell.imageView.image = [UIImage systemImageNamed:it.isDirectory ? @"folder.fill" : @"waveform"];
    cell.imageView.tintColor = [VoicePackStore isFavoriteRelPath:it.relPath] ? WPAccent() : WPT2();
    cell.accessoryType = it.isDirectory ? UITableViewCellAccessoryDisclosureIndicator : UITableViewCellAccessoryNone;
    // play 按钮显隐：系统格式 + silk（借微信 MJSilkCodec）均支持预览
    for (UIView *sv in cell.contentView.subviews) {
        if ([sv isKindOfClass:[UIButton class]] && sv.tag == 2000) {
            sv.hidden = it.isDirectory || ![VoicePackStore isPreviewSupportedRelPath:it.relPath];
            // WCR：图标由 previewingPath 派生（开播时落定，reload 时刷新）
            BOOL playing = [_previewingPath isEqualToString:it.relPath];
            UIButton *pb = (UIButton *)sv;
            [pb setImage:[UIImage systemImageNamed:playing ? @"stop.fill" : @"play.fill"] forState:UIControlStateNormal];
            break;
        }
    }
    return cell;
}

- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath { return YES; }

- (UISwipeActionsConfiguration *)tableView:(UITableView *)tableView trailingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.row >= self.items.count) return nil;
    VoicePackItem *it = self.items[indexPath.row];
    __weak typeof(self) ws = self;

    UIContextualAction *deleteAction = [UIContextualAction contextualActionWithStyle:UIContextualActionStyleDestructive title:@"删除" handler:^(UIContextualAction *act, UIView *src, void(^complete)(BOOL)) {
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"删除" message:[NSString stringWithFormat:@"确认删除「%@」？", it.name] preferredStyle:UIAlertControllerStyleActionSheet];
        [alert addAction:[UIAlertAction actionWithTitle:@"删除" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *a) {
            [ws stopPreviewPlayback]; // 防止正在播放被删除的文件
            NSError *err = nil;
            if ([VoicePackStore deleteItemAtRelPath:it.relPath error:&err]) {
                WPShowToast(@"已删除");
                [ws reloadItems];
            } else {
                WPShowToast([NSString stringWithFormat:@"删除失败: %@", err.localizedDescription]);
            }
            complete(YES);
        }]];
        [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction *a) { complete(NO); }]];
        UIViewController *top = WPGetTopVCForPresentation();
        if (top) [top presentViewController:alert animated:YES completion:nil];
    }];

    UIContextualAction *favAction = [UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal title:([VoicePackStore isFavoriteRelPath:it.relPath] ? @"取消收藏" : @"收藏") handler:^(UIContextualAction *act, UIView *src, void(^complete)(BOOL)) {
        [VoicePackStore toggleFavoriteForRelPath:it.relPath];
        [ws reloadItems];
        complete(YES);
    }];
    favAction.backgroundColor = WPAccent();

    return [UISwipeActionsConfiguration configurationWithActions:@[deleteAction, favAction]];
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    if (indexPath.row >= self.items.count) return;
    VoicePackItem *it = self.items[indexPath.row];
    if (it.isDirectory) {
        WPVoicePackManagerVC *sub = [[WPVoicePackManagerVC alloc] init];
        sub.currentRelPath = it.relPath;
        [self.navigationController pushViewController:sub animated:YES];
    } else {
        [self showItemActions:it];
    }
}

#pragma mark 动作

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
            WPLog(@"Voice", @"[Preview] 播放: %@ (%.1fKB, %.1fs)", it.relPath, data.length / 1024.0, player.duration);
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

- (void)playButtonTapped:(UIButton *)sender {
    UIView *v = sender;
    while (v && ![v isKindOfClass:[UITableViewCell class]]) v = v.superview;
    NSIndexPath *ip = [self.table indexPathForCell:(UITableViewCell *)v];
    if (!ip || ip.row >= self.items.count) return;
    VoicePackItem *it = self.items[ip.row];
    if (!it || it.isDirectory) return;
    // WCR：点正在播的停，点别的切
    if ([_previewingPath isEqualToString:it.relPath]) {
        [self stopPreviewPlayback];
    } else {
        [self previewItem:it];
    }
}

- (void)showAddMenu {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:nil message:nil preferredStyle:UIAlertControllerStyleActionSheet];
    [alert addAction:[UIAlertAction actionWithTitle:@"新建文件夹" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) { [self newFolder]; }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"从文件 App 导入" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) { [self importFromFiles]; }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    UIViewController *top = WPGetTopVCForPresentation();
    if (top) [top presentViewController:alert animated:YES completion:nil];
}

- (void)newFolder {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"新建文件夹" message:nil preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) { tf.placeholder = @"文件夹名称"; }];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    __weak typeof(self) ws = self;
    [alert addAction:[UIAlertAction actionWithTitle:@"创建" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        NSString *name = alert.textFields.firstObject.text;
        NSError *err = nil;
        if ([VoicePackStore createFolderNamed:name inRelPath:ws.currentRelPath error:&err]) {
            WPShowToast(@"已创建");
            [ws reloadItems];
        } else {
            WPShowToast(err.localizedDescription ?: @"创建失败");
        }
    }]];
    UIViewController *top = WPGetTopVCForPresentation();
    if (top) [top presentViewController:alert animated:YES completion:nil];
}

- (void)importFromFiles {
    @try {
        // 老 API（iOS8+）：public.audio 覆盖 mp3/m4a/wav 等，public.data 兜底 .silk/.amr
        UIDocumentPickerViewController *picker = [[UIDocumentPickerViewController alloc]
            initWithDocumentTypes:@[@"public.audio", @"public.data"]
            inMode:UIDocumentPickerModeImport];
        picker.delegate = self;
        picker.allowsMultipleSelection = YES;
        UIViewController *top = WPGetTopVCForPresentation();
        if (top) [top presentViewController:picker animated:YES completion:nil];
    } @catch (NSException *e) {}
}

- (void)showItemActions:(VoicePackItem *)it {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:it.name message:nil preferredStyle:UIAlertControllerStyleActionSheet];
    __weak typeof(self) ws = self;
    [alert addAction:[UIAlertAction actionWithTitle:@"重命名" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        [ws renameItem:it];
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:([VoicePackStore isFavoriteRelPath:it.relPath] ? @"取消收藏" : @"收藏") style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        [VoicePackStore toggleFavoriteForRelPath:it.relPath];
        [ws reloadItems];
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"删除" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *a) {
        [ws stopPreviewPlayback]; // 防止正在播放被删除的文件
        NSError *err = nil;
        if ([VoicePackStore deleteItemAtRelPath:it.relPath error:&err]) {
            WPShowToast(@"已删除");
            [ws reloadItems];
        } else {
            WPShowToast(err.localizedDescription ?: @"删除失败");
        }
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    UIViewController *top = WPGetTopVCForPresentation();
    if (top) [top presentViewController:alert animated:YES completion:nil];
}

- (void)renameItem:(VoicePackItem *)it {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"重命名" message:nil preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) { tf.text = it.name; }];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    __weak typeof(self) ws = self;
    [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        NSString *name = alert.textFields.firstObject.text;
        NSError *err = nil;
        [ws stopPreviewPlayback]; // 防止正在播放被重命名的文件
        if ([VoicePackStore renameItemAtRelPath:it.relPath toName:name error:&err]) {
            WPShowToast(@"已重命名");
            [ws reloadItems];
        } else {
            WPShowToast(err.localizedDescription ?: @"重命名失败");
        }
    }]];
    UIViewController *top = WPGetTopVCForPresentation();
    if (top) [top presentViewController:alert animated:YES completion:nil];
}

#pragma mark UIDocumentPickerDelegate

- (void)documentPicker:(UIDocumentPickerViewController *)controller didPickDocumentsAtURLs:(NSArray<NSURL *> *)urls {
    __weak typeof(self) ws = self;
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        NSInteger okCount = 0;
        for (NSURL *url in urls) {
            NSError *err = nil;
            if ([VoicePackStore importFileFromURL:url toRelPath:ws.currentRelPath error:&err]) okCount++;
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            WPShowToast([NSString stringWithFormat:@"已导入 %lu 项", (unsigned long)okCount]);
            [ws reloadItems];
        });
    });
}

@end
