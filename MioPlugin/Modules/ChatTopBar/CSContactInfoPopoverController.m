#import "CSContactInfoPopoverController.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <objc/objc.h>
#import <objc/message.h>

static const CGFloat kPopoverWidth     = 280.0;
static const CGFloat kPopoverMaxHeight = 400.0;
static const CGFloat kAvatarSize       = 60.0;
static const CGFloat kAvatarCorner     = 18.0;
static const CGFloat kRowHeight        = 44.0;

static NSString * const kAvatarCellID  = @"CSAvatarCell";
static NSString * const kDetailCellID  = @"CSDetailCell";

enum {
    kTagAvatarView  = 1000,
    kTagNameLabel   = 1001,
    kTagValueLabel  = 1002,
    kTagDetailContainer = 2000,
    kTagTitleLabel  = 2001,
    kTagDetailLabel = 2002,
};

#pragma mark - CSSettingItem

@interface CSSettingItem : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *iconName;
@property (nonatomic, copy) NSString *detail;
@end

@implementation CSSettingItem
+ (instancetype)itemWithTitle:(NSString *)title
                     iconName:(NSString *)iconName
                       detail:(NSString *)detail {
    CSSettingItem *item = [[self alloc] init];
    item.title    = title;
    item.iconName = iconName;
    item.detail   = detail;
    return item;
}
@end

#pragma mark - CSSettingSection

@interface CSSettingSection : NSObject
@property (nonatomic, copy) NSString *header;
@property (nonatomic, strong) NSMutableArray<CSSettingItem *> *items;
@end

@implementation CSSettingSection
+ (instancetype)sectionWithHeader:(NSString *)header items:(NSArray<CSSettingItem *> *)items {
    CSSettingSection *s = [[self alloc] init];
    s.header = header;
    s.items  = [NSMutableArray arrayWithArray:items];
    return s;
}
@end

#pragma mark - Contact Info Helpers

#define SAFE_CALL_OBJC(rettype, obj, sel) \
    ({ rettype __r = ({ rettype _v = 0; _v; }); \
       if ((obj) && [(id)(obj) respondsToSelector:(sel)]) \
           __r = ((rettype (*)(id, SEL))objc_msgSend)((id)(obj), (sel)); \
       __r; })

#define SAFE_CALL_OBJC1(rettype, obj, sel, arg1) \
    ({ rettype __r = ({ rettype _v = 0; _v; }); \
       if ((obj) && [(id)(obj) respondsToSelector:(sel)]) \
           __r = ((rettype (*)(id, SEL, id))objc_msgSend)((id)(obj), (sel), (id)(arg1)); \
       __r; })

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

static id safeSend(id obj, NSString *selName) {
    if (!obj) return nil;
    SEL sel = NSSelectorFromString(selName);
    if (![obj respondsToSelector:sel]) return nil;
    return ((id (*)(id, SEL))objc_msgSend)(obj, sel);
}

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

    self.view.backgroundColor = [UIColor colorWithRed:0.949 green:0.949 blue:0.969 alpha:1.0];

    if (!_sections) _sections = [NSMutableArray array];

    _tableView = [[UITableView alloc] initWithFrame:CGRectZero
                                              style:UITableViewStyleGrouped];
    _tableView.delegate                     = self;
    _tableView.dataSource                   = self;
    _tableView.backgroundColor              = [UIColor clearColor];
    _tableView.separatorInset               = UIEdgeInsetsMake(0, 18, 0, 18);
    _tableView.rowHeight                    = kRowHeight;
    _tableView.estimatedRowHeight           = kRowHeight;
    _tableView.showsVerticalScrollIndicator = NO;
    _tableView.contentInset                 = UIEdgeInsetsMake(8, 0, 8, 0);
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

    [_tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:kAvatarCellID];
    [_tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:kDetailCellID];

    if (_contact) [self updateUIWithContact:_contact];
}

- (void)viewDidLayoutSubviews {
    [super viewDidLayoutSubviews];
    CGSize size = self.view.bounds.size;
    if (CGSizeEqualToSize(size, CGSizeZero)) {
        self.preferredContentSize = CGSizeMake(kPopoverWidth, kPopoverMaxHeight);
    }
}

#pragma mark - Header / Footer

- (UIView *)createHeaderView {
    UIView *v = [[UIView alloc] initWithFrame:CGRectMake(0, 0, kPopoverWidth, 20)];
    v.backgroundColor = [UIColor clearColor];
    return v;
}

- (UIView *)createFooterView {
    UIView *v = [[UIView alloc] initWithFrame:CGRectMake(0, 0, kPopoverWidth, 8)];
    v.backgroundColor = [UIColor clearColor];
    return v;
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

    CSSettingItem *item = [CSSettingItem itemWithTitle:name
                                              iconName:nil
                                                detail:wxid];
    objc_setAssociatedObject(item, "contact", contact, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    CSSettingSection *section = [CSSettingSection sectionWithHeader:nil items:@[item]];
    [_sections addObject:section];
}

- (void)addBasicInfoSection:(id)contact {
    NSMutableArray *items = [NSMutableArray array];

    NSString *typeLabel = contactChatType(contact);
    if (typeLabel.length) {
        [items addObject:[CSSettingItem itemWithTitle:@"类型"
                                              iconName:@"person.text.rectangle"
                                                detail:typeLabel]];
    }

    NSString *remark = contactRemark(contact);
    if (remark.length && !isOAContact(contact)) {
        [items addObject:[CSSettingItem itemWithTitle:@"备注"
                                              iconName:@"pencil.tip"
                                                detail:remark]];
    }

    NSString *wxid = contactWxid(contact);
    if (wxid.length) {
        [items addObject:[CSSettingItem itemWithTitle:@"微信号"
                                              iconName:@"number"
                                                detail:wxid]];
    }

    NSString *nickname = contactDisplayName(contact);
    if (nickname.length) {
        NSString *r = contactRemark(contact);
        if (![nickname isEqualToString:r]) {
            [items addObject:[CSSettingItem itemWithTitle:@"昵称"
                                                  iconName:@"person"
                                                    detail:nickname]];
        }
    }

    if (!isGroupContact(contact) && !isOAContact(contact)) {
        NSString *gender = contactGender(contact);
        if (gender.length) {
            [items addObject:[CSSettingItem itemWithTitle:@"性别"
                                                  iconName:@"person.fill.questionmark"
                                                    detail:gender]];
        }

        NSString *loc = contactLocation(contact);
        if (loc.length) {
            [items addObject:[CSSettingItem itemWithTitle:@"地区"
                                                  iconName:@"location"
                                                    detail:loc]];
        }

        NSString *sig = contactSignature(contact);
        if (sig.length) {
            [items addObject:[CSSettingItem itemWithTitle:@"签名"
                                                  iconName:@"text.quote"
                                                    detail:sig]];
        }
    }

    if (items.count) {
        [_sections addObject:[CSSettingSection sectionWithHeader:@"基本信息" items:items]];
    }
}

- (void)addGroupInfoSection:(id)contact {
    NSMutableArray *items = [NSMutableArray array];

    NSString *owner = contactOwnerName(contact);
    if (owner.length) {
        [items addObject:[CSSettingItem itemWithTitle:@"群主"
                                              iconName:@"crown"
                                                detail:owner]];
    }

    NSUInteger count = contactMemberCount(contact);
    if (count > 0) {
        [items addObject:[CSSettingItem itemWithTitle:@"成员"
                                              iconName:@"person.3"
                                                detail:[NSString stringWithFormat:@"%lu 人", (unsigned long)count]]];
    }

    if (items.count) {
        [_sections addObject:[CSSettingSection sectionWithHeader:@"群聊信息" items:items]];
    }
}

- (void)addOfficialAccountInfoSection:(id)contact {
    NSMutableArray *items = [NSMutableArray array];

    [items addObject:[CSSettingItem itemWithTitle:@"公众号类型"
                                         iconName:@"megaphone"
                                           detail:@"服务号"]];

    BOOL verified = NO;
    SEL verifySel = NSSelectorFromString(@"m_uiVerifyFlag");
    if ([contact respondsToSelector:verifySel]) {
        unsigned int flag = ((unsigned int (*)(id, SEL))objc_msgSend)(contact, verifySel);
        verified = (flag > 0);
    }
    [items addObject:[CSSettingItem itemWithTitle:@"认证状态"
                                         iconName:@"checkmark.seal"
                                           detail:verified ? @"已验证" : @"未验证"]];

    if (items.count) {
        [_sections addObject:[CSSettingSection sectionWithHeader:@"公众号信息" items:items]];
    }
}

#pragma mark - Avatar Loading

- (void)loadAvatarAsync:(UIImageView *)imageView contact:(id)contact {
    NSString *username = contactWxid(contact);

    UIImage *cached = loadCachedAvatar(username);
    if (cached) { imageView.image = cached; return; }

    NSString *url = safeSend(contact, "m_nsHeadImgUrl");
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
        return [self createAvatarCellForTableView:tableView withItem:item atIndexPath:indexPath];
    }
    return [self createDetailCellForTableView:tableView withItem:item atIndexPath:indexPath];
}

#pragma mark - Avatar Cell

- (UITableViewCell *)createAvatarCellForTableView:(UITableView *)tableView
                                         withItem:(CSSettingItem *)item
                                      atIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:kAvatarCellID
                                                            forIndexPath:indexPath];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault
                                      reuseIdentifier:kAvatarCellID];
    }
    cell.selectionStyle = UITableViewCellSelectionStyleNone;
    cell.backgroundColor = [UIColor clearColor];

    UIView *content = cell.contentView;

    UIImageView *avatar = [content viewWithTag:kTagAvatarView];
    if (!avatar) {
        avatar = [[UIImageView alloc] init];
        avatar.tag = kTagAvatarView;
        avatar.contentMode = UIViewContentModeScaleAspectFill;
        avatar.layer.cornerRadius = kAvatarCorner;
        avatar.clipsToBounds = YES;
        avatar.backgroundColor = [UIColor colorWithWhite:0.92 alpha:1.0];
        avatar.translatesAutoresizingMaskIntoConstraints = NO;
        [content addSubview:avatar];

        [NSLayoutConstraint activateConstraints:@[
            [avatar.topAnchor constraintEqualToAnchor:content.topAnchor constant:12],
            [avatar.centerXAnchor constraintEqualToAnchor:content.centerXAnchor],
            [avatar.widthAnchor constraintEqualToConstant:kAvatarSize],
            [avatar.heightAnchor constraintEqualToConstant:kAvatarSize],
        ]];
    }

    UILabel *nameLabel = [content viewWithTag:kTagNameLabel];
    if (!nameLabel) {
        nameLabel = [[UILabel alloc] init];
        nameLabel.tag = kTagNameLabel;
        nameLabel.font = [UIFont systemFontOfSize:18.0];
        nameLabel.textColor = [UIColor blackColor];
        nameLabel.textAlignment = NSTextAlignmentCenter;
        nameLabel.numberOfLines = 1;
        nameLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [content addSubview:nameLabel];

        [NSLayoutConstraint activateConstraints:@[
            [nameLabel.topAnchor constraintEqualToAnchor:avatar.bottomAnchor constant:8],
            [nameLabel.centerXAnchor constraintEqualToAnchor:content.centerXAnchor],
            [nameLabel.leadingAnchor constraintGreaterThanOrEqualToAnchor:content.leadingAnchor constant:16],
            [nameLabel.trailingAnchor constraintLessThanOrEqualToAnchor:content.trailingAnchor constant:-16],
        ]];
    }

    UILabel *valueLabel = [content viewWithTag:kTagValueLabel];
    if (!valueLabel) {
        valueLabel = [[UILabel alloc] init];
        valueLabel.tag = kTagValueLabel;
        valueLabel.font = [UIFont systemFontOfSize:14.0];
        valueLabel.textColor = [UIColor grayColor];
        valueLabel.textAlignment = NSTextAlignmentCenter;
        valueLabel.numberOfLines = 1;
        valueLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [content addSubview:valueLabel];

        [NSLayoutConstraint activateConstraints:@[
            [valueLabel.topAnchor constraintEqualToAnchor:nameLabel.bottomAnchor constant:2],
            [valueLabel.centerXAnchor constraintEqualToAnchor:content.centerXAnchor],
            [valueLabel.leadingAnchor constraintGreaterThanOrEqualToAnchor:content.leadingAnchor constant:16],
            [valueLabel.trailingAnchor constraintLessThanOrEqualToAnchor:content.trailingAnchor constant:-16],
            [valueLabel.bottomAnchor constraintEqualToAnchor:content.bottomAnchor constant:-12],
        ]];
    }

    nameLabel.text = item.title;
    valueLabel.text = item.detail;

    id contact = objc_getAssociatedObject(item, "contact");

    UIImage *av = _avatar;
    if (!av) {
        av = loadCachedAvatar(contactWxid(contact));
    }
    avatar.image = av;
    if (!avatar.image && contact) {
        [self loadAvatarAsync:avatar contact:contact];
    }

    return cell;
}

#pragma mark - Detail Cell

- (UITableViewCell *)createDetailCellForTableView:(UITableView *)tableView
                                         withItem:(CSSettingItem *)item
                                      atIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:kDetailCellID
                                                            forIndexPath:indexPath];
    if (!cell) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault
                                      reuseIdentifier:kDetailCellID];
    }
    cell.selectionStyle = UITableViewCellSelectionStyleDefault;

    UIView *content = cell.contentView;

    UILabel *titleLabel = [content viewWithTag:kTagTitleLabel];
    if (!titleLabel) {
        titleLabel = [[UILabel alloc] init];
        titleLabel.tag = kTagTitleLabel;
        titleLabel.font = [UIFont systemFontOfSize:15.0];
        titleLabel.textColor = [UIColor colorWithWhite:0.3 alpha:1.0];
        [titleLabel setContentHuggingPriority:UILayoutPriorityRequired
                                      forAxis:UILayoutConstraintAxisHorizontal];
        [titleLabel setContentCompressionResistancePriority:UILayoutPriorityRequired
                                                    forAxis:UILayoutConstraintAxisHorizontal];
        titleLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [content addSubview:titleLabel];

        [NSLayoutConstraint activateConstraints:@[
            [titleLabel.leadingAnchor constraintEqualToAnchor:content.leadingAnchor constant:20],
            [titleLabel.centerYAnchor constraintEqualToAnchor:content.centerYAnchor],
        ]];
    }

    UILabel *detailLabel = [content viewWithTag:kTagDetailLabel];
    if (!detailLabel) {
        detailLabel = [[UILabel alloc] init];
        detailLabel.tag = kTagDetailLabel;
        detailLabel.font = [UIFont systemFontOfSize:15.0];
        detailLabel.textColor = [UIColor blackColor];
        detailLabel.textAlignment = NSTextAlignmentRight;
        detailLabel.numberOfLines = 3;
        detailLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [content addSubview:detailLabel];

        [NSLayoutConstraint activateConstraints:@[
            [detailLabel.trailingAnchor constraintEqualToAnchor:content.trailingAnchor constant:-20],
            [detailLabel.centerYAnchor constraintEqualToAnchor:content.centerYAnchor],
            [detailLabel.leadingAnchor constraintGreaterThanOrEqualToAnchor:titleLabel.trailingAnchor constant:12],
        ]];
    }

    titleLabel.text = item.title;
    detailLabel.text = item.detail;

    [self updateDetailLabelStyle:detailLabel forDetail:item.detail];

    if (item.iconName.length) {
        cell.imageView.image = [UIImage systemImageNamed:item.iconName];
        cell.imageView.tintColor = titleLabel.textColor;
    } else {
        cell.imageView.image = nil;
    }

    return cell;
}

- (void)updateDetailLabelStyle:(UILabel *)label forDetail:(NSString *)detail {
    BOOL isEmpty = (!detail.length || [detail isEqualToString:@"(null)"] ||
                    [detail isEqualToString:@"(无)"]);
    if (isEmpty) {
        label.font = [UIFont systemFontOfSize:15.0];
        label.textColor = [UIColor colorWithWhite:0.7 alpha:1.0];
    } else {
        label.font = [UIFont boldSystemFontOfSize:15.0];
        label.textColor = [UIColor blackColor];
    }
}

#pragma mark - UITableViewDelegate

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    if (indexPath.section == 0)
        return kAvatarSize + 62.0;
    return kRowHeight;
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