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
        items = @[
            @{@"label": @"微信",   @"key": @"wxid",       @"copiable": @YES},
            @{@"label": @"备注",   @"key": @"remark",     @"copiable": @YES},
            @{@"label": @"性别",   @"key": @"gender",     @"copiable": @NO},
            @{@"label": @"地区",   @"key": @"location",   @"copiable": @NO},
            @{@"label": @"签名",   @"key": @"signature",  @"copiable": @YES},
            @{@"label": @"类型",   @"key": @"chatType",   @"copiable": @NO},
        ];
    });
    return items;
}

@implementation CSContactInfoPopoverController {
    NSMutableArray *_sections;
    UITableView *_tableView;
}

- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar {
    self = [super init];
    if (self) {
        _contact = contact;
        _avatarImage = avatar;
        if (contact) {
            id usrName = contactValueForKey(contact, @"m_nsUsrName");
            _wxid = usrName;
        }
    }
    return self;
}

- (UIModalPresentationStyle)adaptivePresentationStyleForPresentationController:
        (UIPresentationController *)controller {
    return UIModalPresentationNone;
}

- (void)viewDidLoad {
    [super viewDidLoad];

    self.view.backgroundColor = [UIColor whiteColor];

    _sections = [NSMutableArray new];

    UITableView *tableView = [[UITableView alloc] initWithFrame:self.view.bounds
                                                          style:UITableViewStylePlain];
    tableView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    tableView.delegate = self;
    tableView.dataSource = self;
    tableView.backgroundColor = [UIColor clearColor];
    tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    tableView.rowHeight = UITableViewAutomaticDimension;
    tableView.estimatedRowHeight = 44;
    tableView.showsVerticalScrollIndicator = NO;
    tableView.contentInset = UIEdgeInsetsMake(8, 8, 8, 8);

    tableView.tableHeaderView = [self createHeaderView];
    tableView.tableFooterView = [self createFooterView];

    [self.view addSubview:tableView];
    _tableView = tableView;

    if (_contact) {
        [self updateUIWithContact:_contact];
    }
}

- (void)viewDidLayoutSubviews {
    [super viewDidLayoutSubviews];
    if (CGSizeEqualToSize(self.preferredContentSize, CGSizeZero)) {
        if (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone) {
            self.preferredContentSize = CGSizeMake(400, 500);
        }
    }
}

#pragma mark - 创建 UI

- (UIView *)createHeaderView {
    UIView *header = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 272, 20)];
    header.backgroundColor = [UIColor clearColor];
    return header;
}

- (UIView *)createFooterView {
    UIView *footer = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 272, 44)];
    footer.backgroundColor = [UIColor clearColor];

    UILabel *label = [[UILabel alloc] init];
    label.text = @"查看详细资料";
    label.font = [UIFont systemFontOfSize:15];
    label.textColor = [UIColor grayColor];
    label.textAlignment = NSTextAlignmentCenter;
    label.translatesAutoresizingMaskIntoConstraints = NO;
    [footer addSubview:label];

    [NSLayoutConstraint activateConstraints:@[
        [label.centerXAnchor constraintEqualToAnchor:footer.centerXAnchor],
        [label.centerYAnchor constraintEqualToAnchor:footer.centerYAnchor],
    ]];

    return footer;
}

#pragma mark - 数据更新

- (void)updateUIWithContact:(id)contact {
    [_sections removeAllObjects];

    [self addAvatarSection:contact];

    NSString *userName = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_nsUsrName));
    if ([userName containsString:@"@chatroom"]) {
        [self addGroupInfoSection:contact];
    } else if ([userName hasPrefix:@"gh_"]) {
        [self addOfficialAccountInfoSection:contact];
    } else {
        [self addBasicInfoSection:contact];
    }

    [_tableView reloadData];
}

- (void)addAvatarSection:(id)contact {
    id item = ((id (*)(id, SEL))objc_msgSend)([objc_getClass("CSSettingItem") alloc], @selector(init));
    NSString *nickname = contactValueForKey(contact, @"m_nsNickName");
    if (!nickname) nickname = @"未知";
    ((void (*)(id, SEL, id))objc_msgSend)(item, @selector(setTitle:), nickname);
    NSString *usrName = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_nsUsrName));
    ((void (*)(id, SEL, id))objc_msgSend)(item, @selector(setSubtitle:), usrName ?: @"未知ID");
    objc_setAssociatedObject(item, "contact", contact, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    id section = ((id (*)(id, SEL, id, id))objc_msgSend)(
        [objc_getClass("CSSettingSection") alloc], @selector(initWithTitle:items:),
        @"", @[item]);
    [_sections addObject:section];
}

- (void)addBasicInfoSection:(id)contact {
    NSMutableArray *items = [NSMutableArray new];

    [items addObject:[self infoItemWithTitle:@"昵称" detail:[self nicknameValue:contact]]];
    [items addObject:[self infoItemWithTitle:@"微信号" detail:[self wxidValue]]];
    [items addObject:[self infoItemWithTitle:@"备注" detail:[self remarkValue]]];
    [items addObject:[self infoItemWithTitle:@"性别" detail:[self genderValue]]];
    [items addObject:[self infoItemWithTitle:@"地区" detail:[self locationValue]]];
    [items addObject:[self infoItemWithTitle:@"签名" detail:[self signatureValue]]];

    id section = ((id (*)(id, SEL, id, id))objc_msgSend)(
        [objc_getClass("CSSettingSection") alloc], @selector(initWithTitle:items:),
        @"基本信息", items);
    [_sections addObject:section];
}

- (void)addGroupInfoSection:(id)contact {
    NSMutableArray *items = [NSMutableArray new];

    [items addObject:[self infoItemWithTitle:@"昵称" detail:[self nicknameValue:contact]]];
    [items addObject:[self infoItemWithTitle:@"群主" detail:[self groupOwnerValue:contact]]];
    [items addObject:[self infoItemWithTitle:@"群成员" detail:[self groupMemberCountValue:contact]]];

    id section = ((id (*)(id, SEL, id, id))objc_msgSend)(
        [objc_getClass("CSSettingSection") alloc], @selector(initWithTitle:items:),
        @"群聊信息", items);
    [_sections addObject:section];
}

- (void)addOfficialAccountInfoSection:(id)contact {
    NSMutableArray *items = [NSMutableArray new];

    [items addObject:[self infoItemWithTitle:@"昵称" detail:[self nicknameValue:contact]]];
    [items addObject:[self infoItemWithTitle:@"认证" detail:[self verifyFlagValue:contact]]];

    id section = ((id (*)(id, SEL, id, id))objc_msgSend)(
        [objc_getClass("CSSettingSection") alloc], @selector(initWithTitle:items:),
        @"公众号信息", items);
    [_sections addObject:section];
}

- (id)infoItemWithTitle:(NSString *)title detail:(NSString *)detail {
    id item = ((id (*)(id, SEL))objc_msgSend)([objc_getClass("CSSettingItem") alloc], @selector(init));
    ((void (*)(id, SEL, id))objc_msgSend)(item, @selector(setTitle:), title);
    ((void (*)(id, SEL, id))objc_msgSend)(item, @selector(setSubtitle:), detail ?: @"暂无");
    return item;
}

#pragma mark - 数据取值

- (NSString *)nicknameValue:(id)contact {
    id val = contactValueForKey(contact, @"m_nsNickName");
    if (val && [val isKindOfClass:[NSString class]] && [(NSString *)val length] > 0) return val;
    return @"未知";
}

- (NSString *)wxidValue {
    return self.wxid ?: @"未知ID";
}

- (NSString *)remarkValue {
    id remark = contactValueForKey(self.contact, @"m_nsRemark");
    if (remark && [remark isKindOfClass:[NSString class]] && [(NSString *)remark length] > 0) return remark;
    id remarkName = contactValueForKey(self.contact, @"m_nsRemarkName");
    if (remarkName && [remarkName isKindOfClass:[NSString class]] && [(NSString *)remarkName length] > 0) return remarkName;
    return @"暂无";
}

- (NSString *)genderValue {
    NSInteger sex = contactIntForKey(self.contact, @"m_uiSex");
    if (sex == 1) return @"男";
    if (sex == 2) return @"女";
    return @"未知";
}

- (NSString *)locationValue {
    id province = contactValueForKey(self.contact, @"m_nsProvince");
    id city = contactValueForKey(self.contact, @"m_nsCity");
    NSString *p = [province isKindOfClass:[NSString class]] ? [province stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] : @"";
    NSString *c = [city isKindOfClass:[NSString class]] ? city : @"";
    if (p.length > 0 && c.length > 0) return [NSString stringWithFormat:@"%@ %@", p, c];
    if (p.length > 0) return p;
    if (c.length > 0) return c;
    return @"暂无";
}

- (NSString *)signatureValue {
    id sig = contactValueForKey(self.contact, @"m_nsSignature");
    if (sig && [sig isKindOfClass:[NSString class]] && [(NSString *)sig length] > 0) return sig;
    return @"暂无";
}

- (NSString *)groupOwnerValue:(id)contact {
    return @"暂无";
}

- (NSString *)groupMemberCountValue:(id)contact {
    return @"暂无";
}

- (NSString *)verifyFlagValue:(id)contact {
    id flag = contactValueForKey(contact, @"m_uiVerifyFlag");
    if (flag) {
        NSInteger v = [flag integerValue];
        if (v > 0) return @"已认证";
    }
    return @"未认证";
}

#pragma mark - UITableViewDataSource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return _sections.count;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    if (section >= _sections.count) return 0;
    id sec = _sections[section];
    id items = ((id (*)(id, SEL))objc_msgSend)(sec, @selector(items));
    return ((NSInteger (*)(id, SEL))objc_msgSend)(items, @selector(count));
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.section == 0) {
        return [self createAvatarCellForTableView:tableView atIndexPath:indexPath];
    }
    return [self createDetailCellForTableView:tableView atIndexPath:indexPath];
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section {
    if (section >= _sections.count) return nil;
    id sec = _sections[section];
    return ((id (*)(id, SEL))objc_msgSend)(sec, @selector(title));
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.section == 0) return 170;
    return UITableViewAutomaticDimension;
}

#pragma mark - Cell 构建

- (UITableViewCell *)createAvatarCellForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"AvatarCell"];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"AvatarCell"];
        cell.selectionStyle = UITableViewCellSelectionStyleNone;

        UIImageView *avatarView = [[UIImageView alloc] init];
        avatarView.tag = 1000;
        avatarView.layer.cornerRadius = 35;
        avatarView.clipsToBounds = YES;
        avatarView.contentMode = UIViewContentModeScaleAspectFill;
        avatarView.translatesAutoresizingMaskIntoConstraints = NO;
        [cell.contentView addSubview:avatarView];

        [NSLayoutConstraint activateConstraints:@[
            [avatarView.centerXAnchor constraintEqualToAnchor:cell.contentView.centerXAnchor],
            [avatarView.topAnchor constraintEqualToAnchor:cell.contentView.topAnchor constant:16],
            [avatarView.widthAnchor constraintEqualToConstant:70],
            [avatarView.heightAnchor constraintEqualToConstant:70],
        ]];

        UILabel *nameLabel = [[UILabel alloc] init];
        nameLabel.tag = 1001;
        nameLabel.font = [UIFont boldSystemFontOfSize:20];
        nameLabel.textColor = [UIColor darkTextColor];
        nameLabel.textAlignment = NSTextAlignmentCenter;
        nameLabel.numberOfLines = 0;
        nameLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [cell.contentView addSubview:nameLabel];

        [NSLayoutConstraint activateConstraints:@[
            [nameLabel.centerXAnchor constraintEqualToAnchor:cell.contentView.centerXAnchor],
            [nameLabel.topAnchor constraintEqualToAnchor:avatarView.bottomAnchor constant:16],
            [nameLabel.leadingAnchor constraintEqualToAnchor:cell.contentView.leadingAnchor constant:10],
            [nameLabel.trailingAnchor constraintEqualToAnchor:cell.contentView.trailingAnchor constant:-10],
        ]];
    }

    UIImageView *av = [cell.contentView viewWithTag:1000];
    if (self.avatarImage) {
        av.image = self.avatarImage;
    }

    UILabel *nl = [cell.contentView viewWithTag:1001];
    id item = ((id (*)(id, SEL, NSInteger))objc_msgSend)(_sections[0], @selector(items), 0);
    id title = ((id (*)(id, SEL))objc_msgSend)(item, @selector(title));
    nl.text = title ?: @"未知";

    return cell;
}

- (UITableViewCell *)createDetailCellForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"DetailCell"];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"DetailCell"];
        cell.selectionStyle = UITableViewCellSelectionStyleDefault;

        UILabel *titleLabel = [[UILabel alloc] init];
        titleLabel.tag = 2000;
        titleLabel.font = [UIFont boldSystemFontOfSize:12];
        titleLabel.textColor = [UIColor grayColor];
        titleLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [cell.contentView addSubview:titleLabel];

        [NSLayoutConstraint activateConstraints:@[
            [titleLabel.topAnchor constraintEqualToAnchor:cell.contentView.topAnchor constant:4],
            [titleLabel.leadingAnchor constraintEqualToAnchor:cell.contentView.leadingAnchor constant:12],
            [titleLabel.trailingAnchor constraintEqualToAnchor:cell.contentView.trailingAnchor constant:-12],
        ]];

        UILabel *detailLabel = [[UILabel alloc] init];
        detailLabel.tag = 2001;
        detailLabel.font = [UIFont systemFontOfSize:15];
        detailLabel.textColor = [UIColor lightGrayColor];
        detailLabel.numberOfLines = 0;
        detailLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [cell.contentView addSubview:detailLabel];

        [NSLayoutConstraint activateConstraints:@[
            [detailLabel.topAnchor constraintEqualToAnchor:titleLabel.bottomAnchor constant:-12],
            [detailLabel.leadingAnchor constraintEqualToAnchor:titleLabel.leadingAnchor],
            [detailLabel.trailingAnchor constraintEqualToAnchor:cell.contentView.trailingAnchor constant:-12],
            [detailLabel.bottomAnchor constraintEqualToAnchor:cell.contentView.bottomAnchor constant:-12],
        ]];
    }

    id sec = _sections[indexPath.section];
    id items = ((id (*)(id, SEL))objc_msgSend)(sec, @selector(items));
    id item = ((id (*)(id, SEL, NSUInteger))objc_msgSend)(items, @selector(objectAtIndex:), indexPath.row);

    UILabel *tl = [cell.contentView viewWithTag:2000];
    tl.text = ((id (*)(id, SEL))objc_msgSend)(item, @selector(title));

    UILabel *dl = [cell.contentView viewWithTag:2001];
    NSString *detail = ((id (*)(id, SEL))objc_msgSend)(item, @selector(subtitle));
    dl.text = detail ?: @"暂无";

    [self updateDetailLabelStyle:dl forDetail:detail];

    return cell;
}

- (void)updateDetailLabelStyle:(UILabel *)label forDetail:(NSString *)detail {
    if (!detail || [detail isEqualToString:@"暂无"] || [detail isEqualToString:@"未知"]) {
        label.font = [UIFont systemFontOfSize:15];
        label.textColor = [UIColor colorWithWhite:0.4 alpha:1.0];
    } else {
        label.font = [UIFont boldSystemFontOfSize:15];
        label.textColor = [UIColor colorWithWhite:0.55 alpha:1.0];
    }
}

#pragma mark - 点击交互

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];

    if (indexPath.section == 0) {
        [self handleProfileNavigation];
        return;
    }

    id sec = _sections[indexPath.section];
    id items = ((id (*)(id, SEL))objc_msgSend)(sec, @selector(items));
    id item = ((id (*)(id, SEL, NSUInteger))objc_msgSend)(items, @selector(objectAtIndex:), indexPath.row);
    NSString *detail = ((id (*)(id, SEL))objc_msgSend)(item, @selector(subtitle));

    if (!detail || detail.length == 0 || [detail isEqualToString:@"暂无"] || [detail isEqualToString:@"未知"]) return;

    [self copyTextToClipboard:detail];
    [self showCopySuccessToast];
    [self playHapticFeedback];
}

- (void)handleProfileNavigation {
    Class infoVC = objc_getClass("ContactInfoViewController");
    if (!infoVC) return;

    id vc = ((id (*)(Class, SEL))objc_msgSend)(infoVC, NSSelectorFromString(@"alloc"));
    vc = ((id (*)(id, SEL))objc_msgSend)(vc, NSSelectorFromString(@"init"));
    if (!vc) return;

    ((void (*)(id, SEL, id, NSString *))objc_msgSend)(vc,
        NSSelectorFromString(@"setValue:forKey:"), self.contact, @"m_contact");

    [self dismissViewControllerAnimated:YES completion:^{
        UIViewController *presenting = self.presentingViewController;
        if (!presenting) return;

        UINavigationController *nav = nil;
        if ([presenting isKindOfClass:[UINavigationController class]]) {
            nav = (UINavigationController *)presenting;
        } else {
            nav = presenting.navigationController;
        }

        if (nav) {
            [nav pushViewController:vc animated:YES];
        } else {
            [presenting presentViewController:vc animated:YES completion:nil];
        }
    }];
}

- (void)copyTextToClipboard:(NSString *)text {
    [UIPasteboard generalPasteboard].string = text;
}

- (void)playHapticFeedback {
    UINotificationFeedbackGenerator *gen = [[UINotificationFeedbackGenerator alloc] init];
    [gen prepare];
    [gen notificationOccurred:UINotificationFeedbackTypeSuccess];
}

#pragma mark - Copy Toast

- (void)showCopySuccessToast {
    CGFloat toastW = 200;
    CGFloat toastH = 25;
    UIView *toast = [[UIView alloc] initWithFrame:CGRectMake(
        (self.view.bounds.size.width - toastW) * 0.5,
        self.view.bounds.size.height * 0.5 + 100,
        toastW, toastH)];
    toast.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.7];
    toast.layer.cornerRadius = toastH * 0.5;
    toast.clipsToBounds = YES;
    toast.alpha = 0;
    toast.transform = CGAffineTransformMakeScale(0.8, 0.8);

    UIStackView *stack = [[UIStackView alloc] initWithFrame:toast.bounds];
    stack.axis = UILayoutConstraintAxisHorizontal;
    stack.alignment = UIStackViewAlignmentCenter;
    stack.distribution = UIStackViewDistributionEqualSpacing;
    stack.spacing = 8;
    stack.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [toast addSubview:stack];

    UILabel *checkmark = [[UILabel alloc] init];
    checkmark.text = @"✓";
    checkmark.font = [UIFont boldSystemFontOfSize:15];
    checkmark.textColor = [UIColor greenColor];
    [stack addArrangedSubview:checkmark];

    UILabel *label = [[UILabel alloc] init];
    label.text = @"已复制";
    label.font = [UIFont systemFontOfSize:15 weight:UIFontWeightMedium];
    label.textColor = [UIColor whiteColor];
    [stack addArrangedSubview:label];

    [self.view addSubview:toast];

    [UIView animateWithDuration:0.3 delay:0 usingSpringWithDamping:0.7 initialSpringVelocity:0.5 options:0 animations:^{
        toast.alpha = 1.0;
        toast.transform = CGAffineTransformIdentity;
    } completion:^(BOOL finished) {
        [UIView animateWithDuration:0.3 delay:0.25 options:0 animations:^{
            toast.alpha = 0;
            toast.transform = CGAffineTransformMakeScale(0.9, 0.9);
        } completion:^(BOOL finished) {
            [toast removeFromSuperview];
        }];
    }];
}

@end