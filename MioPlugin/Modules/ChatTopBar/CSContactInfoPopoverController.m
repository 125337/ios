#import "CSContactInfoPopoverController.h"
#import <objc/runtime.h>
#import <objc/message.h>

#pragma mark - 颜色常量

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
static const CGFloat kAvatarSize = 60.0;
static const CGFloat kAvatarCellHeight = 120.0;
static const CGFloat kDetailCellHeight = 46.0;

#pragma mark - KVC 辅助（旧版方式，不用 try/catch，直接取值）

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

#pragma mark - 信息行定义（旧版数据获取方式）

static NSArray *s_basicInfoItems(void) {
    static NSArray *items = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        items = @[
            @{@"label": @"类型",   @"key": @"chatType",  @"copiable": @NO,  @"icon": @"person.text.rectangle"},
            @{@"label": @"微信号", @"key": @"wxid",      @"copiable": @YES, @"icon": @"number"},
            @{@"label": @"备注",   @"key": @"remark",    @"copiable": @YES, @"icon": @"pencil.tip"},
            @{@"label": @"昵称",   @"key": @"nickname",  @"copiable": @YES, @"icon": @"person"},
            @{@"label": @"性别",   @"key": @"gender",    @"copiable": @NO,  @"icon": @"person.fill.questionmark"},
            @{@"label": @"地区",   @"key": @"location",  @"copiable": @NO,  @"icon": @"location"},
            @{@"label": @"签名",   @"key": @"signature", @"copiable": @YES, @"icon": @"text.quote"},
        ];
    });
    return items;
}

static NSArray *s_groupInfoItems(void) {
    static NSArray *items = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        items = @[
            @{@"label": @"群主",   @"key": @"groupOwner",     @"copiable": @NO,  @"icon": @"crown"},
            @{@"label": @"群成员", @"key": @"groupMemberCount", @"copiable": @NO,  @"icon": @"person.3"},
        ];
    });
    return items;
}

static NSArray *s_oaInfoItems(void) {
    static NSArray *items = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        items = @[
            @{@"label": @"公众号类型", @"key": @"oaType",      @"copiable": @NO, @"icon": @"megaphone"},
            @{@"label": @"认证状态",   @"key": @"oaVerify",    @"copiable": @NO, @"icon": @"checkmark.seal"},
        ];
    });
    return items;
}

@implementation CSContactInfoPopoverController {
    NSMutableArray *_sections;
    UITableView *_tableView;
    UIView *_cardView;
}

- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar {
    self = [super init];
    if (self) {
        _contact = contact;
        _avatarImage = avatar;
        if (contact) {
            _wxid = contactValueForKey(contact, @"m_nsUsrName");
        }
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];

    self.view.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.4];

    UITapGestureRecognizer *bgTap = [[UITapGestureRecognizer alloc]
        initWithTarget:self action:@selector(dismissSelf)];
    bgTap.delegate = (id<UIGestureRecognizerDelegate>)self;
    [self.view addGestureRecognizer:bgTap];

    _sections = [NSMutableArray new];

    CGFloat cardW = 280;
    CGFloat cardH = 400;
    CGFloat cardX = (self.view.bounds.size.width - cardW) / 2;
    CGFloat cardY = (self.view.bounds.size.height - cardH) / 2;
    if (cardY < 60) cardY = 60;

    _cardView = [[UIView alloc] initWithFrame:CGRectMake(cardX, cardY, cardW, cardH)];
    _cardView.backgroundColor = WPCardBgColor();
    _cardView.layer.cornerRadius = kCardCornerRadius;
    _cardView.clipsToBounds = YES;
    _cardView.autoresizingMask = UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin |
                                  UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleBottomMargin;
    [self.view addSubview:_cardView];

    UITableView *tableView = [[UITableView alloc] initWithFrame:_cardView.bounds
                                                          style:UITableViewStyleGrouped];
    tableView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    tableView.delegate = self;
    tableView.dataSource = self;
    tableView.backgroundColor = [UIColor clearColor];
    tableView.separatorStyle = UITableViewCellSeparatorStyleSingleLine;
    tableView.separatorInset = UIEdgeInsetsMake(0, 18, 0, 18);
    tableView.separatorColor = [UIColor colorWithWhite:0.85 alpha:1.0];
    tableView.rowHeight = kDetailCellHeight;
    tableView.estimatedRowHeight = kDetailCellHeight;
    tableView.showsVerticalScrollIndicator = NO;
    tableView.sectionHeaderHeight = 36;
    tableView.sectionFooterHeight = 0.01;
    tableView.tableFooterView = [[UIView alloc] initWithFrame:CGRectZero];

    [_cardView addSubview:tableView];
    _tableView = tableView;

    if (_contact) {
        @try {
            [self buildSections];
        } @catch (NSException *e) {
            [_sections removeAllObjects];
            [self addAvatarSection];
        }
        [_tableView reloadData];
    }
}

- (void)dismissSelf {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (BOOL)gestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldReceiveTouch:(UITouch *)touch {
    if ([touch.view isDescendantOfView:_cardView]) return NO;
    return YES;
}

#pragma mark - 构建 Sections

- (void)buildSections {
    [_sections removeAllObjects];

    [self addAvatarSection];

    NSString *wxid = self.wxid;

    if ([wxid containsString:@"@chatroom"]) {
        [self addGroupInfoSection];
    } else if ([wxid hasPrefix:@"gh_"]) {
        [self addOfficialAccountInfoSection];
    } else {
        [self addBasicInfoSection];
    }
}

- (void)addAvatarSection {
    NSString *nickname = contactValueForKey(self.contact, @"m_nsNickName");
    if (!nickname || ![nickname isKindOfClass:[NSString class]] || [(NSString *)nickname length] == 0) {
        nickname = @"微信用户";
    }

    NSDictionary *item = @{
        @"title": nickname,
        @"detail": self.wxid ?: @"",
    };
    [_sections addObject:@{@"header": @"", @"items": @[item]}];
}

- (void)addBasicInfoSection {
    NSArray *infoItems = s_basicInfoItems();
    [_sections addObject:@{@"header": @"基本信息", @"items": infoItems}];
}

- (void)addGroupInfoSection {
    NSArray *infoItems = s_groupInfoItems();
    [_sections addObject:@{@"header": @"群聊信息", @"items": infoItems}];
}

- (void)addOfficialAccountInfoSection {
    NSArray *infoItems = s_oaInfoItems();
    [_sections addObject:@{@"header": @"公众号信息", @"items": infoItems}];
}

#pragma mark - 数据取值（旧版方式）

- (NSString *)valueForInfoKey:(NSString *)key {
    if ([key isEqualToString:@"chatType"]) {
        return [self chatTypeValue];
    }
    if ([key isEqualToString:@"wxid"]) {
        return self.wxid ?: @"";
    }
    if ([key isEqualToString:@"remark"]) {
        return [self remarkValue];
    }
    if ([key isEqualToString:@"nickname"]) {
        return [self nicknameValue];
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
    if ([key isEqualToString:@"groupOwner"]) {
        return [self ownerValue];
    }
    if ([key isEqualToString:@"groupMemberCount"]) {
        return [self groupMemberCountValue];
    }
    if ([key isEqualToString:@"oaType"]) {
        return @"服务号";
    }
    if ([key isEqualToString:@"oaVerify"]) {
        return [self oaVerifyValue];
    }
    return @"";
}

- (NSString *)chatTypeValue {
    if (!self.wxid) return @"联系人";
    if ([self.wxid containsString:@"@chatroom"]) return @"群聊";
    if ([self.wxid hasPrefix:@"gh_"]) return @"公众号";
    return @"联系人";
}

- (NSString *)nicknameValue {
    id val = contactValueForKey(self.contact, @"m_nsNickName");
    if (val && [val isKindOfClass:[NSString class]] && [(NSString *)val length] > 0) {
        return val;
    }
    return @"未设置";
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

    NSString *pStr = (province && [province isKindOfClass:[NSString class]]) ? province : nil;
    NSString *cStr = (city && [city isKindOfClass:[NSString class]]) ? city : nil;

    NSString *trimmed = [pStr stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];

    if (!trimmed || trimmed.length == 0) {
        if (cStr.length > 0) return cStr;
        return @"未设置";
    }
    if (cStr.length > 0) {
        return [NSString stringWithFormat:@"%@ %@", trimmed, cStr];
    }
    return trimmed;
}

- (NSString *)signatureValue {
    id sig = contactValueForKey(self.contact, @"m_nsSignature");
    if (sig && [sig isKindOfClass:[NSString class]] && [(NSString *)sig length] > 0) {
        return sig;
    }
    return @"未设置";
}

- (NSString *)ownerValue {
    id owner = contactValueForKey(self.contact, @"m_nsOwner");
    if (owner && [owner isKindOfClass:[NSString class]] && [(NSString *)owner length] > 0) {
        return owner;
    }
    return @"未设置";
}

- (NSString *)groupMemberCountValue {
    return [NSString stringWithFormat:@"%ld 人", (long)contactIntForKey(self.contact, @"m_uiChatRoomMemCount")];
}

- (NSString *)oaVerifyValue {
    NSInteger v = contactIntForKey(self.contact, @"m_uiVerifyFlag");
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
    NSDictionary *sec = _sections[section];
    NSString *header = sec[@"header"];
    if (header.length == 0) return nil;
    return header;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.section == 0) return kAvatarCellHeight;
    return kDetailCellHeight;
}

#pragma mark - Avatar Cell

- (UITableViewCell *)createAvatarCellForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath {
    static NSString *identifier = @"AvatarCell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:identifier];
        cell.selectionStyle = UITableViewCellSelectionStyleDefault;
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
        cell.backgroundColor = WPCardBgColor();
        cell.textLabel.font = [UIFont boldSystemFontOfSize:18];
        cell.textLabel.textColor = WPT1Color();
        cell.detailTextLabel.font = [UIFont systemFontOfSize:13];
        cell.detailTextLabel.textColor = WPT2Color();
        cell.detailTextLabel.numberOfLines = 1;

        cell.imageView.layer.cornerRadius = kAvatarSize * 0.5;
        cell.imageView.clipsToBounds = YES;
        cell.imageView.contentMode = UIViewContentModeScaleAspectFill;

        [cell.imageView.widthAnchor constraintEqualToConstant:kAvatarSize].active = YES;
        [cell.imageView.heightAnchor constraintEqualToConstant:kAvatarSize].active = YES;
    }

    NSDictionary *sec = _sections[0];
    NSDictionary *item = sec[@"items"][0];

    cell.textLabel.text = item[@"title"] ?: @"微信用户";
    cell.detailTextLabel.text = item[@"detail"] ?: @"";

    if (self.avatarImage) {
        cell.imageView.image = self.avatarImage;
    }

    return cell;
}

#pragma mark - Detail Cell

- (UITableViewCell *)createDetailCellForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath {
    static NSString *identifier = @"DetailCell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:identifier];
        cell.selectionStyle = UITableViewCellSelectionStyleDefault;
        cell.backgroundColor = WPCardBgColor();
        cell.textLabel.font = [UIFont systemFontOfSize:16];
        cell.textLabel.textColor = WPT1Color();
        cell.detailTextLabel.font = [UIFont systemFontOfSize:15];
        cell.detailTextLabel.textColor = WPT2Color();
        cell.detailTextLabel.numberOfLines = 1;
    }

    NSDictionary *sec = _sections[indexPath.section];
    NSDictionary *item = sec[@"items"][indexPath.row];

    cell.textLabel.text = item[@"label"];
    cell.detailTextLabel.text = [self valueForInfoKey:item[@"key"]];

    NSString *iconName = item[@"icon"];
    if (iconName.length && @available(iOS 13.0, *)) {
        cell.imageView.image = [UIImage systemImageNamed:iconName];
    }

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

    if (![item[@"copiable"] boolValue]) return;

    NSString *text = [self valueForInfoKey:item[@"key"]];
    if (!text || text.length == 0) return;

    [UIPasteboard generalPasteboard].string = text;
    [self showCopySuccessToast];

    UIImpactFeedbackGenerator *gen = [[UIImpactFeedbackGenerator alloc]
        initWithStyle:UIImpactFeedbackStyleLight];
    [gen prepare];
    [gen impactOccurred];
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

#pragma mark - 主页跳转

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
        if (!presenting) { return; }

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

#pragma mark - Copy Toast

- (void)showCopySuccessToast {
    UILabel *toast = [[UILabel alloc] init];
    toast.text = @"已复制";
    toast.textAlignment = NSTextAlignmentCenter;
    toast.font = [UIFont systemFontOfSize:14];
    toast.textColor = [UIColor whiteColor];
    toast.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.7];
    toast.layer.cornerRadius = 6;
    toast.clipsToBounds = YES;
    [toast sizeToFit];
    CGFloat w = toast.frame.size.width + 20;
    CGFloat h = toast.frame.size.height + 10;
    toast.center = CGPointMake(self.view.bounds.size.width * 0.5, self.view.bounds.size.height * 0.85);
    toast.bounds = CGRectMake(0, 0, w, h);
    toast.alpha = 0;
    [self.view addSubview:toast];

    [UIView animateWithDuration:0.25 animations:^{
        toast.alpha = 1;
    } completion:^(BOOL finished) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            [UIView animateWithDuration:0.3 animations:^{
                toast.alpha = 0;
            } completion:^(BOOL finished) {
                [toast removeFromSuperview];
            }];
        });
    }];
}

@end