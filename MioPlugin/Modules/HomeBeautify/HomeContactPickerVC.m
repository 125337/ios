#import "HomeContactPickerVC.h"
#import "HomeCardConfig.h"
#import "../../Core/ServiceHelper.h"
#import "../SettingEntry/WPCommonUI.h"
#import <objc/runtime.h>

NSString * const MioHomeContactSavedChangedNotification = @"MioHomeContactSavedChangedNotification";

static NSArray *HCAllNormalContacts(void);   // 定义在数据段，viewDidLoad 前向引用

// 列表行模型：宿主联系人快照（选择器一次性读取，不追踪后续变更）
@interface HCContactRow : NSObject
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *displayName;   // 备注 > 昵称 > 原样
@end
@implementation HCContactRow
@end

@interface HomeContactPickerVC () <UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, strong) UITableView *table;
@property (nonatomic, strong) NSMutableArray<HCContactRow *> *rows;      // 宿主全量（去群聊/自己）
@property (nonatomic, strong) NSMutableArray<NSString *> *selected;      // 已选 userName（有序）
@end

@implementation HomeContactPickerVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = WPBgColor();

    // 已选列表（无序保存也按存储顺序展示序号）
    self.selected = [[NSMutableArray alloc] initWithArray:[HomeCardConfig savedContacts]];

    self.rows = [NSMutableArray array];
    for (id c in HCAllNormalContacts()) {
        HCContactRow *row = [HCContactRow new];
        row.userName = WXSafeStringGet(c, @"m_nsUsrName");
        NSString *remark = WXSafeStringGet(c, @"m_nsRemark");
        NSString *nick = WXSafeStringGet(c, @"m_nsNickName");
        row.displayName = remark.length > 0 ? remark : (nick.length > 0 ? nick : row.userName);
        if (row.userName.length > 0) [self.rows addObject:row];
    }

    self.table = [[UITableView alloc] initWithFrame:self.view.bounds
                                              style:UITableViewStylePlain];
    self.table.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.table.backgroundColor = WPBgColor();
    self.table.separatorColor = WPSepColor();
    self.table.dataSource = self;
    self.table.delegate = self;
    [self.view addSubview:self.table];

    self.navigationItem.rightBarButtonItem =
        [[UIBarButtonItem alloc] initWithTitle:@"完成"
                                         style:UIBarButtonItemStyleDone
                                        target:self
                                        action:@selector(onDone)];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    WPApplyNavAppearance(self);
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    WPRestoreNavAppearance(self);
}

#pragma mark - 数据（CContactMgr 全量联系人，XOS 选择器同源）

// 全量普通联系人：getContactList:contactType:(1) 主路，getAllContactUserName 兜底；
// 过滤群聊与自己（XOS 挂件只展示非群聊，选择器同口径）
static NSArray *HCAllNormalContacts(void) {
    id mgr = WXGetService(objc_getClass("CContactMgr"));
    if (!mgr) return @[];
    NSArray *list = nil;
    SEL s1 = NSSelectorFromString(@"getContactList:contactType:");
    if ([mgr respondsToSelector:s1]) {
        list = ((id (*)(id, SEL, id, unsigned int))objc_msgSend)(mgr, s1, nil, (unsigned int)1);
    }
    if (![list isKindOfClass:[NSArray class]]) list = nil;
    if (list.count == 0) {
        SEL s2 = NSSelectorFromString(@"getAllContactUserName");
        if ([mgr respondsToSelector:s2]) {
            NSArray *names = ((id (*)(id, SEL))objc_msgSend)(mgr, s2);
            SEL s3 = NSSelectorFromString(@"getContactByName:");
            if ([names isKindOfClass:[NSArray class]] && [mgr respondsToSelector:s3]) {
                NSMutableArray *arr = [NSMutableArray arrayWithCapacity:names.count];
                for (NSString *n in names) {
                    if (![n isKindOfClass:[NSString class]]) continue;
                    id c = ((id (*)(id, SEL, id))objc_msgSend)(mgr, s3, n);
                    if (c) [arr addObject:c];
                }
                list = arr;
            }
        }
    }
    NSString *selfName = WXSafeStringGet(WXGetSelfContact(), @"m_nsUsrName");
    NSMutableArray *out = [NSMutableArray array];
    for (id c in list) {
        NSString *u = WXSafeStringGet(c, @"m_nsUsrName");
        if (u.length == 0) continue;
        if ([u containsString:@"@chatroom"]) continue;
        if (selfName.length > 0 && [u isEqualToString:selfName]) continue;
        [out addObject:c];
    }
    return out;
}

#pragma mark - 保存

- (void)onDone {
    [HomeCardConfig saveContacts:[self.selected copy]];
    [[NSNotificationCenter defaultCenter] postNotificationName:MioHomeContactSavedChangedNotification
                                                        object:nil];
    [self.navigationController popViewControllerAnimated:YES];
}

#pragma mark - TableView

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return (NSInteger)self.rows.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    static NSString *ident = @"HCContactCell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:ident];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle
                                      reuseIdentifier:ident];
        cell.backgroundColor = [UIColor clearColor];
        cell.textLabel.font = [UIFont systemFontOfSize:16.0];
        cell.detailTextLabel.font = [UIFont systemFontOfSize:12.0];
        cell.detailTextLabel.textColor = WPT2();
        cell.tintColor = WPAccent();

        // 头像容器（每次绑定重建内部头像，规避复用残留）
        UIView *avWrap = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 40.0, 40.0)];
        avWrap.tag = 0x4D50;
        cell.contentView.addSubview(avWrap);
    }
    HCContactRow *row = self.rows[(NSUInteger)indexPath.row];
    cell.textLabel.text = row.displayName;
    cell.detailTextLabel.text = row.userName;

    // 头像（MMHeadImageView 运行时构建；类缺失回退灰圆首字）
    UIView *avWrap = [cell.contentView viewWithTag:0x4D50];
    for (UIView *v in avWrap.subviews) [v removeFromSuperview];
    avWrap.frame = CGRectMake(16.0, 8.0, 40.0, 40.0);
    Class cls = objc_getClass("MMHeadImageView");
    SEL sel = NSSelectorFromString(@"initWithUsrName:headImgUrl:bAutoUpdate:bRoundCorner:");
    BOOL ok = NO;
    if (cls && [cls instancesRespondToSelector:sel]) {
        @try {
            id av = ((id (*)(id, SEL, id, id, BOOL, BOOL))objc_msgSend)
                    ([cls alloc], sel, row.userName, nil, NO, YES);
            if ([av isKindOfClass:[UIView class]]) {
                ((UIView *)av).frame = avWrap.bounds;
                [avWrap addSubview:av];
                ok = YES;
            }
        } @catch (...) {}
    }
    if (!ok) {
        UIView *ph = [[UIView alloc] initWithFrame:avWrap.bounds];
        ph.backgroundColor = WPSepColor();
        ph.layer.cornerRadius = 20.0;
        UILabel *lbl = [[UILabel alloc] initWithFrame:avWrap.bounds];
        NSString *initial = @"?";
        if (row.displayName.length > 0) {
            // 按字素取首字，规避 emoji 代理对截断
            initial = [row.displayName substringWithRange:
                       [row.displayName rangeOfComposedCharacterSequenceAtIndex:0]];
        }
        lbl.text = initial;
        lbl.font = [UIFont systemFontOfSize:16.0];
        lbl.textColor = WPT2();
        lbl.textAlignment = NSTextAlignmentCenter;
        ph.userInteractionEnabled = NO;
        [ph addSubview:lbl];
        [avWrap addSubview:ph];
    }
    cell.imageView.image = nil;   // 不用系统 imageView，避免与 40pt 容器错位
    cell.indentationLevel = 1;    // 文字让开 40pt 头像（系统 imageView 置空后标签回缩）
    cell.indentationWidth = 44.0;
    cell.separatorInset = UIEdgeInsetsMake(0, 72.0, 0, 0);

    // 已选 → 右侧序号徽标（1..N = 展示顺序）；未选 → 空白
    NSUInteger order = [self.selected indexOfObject:row.userName];
    if (order != NSNotFound) {
        UILabel *badge = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 24.0, 24.0)];
        badge.text = [NSString stringWithFormat:@"%lu", (unsigned long)(order + 1)];
        badge.font = [UIFont systemFontOfSize:12.0 weight:UIFontWeightMedium];
        badge.textColor = [UIColor whiteColor];
        badge.backgroundColor = WPAccent();
        badge.textAlignment = NSTextAlignmentCenter;
        badge.layer.cornerRadius = 12.0;
        badge.layer.masksToBounds = YES;
        cell.accessoryView = badge;
    } else {
        cell.accessoryView = nil;
    }
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:NO];
    HCContactRow *row = self.rows[(NSUInteger)indexPath.row];
    NSUInteger order = [self.selected indexOfObject:row.userName];
    if (order != NSNotFound) {
        [self.selected removeObjectAtIndex:order];   // 再点取消
    } else {
        [self.selected addObject:row.userName];      // 追加到末尾 = 展示顺序
    }
    [tableView reloadRowsAtIndexPaths:@[indexPath]
                     withRowAnimation:UITableViewRowAnimationNone];
}

@end
