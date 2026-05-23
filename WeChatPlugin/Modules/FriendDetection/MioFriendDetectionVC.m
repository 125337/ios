#import "MioFriendDetectionVC.h"
#import "MioFriendDetector.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>

// ============================================================
// 辅助宏：安全 present（通过微信原生顶层 VC，复刻微信优化 getChatConfirmationTopViewController）
// ============================================================
#define WP_PRESENT(alert) ({ \
    UIViewController *__p = WPGetTopVCForPresentation() ?: self; \
    if (__p) [__p presentViewController:alert animated:YES completion:nil]; \
})

// ============================================================
// 自定义：带图标圆点、计数、箭头、可点击的行（完全复刻 WPAddNavRow 的按钮交互模式）
// 点击后调用 target 的 onNavigate: 方法，action 为关联的 action 字符串
// ============================================================
static void WPAddResultNavRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSInteger count, UIColor *iconBg, NSString *iconText, NSString *action, id target) {
    CGFloat cardW = cw - kPad * 2;

    // 图标圆点
    UIView *dot = [[UIView alloc] initWithFrame:CGRectMake(kPad + 6, cy + 10, 24, 24)];
    dot.backgroundColor = iconBg;
    dot.layer.cornerRadius = 12;
    [card addSubview:dot];

    UILabel *icon = [[UILabel alloc] initWithFrame:dot.bounds];
    icon.text = iconText;
    icon.font = [UIFont systemFontOfSize:14 weight:UIFontWeightSemibold];
    icon.textColor = [UIColor whiteColor];
    icon.textAlignment = NSTextAlignmentCenter;
    [dot addSubview:icon];

    // 标题
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad + 38, cy, cardW - 126, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    // 计数（右侧，给箭头留空）
    UILabel *cnt = [[UILabel alloc] initWithFrame:CGRectMake(cardW - 100, cy, 70, kRowH)];
    cnt.text = count >= 0 ? [NSString stringWithFormat:@"%ld", (long)count] : @"—";
    cnt.font = [UIFont systemFontOfSize:20 weight:UIFontWeightMedium];
    cnt.textColor = WPT2();
    cnt.textAlignment = NSTextAlignmentRight;
    [card addSubview:cnt];

    // 箭头指示器（复刻 WPAddNavRow）
    UILabel *arrow = [[UILabel alloc] initWithFrame:CGRectMake(cardW - 20, cy, 16, kRowH)];
    arrow.text = @"›";
    arrow.font = [UIFont systemFontOfSize:20];
    arrow.textColor = WPT3();
    [card addSubview:arrow];

    // 全行透明按钮（复刻 WPAddNavRow 的按钮逻辑）
    if (action && target) {
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = CGRectMake(0, cy, cardW, kRowH);
        objc_setAssociatedObject(btn, "action", action, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [btn addTarget:target action:@selector(onNavigate:) forControlEvents:UIControlEventTouchUpInside];
        [card addSubview:btn];
    }
}

// ============================================================
// MioFriendDetectionVC
// ============================================================
@interface MioFriendDetectionVC () <UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) MioFriendDetector *detector;
@property (nonatomic, assign) BOOL detecting;
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UILabel *statusHint;

// 详情页
@property (nonatomic, strong) NSArray<MioFriendDetectResult *> *detailFriends;
@property (nonatomic, strong) UITableView *detailTable;
@end

@implementation MioFriendDetectionVC

// ============================================================
// 工厂方法：创建详情页
// ============================================================
+ (instancetype)vcWithType:(NSString *)type friends:(NSArray<MioFriendDetectResult *> *)friends {
    MioFriendDetectionVC *vc = [[MioFriendDetectionVC alloc] init];
    vc.detailType = type;
    vc.detailFriends = friends;
    return vc;
}

// ============================================================
// viewDidLoad
// ============================================================
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = WPBgColor();

    if (self.detailType) {
        [self buildDetailUI];
    } else {
        [self buildMainUI];
    }
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

// ============================================================
// MARK: - 主页面 UI（复刻微信优化 2-section 布局）
// ============================================================
- (void)buildMainUI {
    self.title = @"好友检测";

    UIScrollView *sv = WPMakeSV(self);
    [self.view addSubview:sv];
    self.scrollView = sv;

    [self refreshMainUI];

    // 监听检测结果更新
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(detectionResultUpdated:)
                                                 name:@"com.mio.wechat.plugin.FriendDetection.ResultUpdated"
                                               object:nil];
}

- (void)refreshMainUI {
    for (UIView *v in self.scrollView.subviews) [v removeFromSuperview];

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ============ Section 1: 检测结果 ============
    [self.scrollView addSubview:WPMakeSectionHeader(@"检测结果", y, w)];
    y += 32;

    MioFriendDetectSummary *last = [MioFriendDetector loadSavedSummary];
    NSInteger errCount = last ? (NSInteger)last.invalidFriends.count : -1;
    NSInteger delCount = last ? (NSInteger)last.deletedFriends.count : -1;

    UIView *resultCard = WPMakeCard(y, w);
    WPAddResultNavRow(resultCard, 0, w, @"账号异常或检测失败", errCount,
                      [UIColor colorWithRed:1.0 green:0.23 blue:0.19 alpha:1.0], @"!",
                      @"fd_tapInvalid", self);
    WPAddSep(resultCard, kRowH, w);
    WPAddResultNavRow(resultCard, kRowH + 0.5, w, @"已被对方拉黑或删除", delCount,
                      [UIColor colorWithRed:1.0 green:0.58 blue:0.0 alpha:1.0], @"×",
                      @"fd_tapDeleted", self);

    CGFloat resultH = kRowH * 2 + 0.5;
    CGRect rf = resultCard.frame; rf.size.height = resultH; resultCard.frame = rf;
    [self.scrollView addSubview:resultCard];
    y += resultH + 16;

    // 结果说明
    self.statusHint = [[UILabel alloc] initWithFrame:CGRectMake(kPad + 4, y, w - kPad * 2 - 8, 36)];
    self.statusHint.font = [UIFont systemFontOfSize:12];
    self.statusHint.textColor = WPT3();
    self.statusHint.numberOfLines = 2;
    self.statusHint.text = errCount >= 0
        ? [NSString stringWithFormat:@"上次检测: %ld 个好友 | 异常 %ld | 已删除 %ld", (long)(last.totalCount), (long)errCount, (long)delCount]
        : @"检测结果会显示在此处，点击可查看详细列表。";
    [self.scrollView addSubview:self.statusHint];
    y += 36 + 16;

    // ============ Section 2: 操作 ============
    [self.scrollView addSubview:WPMakeSectionHeader(@"操作", y, w)];
    y += 32;

    UIView *actionCard = WPMakeCard(y, w);

    // "开始检测" 行
    NSString *title = self.detecting ? @"正在检测..." : (errCount >= 0 ? @"重新检测" : @"开始检测");
    WPAddNavRow(actionCard, 0, w, title, @"fd_startDetection", self);
    WPAddSep(actionCard, kRowH, w);

    // "清空数据" 行
    WPAddNavRow(actionCard, kRowH + 0.5, w, @"清空数据", @"fd_clearData", self);

    CGFloat actionH = kRowH * 2 + 0.5;
    CGRect af = actionCard.frame; af.size.height = actionH; actionCard.frame = af;
    [self.scrollView addSubview:actionCard];
    y += actionH + 16;

    // ============ 底部说明 ============
    UILabel *hint = [[UILabel alloc] initWithFrame:CGRectMake(kPad + 4, y, w - kPad * 2 - 8, 80)];
    hint.text = @"插件通过向好友发起转账进行检测，点击开始检测，耐心等待检测完成。\n\n检测完成后如果怀疑误判，建议进入「已被对方拉黑或删除」重新检测一次。";
    hint.font = [UIFont systemFontOfSize:12];
    hint.textColor = WPT3();
    hint.numberOfLines = 0;
    [self.scrollView addSubview:hint];
    y += 96;

    self.scrollView.contentSize = CGSizeMake(w, y);
}

// ============================================================
// 主页面：点击"账号异常"行
// ============================================================
- (void)tapInvalidRow {
    MioFriendDetectSummary *s = [MioFriendDetector loadSavedSummary];
    if (!s || s.invalidFriends.count == 0) return;
    MioFriendDetectionVC *vc = [MioFriendDetectionVC vcWithType:@"invalid" friends:s.invalidFriends];
    [self.navigationController pushViewController:vc animated:YES];
}

// ============================================================
// 主页面：点击"已被删除"行
// ============================================================
- (void)tapDeletedRow {
    MioFriendDetectSummary *s = [MioFriendDetector loadSavedSummary];
    if (!s || s.deletedFriends.count == 0) return;
    MioFriendDetectionVC *vc = [MioFriendDetectionVC vcWithType:@"deleted" friends:s.deletedFriends];
    [self.navigationController pushViewController:vc animated:YES];
}

// ============================================================
// MARK: - onNavigate: (WPAddNavRow / WPAddResultNavRow 统一点击入口)
// ============================================================
- (void)onNavigate:(UIButton *)sender {
    NSString *action = objc_getAssociatedObject(sender, "action");
    if (!action) return;

    if ([action isEqualToString:@"fd_startDetection"]) {
        [self startDetectionTapped];
    } else if ([action isEqualToString:@"fd_clearData"]) {
        [self clearDataTapped];
    } else if ([action isEqualToString:@"fd_tapInvalid"]) {
        [self tapInvalidRow];
    } else if ([action isEqualToString:@"fd_tapDeleted"]) {
        [self tapDeletedRow];
    }
}

// ============================================================
// MARK: - 详情页 UI（TableView 列表 + 右上角按钮）
// ============================================================
- (void)buildDetailUI {
    BOOL isDeleted = [self.detailType isEqualToString:@"deleted"];
    self.title = isDeleted ? @"已删除好友" : @"异常/失败";

    // 右上角按钮（复刻微信优化 viewDidLoad 行 65195-65228）
    UIBarButtonItem *retestBtn = [[UIBarButtonItem alloc] initWithTitle:@"重新检测"
                                                                  style:UIBarButtonItemStylePlain
                                                                 target:self
                                                                 action:@selector(retestSelectedFriends)];
    self.navigationItem.rightBarButtonItem = retestBtn;

    if (isDeleted && self.detailFriends.count > 0) {
        UIBarButtonItem *deleteBtn = [[UIBarButtonItem alloc] initWithTitle:@"全部删除"
                                                                      style:UIBarButtonItemStylePlain
                                                                     target:self
                                                                     action:@selector(deleteAllDeletedContacts)];
        deleteBtn.tintColor = [UIColor redColor];
        self.navigationItem.rightBarButtonItems = @[deleteBtn, retestBtn];
    }

    // UITableView
    self.detailTable = [[UITableView alloc] initWithFrame:self.view.bounds style:UITableViewStylePlain];
    self.detailTable.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.detailTable.delegate = self;
    self.detailTable.dataSource = self;
    self.detailTable.backgroundColor = WPBgColor();
    self.detailTable.separatorStyle = UITableViewCellSeparatorStyleSingleLine;
    self.detailTable.rowHeight = 56;
    [self.view addSubview:self.detailTable];

    // 监听结果更新（重新检测完成后刷新列表）
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(detectionResultUpdated:)
                                                 name:@"com.mio.wechat.plugin.FriendDetection.ResultUpdated"
                                               object:nil];
}

// ============================================================
// 详情页：重新检测选中的好友（复刻微信优化 行 66428-66489）
// ============================================================
- (void)retestSelectedFriends {
    if (self.detailFriends.count == 0) return;
    NSString *msg = [NSString stringWithFormat:@"确认重新检测选中的 %lu 个好友吗？",
                     (unsigned long)self.detailFriends.count];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"重新检测" message:msg preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"重新检测" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        [self beginRetestSelected];
    }]];
    WP_PRESENT(alert);
}

- (void)beginRetestSelected {
    if (!self.detector) self.detector = [[MioFriendDetector alloc] init];

    // 收集 wxIDs
    NSMutableArray *wxIDs = [NSMutableArray arrayWithCapacity:self.detailFriends.count];
    for (MioFriendDetectResult *r in self.detailFriends) {
        [wxIDs addObject:r.wxID];
    }

    __weak typeof(self) ws = self;
    [self.detector retestFriends:wxIDs progress:^(NSString *wx, NSString *nk, NSInteger cur, NSInteger t) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ws.title = [NSString stringWithFormat:@"重新检测 (%ld/%ld)", (long)cur, (long)t];
        });
    } completion:^(MioFriendDetectSummary *sum, NSError *err) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ws.title = [ws.detailType isEqualToString:@"deleted"] ? @"已删除好友" : @"异常/失败";
            if (err) {
                [ws showAlert:@"检测失败" msg:err.localizedDescription];
            } else {
                // 重新加载结果
                NSArray *newFriends = [ws.detailType isEqualToString:@"deleted"] ? sum.deletedFriends : sum.invalidFriends;
                ws.detailFriends = newFriends;
                [ws.detailTable reloadData];
                [[NSNotificationCenter defaultCenter] postNotificationName:@"com.mio.wechat.plugin.FriendDetection.ResultUpdated" object:nil];
            }
        });
    }];
}

// ============================================================
// 详情页：删除所有已删除好友（复刻微信优化 行 67026-67085）
// ============================================================
- (void)deleteAllDeletedContacts {
    if (self.detailFriends.count == 0) {
        [self showAlert:@"提示" msg:@"暂无被拉黑或删除的好友"];
        return;
    }
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"全部删除"
                                                                   message:@"确认从通讯录删除所有已拉黑/删除你的好友吗？"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"确认删除" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *a) {
        [self performDeleteAll];
    }]];
    WP_PRESENT(alert);
}

- (void)performDeleteAll {
    Class contactMgr = objc_getClass("CContactMgr");
    if (!contactMgr) return;

    id cMgr = ((id (*)(id, SEL))objc_msgSend)(contactMgr, sel_registerName("getContactMgr"));
    SEL delSel = sel_registerName("deleteContact:");
    NSMutableArray *failed = [NSMutableArray array];

    for (MioFriendDetectResult *r in self.detailFriends) {
        id contact = ((id (*)(id, SEL, id))objc_msgSend)(cMgr, sel_registerName("getContactByName:"), r.wxID);
        if (contact) {
            ((void (*)(id, SEL, id))objc_msgSend)(cMgr, delSel, contact);
        } else {
            [failed addObject:r.wxID];
        }
    }

    // 刷新
    [MioFriendDetector clearSavedSummary];
    NSString *result = failed.count == 0
        ? [NSString stringWithFormat:@"已删除 %lu 个好友", (unsigned long)self.detailFriends.count]
        : [NSString stringWithFormat:@"已删除 %lu 个，%lu 个失败", (unsigned long)(self.detailFriends.count - failed.count), (unsigned long)failed.count];
    [self showAlert:@"删除完成" msg:result];
    self.detailFriends = @[];
    [self.detailTable reloadData];
    [[NSNotificationCenter defaultCenter] postNotificationName:@"com.mio.wechat.plugin.FriendDetection.ResultUpdated" object:nil];
}

// ============================================================
// MARK: - UITableViewDataSource / UITableViewDelegate
// ============================================================
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return (NSInteger)self.detailFriends.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *cid = @"fdDetailCell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cid];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:cid];
        cell.backgroundColor = [UIColor whiteColor];
        cell.textLabel.font = [UIFont systemFontOfSize:15];
        cell.detailTextLabel.font = [UIFont systemFontOfSize:12];
        cell.detailTextLabel.textColor = WPT3();
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    }

    MioFriendDetectResult *r = self.detailFriends[indexPath.row];
    NSString *name = r.nickname.length ? r.nickname : (r.remark.length ? r.remark : r.wxID);
    cell.textLabel.text = name;

    // 副标题显示 wxID 和 retmsg
    NSString *statusStr = nil;
    if (r.status == MioFriendStatusInvalid) {
        statusStr = [NSString stringWithFormat:@"账号异常 | retcode: %ld", (long)r.retcode];
    } else {
        statusStr = [NSString stringWithFormat:@"%@ | %@", r.wxID, r.retmsg.length ? r.retmsg : @"已被删除"];
    }
    cell.detailTextLabel.text = statusStr;

    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    MioFriendDetectResult *r = self.detailFriends[indexPath.row];
    NSString *name = r.nickname.length ? r.nickname : (r.remark.length ? r.remark : r.wxID);
    NSString *msg = [NSString stringWithFormat:@"好友: %@\n微信号: %@\nretcode: %ld\nretmsg: %@",
                     name, r.wxID, (long)r.retcode, r.retmsg.length ? r.retmsg : @"（无）"];
    [self showAlert:name msg:msg];
}

// ============================================================
// MARK: - 主页面 Actions
// ============================================================
- (void)startDetectionTapped {
    if (self.detecting) return;
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"开始检测"
                                                                   message:@"将向每个好友发起转账预下单检测，对方完全无感知。是否继续？"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"开始检测" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        [self beginDetection];
    }]];
    WP_PRESENT(alert);
}

- (void)clearDataTapped {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"清空数据"
                                                                   message:@"是否确定清空所有检测数据？"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定清空" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *a) {
        [MioFriendDetector clearSavedSummary];
        [self.detector stopDetection];
        self.detecting = NO;
        self.detector = [[MioFriendDetector alloc] init];
        [self refreshMainUI];
    }]];
    WP_PRESENT(alert);
}

// ============================================================
// MARK: - 检测流程
// ============================================================
- (void)beginDetection {
    if (!self.detector) self.detector = [[MioFriendDetector alloc] init];
    self.detecting = YES;
    [self refreshMainUI];

    __weak typeof(self) ws = self;
    [self.detector startNewDetection:^(NSString *wx, NSString *nk, NSInteger cur, NSInteger t) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ws.statusHint.text = [NSString stringWithFormat:@"正在检测: %@ (%ld/%ld)", nk.length ? nk : wx, (long)cur, (long)t];
        });
    } completion:^(MioFriendDetectSummary *sum, NSError *err) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ws.detecting = NO;
            [ws refreshMainUI];
            if (err) {
                ws.statusHint.text = [NSString stringWithFormat:@"检测失败: %@", err.localizedDescription];
                [ws showAlert:@"检测失败" msg:err.localizedDescription];
            } else {
                ws.statusHint.text = [NSString stringWithFormat:@"检测完成: %ld 个好友", (long)sum.totalCount];
                [[NSNotificationCenter defaultCenter] postNotificationName:@"com.mio.wechat.plugin.FriendDetection.ResultUpdated" object:nil];
            }
        });
    }];
}

// ============================================================
// MARK: - 通用
// ============================================================
- (void)showAlert:(NSString *)title msg:(NSString *)msg {
    UIAlertController *a = [UIAlertController alertControllerWithTitle:title message:msg preferredStyle:UIAlertControllerStyleAlert];
    [a addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
    WP_PRESENT(a);
}

- (void)detectionResultUpdated:(NSNotification *)note {
    dispatch_async(dispatch_get_main_queue(), ^{
        if (self.detailType) {
            // 详情页：重新加载数据
            MioFriendDetectSummary *s = [MioFriendDetector loadSavedSummary];
            self.detailFriends = [self.detailType isEqualToString:@"deleted"] ? s.deletedFriends : s.invalidFriends;
            [self.detailTable reloadData];
        } else {
            [self refreshMainUI];
        }
    });
}

@end