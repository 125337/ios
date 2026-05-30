#import "CSContactInfoPopoverController.h"
#import <objc/runtime.h>
#import <objc/message.h>

#pragma mark - KVC 辅助

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

static NSString *contactStringForKey(id contact, NSString *key) {
    id val = contactValueForKey(contact, key);
    if (val && [val isKindOfClass:[NSString class]] && [(NSString *)val length] > 0) return val;
    return nil;
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
            _wxid = ((id (*)(id, SEL))objc_msgSend)(contact, @selector(m_nsUsrName));
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

#pragma mark - UI 创建

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

- (UIView *)createCardViewWithCornerRadius:(CGFloat)radius {
    UIView *card = [[UIView alloc] init];
    card.backgroundColor = [UIColor whiteColor];
    card.layer.cornerRadius = radius;
    card.clipsToBounds = YES;
    card.translatesAutoresizingMaskIntoConstraints = NO;
    return card;
}

- (UIImageView *)createAvatarImageView {
    UIImageView *iv = [[UIImageView alloc] init];
    iv.layer.cornerRadius = 35;
    iv.clipsToBounds = YES;
    iv.contentMode = UIViewContentModeScaleAspectFill;
    iv.translatesAutoresizingMaskIntoConstraints = NO;
    return iv;
}

#pragma mark - 数据构建

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
    NSDictionary *item = @{
        @"title": [self nicknameValue:contact],
        @"detail": self.wxid ?: @"未知ID",
    };
    objc_setAssociatedObject((__bridge id)(__bridge void *)item, "contact", contact, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    NSDictionary *section = @{@"header": @"", @"items": @[item]};
    [_sections addObject:[section mutableCopy]];
}

- (void)addBasicInfoSection:(id)contact {
    NSArray *items = @[
        @{@"title": @"昵称", @"detail": [self nicknameValue:contact]},
        @{@"title": @"微信号", @"detail": [self wxidValue]},
        @{@"title": @"备注", @"detail": [self remarkValue]},
        @{@"title": @"性别", @"detail": [self genderValue]},
        @{@"title": @"地区", @"detail": [self locationValue]},
        @{@"title": @"签名", @"detail": [self signatureValue]},
    ];
    NSDictionary *section = @{@"header": @"基本信息", @"items": items};
    [_sections addObject:[section mutableCopy]];
}

- (void)addGroupInfoSection:(id)contact {
    NSArray *items = @[
        @{@"title": @"昵称", @"detail": [self nicknameValue:contact]},
        @{@"title": @"群主", @"detail": @"暂无"},
        @{@"title": @"群成员", @"detail": @"暂无"},
    ];
    NSDictionary *section = @{@"header": @"群聊信息", @"items": items};
    [_sections addObject:[section mutableCopy]];
}

- (void)addOfficialAccountInfoSection:(id)contact {
    NSArray *items = @[
        @{@"title": @"昵称", @"detail": [self nicknameValue:contact]},
        @{@"title": @"认证", @"detail": [self verifyFlagValue:contact]},
    ];
    NSDictionary *section = @{@"header": @"公众号信息", @"items": items};
    [_sections addObject:[section mutableCopy]];
}

#pragma mark - 数据取值

- (NSString *)nicknameValue:(id)contact {
    NSString *val = contactStringForKey(contact, @"m_nsNickName");
    return val ?: @"未知";
}

- (NSString *)wxidValue {
    return self.wxid ?: @"未知ID";
}

- (NSString *)remarkValue {
    NSString *remark = contactStringForKey(self.contact, @"m_nsRemark");
    if (remark) return remark;
    NSString *remarkName = contactStringForKey(self.contact, @"m_nsRemarkName");
    if (remarkName) return remarkName;
    return @"暂无";
}

- (NSString *)genderValue {
    NSInteger sex = contactIntForKey(self.contact, @"m_uiSex");
    if (sex == 1) return @"男";
    if (sex == 2) return @"女";
    return @"未知";
}

- (NSString *)locationValue {
    NSString *p = contactStringForKey(self.contact, @"m_nsProvince");
    NSString *c = contactStringForKey(self.contact, @"m_nsCity");
    if (p && c) return [NSString stringWithFormat:@"%@ %@", p, c];
    if (p) return p;
    if (c) return c;
    return @"暂无";
}

- (NSString *)signatureValue {
    NSString *sig = contactStringForKey(self.contact, @"m_nsSignature");
    return sig ?: @"暂无";
}

- (NSString *)verifyFlagValue:(id)contact {
    NSInteger v = contactIntForKey(contact, @"m_uiVerifyFlag");
    if (v > 0) return @"已认证";
    return @"未认证";
}

#pragma mark - UITableViewDataSource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return _sections.count;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    NSDictionary *sec = _sections[section];
    return [sec[@"items"] count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.section == 0) {
        return [self createAvatarCellForTableView:tableView atIndexPath:indexPath];
    }
    return [self createDetailCellForTableView:tableView atIndexPath:indexPath];
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section {
    return _sections[section][@"header"];
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.section == 0) return 170;
    return UITableViewAutomaticDimension;
}

#pragma mark - Avatar Cell 构建

- (UITableViewCell *)createAvatarCellForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"AvatarCell"];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:@"AvatarCell"];
        cell.selectionStyle = UITableViewCellSelectionStyleNone;
        cell.backgroundColor = [UIColor clearColor];

        // 白色圆角卡片容器
        UIView *cardView = [self createCardViewWithCornerRadius:16];
        cardView.tag = 1000;
        [cell.contentView addSubview:cardView];

        [NSLayoutConstraint activateConstraints:@[
            [cardView.topAnchor constraintEqualToAnchor:cell.contentView.topAnchor constant:12],
            [cardView.leadingAnchor constraintEqualToAnchor:cell.contentView.leadingAnchor constant:4],
            [cardView.trailingAnchor constraintEqualToAnchor:cell.contentView.trailingAnchor constant:-4],
            [cardView.bottomAnchor constraintEqualToAnchor:cell.contentView.bottomAnchor constant:-12],
        ]];

        // 头像
        UIImageView *avatarView = [self createAvatarImageView];
        avatarView.tag = 1001;
        [cardView addSubview:avatarView];

        [NSLayoutConstraint activateConstraints:@[
            [avatarView.centerYAnchor constraintEqualToAnchor:cardView.centerYAnchor],
            [avatarView.leadingAnchor constraintEqualToAnchor:cardView.leadingAnchor constant:16],
            [avatarView.widthAnchor constraintEqualToConstant:68],
            [avatarView.heightAnchor constraintEqualToConstant:68],
        ]];

        // 昵称
        UILabel *nameLabel = [[UILabel alloc] init];
        nameLabel.tag = 1002;
        nameLabel.font = [UIFont boldSystemFontOfSize:20];
        nameLabel.textColor = [UIColor darkTextColor];
        nameLabel.numberOfLines = 0;
        nameLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [cardView addSubview:nameLabel];

        [NSLayoutConstraint activateConstraints:@[
            [nameLabel.topAnchor constraintEqualToAnchor:cardView.topAnchor constant:16],
            [nameLabel.bottomAnchor constraintEqualToAnchor:cardView.bottomAnchor constant:-16],
            [nameLabel.leadingAnchor constraintEqualToAnchor:avatarView.trailingAnchor constant:10],
            [nameLabel.trailingAnchor constraintEqualToAnchor:cardView.trailingAnchor constant:-16],
        ]];
    }

    UIImageView *av = [cell.contentView viewWithTag:1001];
    if (self.avatarImage) {
        av.image = self.avatarImage;
    }

    UILabel *nl = [cell.contentView viewWithTag:1002];
    NSDictionary *sec = _sections[0];
    NSDictionary *item = sec[@"items"][0];
    nl.text = item[@"title"] ?: @"未知";

    return cell;
}

#pragma mark - Detail Cell 构建

- (UITableViewCell *)createDetailCellForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"DetailCell"];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:@"DetailCell"];
        cell.selectionStyle = UITableViewCellSelectionStyleDefault;
        cell.backgroundColor = [UIColor clearColor];

        // 白色圆角卡片容器
        UIView *cardView = [self createCardViewWithCornerRadius:12];
        cardView.tag = 2000;
        [cell.contentView addSubview:cardView];

        [NSLayoutConstraint activateConstraints:@[
            [cardView.topAnchor constraintEqualToAnchor:cell.contentView.topAnchor constant:4],
            [cardView.leadingAnchor constraintEqualToAnchor:cell.contentView.leadingAnchor constant:4],
            [cardView.trailingAnchor constraintEqualToAnchor:cell.contentView.trailingAnchor constant:-4],
            [cardView.bottomAnchor constraintEqualToAnchor:cell.contentView.bottomAnchor constant:-4],
        ]];

        // 标题
        UILabel *titleLabel = [[UILabel alloc] init];
        titleLabel.tag = 2001;
        titleLabel.font = [UIFont systemFontOfSize:16];
        titleLabel.textColor = [UIColor grayColor];
        titleLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [cardView addSubview:titleLabel];

        [NSLayoutConstraint activateConstraints:@[
            [titleLabel.topAnchor constraintEqualToAnchor:cardView.topAnchor constant:12],
            [titleLabel.centerXAnchor constraintEqualToAnchor:cardView.centerXAnchor],
            [titleLabel.heightAnchor constraintEqualToConstant:50],
        ]];

        // 详情
        UILabel *detailLabel = [[UILabel alloc] init];
        detailLabel.tag = 2002;
        detailLabel.font = [UIFont systemFontOfSize:15];
        detailLabel.textColor = [UIColor lightGrayColor];
        detailLabel.numberOfLines = 0;
        detailLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [cardView addSubview:detailLabel];

        [NSLayoutConstraint activateConstraints:@[
            [detailLabel.topAnchor constraintEqualToAnchor:titleLabel.bottomAnchor],
            [detailLabel.leadingAnchor constraintEqualToAnchor:cardView.leadingAnchor constant:12],
            [detailLabel.trailingAnchor constraintEqualToAnchor:cardView.trailingAnchor constant:-12],
            [detailLabel.bottomAnchor constraintEqualToAnchor:cardView.bottomAnchor constant:-12],
        ]];
    }

    NSDictionary *sec = _sections[indexPath.section];
    NSDictionary *item = sec[@"items"][indexPath.row];

    UILabel *tl = [cell.contentView viewWithTag:2001];
    tl.text = item[@"title"];

    UILabel *dl = [cell.contentView viewWithTag:2002];
    NSString *detail = item[@"detail"] ?: @"暂无";
    dl.text = detail;

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

    NSDictionary *sec = _sections[indexPath.section];
    NSDictionary *item = sec[@"items"][indexPath.row];
    NSString *detail = item[@"detail"];

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

#pragma mark - 复制成功 Toast

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