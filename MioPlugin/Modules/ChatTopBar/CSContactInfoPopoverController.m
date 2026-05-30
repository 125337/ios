#import "CSContactInfoPopoverController.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <objc/objc.h>
#import <objc/message.h>

static const CGFloat kPopoverWidth       = 280.0;
static const CGFloat kPopoverPortHeight  = 400.0;
static const CGFloat kPopoverLandWidth   = 400.0;
static const CGFloat kPopoverLandHeight  = 500.0;
static const CGFloat kAvatarCellHeight   = 170.0;
static const CGFloat kRowHeight          = 44.0;

static NSString * const kAvatarCellID  = @"AvatarCell";
static NSString * const kDetailCellID  = @"DetailCell";

enum {
    kTagAvatarContainer = 1000,
    kTagAvatarImage     = 1001,
    kTagAvatarName      = 1002,
    kTagDetailContainer = 2000,
    kTagTitleLabel      = 2001,
    kTagDetailLabel     = 2002,
};

#pragma mark - CSSettingItem

@interface CSSettingItem : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *detail;
@end

@implementation CSSettingItem
@end

#pragma mark - CSSettingSection

@interface CSSettingSection : NSObject
@property (nonatomic, copy) NSString *header;
@property (nonatomic, strong) NSMutableArray<CSSettingItem *> *items;
@end

@implementation CSSettingSection
@end

#pragma mark - Safe Message Sending

static id safeSend(id obj, const char *selName) {
    if (!obj) return nil;
    SEL sel = sel_registerName(selName);
    if (![obj respondsToSelector:sel]) return nil;
    return ((id (*)(id, SEL))objc_msgSend)(obj, sel);
}

static id mmServiceCenterGet(NSString *svcName) {
    Class cls = objc_getClass("MMServiceCenter");
    if (!cls) return nil;
    SEL centerSel = NSSelectorFromString(@"defaultCenter");
    if (![cls respondsToSelector:centerSel]) return nil;
    id center = ((id (*)(Class, SEL))objc_msgSend)(cls, centerSel);
    if (!center) return nil;
    SEL svcSel = NSSelectorFromString(@"getService:");
    if (![center respondsToSelector:svcSel]) return nil;
    return ((id (*)(id, SEL, Class))objc_msgSend)(center,
        svcSel, objc_getClass([svcName UTF8String]));
}

#pragma mark - Contact Info Helpers

static NSString *contactDisplayName(id contact) {
    if (!contact) return @"";
    id v = safeSend(contact, "m_nsNickName");
    if ([v isKindOfClass:[NSString class]] && ((NSString *)v).length) return v;
    v = safeSend(contact, "m_nsRemark");
    if ([v isKindOfClass:[NSString class]] && ((NSString *)v).length) return v;
    v = safeSend(contact, "m_nsUsrName");
    if ([v isKindOfClass:[NSString class]]) return v;
    return @"";
}

static NSString *contactWxid(id contact) {
    if (!contact) return @"";
    id v = safeSend(contact, "m_nsUsrName");
    if (![v isKindOfClass:[NSString class]]) return @"";
    NSString *name = (NSString *)v;
    if ([name hasPrefix:@"gh_"]) {
        v = safeSend(contact, "m_nsAliasName");
        if ([v isKindOfClass:[NSString class]] && ((NSString *)v).length) return v;
    }
    return name;
}

static NSString *contactRemark(id contact) {
    if (!contact) return @"";
    id v = safeSend(contact, "m_nsRemark");
    if ([v isKindOfClass:[NSString class]] && ((NSString *)v).length) return v;
    v = safeSend(contact, "m_nsRemarkName");
    if ([v isKindOfClass:[NSString class]] && ((NSString *)v).length) return v;
    return @"";
}

static NSString *contactGender(id contact) {
    if (!contact) return @"";
    SEL sel = NSSelectorFromString(@"m_uiSex");
    if (![contact respondsToSelector:sel]) return @"";
    unsigned int sex = ((unsigned int (*)(id, SEL))objc_msgSend)(contact, sel);
    if (sex == 1) return @"♂";
    if (sex == 2) return @"♀";
    return @"";
}

static NSString *contactLocation(id contact) {
    if (!contact) return @"";
    id p = safeSend(contact, "m_nsProvince");
    id c = safeSend(contact, "m_nsCity");
    NSString *prov = ([p isKindOfClass:[NSString class]] && ((NSString *)p).length) ? p : @"";
    NSString *city = ([c isKindOfClass:[NSString class]] && ((NSString *)c).length) ? c : @"";
    if (prov.length && city.length) return [NSString stringWithFormat:@"%@ %@", prov, city];
    if (prov.length) return prov;
    if (city.length) return city;
    return @"";
}

static NSString *contactSignature(id contact) {
    if (!contact) return @"";
    id v = safeSend(contact, "m_nsSignature");
    if ([v isKindOfClass:[NSString class]] && ((NSString *)v).length) return v;
    return @"";
}

static NSString *contactOwnerName(id contact) {
    if (!contact) return @"";
    id v = safeSend(contact, "m_nsOwner");
    if ([v isKindOfClass:[NSString class]]) return v;
    return @"";
}

static NSUInteger contactMemberCount(id contact) {
    if (!contact) return 0;
    id members = safeSend(contact, "m_nsChatRoomMembers");
    if ([members isKindOfClass:[NSString class]]) {
        NSArray *arr = [((NSString *)members) componentsSeparatedByString:@";"];
        NSUInteger c = 0;
        for (NSString *m in arr) { if (m.length) c++; }
        return c;
    }
    Class svc = objc_getClass("MMServiceCenter");
    if (svc) {
        SEL dcSel = NSSelectorFromString(@"defaultCenter");
        if (![svc respondsToSelector:dcSel]) return 0;
        id center = ((id (*)(Class, SEL))objc_msgSend)(svc, dcSel);
        SEL svcSel = NSSelectorFromString(@"getService:");
        if (![center respondsToSelector:svcSel]) return 0;
        id mgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, svcSel,
            objc_getClass("CContactMgr"));
        SEL cntSel = @selector(getGroupMemberCountForContact:);
        if (mgr && [mgr respondsToSelector:cntSel]) {
            return ((unsigned int (*)(id, SEL, id))objc_msgSend)(mgr, cntSel, contact);
        }
    }
    return 0;
}

static NSString *contactChatType(id contact) {
    if (!contact) return @"";
    NSString *name = contactWxid(contact);
    if ([name hasPrefix:@"gh_"]) return @"公众号";
    if ([name containsString:@"@chatroom"]) return @"群聊";
    return @"联系人";
}

static BOOL isGroupContact(id contact) {
    return [contactWxid(contact) containsString:@"@chatroom"];
}

static BOOL isOAContact(id contact) {
    return [contactWxid(contact) hasPrefix:@"gh_"];
}

static UIImage *loadCachedAvatar(NSString *username) {
    if (!username.length) return nil;
    NSString *docs = NSSearchPathForDirectoriesInDomains(
        NSDocumentDirectory, NSUserDomainMask, YES).firstObject;
    NSString *dir  = [docs stringByAppendingPathComponent:@"HBWechatHelper_UserHeadImage"];
    NSString *path = [dir stringByAppendingPathComponent:
        [NSString stringWithFormat:@"%@.jpg", username]];
    if ([[NSFileManager defaultManager] fileExistsAtPath:path])
        return [UIImage imageWithContentsOfFile:path];
    return nil;
}

#pragma mark - CSContactInfoPopoverController

@interface CSContactInfoPopoverController ()
@property (nonatomic, strong) id contact;
@property (nonatomic, strong) UIImage *avatar;
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) NSMutableArray<CSSettingSection *> *sections;
@property (nonatomic, strong) UILabel *footerLabel;
@end

@implementation CSContactInfoPopoverController

- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar {
    self = [super init];
    if (self) {
        _contact  = contact;
        _avatar   = avatar;
        _sections = [NSMutableArray array];
    }
    return self;
}

#pragma mark - View Lifecycle

- (void)viewDidLoad {
    [super viewDidLoad];

    if (!_sections) _sections = [NSMutableArray array];

    self.view.backgroundColor = [UIColor clearColor];

    _tableView = [[UITableView alloc] initWithFrame:CGRectZero
                                              style:UITableViewStyleGrouped];
    _tableView.delegate                     = self;
    _tableView.dataSource                   = self;
    _tableView.backgroundColor              = [UIColor clearColor];
    _tableView.rowHeight                    = kRowHeight;
    _tableView.estimatedRowHeight           = UITableViewAutomaticDimension;
    _tableView.showsVerticalScrollIndicator = NO;
    _tableView.separatorInset               = UIEdgeInsetsMake(10, 0, 10, 0);
    _tableView.contentInset                 = UIEdgeInsetsMake(8, 8, 8, 8);
    _tableView.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:_tableView];

    [NSLayoutConstraint activateConstraints:@[
        [_tableView.topAnchor constraintEqualToAnchor:self.view.topAnchor],
        [_tableView.leadingAnchor constraintEqualToAnchor:self.view.leadingAnchor],
        [_tableView.trailingAnchor constraintEqualToAnchor:self.view.trailingAnchor],
        [_tableView.bottomAnchor constraintEqualToAnchor:self.view.bottomAnchor],
    ]];

    _tableView.tableHeaderView = [self createHeaderView];
    _tableView.tableFooterView = [self createFooterView];

    if (_contact) [self updateUIWithContact:_contact];
}

- (void)viewDidLayoutSubviews {
    [super viewDidLayoutSubviews];
    CGSize size = self.view.bounds.size;
    if (CGSizeEqualToSize(size, CGSizeZero)) {
        UIDeviceOrientation orientation = [[UIDevice currentDevice] orientation];
        if (orientation == UIDeviceOrientationLandscapeLeft ||
            orientation == UIDeviceOrientationLandscapeRight) {
            self.preferredContentSize = CGSizeMake(kPopoverLandWidth, kPopoverLandHeight);
        } else {
            self.preferredContentSize = CGSizeMake(kPopoverWidth, kPopoverPortHeight);
        }
    }
}

#pragma mark - Helpers

- (UIView *)createCardViewWithCornerRadius:(CGFloat)cornerRadius {
    UIView *card = [[UIView alloc] init];
    card.backgroundColor = [UIColor whiteColor];
    card.layer.cornerRadius = cornerRadius;
    card.clipsToBounds = YES;
    card.translatesAutoresizingMaskIntoConstraints = NO;
    return card;
}

- (UILabel *)createLabelWithText:(NSString *)text
                            font:(UIFont *)font
                       textColor:(UIColor *)textColor {
    UILabel *label = [[UILabel alloc] init];
    label.text = text;
    label.font = font;
    label.textColor = textColor;
    label.translatesAutoresizingMaskIntoConstraints = NO;
    return label;
}

- (UIImageView *)createAvatarImageView {
    UIImageView *imageView = [[UIImageView alloc] init];
    imageView.contentMode = UIViewContentModeScaleAspectFill;
    imageView.layer.cornerRadius = 35.0;
    imageView.layer.masksToBounds = YES;
    imageView.translatesAutoresizingMaskIntoConstraints = NO;
    return imageView;
}

- (void)applyConstraintsToView:(UIView *)view
                    inContainer:(UIView *)container
                     withInsets:(UIEdgeInsets)insets {
    [NSLayoutConstraint activateConstraints:@[
        [view.topAnchor constraintEqualToAnchor:container.topAnchor constant:insets.top],
        [view.leadingAnchor constraintEqualToAnchor:container.leadingAnchor constant:insets.left],
        [view.trailingAnchor constraintEqualToAnchor:container.trailingAnchor constant:-insets.right],
        [view.bottomAnchor constraintEqualToAnchor:container.bottomAnchor constant:-insets.bottom],
    ]];
}

#pragma mark - Header / Footer

- (UIView *)createHeaderView {
    UIView *v = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 0, 20)];
    v.backgroundColor = [UIColor clearColor];
    return v;
}

- (UIView *)createFooterView {
    UIView *container = [[UIView alloc] initWithFrame:CGRectZero];
    container.backgroundColor = [UIColor clearColor];

    _footerLabel = [self createLabelWithText:@"点击信息可复制"
                                        font:[UIFont systemFontOfSize:13.0]
                                   textColor:[UIColor grayColor]];
    _footerLabel.textAlignment = NSTextAlignmentCenter;
    _footerLabel.numberOfLines = 1;
    [container addSubview:_footerLabel];

    [NSLayoutConstraint activateConstraints:@[
        [_footerLabel.topAnchor constraintEqualToAnchor:container.topAnchor constant:16],
        [_footerLabel.leadingAnchor constraintEqualToAnchor:container.leadingAnchor constant:16],
        [_footerLabel.trailingAnchor constraintEqualToAnchor:container.trailingAnchor constant:-16],
        [_footerLabel.bottomAnchor constraintEqualToAnchor:container.bottomAnchor constant:0],
    ]];

    return container;
}

#pragma mark - Data Building

- (void)updateUIWithContact:(id)contact {
    [_sections removeAllObjects];
    if (!contact) return;

    [self addAvatarSection:contact];
    [self addBasicInfoSection:contact];

    if (isGroupContact(contact)) {
        [self addGroupInfoSection:contact];
    } else if (isOAContact(contact)) {
        [self addOfficialAccountInfoSection:contact];
    }
    [_tableView reloadData];
}

- (void)addAvatarSection:(id)contact {
    NSString *name = contactDisplayName(contact);
    NSString *wxid = contactWxid(contact);

    CSSettingItem *item = [[CSSettingItem alloc] init];
    item.title  = name.length ? name : wxid;
    item.detail = wxid.length ? wxid : @"";
    objc_setAssociatedObject(item, "contact", contact, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    CSSettingSection *section = [[CSSettingSection alloc] init];
    section.header = nil;
    section.items  = [NSMutableArray arrayWithObject:item];
    [_sections addObject:section];
}

- (void)addBasicInfoSection:(id)contact {
    NSMutableArray *items = [NSMutableArray array];

    NSString *typeLabel = contactChatType(contact);
    if (typeLabel.length) {
        CSSettingItem *item = [[CSSettingItem alloc] init];
        item.title  = @"类型";
        item.detail = typeLabel;
        [items addObject:item];
    }

    NSString *remark = contactRemark(contact);
    if (remark.length && !isOAContact(contact)) {
        CSSettingItem *item = [[CSSettingItem alloc] init];
        item.title  = @"备注";
        item.detail = remark;
        [items addObject:item];
    }

    NSString *wxid = contactWxid(contact);
    if (wxid.length) {
        CSSettingItem *item = [[CSSettingItem alloc] init];
        item.title  = @"微信号";
        item.detail = wxid;
        [items addObject:item];
    }

    NSString *nickname = contactDisplayName(contact);
    if (nickname.length) {
        NSString *r = contactRemark(contact);
        BOOL sameAsRemark = (r.length && [nickname isEqualToString:r]);
        BOOL sameAsWxid  = (wxid.length && [nickname isEqualToString:wxid]);
        if (!sameAsRemark && !sameAsWxid) {
            CSSettingItem *item = [[CSSettingItem alloc] init];
            item.title  = @"昵称";
            item.detail = nickname;
            [items addObject:item];
        }
    }

    if (!isGroupContact(contact) && !isOAContact(contact)) {
        NSString *gender = contactGender(contact);
        if (gender.length) {
            CSSettingItem *item = [[CSSettingItem alloc] init];
            item.title  = @"性别";
            item.detail = gender;
            [items addObject:item];
        }

        NSString *loc = contactLocation(contact);
        if (loc.length) {
            CSSettingItem *item = [[CSSettingItem alloc] init];
            item.title  = @"地区";
            item.detail = loc;
            [items addObject:item];
        }

        NSString *sig = contactSignature(contact);
        if (sig.length) {
            CSSettingItem *item = [[CSSettingItem alloc] init];
            item.title  = @"签名";
            item.detail = sig;
            [items addObject:item];
        }
    }

    if (items.count) {
        CSSettingSection *section = [[CSSettingSection alloc] init];
        section.header = @"基本信息";
        section.items  = items;
        [_sections addObject:section];
    }
}

- (void)addGroupInfoSection:(id)contact {
    NSMutableArray *items = [NSMutableArray array];

    NSString *owner = contactOwnerName(contact);
    if (owner.length) {
        CSSettingItem *item = [[CSSettingItem alloc] init];
        item.title  = @"群主";
        item.detail = owner;
        [items addObject:item];
    }

    NSUInteger count = contactMemberCount(contact);
    if (count > 0) {
        CSSettingItem *item = [[CSSettingItem alloc] init];
        item.title  = @"成员";
        item.detail = [NSString stringWithFormat:@"%lu 人", (unsigned long)count];
        [items addObject:item];
    }

    if (items.count) {
        CSSettingSection *section = [[CSSettingSection alloc] init];
        section.header = @"群聊信息";
        section.items  = items;
        [_sections addObject:section];
    }
}

- (void)addOfficialAccountInfoSection:(id)contact {
    NSMutableArray *items = [NSMutableArray array];

    CSSettingItem *item1 = [[CSSettingItem alloc] init];
    item1.title  = @"公众号类型";
    item1.detail = @"服务号";
    [items addObject:item1];

    BOOL verified = NO;
    SEL verifySel = NSSelectorFromString(@"m_uiVerifyFlag");
    if ([contact respondsToSelector:verifySel]) {
        unsigned int flag = ((unsigned int (*)(id, SEL))objc_msgSend)(contact, verifySel);
        verified = (flag > 0);
    }
    CSSettingItem *item2 = [[CSSettingItem alloc] init];
    item2.title  = @"认证状态";
    item2.detail = verified ? @"已验证" : @"未验证";
    [items addObject:item2];

    if (items.count) {
        CSSettingSection *section = [[CSSettingSection alloc] init];
        section.header = @"公众号信息";
        section.items  = items;
        [_sections addObject:section];
    }
}

#pragma mark - Avatar Loading

- (void)loadAvatarForImageView:(UIImageView *)imageView withContact:(id)contact {
    imageView.image = [UIImage imageNamed:@"DefaultProfileHead@2x"];

    if (!contact) return;

    NSString *username = contactWxid(contact);
    if (!username.length) return;

    UIImage *cached = loadCachedAvatar(username);
    if (cached) {
        dispatch_async(dispatch_get_main_queue(), ^{
            imageView.image = cached;
        });
        return;
    }

    [self loadWeChatAvatarForImageView:imageView withUserName:username];
}

- (void)loadWeChatAvatarForImageView:(UIImageView *)imageView withUserName:(NSString *)username {
    if (!username.length) return;

    NSString *url = safeSend(_contact, "m_nsHeadImgUrl");
    if (![url isKindOfClass:[NSString class]] || !url.length) {
        id mgr = mmServiceCenterGet(@"MMHeadImageMgr");
        SEL sel = NSSelectorFromString(@"getUsrHeadImgUrl:");
        if (mgr && [mgr respondsToSelector:sel]) {
            url = ((id (*)(id, SEL, id))objc_msgSend)(mgr, sel, username);
        }
    }
    if (![url isKindOfClass:[NSString class]] || !url.length) return;

    NSURL *nsurl = [NSURL URLWithString:url];
    if (!nsurl) return;

    [[[NSURLSession sharedSession] dataTaskWithURL:nsurl
        completionHandler:^(NSData *data, NSURLResponse *resp, NSError *err) {
            if (!data || err) return;
            UIImage *img = [UIImage imageWithData:data];
            if (!img) return;
            dispatch_async(dispatch_get_main_queue(), ^{ imageView.image = img; });
        }] resume];
}

#pragma mark - UITableViewDataSource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return _sections.count;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return _sections[section].items.count;
}

- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section {
    return _sections[section].header;
}

- (UITableViewCell *)tableView:(UITableView *)tableView
         cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    CSSettingItem *item = _sections[indexPath.section].items[indexPath.row];

    if (indexPath.section == 0) {
        return [self createAvatarCellForTableView:tableView
                                         withItem:item
                                      atIndexPath:indexPath];
    }
    return [self createDetailCellForTableView:tableView
                                     withItem:item
                                  atIndexPath:indexPath];
}

#pragma mark - Avatar Cell

- (UITableViewCell *)createAvatarCellForTableView:(UITableView *)tableView
                                         withItem:(CSSettingItem *)item
                                      atIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:kAvatarCellID];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle
                                      reuseIdentifier:kAvatarCellID];
        cell.selectionStyle = UITableViewCellSelectionStyleNone;

        UIView *container = [self createCardViewWithCornerRadius:16.0];
        container.tag = kTagAvatarContainer;
        [cell.contentView addSubview:container];

        [self applyConstraintsToView:container inContainer:cell.contentView
                         withInsets:UIEdgeInsetsMake(12, 4, 4, 12)];

        UIImageView *avatarImage = [self createAvatarImageView];
        avatarImage.tag = kTagAvatarImage;
        [container addSubview:avatarImage];

        [self applyConstraintsToView:avatarImage inContainer:container
                         withInsets:UIEdgeInsetsMake(0, 0, 0, 0)];

        UILabel *nameLabel = [self createLabelWithText:@""
                                                  font:[UIFont systemFontOfSize:20.0]
                                             textColor:[UIColor grayColor]];
        nameLabel.tag = kTagAvatarName;
        nameLabel.textAlignment = NSTextAlignmentCenter;
        nameLabel.numberOfLines = 0;
        [container addSubview:nameLabel];

        [NSLayoutConstraint activateConstraints:@[
            [nameLabel.topAnchor constraintEqualToAnchor:avatarImage.bottomAnchor constant:16],
            [nameLabel.centerXAnchor constraintEqualToAnchor:container.centerXAnchor],
            [nameLabel.leadingAnchor constraintGreaterThanOrEqualToAnchor:container.leadingAnchor constant:10],
            [nameLabel.trailingAnchor constraintLessThanOrEqualToAnchor:container.trailingAnchor constant:-10],
            [nameLabel.bottomAnchor constraintEqualToAnchor:container.bottomAnchor],
        ]];
    }

    UIView *container = [cell.contentView viewWithTag:kTagAvatarContainer];
    UIImageView *avatarImage = [container viewWithTag:kTagAvatarImage];
    UILabel *nameLabel = [container viewWithTag:kTagAvatarName];

    nameLabel.text = item.title;

    id contact = objc_getAssociatedObject(item, "contact");

    UIImage *av = _avatar;
    if (!av) {
        av = loadCachedAvatar(contactWxid(contact));
    }
    avatarImage.image = av;
    if (!avatarImage.image && contact) {
        [self loadAvatarForImageView:avatarImage withContact:contact];
    }

    return cell;
}

#pragma mark - Detail Cell

- (UITableViewCell *)createDetailCellForTableView:(UITableView *)tableView
                                         withItem:(CSSettingItem *)item
                                      atIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:kDetailCellID];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault
                                      reuseIdentifier:kDetailCellID];
        cell.selectionStyle = UITableViewCellSelectionStyleDefault;

        UIView *container = [self createCardViewWithCornerRadius:12.0];
        container.tag = kTagDetailContainer;
        [cell.contentView addSubview:container];

        [self applyConstraintsToView:container inContainer:cell.contentView
                         withInsets:UIEdgeInsetsMake(4, 4, 4, 4)];

        UILabel *titleLabel = [self createLabelWithText:@""
                                                   font:[UIFont systemFontOfSize:15.0]
                                              textColor:[UIColor grayColor]];
        titleLabel.tag = kTagTitleLabel;
        [container addSubview:titleLabel];

        [NSLayoutConstraint activateConstraints:@[
            [titleLabel.topAnchor constraintEqualToAnchor:container.topAnchor constant:12],
            [titleLabel.leadingAnchor constraintEqualToAnchor:container.leadingAnchor constant:12],
            [titleLabel.widthAnchor constraintEqualToConstant:50],
        ]];

        UILabel *detailLabel = [self createLabelWithText:@""
                                                    font:[UIFont systemFontOfSize:15.0]
                                               textColor:[UIColor grayColor]];
        detailLabel.tag = kTagDetailLabel;
        detailLabel.numberOfLines = 0;
        [container addSubview:detailLabel];

        [NSLayoutConstraint activateConstraints:@[
            [detailLabel.topAnchor constraintEqualToAnchor:titleLabel.topAnchor],
            [detailLabel.leadingAnchor constraintEqualToAnchor:titleLabel.trailingAnchor constant:12],
            [detailLabel.trailingAnchor constraintEqualToAnchor:container.trailingAnchor constant:-12],
            [detailLabel.bottomAnchor constraintEqualToAnchor:container.bottomAnchor constant:-12],
        ]];
    }

    UIView *container = [cell.contentView viewWithTag:kTagDetailContainer];
    UILabel *titleLabel = [container viewWithTag:kTagTitleLabel];
    UILabel *detailLabel = [container viewWithTag:kTagDetailLabel];

    titleLabel.text = item.title;
    detailLabel.text = item.detail;

    [self updateDetailLabelStyle:detailLabel forDetail:item.detail];

    return cell;
}

- (void)updateDetailLabelStyle:(UILabel *)label forDetail:(NSString *)detail {
    BOOL isEmpty = (!detail.length ||
                    [detail isEqualToString:@"(null)"] ||
                    [detail isEqualToString:@"(无)"]);

    if (isEmpty) {
        label.font = [UIFont systemFontOfSize:15.0];
    } else {
        label.font = [UIFont boldSystemFontOfSize:15.0];
    }

    CGFloat grayValue;
    if (isEmpty) {
        if (@available(iOS 13.0, *)) {
            if (self.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark) {
                grayValue = 0.8;
            } else {
                grayValue = 0.4;
            }
        } else {
            grayValue = 0.4;
        }
    } else {
        grayValue = 0.6;
    }

    label.textColor = [UIColor colorWithRed:grayValue green:grayValue blue:grayValue alpha:1.0];
}

#pragma mark - UITableViewDelegate

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.section == 0)
        return kAvatarCellHeight;
    return UITableViewAutomaticDimension;
}

- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section {
    return section == 0 ? 0.01 : 36.0;
}

- (CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section {
    return 0.01;
}

- (UIView *)tableView:(UITableView *)tableView viewForFooterInSection:(NSInteger)section {
    return [[UIView alloc] initWithFrame:CGRectZero];
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];

    if (indexPath.section == 0 && indexPath.row == 0) {
        [self handleProfileNavigation];
        return;
    }

    CSSettingItem *item = _sections[indexPath.section].items[indexPath.row];
    [self copyTextToClipboard:item.detail];
    [self showCopySuccessToast];
}

#pragma mark - Copy

- (void)copyTextToClipboard:(NSString *)text {
    if (!text.length || [text isEqualToString:@"(null)"] || [text isEqualToString:@"(无)"])
        return;
    [[UIPasteboard generalPasteboard] setString:text];
}

- (void)showCopySuccessToast {
    UIAlertController *alert = [UIAlertController
        alertControllerWithTitle:nil
                         message:@"已复制到剪贴板"
                  preferredStyle:UIAlertControllerStyleAlert];
    [self presentViewController:alert animated:YES completion:nil];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [alert dismissViewControllerAnimated:YES completion:nil];
    });
}

#pragma mark - Navigation

- (void)handleProfileNavigation {
    NSString *username = contactWxid(_contact);
    if (!username.length) return;

    Class vcClass = objc_getClass("ContactInfoViewController");
    if (!vcClass) return;

    id vc = [[vcClass alloc] init];
    SEL contactSel = NSSelectorFromString(@"setM_contact:");
    if ([vc respondsToSelector:contactSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(vc, contactSel, _contact);
    }
    SEL usrSel = NSSelectorFromString(@"setM_nsUsrName:");
    if ([vc respondsToSelector:usrSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(vc, usrSel, username);
    }

    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];

    UIViewController *presentingVC = self.presentingViewController;
    [presentingVC dismissViewControllerAnimated:YES completion:^{
        dispatch_async(dispatch_get_main_queue(), ^{
            [presentingVC presentViewController:nav animated:YES completion:nil];
        });
    }];
}

#pragma mark - UIPopoverPresentationControllerDelegate

- (UIModalPresentationStyle)adaptivePresentationStyleForPresentationController:
    (UIPresentationController *)controller {
    return UIModalPresentationNone;
}

- (BOOL)popoverPresentationControllerShouldDismissPopover:
    (UIPopoverPresentationController *)popoverPresentationController {
    return YES;
}

@end