#import "MioDualInboxVC.h"
#import "MomentsDualPanel.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"
#import "../ChatTopBar/AvatarLoader.h"
#import <objc/message.h>

// 消息 dict 字段：id/name/actor/kind(like|cmt)/text/t/mine
// 分类过滤对齐 WCM changeCategory（宽松版）：赞过我=kind like 且我帖；评论过我=非赞类

// WCMoments 消息对象是 Call: 代理（duck-typing 命令总线，与 facade 同构），字段走动态分发
static id MioMsgCall(id msg, NSString *method) {
    if (!msg || method.length == 0) return nil;
    SEL call = NSSelectorFromString(@"Call:");
    if (![msg respondsToSelector:call]) return nil;
    @try {
        return ((id(*)(id, SEL, id))objc_msgSend)(msg, call, method);
    } @catch (NSException *e) { return nil; }
}

static NSString *MioCallStr(id msg, NSString *method) {
    id v = MioMsgCall(msg, method);
    if ([v isKindOfClass:[NSString class]]) return v;
    if ([v isKindOfClass:[NSNumber class]]) return [v stringValue];
    return nil;
}

// 字段读法统一入口：真 getter（KVC）优先，miss 走 Call: 代理
static NSString *MioMsgStr(id msg, NSString *key) {
    return WXSafeStringGet(msg, key) ?: MioCallStr(msg, key) ?: @"";
}

@interface MioDualInboxVC () <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, copy) NSArray<NSDictionary *> *items;   // 全量
@property (nonatomic, copy) NSArray<NSDictionary *> *rows;    // 当前分类过滤后
@property (nonatomic, strong) UITableView *table;
@property (nonatomic, strong) UISegmentedControl *seg;
@property (nonatomic, strong) UIRefreshControl *refresh;
@end

@implementation MioDualInboxVC

// 消息数组解析（WCMInboxController 复刻）：[facade getAllMessages]；
// type 1=赞 2/3/8=评论（changeCategory）。帖子归属 dataItemUsrName，空则
// facade getDataItemByID: 取真 WCDataItem（信息流已实证小写字段），兜底更可靠。
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
    // 数据诊断探针：先看消息对象真身（类/Call:代理/各字段响应性），别盲改
    @try {
        id probe = msgs.firstObject;
        if (probe) {
            id pkvc = nil;
            @try { pkvc = [probe valueForKey:@"__probe__"]; } @catch (NSException *e) { pkvc = nil; }
            WPLog(@"Dual", @"[Inbox] class=%@ Call:=%d content=%d username=%d createTime=%d kvc=%@",
                  NSStringFromClass([probe class]),
                  [probe respondsToSelector:NSSelectorFromString(@"Call:")],
                  [probe respondsToSelector:NSSelectorFromString(@"content")],
                  [probe respondsToSelector:NSSelectorFromString(@"username")],
                  [probe respondsToSelector:NSSelectorFromString(@"createTime")],
                  pkvc ?: @"-");
        }
    } @catch (NSException *e) {}
    NSMutableArray *arr = [NSMutableArray array];
    for (id msg in msgs) {
        if (arr.count >= 200) break;
        @try {
            NSString *actor = MioMsgStr(msg, @"username");
            if ([actor isEqualToString:selfUsr]) continue;   // 自己的操作不进消息页（WCM 同款）
            NSInteger type = WXSafeIntegerGet(msg, @"type", 0);
            id objID = MioMsgCall(msg, @"objID") ?: [msg valueForKey:@"objID"];
            NSString *owner = MioCallStr(msg, @"dataItemUsrName") ?: @"";
            if (owner.length == 0 && objID && [facade respondsToSelector:byIDSel]) {
                // 帖主空 → objID 反查真 WCDataItem（isMine 兜底同款）
                id dataItem = ((id(*)(id, SEL, id))objc_msgSend)(facade, byIDSel, objID);
                owner = WXSafeStringGet(dataItem, @"username") ?: @"";
            }
            [arr addObject:@{
                @"id": [objID isKindOfClass:NSString.class] ? objID : [NSString stringWithFormat:@"%@", objID ?: @""],
                @"name": MioMsgStr(msg, @"nickname") ?: actor,
                @"actor": actor,
                @"kind": (type == 1) ? @"like" : @"cmt",   // 1=赞 2/3/8=评论
                @"text": MioMsgStr(msg, @"content"),
                @"t": @([MioMsgCall(msg, @"createTime") longLongValue] ?: WXSafeIntegerGet(msg, @"createtime", 0)),
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
    self.view.backgroundColor = [UIColor systemGroupedBackgroundColor];

    self.table = [[UITableView alloc] initWithFrame:self.view.bounds style:UITableViewStyleInsetGrouped];
    self.table.dataSource = self;
    self.table.delegate = self;
    self.table.backgroundColor = [UIColor systemGroupedBackgroundColor];
    self.table.rowHeight = 72;   // 对齐 WCM setRowHeight_（42pt 圆头像 + 两行文字）

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
        self.table.separatorStyle = UITableViewCellSeparatorStyleNone;
    } else {
        self.table.backgroundView = nil;
        self.table.separatorStyle = UITableViewCellSeparatorStyleSingleLine;
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

// WCM cellForRow 对齐：subtitle 样式（text=昵称 secondaryText=内容摘要 image=头像）
// + 右侧完整时间。用经典 textLabel API（CI SDK 无 UIListContentConfiguration）
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"msg"];
    if (!cell) cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:@"msg"];
    [[cell.contentView viewWithTag:1001] removeFromSuperview];   // 复用清理（时间 label 手工挂载）

    NSDictionary *d = self.rows[indexPath.section];
    BOOL like = [d[@"kind"] isEqualToString:@"like"];
    NSString *text = d[@"text"];

    cell.textLabel.text = d[@"name"];
    cell.textLabel.font = [UIFont systemFontOfSize:16 weight:UIFontWeightSemibold];
    cell.detailTextLabel.text = (text.length > 0) ? text : (like ? @"赞了你的朋友圈" : @"评论了你的朋友圈");
    cell.detailTextLabel.font = [UIFont systemFontOfSize:13];
    cell.detailTextLabel.textColor = [UIColor secondaryLabelColor];
    cell.detailTextLabel.numberOfLines = 2;
    cell.imageView.image = [self circleAvatar:[self avatarImage:d[@"actor"]]];
    cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;

    // 右侧时间「10月19日 16:24」（WCM 真机截图格式）
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
        [time.centerYAnchor constraintEqualToAnchor:cell.contentView.centerYAnchor]]];

    return cell;
}

// WCM didSelectRow 对齐：弹 UIAlertController 动作面板 → 查看原帖
// （直跳详情需 WCCommentListViewController 实例，通知面板切回原生兜底）
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    NSDictionary *d = self.rows[indexPath.section];
    NSString *txt = ((NSString *)d[@"text"]).length > 0 ? d[@"text"]
                  : ([d[@"kind"] isEqualToString:@"like"] ? @"赞了你的朋友圈" : @"评论了你的朋友圈");
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"该条消息"
                                    message:[NSString stringWithFormat:@"%@：%@", d[@"name"], txt]
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

// 头像统一画成 42pt 圆形位图（SF Symbol 拉伸后仍为圆形观感）
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
