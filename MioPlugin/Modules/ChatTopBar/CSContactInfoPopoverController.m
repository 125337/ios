#import "CSContactInfoPopoverController.h"
#import <objc/runtime.h>
#import <objc/message.h>

#pragma mark - 颜色常量 (对齐 MioPlugin WPT1/WPT2)

static UIColor *WPT1Color(void) {
    if (@available(iOS 13.0, *)) {
        return [UIColor labelColor];
    }
    return [UIColor blackColor];
}

static UIColor *WPT2Color(void) {
    if (@available(iOS 13.0, *)) {
        return [UIColor secondaryLabelColor];
    }
    return [UIColor colorWithWhite:0.4 alpha:1.0];
}

static UIColor *WPCardBgColor(void) {
    if (@available(iOS 13.0, *)) {
        return [UIColor systemBackgroundColor];
    }
    return [UIColor whiteColor];
}

static const CGFloat kCardCornerRadius = 12.0;
static const CGFloat kContentInset = 16.0;
static const CGFloat kCellHPadding = 16.0;
static const CGFloat kAvatarSize = 68.0;
static const CGFloat kAvatarCellHeight = 100.0;
static const CGFloat kDetailCellHeight = 44.0;

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

    self.view.backgroundColor = [UIColor clearColor];

    _sections = [NSMutableArray new];

    UITableView *tableView = [[UITableView alloc] initWithFrame:self.view.bounds
                                                          style:UITableViewStyleGrouped];
    tableView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    tableView.delegate = self;
    tableView.dataSource = self;
    tableView.backgroundColor = [UIColor clearColor];
    tableView.separatorStyle = UITableViewCellSeparatorStyleSingleLine;
    tableView.separatorInset = UIEdgeInsetsMake(0, kCellHPadding, 0, kCellHPadding);
    tableView.separatorColor = [UIColor colorWithWhite:0.85 alpha:1.0];
    tableView.rowHeight = kDetailCellHeight;
    tableView.estimatedRowHeight = kDetailCellHeight;
    tableView.showsVerticalScrollIndicator = NO;
    tableView.sectionHeaderHeight = 36;
    tableView.sectionFooterHeight = 0.01;
    tableView.tableFooterView = [[UIView alloc] initWithFrame:CGRectZero];

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
    if (indexPath.section == 0) return kAvatarCellHeight;
    return kDetailCellHeight;
}

#pragma mark - Avatar Cell (工厂化: imageView + textLabel/detailTextLabel)

- (UITableViewCell *)createAvatarCellForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath {
    static NSString *identifier = @"AvatarCell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:identifier];
        cell.selectionStyle = UITableViewCellSelectionStyleDefault;
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
        cell.backgroundColor = WPCardBgColor();
        cell.textLabel.font = [UIFont boldSystemFontOfSize:17];
        cell.textLabel.textColor = WPT1Color();
        cell.detailTextLabel.font = [UIFont systemFontOfSize:13];
        cell.detailTextLabel.textColor = WPT2Color();
        cell.detailTextLabel.numberOfLines = 1;

        cell.imageView.layer.cornerRadius = kAvatarSize * 0.5;
        cell.imageView.clipsToBounds = YES;
        cell.imageView.contentMode = UIViewContentModeScaleAspectFill;
    }

    NSDictionary *sec = _sections[0];
    NSDictionary *item = sec[@"items"][0];

    cell.textLabel.text = item[@"title"] ?: @"未知";
    cell.detailTextLabel.text = item[@"detail"] ?: @"未知ID";

    if (self.avatarImage) {
        cell.imageView.image = self.avatarImage;
    }

    return cell;
}

#pragma mark - Detail Cell (工厂化: UITableViewCellStyleValue1, 对齐 MioPlugin)

- (UITableViewCell *)createDetailCellForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath {
    static NSString *identifier = @"DetailCell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:identifier];
        cell.selectionStyle = UITableViewCellSelectionStyleDefault;
        cell.backgroundColor = WPCardBgColor();
        cell.textLabel.font = [UIFont systemFontOfSize:15];
        cell.textLabel.textColor = WPT1Color();
        cell.detailTextLabel.font = [UIFont systemFontOfSize:13];
        cell.detailTextLabel.textColor = WPT2Color();
        cell.detailTextLabel.numberOfLines = 1;
    }

    NSDictionary *sec = _sections[indexPath.section];
    NSDictionary *item = sec[@"items"][indexPath.row];

    cell.textLabel.text = item[@"title"];
    cell.detailTextLabel.text = item[@"detail"] ?: @"暂无";

    return cell;
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

- (void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath {
    NSInteger rows = [tableView numberOfRowsInSection:indexPath.section];
    BOOL isFirst = indexPath.row == 0;
    BOOL isLast = indexPath.row == rows - 1;

    if (isFirst && isLast) {
        cell.layer.cornerRadius = kCardCornerRadius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        cell.clipsToBounds = YES;
    } else if (isFirst) {
        cell.layer.cornerRadius = kCardCornerRadius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
        cell.clipsToBounds = YES;
    } else if (isLast) {
        cell.layer.cornerRadius = kCardCornerRadius;
        cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        cell.clipsToBounds = YES;
    } else {
        cell.layer.cornerRadius = 0;
        cell.clipsToBounds = NO;
    }
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