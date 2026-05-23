#import "MioFriendDetectionVC.h"
#import "MioFriendDetector.h"
#import "MioFriendDetectResult.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>

// ============================================================
// 自定义：带图标圆点和计数的行（复刻微信优化"账号异常"和"被删除"两行）
// 用法: WPAddResultCountRow(card, cy, w, "账号异常或检测失败", count, color)
// ============================================================
static void WPAddResultCountRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSInteger count, UIColor *iconBg, NSString *iconText) {
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

    // 计数（右侧）
    UILabel *cnt = [[UILabel alloc] initWithFrame:CGRectMake(cardW - 80, cy, 70, kRowH)];
    cnt.text = count >= 0 ? [NSString stringWithFormat:@"%ld", (long)count] : @"—";
    cnt.font = [UIFont systemFontOfSize:20 weight:UIFontWeightMedium];
    cnt.textColor = WPT2();
    cnt.textAlignment = NSTextAlignmentRight;
    cnt.tag = 0xFD01; // 标记以便后续更新
    objc_setAssociatedObject(cnt, "fdResultKey", title, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [card addSubview:cnt];
}

// ============================================================
// MioFriendDetectionVC
// ============================================================
@interface MioFriendDetectionVC ()
@property (nonatomic, strong) MioFriendDetector *detector;
@property (nonatomic, assign) BOOL detecting;
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UILabel *statusHint;
@end

@implementation MioFriendDetectionVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"好友检测";
    self.view.backgroundColor = WPBgColor();

    UIScrollView *sv = WPMakeSV(self);
    [self.view addSubview:sv];
    self.scrollView = sv;

    [self buildUI];

    // 监听检测结果更新通知（检测完成后刷新 UI）
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(detectionResultUpdated:)
                                                 name:@"com.mio.wechat.plugin.FriendDetection.ResultUpdated"
                                               object:nil];
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

// ============================================================
// MARK: - Build UI (使用 WPCommonUI，复刻微信优化布局)
// ============================================================
- (void)buildUI {
    // 清理旧视图
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
    WPAddResultCountRow(resultCard, 0, w, @"账号异常或检测失败", errCount,
                        [UIColor colorWithRed:1.0 green:0.23 blue:0.19 alpha:1.0], @"!"); // 红色 ⚠
    WPAddSep(resultCard, kRowH, w);
    WPAddResultCountRow(resultCard, kRowH + 0.5, w, @"已被对方拉黑或删除", delCount,
                        [UIColor colorWithRed:1.0 green:0.58 blue:0.0 alpha:1.0], @"×"); // 橙色 ×

    CGFloat resultH = kRowH * 2 + 0.5;
    CGRect rf = resultCard.frame; rf.size.height = resultH; resultCard.frame = rf;
    [self.scrollView addSubview:resultCard];
    y += resultH + 16;

    // 结果说明
    self.statusHint = [[UILabel alloc] initWithFrame:CGRectMake(kPad + 4, y, w - kPad * 2 - 8, 36)];
    self.statusHint.font = [UIFont systemFontOfSize:12];
    self.statusHint.textColor = WPT3();
    self.statusHint.numberOfLines = 2;
    self.statusHint.text = @"检测结果会显示在此处，点击可查看详细列表。";
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
// MARK: - Actions
// ============================================================
- (void)onNavigate:(UIButton *)sender {
    NSString *action = objc_getAssociatedObject(sender, "action");
    if (!action) return;

    if ([action isEqualToString:@"fd_startDetection"]) {
        [self startDetectionTapped];
    } else if ([action isEqualToString:@"fd_clearData"]) {
        [self clearDataTapped];
    } else if ([action isEqualToString:@"fd_viewInvalid"]) {
        [self showResultDetail:@"账号异常或检测失败" type:@"invalid"];
    } else if ([action isEqualToString:@"fd_viewDeleted"]) {
        [self showResultDetail:@"已被对方拉黑或删除" type:@"deleted"];
    }
}

- (void)startDetectionTapped {
    if (self.detecting) return;

    // 参照微信优化: 开始检测前弹出确认框
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"开始检测"
                                                                   message:@"将向每个好友发起转账预下单检测，对方完全无感知。是否继续？"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"开始检测" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
        [self beginDetection];
    }]];
    [self presentViewController:alert animated:YES completion:nil];
}

- (void)clearDataTapped {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"清空数据"
                                                                   message:@"是否确定清空所有检测数据？"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定清空" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *a) {
        [MioFriendDetector clearSavedSummary];
        // 重建 UI 归零
        [self.detector stopDetection];
        self.detecting = NO;
        self.detector = [[MioFriendDetector alloc] init];
        [self buildUI];
    }]];
    [self presentViewController:alert animated:YES completion:nil];
}

// ============================================================
// MARK: - Detection Flow
// ============================================================
- (void)beginDetection {
    if (!self.detector) self.detector = [[MioFriendDetector alloc] init];
    self.detecting = YES;
    [self buildUI]; // 刷新 UI 显示"正在检测..."

    __weak typeof(self) ws = self;
    [self.detector startNewDetection:^(NSString *wx, NSString *nk, NSInteger cur, NSInteger t) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ws.statusHint.text = [NSString stringWithFormat:@"正在检测: %@ (%ld/%ld)", nk.length ? nk : wx, (long)cur, (long)t];
        });
    } completion:^(MioFriendDetectSummary *sum, NSError *err) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ws.detecting = NO;
            [ws buildUI]; // 刷新显示结果
            if (err) {
                ws.statusHint.text = [NSString stringWithFormat:@"检测失败: %@", err.localizedDescription];
                [ws showAlert:@"检测失败" msg:err.localizedDescription];
            } else {
                ws.statusHint.text = [NSString stringWithFormat:@"检测完成: %ld 个好友", (long)sum.totalCount];
                [[NSNotificationCenter defaultCenter] postNotificationName:@"com.mio.wechat.plugin.FriendDetection.ResultUpdated"
                                                                    object:nil];
            }
        });
    }];
}

- (void)showResultDetail:(NSString *)title type:(NSString *)type {
    MioFriendDetectSummary *s = [MioFriendDetector loadSavedSummary];
    if (!s) return;

    NSArray<MioFriendDetectResult *> *list = [type isEqualToString:@"invalid"] ? s.invalidFriends : s.deletedFriends;
    if (list.count == 0) {
        [self showAlert:title msg:@"暂无数据"];
        return;
    }

    NSMutableString *m = [NSMutableString string];
    [m appendFormat:@"共 %lu 人\n\n", (unsigned long)list.count];
    for (MioFriendDetectResult *r in list) {
        NSString *name = r.nickname.length ? r.nickname : (r.remark.length ? r.remark : r.wxID);
        [m appendFormat:@"%@\n%@\n\n", name, r.wxID];
    }

    [self showAlert:title msg:m];
}

- (void)showAlert:(NSString *)title msg:(NSString *)msg {
    if (self.presentedViewController || self.isBeingDismissed || self.isBeingPresented) return;
    UIAlertController *a = [UIAlertController alertControllerWithTitle:title message:msg preferredStyle:UIAlertControllerStyleAlert];
    [a addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:a animated:YES completion:nil];
}

- (void)detectionResultUpdated:(NSNotification *)note {
    dispatch_async(dispatch_get_main_queue(), ^{
        [self buildUI];
    });
}

@end