// CSContactInfoPopoverController.m — MRC 环境
// 基于 123456.c 反编译分析实现自定义联系人信息弹窗
// v3: 多 Section（头像 Section 0 + 信息 Section 1），完全对齐 123456.c
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

#pragma mark - viewDidLoad（与 123456.c L116643-116692 完全对齐）

- (void)viewDidLoad {
    [super viewDidLoad];

    // 123456.c L116643-116649: systemGroupedBackgroundColor
    self.view.backgroundColor = [UIColor colorWithRed:0.96 green:0.96 blue:0.97 alpha:1.0];

    // 123456.c L116655-116659: UITableViewStyleGrouped (style:2)
    UITableView *tableView = [[UITableView alloc] initWithFrame:self.view.bounds
                                                          style:UITableViewStyleGrouped];
    tableView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    tableView.delegate = self;
    tableView.dataSource = self;

    // 123456.c L116667-116669: whiteColor
    tableView.backgroundColor = [UIColor whiteColor];

    // 123456.c L116671: separatorInset = (18, 0, 18, 0)
    tableView.separatorInset = UIEdgeInsetsMake(0, 18, 0, 18);

    // 123456.c L116672: rowHeight = 46
    tableView.rowHeight = 46;
    tableView.estimatedRowHeight = UITableViewAutomaticDimension;

    // 123456.c L116675: showsVerticalScrollIndicator = NO
    tableView.showsVerticalScrollIndicator = NO;

    // 123456.c L116676-116677: contentInset = (8, 8, 8, 8)
    tableView.contentInset = UIEdgeInsetsMake(8, 8, 8, 8);

    // 123456.c L116679-116686: 空白 header + footer
    tableView.tableHeaderView = [self createHeaderView];
    tableView.tableFooterView = [self createFooterView];

    // 123456.c L116691-116692: 注册 CSSettingTableViewCell
    Class cellClass = objc_getClass("CSSettingTableViewCell");
    if (cellClass) {
        [tableView registerClass:cellClass forCellReuseIdentifier:@"Cell"];
    }

    [self.view addSubview:tableView];
    [tableView release];
}

#pragma mark - 创建 UI

- (UIView *)createHeaderView {
    // 123456.c L116709-116720: 空白 + clearColor，高度 ~20pt
    UIView *header = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 272, 20)];
    header.backgroundColor = [UIColor clearColor];
    return header;
}

- (UIView *)createFooterView {
    // 123456.c L116739-116763: 空白 + clearColor，高度 ~20pt
    UIView *footer = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 272, 20)];
    footer.backgroundColor = [UIColor clearColor];
    return footer;
}

#pragma mark - UITableViewDataSource（多 Section）

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 2;  // section 0 = 头像卡片, section 1 = 信息卡片
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    if (section == 0) return 1;              // 头像行
    return (NSInteger)s_infoItems().count;   // 7 行信息
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {

    if (indexPath.section == 0) {
        // ===== 头像 Cell（123456.c createAvatarCellForTableView L117847）=====
        UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"AvatarCell"];
        if (!cell) {
            // 123456.c L117847-117848: UITableViewCellStyleDefault
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault
                                          reuseIdentifier:@"AvatarCell"];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;

            // 头像 ImageView — 居中放置（123456.c L117854-117878）
            UIImageView *avatarView = [[UIImageView alloc] initWithFrame:CGRectMake(0, 0, 60, 60)];
            avatarView.tag = 1000;
            avatarView.layer.cornerRadius = 30;
            avatarView.clipsToBounds = YES;
            avatarView.contentMode = UIViewContentModeScaleAspectFill;
            avatarView.translatesAutoresizingMaskIntoConstraints = NO;
            [cell.contentView addSubview:avatarView];
            [avatarView release];

            [NSLayoutConstraint activateConstraints:@[
                [avatarView.centerXAnchor constraintEqualToAnchor:cell.contentView.centerXAnchor],
                [avatarView.topAnchor constraintEqualToAnchor:cell.contentView.topAnchor constant:24],
                [avatarView.widthAnchor constraintEqualToConstant:60],
                [avatarView.heightAnchor constraintEqualToConstant:60],
            ]];

            // 昵称 Label（123456.c L117912-117947）
            UILabel *nameLabel = [[UILabel alloc] init];
            nameLabel.tag = 1001;
            nameLabel.textAlignment = NSTextAlignmentCenter;
            nameLabel.font = [UIFont boldSystemFontOfSize:18];
            nameLabel.translatesAutoresizingMaskIntoConstraints = NO;
            [cell.contentView addSubview:nameLabel];
            [nameLabel release];

            [NSLayoutConstraint activateConstraints:@[
                [nameLabel.centerXAnchor constraintEqualToAnchor:cell.contentView.centerXAnchor],
                [nameLabel.topAnchor constraintEqualToAnchor:avatarView.bottomAnchor constant:10],
                [nameLabel.leadingAnchor constraintEqualToAnchor:cell.contentView.leadingAnchor constant:16],
                [nameLabel.trailingAnchor constraintEqualToAnchor:cell.contentView.trailingAnchor constant:-16],
            ]];

            // 微信号 Label（123456.c L116866-116873）
            UILabel *wxidLabel = [[UILabel alloc] init];
            wxidLabel.tag = 1002;
            wxidLabel.textAlignment = NSTextAlignmentCenter;
            wxidLabel.font = [UIFont systemFontOfSize:13];
            wxidLabel.textColor = [UIColor grayColor];
            wxidLabel.translatesAutoresizingMaskIntoConstraints = NO;
            [cell.contentView addSubview:wxidLabel];
            [wxidLabel release];

            [NSLayoutConstraint activateConstraints:@[
                [wxidLabel.centerXAnchor constraintEqualToAnchor:cell.contentView.centerXAnchor],
                [wxidLabel.topAnchor constraintEqualToAnchor:nameLabel.bottomAnchor constant:4],
            ]];
        }

        UIImageView *av = [cell.contentView viewWithTag:1000];
        if (self.avatarImage) {
            av.image = self.avatarImage;
        }

        UILabel *nl = [cell.contentView viewWithTag:1001];
        nl.text = contactValueForKey(self.contact, @"m_nsNickName") ?: @"微信用户";

        UILabel *wl = [cell.contentView viewWithTag:1002];
        wl.text = self.wxid ?: @"";

        return cell;
    }

    // ===== 信息 Cell（123456.c createDetailCellForTableView L118045）=====
    // 123456.c: 手动创建 UITableViewCellStyleValue1 (style:1)
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"DetailCell"];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1
                                      reuseIdentifier:@"DetailCell"];
        // 123456.c L118060-118068: textLabel font=16, color=black
        cell.textLabel.font = [UIFont systemFontOfSize:16];
        cell.textLabel.textColor = [UIColor blackColor];
        // 123456.c L118101-118110: detailTextLabel font=15, color=gray
        cell.detailTextLabel.font = [UIFont systemFontOfSize:15];
        cell.detailTextLabel.textColor = [UIColor grayColor];
        cell.selectionStyle = UITableViewCellSelectionStyleDefault;
    }

    NSDictionary *item = s_infoItems()[indexPath.row];
    cell.textLabel.text = item[@"label"];
    cell.detailTextLabel.text = [self valueForInfoKey:item[@"key"]];

    return cell;
}

#pragma mark - UITableViewDelegate

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    // 123456.c L118455: section 0 → 170pt
    if (indexPath.section == 0) return 170;
    // 123456.c L118458: section > 0 → UITableViewAutomaticDimension
    return UITableViewAutomaticDimension;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];

    // 123456.c L118293-118298: section 0 → handleProfileNavigation
    if (indexPath.section == 0) {
        [self onHomepageTapped];
        return;
    }

    NSDictionary *item = s_infoItems()[indexPath.row];
    NSString *key = item[@"key"];

    if ([key isEqualToString:@"homepage"]) {
        [self onHomepageTapped];
        return;
    }

    if (![item[@"copiable"] boolValue]) return;

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

#pragma mark - 主页跳转（与 123456.c L118375-118386 一致）

- (void)onHomepageTapped {
    // 123456.c L118375: objc_getClass("ContactInfoViewController")
    Class infoVC = objc_getClass("ContactInfoViewController");
    if (!infoVC) {
        infoVC = objc_getClass("WCContactInfoViewController");
    }
    if (!infoVC) {
        UIAlertController *alert = [UIAlertController
            alertControllerWithTitle:nil
            message:@"当前微信版本不支持直接跳转资料页"
            preferredStyle:UIAlertControllerStyleAlert];
        [alert addAction:[UIAlertAction actionWithTitle:@"确定"
                                                  style:UIAlertActionStyleDefault
                                                handler:nil]];
        [self presentViewController:alert animated:YES completion:nil];
        return;
    }

    // 123456.c L118383: [[ContactInfoViewController alloc] init]
    id vc = ((id (*)(Class, SEL))objc_msgSend)(infoVC, NSSelectorFromString(@"alloc"));
    vc = ((id (*)(id, SEL))objc_msgSend)(vc, NSSelectorFromString(@"init"));
    if (!vc) return;

    // 123456.c L118386: KVC setValue:forKey:@"m_contact"
    // ★ 不是 setContact:！！！ContactInfoViewController 没有这个方法！！！
    ((void (*)(id, SEL, id, NSString *))objc_msgSend)(vc,
        NSSelectorFromString(@"setValue:forKey:"), self.contact, @"m_contact");

    [self dismissViewControllerAnimated:YES completion:^{
        UIViewController *presenting = self.presentingViewController;
        if (!presenting) { [vc release]; return; }

        UINavigationController *nav = presenting.navigationController;
        if (!nav && [presenting isKindOfClass:[UINavigationController class]]) {
            nav = (UINavigationController *)presenting;
        }
        if (nav) {
            [nav pushViewController:vc animated:YES];
        }
        [vc release];
    }];
}

@end