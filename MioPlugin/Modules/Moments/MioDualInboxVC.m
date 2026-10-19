#import "MioDualInboxVC.h"
#import "../../ChatTopBar/AvatarLoader.h"
#import <objc/message.h>

// 消息 dict 字段（MomentsDualPanel inboxItems 产出）：
// id/name/actor/kind(like|cmt)/text/t/mine/refSelf
// 分类过滤对齐 WCM changeCategory（宽松版）：收到的赞=我帖被赞；评论=非赞类

@interface MioDualInboxVC () <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, copy) NSArray<NSDictionary *> *items;   // 全量
@property (nonatomic, copy) NSArray<NSDictionary *> *rows;    // 当前分类过滤后
@property (nonatomic, strong) UITableView *table;
@property (nonatomic, strong) UISegmentedControl *seg;
@property (nonatomic, strong) UIRefreshControl *refresh;
@end

@implementation MioDualInboxVC

- (instancetype)initWithItems:(NSArray<NSDictionary *> *)items {
    if ((self = [super init])) {
        _items = items ?: @[];
        _rows = _items;
    }
    return self;
}

// 面板重取数据后回填（下拉刷新链路：通知面板 → 面板重取 → 回调此方法）
- (void)updateItems:(NSArray<NSDictionary *> *)items {
    self.items = items ?: @[];
    [self applyFilter];
    [self.table reloadData];
    [self.refresh endRefreshing];
}

- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    // 仅真正被 dismiss 时清理（弹 UIAlertController 也会触发 disappear，需排除）
    if (self.isBeingDismissed && self.userOnDismiss) self.userOnDismiss();
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor colorWithRed:0.969 green:0.969 blue:0.969 alpha:1];   // #F7F7F7

    // 顶部分类（WCM 真机截图：全部 / 赞过我 / 评论过我）
    self.seg = [[UISegmentedControl alloc] initWithItems:@[@"全部", @"赞过我", @"评论过我"]];
    self.seg.selectedSegmentIndex = 0;
    [self.seg addTarget:self action:@selector(segChanged:) forControlEvents:UIControlEventValueChanged];
    self.seg.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:self.seg];

    self.table = [[UITableView alloc] initWithFrame:self.view.bounds style:UITableViewStyleInsetGrouped];
    self.table.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.table.dataSource = self;
    self.table.delegate = self;
    self.table.backgroundColor = [UIColor colorWithRed:0.969 green:0.969 blue:0.969 alpha:1];   // #F7F7F7
    self.table.separatorInset = UIEdgeInsetsMake(0, 68, 0, 0);

    // 下拉刷新 → loadMessages（WCM 同款：数据由面板统一解析，这里通知面板重取）
    self.refresh = [UIRefreshControl new];
    [self.refresh addTarget:self action:@selector(pullRefresh) forControlEvents:UIControlEventValueChanged];
    [self.table addSubview:self.refresh];
    [self.view addSubview:self.table];

    [NSLayoutConstraint activateConstraints:@[
        [self.seg.topAnchor constraintEqualToAnchor:self.view.safeAreaLayoutGuide.topAnchor constant:12],
        [self.seg.leadingAnchor constraintEqualToAnchor:self.view.leadingAnchor constant:16],
        [self.seg.trailingAnchor constraintEqualToAnchor:self.view.trailingAnchor constant:-16],
        [self.table.topAnchor constraintEqualToAnchor:self.seg.bottomAnchor constant:8],
        [self.table.leadingAnchor constraintEqualToAnchor:self.view.leadingAnchor],
        [self.table.trailingAnchor constraintEqualToAnchor:self.view.trailingAnchor],
        [self.table.bottomAnchor constraintEqualToAnchor:self.view.bottomAnchor]]];

    [self applyFilter];
}

- (void)pullRefresh {
    [[NSNotificationCenter defaultCenter] postNotificationName:@"MioDualInboxReload" object:nil];
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

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.rows.count;
}

// WCM cellForRow 对齐：subtitle 样式（text=昵称 secondaryText=内容摘要 image=头像）
// + 右侧「M 月」时间。用经典 textLabel API（CI SDK 无 UIListContentConfiguration）
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"msg"];
    if (!cell) cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:@"msg"];
    [[cell.contentView viewWithTag:1001] removeFromSuperview];   // 复用清理（时间 label 手工挂载）

    NSDictionary *d = self.rows[indexPath.row];
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

// WCM didSelectRow 对齐：弹 UIAlertController 动作面板 → 查看原帖
// （直跳详情需 WCCommentListViewController 实例，通知面板切回原生兜底）
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"该条消息"
                                    message:@"在微信朋友圈中查看原帖？"
                                    preferredStyle:UIAlertControllerStyleAlert];
    [alert addAction:[UIAlertAction actionWithTitle:@"查看原帖" style:UIAlertActionStyleDefault handler:^(__unused UIAlertAction *a) {
        [self dismissViewControllerAnimated:YES completion:nil];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"MioDualInboxOpenPost" object:nil];
    }]];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [self presentViewController:alert animated:YES completion:nil];
}

// 头像：项目已实证全链路 AvatarLoader（本地自定义 → MMHeadImageMgr → CDN）
// （MMContext activeUserContext 链在 8.0.78 不成立，弃用）；无图回落 SF Symbol
- (UIImage *)avatarImage:(NSString *)usr {
    UIImage *img = usr.length ? [[AvatarLoader shared] loadAvatarSyncForWxid:usr contact:nil] : nil;
    if (img) return img;
    return [UIImage systemImageNamed:@"person.crop.circle.fill"];
}

@end
