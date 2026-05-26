// CSContactInfoPopoverController.m — MRC 环境
// 基于 123456.c 反编译分析实现自定义联系人信息弹窗
// v2: UITableView 架构（与 123456.c 一致）
#import "CSContactInfoPopoverController.h"
#import <objc/runtime.h>
#import <objc/message.h>

#pragma mark - 辅助：从 contact KVC 取值

static id contactValueForKey(id contact, NSString *key) {
    if (!contact || !key) return nil;
    return ((id (*)(id, SEL, NSString *))objc_msgSend)(
        contact, NSSelectorFromString(@"valueForKey:"), key);
}

static NSInteger contactIntForKey(id contact, NSString *key) {
    id val = contactValueForKey(contact, key);
    if (val) return [(NSNumber *)val integerValue];
    return 0;
}

#pragma mark - 信息行定义

static NSArray *s_infoItems(void) {
    static NSArray *items = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        items = [@[
            @{@"label": @"主页",   @"key": @"homepage",   @"copiable": @NO},
            @{@"label": @"类型",   @"key": @"chatType",   @"copiable": @NO},
            @{@"label": @"微信",   @"key": @"wxid",       @"copiable": @YES},
            @{@"label": @"备注",   @"key": @"remark",     @"copiable": @YES},
            @{@"label": @"性别",   @"key": @"gender",     @"copiable": @NO},
            @{@"label": @"地区",   @"key": @"location",   @"copiable": @NO},
            @{@"label": @"签名",   @"key": @"signature",  @"copiable": @YES},
        ] retain];
    });
    return items;
}

@implementation CSContactInfoPopoverController

- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar {
    self = [super init];
    if (self) {
        _contact = [contact retain];
        _avatarImage = [avatar retain];
        if (contact) {
            id usrName = contactValueForKey(contact, @"m_nsUsrName");
            _wxid = [usrName retain];
        }
    }
    return self;
}

- (void)dealloc {
    [_contact release];
    [_wxid release];
    [_avatarImage release];
    [super dealloc];
}

- (UIModalPresentationStyle)adaptivePresentationStyleForPresentationController:
        (UIPresentationController *)controller {
    return UIModalPresentationNone;
}

#pragma mark - viewDidLoad

- (void)viewDidLoad {
    [super viewDidLoad];

    self.view.backgroundColor = [UIColor colorWithRed:0.96 green:0.96 blue:0.97 alpha:1.0];

    // ★ UITableView 替换 UIScrollView（与 123456.c L116655 一致）
    UITableView *tableView = [[UITableView alloc] initWithFrame:self.view.bounds
                                                          style:UITableViewStyleGrouped];
    tableView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    tableView.delegate = self;
    tableView.dataSource = self;
    tableView.rowHeight = 46;                          // 123456.c L116672: 46pt
    tableView.estimatedRowHeight = UITableViewAutomaticDimension;
    tableView.contentInset = UIEdgeInsetsMake(8, 0, 8, 0);
    tableView.separatorInset = UIEdgeInsetsMake(0, 10, 0, 10);
    tableView.showsVerticalScrollIndicator = NO;
    tableView.backgroundColor = [UIColor whiteColor];
    tableView.tableHeaderView = [self createHeaderView];
    tableView.tableFooterView = [self createFooterView];
    // 注册 CSSettingTableViewCell（如果类存在，否则用系统 cell）
    Class cellClass = objc_getClass("CSSettingTableViewCell");
    if (!cellClass) cellClass = [UITableViewCell class];
    [tableView registerClass:cellClass forCellReuseIdentifier:@"Cell"];
    [self.view addSubview:tableView];
    [tableView release];
}

#pragma mark - 创建 UI

- (UIView *)createHeaderView {
    CGFloat width = self.view.bounds.size.width;
    UIView *header = [[UIView alloc] initWithFrame:CGRectMake(0, 0, width, 190)];

    // 头像
    UIImageView *avatar = [[UIImageView alloc] init];
    avatar.frame = CGRectMake((width - 60) / 2, 24, 60, 60);
    avatar.layer.cornerRadius = 30;
    avatar.clipsToBounds = YES;
    avatar.contentMode = UIViewContentModeScaleAspectFill;
    if (self.avatarImage) {
        avatar.image = self.avatarImage;
    }
    [header addSubview:avatar];
    [avatar release];

    // 昵称
    UILabel *nickname = [[UILabel alloc] init];
    nickname.frame = CGRectMake(20, 94, width - 40, 28);
    nickname.textAlignment = NSTextAlignmentCenter;
    nickname.font = [UIFont boldSystemFontOfSize:18];
    id name = contactValueForKey(self.contact, @"m_nsNickName");
    nickname.text = name ?: @"";
    [header addSubview:nickname];
    [nickname release];

    return header;
}

- (UIView *)createFooterView {
    CGFloat width = self.view.bounds.size.width;
    UIView *footer = [[UIView alloc] initWithFrame:CGRectMake(0, 0, width, 40)];
    UILabel *tip = [[UILabel alloc] init];
    tip.text = @"点击信息项复制到剪贴板";
    tip.font = [UIFont systemFontOfSize:11];
    tip.textColor = [UIColor grayColor];
    tip.textAlignment = NSTextAlignmentCenter;
    tip.frame = CGRectMake(0, 10, width, 20);
    [footer addSubview:tip];
    [tip release];
    return footer;
}

#pragma mark - UITableViewDataSource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return (NSInteger)s_infoItems().count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"Cell" forIndexPath:indexPath];

    NSDictionary *item = s_infoItems()[indexPath.row];
    cell.textLabel.text = item[@"label"];
    cell.textLabel.font = [UIFont systemFontOfSize:14];
    cell.detailTextLabel.text = [self valueForInfoKey:item[@"key"]];
    cell.detailTextLabel.font = [UIFont systemFontOfSize:13];
    cell.detailTextLabel.textColor = [UIColor colorWithRed:0.56 green:0.56 blue:0.58 alpha:1.0];
    cell.selectionStyle = UITableViewCellSelectionStyleDefault;

    return cell;
}

#pragma mark - UITableViewDelegate

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    return 46;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];

    NSDictionary *item = s_infoItems()[indexPath.row];
    NSString *key = item[@"key"];

    // 主页 → 跳转微信资料页
    if ([key isEqualToString:@"homepage"]) {
        [self onHomepageTapped];
        return;
    }

    // 不可复制的行 → 忽略
    if (![item[@"copiable"] boolValue]) return;

    // 复制到剪贴板 + haptic
    NSString *text = [self valueForInfoKey:key];
    if (!text || text.length == 0) return;

    [UIPasteboard generalPasteboard].string = text;

    UIImpactFeedbackGenerator *gen = [[[UIImpactFeedbackGenerator alloc]
        initWithStyle:UIImpactFeedbackStyleLight] autorelease];
    [gen prepare];
    [gen impactOccurred];
}

#pragma mark - 数据取值（参考 123456.c KVC 方式）

- (NSString *)valueForInfoKey:(NSString *)key {
    if ([key isEqualToString:@"homepage"]) {
        return @"点击进入信息页";
    }
    if ([key isEqualToString:@"chatType"]) {
        return [self chatTypeValue];
    }
    if ([key isEqualToString:@"wxid"]) {
        return self.wxid ?: @"";
    }
    if ([key isEqualToString:@"remark"]) {
        return [self remarkValue];
    }
    if ([key isEqualToString:@"gender"]) {
        return [self genderValue];
    }
    if ([key isEqualToString:@"location"]) {
        return [self locationValue];
    }
    if ([key isEqualToString:@"signature"]) {
        return [self signatureValue];
    }
    return @"";
}

- (NSString *)chatTypeValue {
    if (!self.wxid) return @"私聊";
    if ([self.wxid containsString:@"@chatroom"]) return @"群聊";
    if ([self.wxid hasPrefix:@"gh_"]) return @"公众号";
    return @"私聊";
}

- (NSString *)remarkValue {
    id remark = contactValueForKey(self.contact, @"m_nsRemark");
    if (remark && [remark isKindOfClass:[NSString class]] && [(NSString *)remark length] > 0) {
        return remark;
    }
    id remarkName = contactValueForKey(self.contact, @"m_nsRemarkName");
    if (remarkName && [remarkName isKindOfClass:[NSString class]] && [(NSString *)remarkName length] > 0) {
        return remarkName;
    }
    return @"未设置";
}

- (NSString *)genderValue {
    SEL m_uiSex = NSSelectorFromString(@"m_uiSex");
    if (!((BOOL (*)(id, SEL, SEL))objc_msgSend)(self.contact, @selector(respondsToSelector:), m_uiSex)) {
        return @"未知";
    }
    NSInteger sex = contactIntForKey(self.contact, @"m_uiSex");
    if (sex == 1) return @"男";
    if (sex == 2) return @"女";
    return @"未知";
}

- (NSString *)locationValue {
    id province = contactValueForKey(self.contact, @"m_nsProvince");
    id city = contactValueForKey(self.contact, @"m_nsCity");
    if (!province || [(NSString *)province length] == 0) {
        if (city && [(NSString *)city length] > 0) return city;
        return @"未设置";
    }
    NSString *trimmed = [province stringByTrimmingCharactersInSet:
        [NSCharacterSet whitespaceCharacterSet]];
    if ([trimmed length] == 0) return @"未设置";
    return [NSString stringWithFormat:@"%@ %@", trimmed, city ?: @""];
}

- (NSString *)signatureValue {
    id sig = contactValueForKey(self.contact, @"m_nsSignature");
    if (sig && [sig isKindOfClass:[NSString class]] && [(NSString *)sig length] > 0) {
        return sig;
    }
    return @"未设置";
}

#pragma mark - 主页跳转

- (void)onHomepageTapped {
    NSString *usrName = contactValueForKey(self.contact, @"m_nsUsrName");
    if (!usrName) return;

    Class infoVC = objc_getClass("WCUserInfoViewController");
    if (!infoVC) return;

    id vc = ((id (*)(Class, SEL))objc_msgSend)(infoVC, NSSelectorFromString(@"alloc"));
    vc = ((id (*)(id, SEL, id, id))objc_msgSend)(vc,
        NSSelectorFromString(@"initWithUsrName:contact:"), usrName, self.contact);
    if (!vc) return;

    // dismiss 当前 popover，然后 push
    UIViewController *parent = self.presentingViewController;
    [self dismissViewControllerAnimated:YES completion:^{
        if (parent && parent.navigationController) {
            [parent.navigationController pushViewController:vc animated:YES];
        }
        [vc release];
    }];
}

@end