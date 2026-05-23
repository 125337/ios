#import "MioFriendDetectionVC.h"
#import "MioFriendDetector.h"
#import "MioFriendDetectResult.h"
#import "../../Core/LogManager.h"

@interface MioFriendDetectionVC ()
@property (nonatomic, strong) MioFriendDetector *detector;
@property (nonatomic, strong) UILabel *statusLabel;
@property (nonatomic, strong) UIProgressView *progressView;
@property (nonatomic, strong) UILabel *progressLabel;
@property (nonatomic, strong) UIButton *actionBtn;
@property (nonatomic, strong) UIButton *stopBtn;
@property (nonatomic, assign) BOOL detecting;
@end

@implementation MioFriendDetectionVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"好友检测";
    self.view.backgroundColor = [UIColor colorWithRed:0.96 green:0.96 blue:0.96 alpha:1.0];
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"返回" style:UIBarButtonItemStylePlain target:self action:@selector(dismissSelf)];

    CGFloat w = self.view.bounds.size.width;
    CGFloat top = self.navigationController ? 100 : 120;

    // 说明
    UILabel *info = [[UILabel alloc] initWithFrame:CGRectMake(16, top, w-32, 60)];
    info.text = @"检测好友列表中已将你删除的联系人\n通过转账预下单方式验证，对方无感知";
    info.font = [UIFont systemFontOfSize:13]; info.textColor = [UIColor grayColor];
    info.numberOfLines = 0; info.textAlignment = NSTextAlignmentCenter;
    [self.view addSubview:info];

    // 状态
    self.statusLabel = [[UILabel alloc] initWithFrame:CGRectMake(16, top+70, w-32, 30)];
    self.statusLabel.font = [UIFont systemFontOfSize:14]; self.statusLabel.textColor = [UIColor darkGrayColor];
    self.statusLabel.textAlignment = NSTextAlignmentCenter;
    [self.view addSubview:self.statusLabel];

    // 进度条
    self.progressView = [[UIProgressView alloc] initWithFrame:CGRectMake(40, top+110, w-80, 4)];
    self.progressView.hidden = YES;
    [self.view addSubview:self.progressView];

    // 进度文字
    self.progressLabel = [[UILabel alloc] initWithFrame:CGRectMake(16, top+120, w-32, 20)];
    self.progressLabel.font = [UIFont systemFontOfSize:12]; self.progressLabel.textColor = [UIColor grayColor];
    self.progressLabel.textAlignment = NSTextAlignmentCenter; self.progressLabel.hidden = YES;
    [self.view addSubview:self.progressLabel];

    // 开始按钮
    self.actionBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    self.actionBtn.frame = CGRectMake(40, top+160, w-80, 48);
    self.actionBtn.backgroundColor = [UIColor colorWithRed:0.2 green:0.5 blue:1.0 alpha:1.0];
    [self.actionBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    self.actionBtn.layer.cornerRadius = 8;
    self.actionBtn.titleLabel.font = [UIFont systemFontOfSize:17 weight:UIFontWeightSemibold];
    [self.actionBtn addTarget:self action:@selector(actionTapped) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:self.actionBtn];

    // 停止按钮
    self.stopBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    self.stopBtn.frame = CGRectMake(40, top+220, w-80, 44);
    self.stopBtn.backgroundColor = [UIColor colorWithRed:0.9 green:0.3 blue:0.3 alpha:1.0];
    [self.stopBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    self.stopBtn.layer.cornerRadius = 8; self.stopBtn.hidden = YES;
    [self.stopBtn setTitle:@"停止检测" forState:UIControlStateNormal];
    [self.stopBtn addTarget:self action:@selector(stopTapped) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:self.stopBtn];

    // 查看结果
    UIButton *viewBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    viewBtn.frame = CGRectMake(40, top+275, w-80, 44);
    viewBtn.backgroundColor = [UIColor colorWithRed:0.4 green:0.4 blue:0.4 alpha:1.0];
    [viewBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    viewBtn.layer.cornerRadius = 8;
    [viewBtn setTitle:@"查看上次结果" forState:UIControlStateNormal];
    [viewBtn addTarget:self action:@selector(viewResults) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:viewBtn];

    [self loadState];
}

- (void)loadState {
    MioFriendDetectSummary *s = [MioFriendDetector loadSavedSummary];
    if (s) {
        BOOL full = s.checkedWxIDs.count >= s.totalCount && s.totalCount > 0;
        [self.actionBtn setTitle:full ? @"重新检测" : @"继续检测" forState:UIControlStateNormal];
        self.statusLabel.text = [NSString stringWithFormat:@"上次: %lu/%ld, 被删 %lu",
                                 (unsigned long)s.checkedWxIDs.count, (long)s.totalCount,
                                 (unsigned long)s.deletedFriends.count];
    } else {
        [self.actionBtn setTitle:@"开始检测" forState:UIControlStateNormal];
        self.statusLabel.text = @"";
    }
}

- (void)actionTapped {
    if (self.detecting) return;
    MioFriendDetectSummary *s = [MioFriendDetector loadSavedSummary];
    BOOL resume = s && s.checkedWxIDs.count > 0 && s.checkedWxIDs.count < s.totalCount;

    self.detecting = YES;
    self.actionBtn.enabled = NO;
    self.stopBtn.hidden = NO;
    self.progressView.hidden = NO;
    self.progressLabel.hidden = NO;

    if (!self.detector) self.detector = [[MioFriendDetector alloc] init];
    __weak typeof(self) ws = self;

    if (resume)
        [self.detector resumeDetection:^(NSString *wx, NSString *nk, NSInteger cur, NSInteger t) {
            [ws _progress:wx nk:nk cur:cur t:t];
        } completion:^(MioFriendDetectSummary *sm, NSError *e) {
            [ws _done:sm err:e];
        }];
    else
        [self.detector startNewDetection:^(NSString *wx, NSString *nk, NSInteger cur, NSInteger t) {
            [ws _progress:wx nk:nk cur:cur t:t];
        } completion:^(MioFriendDetectSummary *sm, NSError *e) {
            [ws _done:sm err:e];
        }];
}

- (void)stopTapped {
    [self.detector stopDetection];
    self.detecting = NO;
    self.actionBtn.enabled = YES;
    self.stopBtn.hidden = YES;
    self.statusLabel.text = @"已暂停 (进度已保存)";
    [self loadState];
}

- (void)viewResults {
    MioFriendDetectSummary *s = [MioFriendDetector loadSavedSummary];
    if (!s) { [self _alert:@"提示" msg:@"暂无检测记录"]; return; }

    NSMutableString *m = [NSMutableString string];
    [m appendFormat:@"检测时间: %@\n\n",
     [NSDateFormatter localizedStringFromDate:[NSDate dateWithTimeIntervalSince1970:s.timestamp]
                                    dateStyle:NSDateFormatterShortStyle timeStyle:NSDateFormatterShortStyle]];
    [m appendFormat:@"共检测: %ld 个好友\n被删除: %lu 人\n异常: %lu 人\n\n",
     (long)s.totalCount, (unsigned long)s.deletedFriends.count, (unsigned long)s.invalidFriends.count];

    if (s.deletedFriends.count) {
        [m appendString:@"【被删除】\n"];
        for (MioFriendDetectResult *r in s.deletedFriends)
            [m appendFormat:@"%@ (%@)\n", r.nickname.length?r.nickname:r.wxID, r.wxID];
        [m appendString:@"\n"];
    }
    if (s.invalidFriends.count) {
        [m appendString:@"【异常】\n"];
        for (MioFriendDetectResult *r in s.invalidFriends)
            [m appendFormat:@"%@ (%@) ret=%ld\n", r.nickname.length?r.nickname:r.wxID, r.wxID, (long)r.retcode];
    }
    [self _alert:@"检测结果" msg:m];
}

- (void)_progress:(NSString *)wx nk:(NSString *)nk cur:(NSInteger)cur t:(NSInteger)t {
    dispatch_async(dispatch_get_main_queue(), ^{
        self.statusLabel.text = [NSString stringWithFormat:@"正在检测: %@", nk.length?nk:wx];
        self.progressView.progress = (float)cur / (float)t;
        self.progressLabel.text = [NSString stringWithFormat:@"%ld / %ld", (long)cur, (long)t];
    });
}

- (void)_done:(MioFriendDetectSummary *)sm err:(NSError *)e {
    dispatch_async(dispatch_get_main_queue(), ^{
        self.detecting = NO; self.actionBtn.enabled = YES; self.stopBtn.hidden = YES;
        if (e) { self.statusLabel.text = [NSString stringWithFormat:@"失败: %@", e.localizedDescription]; [self _alert:@"失败" msg:e.localizedDescription]; return; }
        self.statusLabel.text = [NSString stringWithFormat:@"完成: %ld好友, 被删%lu, 异常%lu",
                                 (long)sm.totalCount, (unsigned long)sm.deletedFriends.count, (unsigned long)sm.invalidFriends.count];
        [self _alert:@"检测完成" msg:[NSString stringWithFormat:@"共 %ld 个好友\n被删除: %lu 人\n异常: %lu 人",
                                      (long)sm.totalCount, (unsigned long)sm.deletedFriends.count, (unsigned long)sm.invalidFriends.count]];
        [self loadState];
    });
}

- (void)_alert:(NSString *)title msg:(NSString *)msg {
    UIAlertController *a = [UIAlertController alertControllerWithTitle:title message:msg preferredStyle:UIAlertControllerStyleAlert];
    [a addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
    if (!self.presentedViewController && !self.isBeingDismissed && !self.isBeingPresented)
        [self presentViewController:a animated:YES completion:nil];
}

- (void)dismissSelf {
    if (self.navigationController) [self.navigationController popViewControllerAnimated:YES];
    else [self dismissViewControllerAnimated:YES completion:nil];
}

@end