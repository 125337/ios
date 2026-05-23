#import "MioFriendDetectionVC.h"
#import "MioFriendDetector.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>

#pragma mark - 安全 present 宏

#define WP_PRESENT(alert) ({ \
    UIViewController *__p = WPGetTopVCForPresentation() ?: self; \
    if (__p) [__p presentViewController:alert animated:YES completion:nil]; \
})

#pragma mark - 私有常量

static const CGFloat kCardPadH = 18.0;   // 卡片左右内边距
static const CGFloat kIconSize  = 28.0;  // 图标圆点大小

#pragma mark - MioFriendDetectionVC

@interface MioFriendDetectionVC () <UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) MioFriendDetector *detector;
@property (nonatomic, assign) BOOL detecting;
@property (nonatomic, weak)   UILabel *statusLabel;
@property (nonatomic, weak)   UIScrollView *mainScrollView;

// 详情页数据
@property (nonatomic, copy)   NSArray<MioFriendDetectResult *> *detailFriends;
@property (nonatomic, weak)   UITableView *detailTable;
@end

@implementation MioFriendDetectionVC

#pragma mark - 工厂方法

+ (instancetype)vcWithType:(NSString *)type friends:(NSArray<MioFriendDetectResult *> *)friends {
    MioFriendDetectionVC *vc = [[self alloc] init];
    vc.detailType = type;
    vc.detailFriends = friends ?: @[];
    return vc;
}

#pragma mark - 生命周期

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = WPBgColor();
    if (self.detailType) {
        [self buildDetailPage];
    } else {
        [self buildMainPage];
    }
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

#pragma mark - ==================== 主页面 ====================

- (void)buildMainPage {
    self.title = @"好友检测";

    // 监听结果更新
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(onResultUpdated:)
                                                 name:@"com.mio.wechat.plugin.FriendDetection.ResultUpdated"
                                               object:nil];

    [self renderMainPage];
}

- (void)renderMainPage {
    // 创建/复用 ScrollView（处理导航栏安全区）
    if (!self.mainScrollView) {
        UIScrollView *sv = [[UIScrollView alloc] initWithFrame:self.view.bounds];
        sv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        sv.backgroundColor = WPBgColor();
        sv.alwaysBounceVertical = YES;
        if (@available(iOS 11.0, *)) {
            sv.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentAutomatic;
        }
        [self.view addSubview:sv];
        self.mainScrollView = sv;
    }

    // 清除旧内容
    for (UIView *v in self.mainScrollView.subviews) [v removeFromSuperview];

    CGFloat w = self.view.bounds.size.width;
    if (w <= 0) w = [UIScreen mainScreen].bounds.size.width;
    CGFloat cardX = kPad;
    CGFloat cardW = w - kPad * 2;
    CGFloat y = 12;

    UIView *container = self.mainScrollView;

    // ==================== 检测结果 Section ====================
    [container addSubview:[self makeSectionTitle:@"检测结果" top:y width:w]]; y += 26;

    MioFriendDetectSummary *last = [MioFriendDetector loadSavedSummary];
    BOOL hasData = (last != nil);

    UIView *resultCard = [self makeCard:y width:w];
    CGFloat ry = 0;

    // 行1: 账号异常
    [self addResultRow:resultCard top:ry width:cardW
                 title:@"账号异常或检测失败"
                 count:hasData ? (NSInteger)last.invalidFriends.count : -1
              iconText:@"!"
              iconColor:[UIColor colorWithRed:1.0 green:0.23 blue:0.19 alpha:1.0]
                action:@"invalid"];
    ry += kRowH;

    if (hasData) {
        [self addSepLine:resultCard top:ry width:cardW]; ry += 0.5;
    }

    // 行2: 已删除
    [self addResultRow:resultCard top:ry width:cardW
                 title:@"已被对方拉黑或删除"
                 count:hasData ? (NSInteger)last.deletedFriends.count : -1
              iconText:@"×"
              iconColor:[UIColor colorWithRed:1.0 green:0.58 blue:0.0 alpha:1.0]
                action:@"deleted"];

    resultCard.frame = CGRectMake(cardX, y, cardW, kRowH * 2 + 0.5);
    [container addSubview:resultCard];
    y += resultCard.frame.size.height + 12;

    // 状态文字
    UILabel *hint = [[UILabel alloc] initWithFrame:CGRectMake(cardX + 4, y, cardW - 8, 40)];
    hint.font = [UIFont systemFontOfSize:12];
    hint.textColor = WPT3();
    hint.numberOfLines = 2;
    if (hasData) {
        hint.text = [NSString stringWithFormat:@"上次检测: %ld人 | 异常 %lu | 已删 %lu",
                     (long)last.totalCount,
                     (unsigned long)last.invalidFriends.count,
                     (unsigned long)last.deletedFriends.count];
    } else {
        hint.text = @"检测结果会显示在此处，点击可查看详细列表。";
    }
    [container addSubview:hint];
    self.statusLabel = hint;
    y += 52;

    // ==================== 操作 Section ====================
    [container addSubview:[self makeSectionTitle:@"操作" top:y width:w]]; y += 26;

    UIView *actionCard = [self makeCard:y width:w];
    CGFloat ay = 0;

    NSString *btnTitle = self.detecting ? @"正在检测..." : (hasData ? @"重新检测" : @"开始检测");
    [self addActionRow:actionCard top:ay width:cardW title:btnTitle action:@"start"];
    ay += kRowH;
    [self addSepLine:actionCard top:ay width:cardW]; ay += 0.5;
    [self addActionRow:actionCard top:ay width:cardW title:@"清空数据" action:@"clear"];

    actionCard.frame = CGRectMake(cardX, y, cardW, kRowH * 2 + 0.5);
    [container addSubview:actionCard];
    y += actionCard.frame.size.height + 12;

    // ==================== 底部说明 ====================
    UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(cardX + 4, y, cardW - 8, 80)];
    footer.text = @"通过向好友发起转账进行检测，对方完全无感知。\n检测完成后如怀疑误判，建议进入详情页重新检测。";
    footer.font = [UIFont systemFontOfSize:12];
    footer.textColor = WPT3();
    footer.numberOfLines = 0;
    [container addSubview:footer];
    y += 96;

    self.mainScrollView.contentSize = CGSizeMake(w, y + 20);
}

#pragma mark - 主页面 Row 构造

- (UIView *)makeCard:(CGFloat)top width:(CGFloat)w {
    UIView *c = [[UIView alloc] initWithFrame:CGRectMake(kPad, top, w - kPad * 2, 0)];
    c.backgroundColor = WPCardBg();
    c.layer.cornerRadius = kRadius;
    if (@available(iOS 13.0, *)) c.layer.cornerCurve = kCACornerCurveContinuous;
    c.clipsToBounds = YES;
    return c;
}

- (UILabel *)makeSectionTitle:(NSString *)text top:(CGFloat)top width:(CGFloat)w {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kPad + 6, top, w - kPad * 2 - 12, 22)];
    l.text = text;
    l.font = [UIFont systemFontOfSize:13 weight:UIFontWeightSemibold];
    l.textColor = WPT2();
    return l;
}

/// 结果行：带图标、计数、箭头，可点击
- (void)addResultRow:(UIView *)card top:(CGFloat)cy width:(CGFloat)cardW
               title:(NSString *)title count:(NSInteger)count
            iconText:(NSString *)iconText iconColor:(UIColor *)iconColor
              action:(NSString *)action {
    // 图标圆点
    UIView *dot = [[UIView alloc] initWithFrame:CGRectMake(kCardPadH, cy + (kRowH - kIconSize) / 2, kIconSize, kIconSize)];
    dot.backgroundColor = iconColor;
    dot.layer.cornerRadius = kIconSize / 2;
    [card addSubview:dot];

    UILabel *iconLbl = [[UILabel alloc] initWithFrame:dot.bounds];
    iconLbl.text = iconText;
    iconLbl.font = [UIFont systemFontOfSize:16 weight:UIFontWeightBold];
    iconLbl.textColor = [UIColor whiteColor];
    iconLbl.textAlignment = NSTextAlignmentCenter;
    [dot addSubview:iconLbl];

    // 标题
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCardPadH + kIconSize + 10, cy, cardW - kCardPadH * 2 - kIconSize - 80, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    // 计数
    UILabel *cntLabel = [[UILabel alloc] initWithFrame:CGRectMake(cardW - kCardPadH - 80, cy, 50, kRowH)];
    cntLabel.text = count >= 0 ? [NSString stringWithFormat:@"%ld", (long)count] : @"—";
    cntLabel.font = [UIFont systemFontOfSize:20 weight:UIFontWeightMedium];
    cntLabel.textColor = WPT2();
    cntLabel.textAlignment = NSTextAlignmentRight;
    [card addSubview:cntLabel];

    // 箭头
    UILabel *arrow = [[UILabel alloc] initWithFrame:CGRectMake(cardW - kCardPadH - 22, cy, 16, kRowH)];
    arrow.text = @"›";
    arrow.font = [UIFont systemFontOfSize:22];
    arrow.textColor = WPT3();
    [card addSubview:arrow];

    // 全行可点击按钮（带高亮反馈）
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(0, cy, cardW, kRowH);
    btn.backgroundColor = [UIColor clearColor];
    [btn setBackgroundImage:[self imageWithColor:[UIColor colorWithWhite:0 alpha:0.06]] forState:UIControlStateHighlighted];
    objc_setAssociatedObject(btn, "fd_action", action, OBJC_ASSOCIATION_COPY_NONATOMIC);
    [btn addTarget:self action:@selector(onResultRowTap:) forControlEvents:UIControlEventTouchUpInside];
    [card addSubview:btn];
}

/// 操作行
- (void)addActionRow:(UIView *)card top:(CGFloat)cy width:(CGFloat)cardW
               title:(NSString *)title action:(NSString *)action {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCardPadH, cy, cardW - kCardPadH * 2 - 30, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    UILabel *arrow = [[UILabel alloc] initWithFrame:CGRectMake(cardW - kCardPadH - 22, cy, 16, kRowH)];
    arrow.text = @"›";
    arrow.font = [UIFont systemFontOfSize:22];
    arrow.textColor = WPT3();
    [card addSubview:arrow];

    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(0, cy, cardW, kRowH);
    btn.backgroundColor = [UIColor clearColor];
    [btn setBackgroundImage:[self imageWithColor:[UIColor colorWithWhite:0 alpha:0.06]] forState:UIControlStateHighlighted];
    objc_setAssociatedObject(btn, "fd_action", action, OBJC_ASSOCIATION_COPY_NONATOMIC);
    [btn addTarget:self action:@selector(onActionRowTap:) forControlEvents:UIControlEventTouchUpInside];
    [card addSubview:btn];
}

/// 分割线
- (void)addSepLine:(UIView *)card top:(CGFloat)cy width:(CGFloat)cardW {
    CGFloat scale = [UIScreen mainScreen].scale;
    CGFloat pixelH = 1.0 / scale;
    UIView *sep = [[UIView alloc] initWithFrame:CGRectMake(kCardPadH, cy, cardW - kCardPadH * 2, pixelH)];
    sep.backgroundColor = WPSepColor();
    [card addSubview:sep];
}

/// 生成纯色 1x1 图片（用于 UIButton 高亮背景）
- (UIImage *)imageWithColor:(UIColor *)color {
    CGRect rect = CGRectMake(0, 0, 1, 1);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(ctx, color.CGColor);
    CGContextFillRect(ctx, rect);
    UIImage *img = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return img;
}

#pragma mark - 主页面事件

- (void)onResultRowTap:(UIButton *)btn {
    NSString *action = objc_getAssociatedObject(btn, "fd_action");
    if (!action) return;

    MioFriendDetectSummary *s = [MioFriendDetector loadSavedSummary];
    if (!s) {
        [self showTip:@"提示" msg:@"暂无检测数据，请先开始检测。"];
        return;
    }

    NSArray *friends = nil;
    NSString *typeTitle = nil;

    if ([action isEqualToString:@"invalid"]) {
        friends = s.invalidFriends;
        typeTitle = @"账号异常或检测失败";
    } else if ([action isEqualToString:@"deleted"]) {
        friends = s.deletedFriends;
        typeTitle = @"已被对方拉黑或删除";
    }

    if (!friends || friends.count == 0) {
        [self showTip:typeTitle msg:@"暂无该类好友。"];
        return;
    }

    MioFriendDetectionVC *vc = [MioFriendDetectionVC vcWithType:action friends:friends];
    [self.navigationController pushViewController:vc animated:YES];
}

- (void)onActionRowTap:(UIButton *)btn {
    NSString *action = objc_getAssociatedObject(btn, "fd_action");
    if (!action) return;

    if ([action isEqualToString:@"start"]) {
        [self onStartDetection];
    } else if ([action isEqualToString:@"clear"]) {
        [self onClearData];
    }
}

- (void)onStartDetection {
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

- (void)onClearData {
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"清空数据"
                                                                   message:@"是否确定清空所有检测数据？"
                                                            preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"确定清空" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *a) {
        [MioFriendDetector clearSavedSummary];
        [self.detector stopDetection];
        self.detecting = NO;
        self.detector = [[MioFriendDetector alloc] init];
        [self renderMainPage];
    }]];
    WP_PRESENT(alert);
}

#pragma mark - 检测流程

- (void)beginDetection {
    if (!self.detector) self.detector = [[MioFriendDetector alloc] init];
    self.detecting = YES;
    [self renderMainPage];

    __weak typeof(self) ws = self;
    [self.detector startNewDetection:^(NSString *wx, NSString *nk, NSInteger cur, NSInteger t) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ws.statusLabel.text = [NSString stringWithFormat:@"正在检测: %@ (%ld/%ld)",
                                   nk.length ? nk : wx, (long)cur, (long)t];
        });
    } completion:^(MioFriendDetectSummary *sum, NSError *err) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ws.detecting = NO;
            [ws renderMainPage];
            if (err) {
                [ws showTip:@"检测失败" msg:err.localizedDescription];
            } else {
                [[NSNotificationCenter defaultCenter]
                 postNotificationName:@"com.mio.wechat.plugin.FriendDetection.ResultUpdated" object:nil];
            }
        });
    }];
}

#pragma mark - ==================== 详情页 ====================

- (void)buildDetailPage {
    BOOL isDeleted = [self.detailType isEqualToString:@"deleted"];
    self.title = isDeleted ? @"已删除好友" : @"异常/失败";

    // 右上角按钮
    UIBarButtonItem *retestBtn = [[UIBarButtonItem alloc] initWithTitle:@"重新检测"
                                                                  style:UIBarButtonItemStylePlain
                                                                 target:self
                                                                 action:@selector(onRetestTapped)];
    if (isDeleted && self.detailFriends.count > 0) {
        UIBarButtonItem *delBtn = [[UIBarButtonItem alloc] initWithTitle:@"全部删除"
                                                                   style:UIBarButtonItemStylePlain
                                                                  target:self
                                                                  action:@selector(onDeleteAllTapped)];
        delBtn.tintColor = [UIColor redColor];
        self.navigationItem.rightBarButtonItems = @[delBtn, retestBtn];
    } else {
        self.navigationItem.rightBarButtonItem = retestBtn;
    }

    // TableView
    UITableView *tv = [[UITableView alloc] initWithFrame:self.view.bounds style:UITableViewStylePlain];
    tv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    tv.delegate = self;
    tv.dataSource = self;
    tv.backgroundColor = WPBgColor();
    tv.rowHeight = 56;
    tv.tableFooterView = [[UIView alloc] init];
    [self.view addSubview:tv];
    self.detailTable = tv;

    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(onResultUpdated:)
                                                 name:@"com.mio.wechat.plugin.FriendDetection.ResultUpdated"
                                               object:nil];
}

#pragma mark - 详情页事件

- (void)onRetestTapped {
    if (self.detailFriends.count == 0) return;
    UIAlertController *a = [UIAlertController alertControllerWithTitle:@"重新检测"
                                                               message:[NSString stringWithFormat:@"确认重新检测 %lu 个好友？", (unsigned long)self.detailFriends.count]
                                                        preferredStyle:UIAlertControllerStyleAlert];
    [a addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [a addAction:[UIAlertAction actionWithTitle:@"重新检测" style:UIAlertActionStyleDefault handler:^(UIAlertAction *_) {
        [self beginRetest];
    }]];
    WP_PRESENT(a);
}

- (void)beginRetest {
    if (!self.detector) self.detector = [[MioFriendDetector alloc] init];

    NSMutableArray *wxIDs = [NSMutableArray arrayWithCapacity:self.detailFriends.count];
    for (MioFriendDetectResult *r in self.detailFriends) [wxIDs addObject:r.wxID];

    __weak typeof(self) ws = self;
    [self.detector retestFriends:wxIDs progress:^(NSString *wx, NSString *nk, NSInteger cur, NSInteger t) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ws.title = [NSString stringWithFormat:@"重检 (%ld/%ld)", (long)cur, (long)t];
        });
    } completion:^(MioFriendDetectSummary *sum, NSError *err) {
        dispatch_async(dispatch_get_main_queue(), ^{
            ws.title = [ws.detailType isEqualToString:@"deleted"] ? @"已删除好友" : @"异常/失败";
            if (err) {
                [ws showTip:@"检测失败" msg:err.localizedDescription];
            } else {
                ws.detailFriends = [ws.detailType isEqualToString:@"deleted"] ? sum.deletedFriends : sum.invalidFriends;
                [ws.detailTable reloadData];
                [[NSNotificationCenter defaultCenter]
                 postNotificationName:@"com.mio.wechat.plugin.FriendDetection.ResultUpdated" object:nil];
            }
        });
    }];
}

- (void)onDeleteAllTapped {
    if (self.detailFriends.count == 0) return;
    UIAlertController *a = [UIAlertController alertControllerWithTitle:@"全部删除"
                                                               message:@"确认从通讯录删除所有已拉黑/删除你的好友吗？"
                                                        preferredStyle:UIAlertControllerStyleAlert];
    [a addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [a addAction:[UIAlertAction actionWithTitle:@"确认删除" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *_) {
        [self performDeleteAll];
    }]];
    WP_PRESENT(a);
}

- (void)performDeleteAll {
    Class cmgrCls = objc_getClass("CContactMgr");
    if (!cmgrCls) return;
    id cmgr = ((id (*)(Class, SEL))objc_msgSend)(cmgrCls, sel_registerName("getContactMgr"));
    SEL delSel = sel_registerName("deleteContact:");
    SEL getSel = sel_registerName("getContactByName:");

    NSInteger success = 0, fail = 0;
    for (MioFriendDetectResult *r in self.detailFriends) {
        id contact = ((id (*)(id, SEL, id))objc_msgSend)(cmgr, getSel, r.wxID);
        if (contact) {
            ((void (*)(id, SEL, id))objc_msgSend)(cmgr, delSel, contact);
            success++;
        } else {
            fail++;
        }
    }

    [MioFriendDetector clearSavedSummary];
    NSString *msg = [NSString stringWithFormat:@"成功: %ld  失败: %ld", (long)success, (long)fail];
    [self showTip:@"删除完成" msg:msg];
    self.detailFriends = @[];
    [self.detailTable reloadData];
    [[NSNotificationCenter defaultCenter]
     postNotificationName:@"com.mio.wechat.plugin.FriendDetection.ResultUpdated" object:nil];
}

#pragma mark - UITableView

- (NSInteger)tableView:(UITableView *)tv numberOfRowsInSection:(NSInteger)section {
    return (NSInteger)self.detailFriends.count;
}

- (UITableViewCell *)tableView:(UITableView *)tv cellForRowAtIndexPath:(NSIndexPath *)ip {
    static NSString *cid = @"fdc";
    UITableViewCell *cell = [tv dequeueReusableCellWithIdentifier:cid];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:cid];
        cell.backgroundColor = [UIColor whiteColor];
        cell.textLabel.font = [UIFont systemFontOfSize:15];
        cell.detailTextLabel.font = [UIFont systemFontOfSize:12];
        cell.detailTextLabel.textColor = WPT3();
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    }
    MioFriendDetectResult *r = self.detailFriends[ip.row];
    cell.textLabel.text = r.nickname.length ? r.nickname : (r.remark.length ? r.remark : r.wxID);
    cell.detailTextLabel.text = [NSString stringWithFormat:@"%@  |  retcode=%ld",
                                 r.wxID, (long)r.retcode];
    return cell;
}

- (void)tableView:(UITableView *)tv didSelectRowAtIndexPath:(NSIndexPath *)ip {
    [tv deselectRowAtIndexPath:ip animated:YES];
    MioFriendDetectResult *r = self.detailFriends[ip.row];
    NSString *name = r.nickname.length ? r.nickname : (r.remark.length ? r.remark : r.wxID);
    [self showTip:name
              msg:[NSString stringWithFormat:@"wxid: %@\nretcode: %ld\nretmsg: %@",
                   r.wxID, (long)r.retcode, r.retmsg.length ? r.retmsg : @"（无）"]];
}

#pragma mark - 通知

- (void)onResultUpdated:(NSNotification *)note {
    dispatch_async(dispatch_get_main_queue(), ^{
        if (self.detailType) {
            MioFriendDetectSummary *s = [MioFriendDetector loadSavedSummary];
            self.detailFriends = [self.detailType isEqualToString:@"deleted"] ? s.deletedFriends : s.invalidFriends;
            [self.detailTable reloadData];
        } else {
            [self renderMainPage];
        }
    });
}

#pragma mark - 工具

- (void)showTip:(NSString *)title msg:(NSString *)msg {
    UIAlertController *a = [UIAlertController alertControllerWithTitle:title message:msg preferredStyle:UIAlertControllerStyleAlert];
    [a addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:nil]];
    WP_PRESENT(a);
}

@end