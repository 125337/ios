#import "MioDualInboxVC.h"
#import "MomentsDualPanel.h"
#import "../../Core/ServiceHelper.h"
#import "../ChatTopBar/AvatarLoader.h"
#import "../../Core/MioListContentShim.h"
#import <objc/message.h>

// 消息 dict 字段：id/name/actor/kind(like|cmt)/text/t/mine
// 分类过滤对齐 WCM changeCategory（宽松版）：赞过我=kind like 且我帖；评论过我=非赞类

@interface MioDualInboxVC () <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, copy) NSArray<NSDictionary *> *items;   // 全量
@property (nonatomic, copy) NSArray<NSDictionary *> *rows;    // 当前分类过滤后
@property (nonatomic, strong) UITableView *table;
@property (nonatomic, strong) UISegmentedControl *seg;
@property (nonatomic, strong) UIRefreshControl *refresh;
@end

@implementation MioDualInboxVC

// 消息数组解析（WCMInboxController 复刻）：[facade getAllMessages]。
// 探针实证：消息对象 = 微信自有 WCSNSMessage（Call:=0，Call: 字段分发全 miss），展示数据
// 全在 comment 子对象 —— WCSNSMessage.h（8.0.78）仅 msgID/objID/parentObjID/comment/
// refComment/hasRead/delStatus/rewardInfo/clientId；WCUserComment.h：username/nickname/
// content/createTime/type/dataItemUsrName 全为真 property。type 1=赞 2/3/8=评论（changeCategory）。
// createTime/type 用 KVC 装箱读：WXSafeIntegerGet 是裸 msgSend，标量 getter 返回值接 id
// 再 respondsToSelector 必 SIGSEGV（127.log 实证）；KVC 对标量/NSNumber 两态都安全。
- (NSArray<NSDictionary *> *)loadItems {
    id facade = MioDualFacade();
    SEL allSel = NSSelectorFromString(@"getAllMessages");
    if (!facade || ![facade respondsToSelector:allSel]) return @[];
    NSArray *msgs = @[];
    @try {
        msgs = ((id(*)(id, SEL))objc_msgSend)(facade, allSel);
        if (![msgs isKindOfClass:[NSArray class]]) msgs = @[];
    } @catch (NSException *e) { return @[]; }

    NSString *selfUsr = WXSafeStringGet(WXGetSelfContact(), @"m_nsUsrName") ?: @"";
    SEL byIDSel = NSSelectorFromString(@"getDataItemByID:");
    NSMutableArray *arr = [NSMutableArray array];
    for (id msg in msgs) {
        if (arr.count >= 200) break;
        @try {
            id cmt = [msg valueForKey:@"comment"];   // WCSNSMessage 真 property
            NSString *actor = WXSafeStringGet(cmt, @"username") ?: @"";
            if (actor.length == 0) continue;         // 无 comment 本体的异常消息不展示
            if ([actor isEqualToString:selfUsr]) continue;   // 自己的操作不进消息页（WCM 同款）
            NSInteger type = [[cmt valueForKey:@"type"] integerValue];
            long long ts = [[cmt valueForKey:@"createTime"] longLongValue];
            id objID = [msg valueForKey:@"objID"];   // WCSNSMessage 真 property
            NSString *owner = WXSafeStringGet(cmt, @"dataItemUsrName") ?: @"";
            if (owner.length == 0 && objID && [facade respondsToSelector:byIDSel]) {
                // 帖主空 → objID 反查真 WCDataItem（isMine 兜底同款）
                id dataItem = ((id(*)(id, SEL, id))objc_msgSend)(facade, byIDSel, objID);
                owner = WXSafeStringGet(dataItem, @"username") ?: @"";
            }
            [arr addObject:@{
                @"id": [objID isKindOfClass:NSString.class] ? objID : [NSString stringWithFormat:@"%@", objID ?: @""],
                @"name": WXSafeStringGet(cmt, @"nickname") ?: actor,
                @"actor": actor,
                @"kind": (type == 1) ? @"like" : @"cmt",   // WCUserComment type 1=赞 2/3/8=评论
                @"text": WXSafeStringGet(cmt, @"content") ?: @"",
                @"t": @(ts),
                @"mine": @([owner isEqualToString:selfUsr])}];
        } @catch (NSException *e) { continue; }
    }
    return arr;
}

- (void)reloadFromSource {
    self.items = [self loadItems];
    [self applyFilter];
    [self.table reloadData];
    [self.refresh endRefreshing];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"消息";                                        // 导航标题（‹ 发现 由面板包装）
    self.view.backgroundColor = [UIColor systemGroupedBackgroundColor];

    self.table = [[UITableView alloc] initWithFrame:self.view.bounds style:UITableViewStyleInsetGrouped];
    self.table.dataSource = self;
    self.table.delegate = self;
    self.table.backgroundColor = [UIColor systemGroupedBackgroundColor];
    self.table.separatorStyle = UITableViewCellSeparatorStyleNone;       // 无发丝线（卡片间隙即分隔）
    self.table.rowHeight = 72;   // 对齐 WCM setRowHeight_（42pt 圆头像 + 两行文字）
    if (@available(iOS 15.0, *)) self.table.sectionHeaderTopPadding = 0; // 去系统 section 头 padding

    // 下拉刷新 → loadMessages（WCM 同款：本页自己拉 facade 数据）
    self.refresh = [UIRefreshControl new];
    [self.refresh addTarget:self action:@selector(pullRefresh) forControlEvents:UIControlEventValueChanged];
    [self.table addSubview:self.refresh];

    // 分段控件进 tableHeaderView（布局只留一套：table 顶到 safeArea，hdr 随列表滚动）
    UIView *hdr = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, 56)];
    hdr.backgroundColor = [UIColor systemGroupedBackgroundColor];
    self.seg = [[UISegmentedControl alloc] initWithItems:@[@"全部", @"赞过我", @"评论过我"]];
    self.seg.selectedSegmentIndex = 0;
    self.seg.frame = CGRectMake(16, 12, self.view.bounds.size.width - 32, 32);
    self.seg.autoresizingMask = UIViewAutoresizingFlexibleWidth;
    [self.seg addTarget:self action:@selector(segChanged:) forControlEvents:UIControlEventValueChanged];
    [hdr addSubview:self.seg];
    self.table.tableHeaderView = hdr;

    // 左右滑切分类（WCM swipeCategory: 同款手势）
    UISwipeGestureRecognizer *swL = [[UISwipeGestureRecognizer alloc] initWithTarget:self action:@selector(handleSwipe:)];
    swL.direction = UISwipeGestureRecognizerDirectionRight;
    [self.table addGestureRecognizer:swL];
    UISwipeGestureRecognizer *swR = [[UISwipeGestureRecognizer alloc] initWithTarget:self action:@selector(handleSwipe:)];
    swR.direction = UISwipeGestureRecognizerDirectionLeft;
    [self.table addGestureRecognizer:swR];

    [self.view addSubview:self.table];
    [NSLayoutConstraint activateConstraints:@[
        [self.table.topAnchor constraintEqualToAnchor:self.view.safeAreaLayoutGuide.topAnchor],
        [self.table.leadingAnchor constraintEqualToAnchor:self.view.leadingAnchor],
        [self.table.trailingAnchor constraintEqualToAnchor:self.view.trailingAnchor],
        [self.table.bottomAnchor constraintEqualToAnchor:self.view.bottomAnchor]]];

    [self reloadFromSource];
}

- (void)pullRefresh {
    [self reloadFromSource];
}

// 导航栏「‹ 发现」返回（present 包装，dismiss 即回面板）
- (void)goBack {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)segChanged:(UISegmentedControl *)seg {
    [self applyFilter];
    [self.table reloadData];
}

// 左右滑切分类（对齐 WCM swipeCategory: 行为）
- (void)handleSwipe:(UISwipeGestureRecognizer *)g {
    NSInteger i = self.seg.selectedSegmentIndex + (g.direction == UISwipeGestureRecognizerDirectionLeft ? 1 : -1);
    if (i < 0 || i >= self.seg.numberOfSegments) return;
    self.seg.selectedSegmentIndex = i;
    [self segChanged:self.seg];
}

// 卡间距 ~10pt（WCM 观感）：每卡 section header/footer 各 5
- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section { return 5; }
- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section  { return 5; }

// WCM changeCategory 对齐（宽松版）：赞 tab=kind like 且我帖；评论 tab=非赞；全部=全部
- (void)applyFilter {
    NSInteger s = self.seg.selectedSegmentIndex;
    if (s == 1) {
        NSMutableArray *m = [NSMutableArray array];
        for (NSDictionary *d in self.items)
            if ([d[@"kind"] isEqualToString:@"like"] && [d[@"mine"] boolValue]) [m addObject:d];
        self.rows = m;
    } else if (s == 2) {
        NSMutableArray *m = [NSMutableArray array];
        for (NSDictionary *d in self.items)
            if (![d[@"kind"] isEqualToString:@"like"]) [m addObject:d];
        self.rows = m;
    } else {
        self.rows = self.items;
    }
    // 空态：tableView backgroundView 占位（WCM setBackgroundView 同款）
    if (self.rows.count == 0) {
        UILabel *empty = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, 200)];
        empty.text = @"无消息";
        empty.textAlignment = NSTextAlignmentCenter;
        empty.font = [UIFont systemFontOfSize:14];
        empty.textColor = [UIColor secondaryLabelColor];
        self.table.backgroundView = empty;
    } else {
        self.table.backgroundView = nil;
    }
}

#pragma mark - UITableView

// 每条消息 = 一个 section = 一张独立圆角卡（对齐 WCM 卡片粒度）
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return self.rows.count;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 1;
}

// WCM cellForRow 逐选择器重建（③-⑧）：现代内容配置管线 + 手绘卡 + 右上时间。
// subtitleCellConfiguration 是 UIListContentConfiguration 的类方法，必须发给本类
// （发给 UITableViewCell 会 doesNotRecognizeSelector → 点进铃铛页即崩，dump 实证）。
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"msg"];
    if (!cell) cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:@"msg"];

    NSDictionary *d = self.rows[indexPath.section];
    BOOL like = [d[@"kind"] isEqualToString:@"like"];
    NSString *txt = d[@"text"];
    NSString *sec = (txt.length > 0) ? txt
                  : (like ? @"♡ 赞了你的朋友圈" : @"评论了你的朋友圈");

    // ---- ③ 内容配置（接收者 = UIListContentConfiguration 类，dump 实证）----
    SEL cfgSel = NSSelectorFromString(@"subtitleCellConfiguration");
    UIListContentConfiguration *cfg =
        ((id(*)(id, SEL))objc_msgSend)(objc_getClass("UIListContentConfiguration"), cfgSel);
    cfg.text = d[@"name"];
    cfg.secondaryText = sec;
    cfg.image = [self avatarImage:d[@"actor"]];                 // 原图，圆角交给系统
    cfg.imageProperties.maximumSize  = CGSizeMake(42, 42);      // WCM 同款（setMaximumSize_ 实证）
    cfg.imageProperties.cornerRadius = 21;                      // setCornerRadius_ 实证
    cfg.secondaryTextProperties.font = [UIFont systemFontOfSize:13];
    cfg.textToSecondaryTextVerticalPadding = 2;
    cell.contentConfiguration = cfg;

    // ---- ⑥ 手绘卡（WCM 实证：白卡是自己画的 layer，非系统分组底）----
    cell.backgroundColor = [UIColor clearColor];
    cell.contentView.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    cell.contentView.layer.cornerRadius = 12;
    cell.contentView.layer.masksToBounds = YES;
    cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;

    // ---- ⑧ 右上时间「M月d日 HH:mm」（WCM 同款手工挂载）----
    [[cell.contentView viewWithTag:1001] removeFromSuperview];   // 复用清理（时间 label 手工挂载）
    UILabel *time = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 110, 20)];
    time.tag = 1001;
    time.font = [UIFont systemFontOfSize:12];
    time.textColor = [UIColor tertiaryLabelColor];
    time.textAlignment = NSTextAlignmentRight;
    NSDate *dt = [NSDate dateWithTimeIntervalSince1970:[d[@"t"] doubleValue]];
    NSDateFormatter *f = [[NSDateFormatter alloc] init];
    f.dateFormat = @"M月d日 HH:mm";
    time.text = [f stringFromDate:dt];
    time.translatesAutoresizingMaskIntoConstraints = NO;
    [cell.contentView addSubview:time];
    [NSLayoutConstraint activateConstraints:@[
        [time.trailingAnchor constraintEqualToAnchor:cell.contentView.layoutMarginsGuide.trailingAnchor],
        [time.topAnchor constraintEqualToAnchor:cell.contentView.layoutMarginsGuide.topAnchor]]];

    return cell;
}

// WCM didSelectRow 对齐：弹 UIAlertController 动作面板 → 查看原帖
// （直跳详情需 WCCommentListViewController 实例，通知面板切回原生兜底）
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    NSDictionary *d = self.rows[indexPath.section];
    NSString *txt = ((NSString *)d[@"text"]).length > 0 ? d[@"text"]
                  : ([d[@"kind"] isEqualToString:@"like"] ? @"赞了你的朋友圈" : @"评论了你的朋友圈");
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:d[@"name"]
                                    message:txt
                                    preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"查看原帖" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *a) {
        [self dismissViewControllerAnimated:YES completion:nil];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"MioDualInboxOpenPost" object:nil];
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

// 头像：项目已实证全链路 AvatarLoader（本地自定义 → MMHeadImageMgr → CDN）；无图回落 SF Symbol
- (UIImage *)avatarImage:(NSString *)usr {
    UIImage *img = usr.length ? [[AvatarLoader shared] loadAvatarSyncForWxid:usr contact:nil] : nil;
    if (img) return img;
    return [UIImage systemImageNamed:@"person.crop.circle.fill"];
}

// 头像圆角：系统 imageProperties.cornerRadius 接管（42pt 正圆）；
// circleAvatar: 预渲染保留为 imageProperties 在个别 iOS 上不生效时的兜底
- (UIImage *)circleAvatar:(UIImage *)img {
    if (!img) return nil;
    CGFloat s = 42;
    UIGraphicsImageRendererFormat *fmt = [UIGraphicsImageRendererFormat defaultFormat];
    fmt.scale = 2;
    UIGraphicsImageRenderer *r = [[UIGraphicsImageRenderer alloc] initWithSize:CGSizeMake(s, s) format:fmt];
    return [r imageWithActions:^(UIGraphicsImageRendererContext *ctx) {
        UIBezierPath *p = [UIBezierPath bezierPathWithOvalInRect:CGRectMake(0, 0, s, s)];
        [p addClip];
        [img drawInRect:CGRectMake(0, 0, s, s)];
    }];
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    // 仅真正被 dismiss 时清理（弹 UIAlertController 也会触发 disappear，需排除）
    if (self.isBeingDismissed && self.userOnDismiss) self.userOnDismiss();
}

@end
