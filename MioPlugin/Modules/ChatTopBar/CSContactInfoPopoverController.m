#import "CSContactInfoPopoverController.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <objc/objc.h>
#import <objc/message.h>

static const CGFloat kPopoverWidth      = 280.0;
static const CGFloat kAvatarSize        = 60.0;
static const CGFloat kAvatarCorner      = 30.0;
static const CGFloat kPopoverMaxHeight  = 420.0;
static const CGFloat kRowHeight         = 46.0;
static const CGFloat kSectionSpacing    = 16.0;

#pragma mark - Cell Reuse IDs

static NSString * const kAvatarCellID   = @"CSAvatarCell";
static NSString * const kDetailCellID   = @"CSDetailCell";

#pragma mark - Contact Info Helpers

static id mmServiceCenterGet(NSString *svcName) {
    Class centerClass = objc_getClass("MMServiceCenter");
    if (!centerClass) return nil;
    id center = ((id (*)(id, SEL))objc_msgSend)(centerClass, @selector(defaultCenter));
    if (!center) return nil;
    return ((id (*)(id, SEL, Class))objc_msgSend)(center,
        NSSelectorFromString(@"getService:"), objc_getClass([svcName UTF8String]));
}

static NSString *contactDisplayName(id contact) {
    if (!contact) return @"";
    id result = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsNickName"));
    if ([result isKindOfClass:[NSString class]] && ((NSString *)result).length) return result;

    result = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsRemark"));
    if ([result isKindOfClass:[NSString class]] && ((NSString *)result).length) return result;

    result = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
    if ([result isKindOfClass:[NSString class]]) return result;
    return @"";
}

static NSString *contactWxid(id contact) {
    if (!contact) return @"";
    id val = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
    if (![val isKindOfClass:[NSString class]]) return @"";
    NSString *username = (NSString *)val;
    if ([username hasPrefix:@"gh_"]) {
        val = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsAliasName"));
        if ([val isKindOfClass:[NSString class]] && ((NSString *)val).length) return val;
    }
    return username;
}

static NSString *contactGender(id contact) {
    if (!contact) return @"";
    unsigned int sex = ((unsigned int (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_uiSex"));
    if (sex == 1) return @"男";
    if (sex == 2) return @"女";
    return @"";
}

static NSString *contactRegion(id contact) {
    if (!contact) return @"";
    id province = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsProvince"));
    id city     = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsCity"));
    NSString *p = [province isKindOfClass:[NSString class]] ? province : @"";
    NSString *c = [city isKindOfClass:[NSString class]] ? city : @"";
    if (p.length && c.length) return [NSString stringWithFormat:@"%@ %@", p, c];
    if (p.length) return p;
    if (c.length) return c;
    return @"";
}

static NSString *contactSignature(id contact) {
    if (!contact) return @"";
    id val = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsSignature"));
    if ([val isKindOfClass:[NSString class]]) return val;
    return @"";
}

static NSString *contactRemark(id contact) {
    if (!contact) return @"";
    id val = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsRemark"));
    if ([val isKindOfClass:[NSString class]] && ((NSString *)val).length) return val;
    return @"";
}

static NSString *contactOwnerName(id contact) {
    if (!contact) return @"";
    id val = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsOwner"));
    if ([val isKindOfClass:[NSString class]]) return val;
    return @"";
}

static NSUInteger contactMemberCount(id contact) {
    if (!contact) return 0;
    id members = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsChatRoomMembers"));
    if ([members isKindOfClass:[NSString class]]) {
        NSArray *arr = [((NSString *)members) componentsSeparatedByString:@";"];
        NSUInteger c = 0;
        for (NSString *m in arr) {
            if (m.length) c++;
        }
        return c;
    }
    return 0;
}

static NSString *contactTypeLabel(id contact) {
    if (!contact) return @"";
    NSString *name = contactWxid(contact);
    if ([name hasPrefix:@"gh_"]) return @"公众号";
    if ([name containsString:@"@chatroom"]) return @"群聊";
    return @"联系人";
}

static BOOL isGroupContact(id contact) {
    NSString *name = contactWxid(contact);
    return [name containsString:@"@chatroom"];
}

static BOOL isOAContact(id contact) {
    NSString *name = contactWxid(contact);
    return [name hasPrefix:@"gh_"];
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

#pragma mark - CSContactInfoAvatarCell

@interface CSContactInfoAvatarCell : UITableViewCell
@property (nonatomic, strong) UIView *cardView;
@property (nonatomic, strong) UIImageView *avatarView;
@property (nonatomic, strong) UILabel *nameLabel;
@end

@implementation CSContactInfoAvatarCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style
              reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        self.selectionStyle = UITableViewCellSelectionStyleNone;
        self.backgroundColor = [UIColor clearColor];
        self.contentView.backgroundColor = [UIColor clearColor];

        _cardView = [[UIView alloc] init];
        _cardView.backgroundColor = [UIColor clearColor];
        _cardView.translatesAutoresizingMaskIntoConstraints = NO;
        [self.contentView addSubview:_cardView];

        _avatarView = [[UIImageView alloc] init];
        _avatarView.contentMode = UIViewContentModeScaleAspectFill;
        _avatarView.layer.cornerRadius = kAvatarCorner;
        _avatarView.clipsToBounds = YES;
        _avatarView.backgroundColor = [UIColor colorWithWhite:0.92 alpha:1.0];
        _avatarView.translatesAutoresizingMaskIntoConstraints = NO;
        [_cardView addSubview:_avatarView];

        _nameLabel = [[UILabel alloc] init];
        _nameLabel.font = [UIFont systemFontOfSize:17.0 weight:UIFontWeightMedium];
        _nameLabel.textColor = [UIColor blackColor];
        _nameLabel.numberOfLines = 2;
        _nameLabel.textAlignment = NSTextAlignmentCenter;
        _nameLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [_cardView addSubview:_nameLabel];

        [NSLayoutConstraint activateConstraints:@[
            [_cardView.leadingAnchor constraintEqualToAnchor:self.contentView.leadingAnchor constant:16],
            [_cardView.trailingAnchor constraintEqualToAnchor:self.contentView.trailingAnchor constant:-16],
            [_cardView.topAnchor constraintEqualToAnchor:self.contentView.topAnchor constant:12],
            [_cardView.bottomAnchor constraintEqualToAnchor:self.contentView.bottomAnchor constant:-12],

            [_avatarView.topAnchor constraintEqualToAnchor:_cardView.topAnchor],
            [_avatarView.centerXAnchor constraintEqualToAnchor:_cardView.centerXAnchor],
            [_avatarView.widthAnchor constraintEqualToConstant:kAvatarSize],
            [_avatarView.heightAnchor constraintEqualToConstant:kAvatarSize],

            [_nameLabel.topAnchor constraintEqualToAnchor:_avatarView.bottomAnchor constant:8],
            [_nameLabel.leadingAnchor constraintEqualToAnchor:_cardView.leadingAnchor],
            [_nameLabel.trailingAnchor constraintEqualToAnchor:_cardView.trailingAnchor],
            [_nameLabel.bottomAnchor constraintEqualToAnchor:_cardView.bottomAnchor],
        ]];
    }
    return self;
}

@end

#pragma mark - CSContactInfoDetailCell

@interface CSContactInfoDetailCell : UITableViewCell
@property (nonatomic, strong) UILabel *titleLabel;
@property (nonatomic, strong) UILabel *detailLabel;
@end

@implementation CSContactInfoDetailCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style
              reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        self.selectionStyle = UITableViewCellSelectionStyleNone;

        _titleLabel = [[UILabel alloc] init];
        _titleLabel.font = [UIFont systemFontOfSize:15.0];
        _titleLabel.textColor = [UIColor colorWithWhite:0.3 alpha:1.0];
        _titleLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [_titleLabel setContentHuggingPriority:UILayoutPriorityRequired forAxis:UILayoutConstraintAxisHorizontal];
[_titleLabel setContentCompressionResistancePriority:UILayoutPriorityRequired forAxis:UILayoutConstraintAxisHorizontal];
        [self.contentView addSubview:_titleLabel];

        _detailLabel = [[UILabel alloc] init];
        _detailLabel.font = [UIFont systemFontOfSize:15.0];
        _detailLabel.textColor = [UIColor blackColor];
        _detailLabel.textAlignment = NSTextAlignmentRight;
        _detailLabel.numberOfLines = 3;
        _detailLabel.translatesAutoresizingMaskIntoConstraints = NO;
        [self.contentView addSubview:_detailLabel];

        [NSLayoutConstraint activateConstraints:@[
            [_titleLabel.leadingAnchor constraintEqualToAnchor:self.contentView.leadingAnchor constant:20],
            [_titleLabel.centerYAnchor constraintEqualToAnchor:self.contentView.centerYAnchor],
            [_titleLabel.widthAnchor constraintLessThanOrEqualToAnchor:self.contentView.widthAnchor multiplier:0.38],

            [_detailLabel.trailingAnchor constraintEqualToAnchor:self.contentView.trailingAnchor constant:-20],
            [_detailLabel.centerYAnchor constraintEqualToAnchor:self.contentView.centerYAnchor],
            [_detailLabel.leadingAnchor constraintEqualToAnchor:_titleLabel.trailingAnchor constant:12],
        ]];
    }
    return self;
}

@end

#pragma mark - CSContactInfoPopoverController

@interface CSContactInfoPopoverController ()
@property (nonatomic, strong) id contact;
@property (nonatomic, strong) UIImage *avatar;
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) NSMutableArray<NSMutableArray<NSDictionary *> *> *sections;
@end

@implementation CSContactInfoPopoverController

#pragma mark - Init

- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar {
    self = [super init];
    if (self) {
        _contact = contact;
        _avatar = avatar;
        _sections = [NSMutableArray array];
    }
    return self;
}

#pragma mark - View Lifecycle

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor colorWithRed:0.949 green:0.949 blue:0.969 alpha:1.0];

    _tableView = [[UITableView alloc] initWithFrame:CGRectZero
                                              style:UITableViewStyleGrouped];
    _tableView.delegate = self;
    _tableView.dataSource = self;
    _tableView.backgroundColor = [UIColor clearColor];
    _tableView.separatorInset = UIEdgeInsetsMake(0, 18, 0, 18);
    _tableView.rowHeight = kRowHeight;
    _tableView.estimatedRowHeight = kRowHeight;
    _tableView.showsVerticalScrollIndicator = NO;
    _tableView.contentInset = UIEdgeInsetsMake(8, 0, 8, 0);
    _tableView.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:_tableView];

    [NSLayoutConstraint activateConstraints:@[
        [_tableView.topAnchor constraintEqualToAnchor:self.view.topAnchor],
        [_tableView.leadingAnchor constraintEqualToAnchor:self.view.leadingAnchor],
        [_tableView.trailingAnchor constraintEqualToAnchor:self.view.trailingAnchor],
        [_tableView.bottomAnchor constraintEqualToAnchor:self.view.bottomAnchor],
    ]];

    [_tableView registerClass:[CSContactInfoAvatarCell class] forCellReuseIdentifier:kAvatarCellID];
    [_tableView registerClass:[CSContactInfoDetailCell class] forCellReuseIdentifier:kDetailCellID];

    [self buildSections];
}

- (void)viewDidLayoutSubviews {
    [super viewDidLayoutSubviews];
    CGSize size = self.view.bounds.size;
    if (CGSizeEqualToSize(size, CGSizeZero)) {
        self.preferredContentSize = CGSizeMake(kPopoverWidth, kPopoverMaxHeight);
    }
}

#pragma mark - Data Building

- (void)buildSections {
    [_sections removeAllObjects];

    [self buildAvatarSection];
    [self buildBasicInfoSection];

    if (isGroupContact(_contact))
        [self buildGroupInfoSection];
    if (isOAContact(_contact))
        [self buildOfficialAccountInfoSection];
}

- (void)buildAvatarSection {
    NSMutableArray *rows = [NSMutableArray array];
    NSString *displayName = contactDisplayName(_contact);
    NSString *wxid         = contactWxid(_contact);

    NSString *labelText = displayName;
    if (wxid.length && ![wxid isEqualToString:displayName])
        labelText = [NSString stringWithFormat:@"%@\n%@", displayName, wxid];

    UIImage *av = _avatar;
    if (!av) {
        av = loadCachedAvatar(wxid);
    }

    [rows addObject:@{
        @"type":   @"avatar",
        @"name":   labelText ?: @"",
        @"avatar": av ?: [NSNull null],
    }];
    [_sections addObject:rows];
}

- (void)buildBasicInfoSection {
    NSMutableArray *rows = [NSMutableArray array];

    NSString *typeLabel = contactTypeLabel(_contact);
    if (typeLabel.length) {
        [rows addObject:@{@"title": @"类型", @"detail": typeLabel}];
    }

    NSString *wxid = contactWxid(_contact);
    if (wxid.length) {
        [rows addObject:@{@"title": @"微信", @"detail": wxid}];
    }

    NSString *remark = contactRemark(_contact);
    if (remark.length && !isOAContact(_contact)) {
        [rows addObject:@{@"title": @"备注", @"detail": remark}];
    }

    if (!isGroupContact(_contact) && !isOAContact(_contact)) {
        NSString *gender = contactGender(_contact);
        if (gender.length) {
            [rows addObject:@{@"title": @"性别", @"detail": gender}];
        }

        NSString *region = contactRegion(_contact);
        if (region.length) {
            [rows addObject:@{@"title": @"地区", @"detail": region}];
        }

        NSString *sig = contactSignature(_contact);
        if (sig.length) {
            [rows addObject:@{@"title": @"签名", @"detail": sig}];
        }
    }

    if (rows.count) [_sections addObject:rows];
}

- (void)buildGroupInfoSection {
    NSMutableArray *rows = [NSMutableArray array];

    NSString *owner = contactOwnerName(_contact);
    if (owner.length) {
        [rows addObject:@{@"title": @"群主", @"detail": owner}];
    }

    NSUInteger count = contactMemberCount(_contact);
    if (count > 0) {
        [rows addObject:@{@"title": @"成员", @"detail":
            [NSString stringWithFormat:@"%lu 人", (unsigned long)count]}];
    }

    if (rows.count) [_sections addObject:rows];
}

- (void)buildOfficialAccountInfoSection {
    (void)_contact;
}

#pragma mark - Avatar Loading

- (void)loadAvatarAsync:(UIImageView *)imageView contact:(id)contact {
    NSString *username = contactWxid(contact);

    UIImage *cached = loadCachedAvatar(username);
    if (cached) {
        imageView.image = cached;
        return;
    }

    NSString *headImgUrl = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsHeadImgUrl"));
    if (![headImgUrl isKindOfClass:[NSString class]] || !((NSString *)headImgUrl).length) {
        id headImageMgr = mmServiceCenterGet(@"MMHeadImageMgr");
        if (headImageMgr) {
            headImgUrl = ((id (*)(id, SEL, id))objc_msgSend)(headImageMgr,
    NSSelectorFromString(@"getUsrHeadImgUrl:"), username);
        }
    }
    if (![headImgUrl isKindOfClass:[NSString class]] || !((NSString *)headImgUrl).length) return;

    NSURL *url = [NSURL URLWithString:headImgUrl];
    if (!url) return;

    NSURLSession *session = [NSURLSession sharedSession];
    [[session dataTaskWithURL:url completionHandler:^(NSData *data, NSURLResponse *resp, NSError *err) {
        if (!data || err) return;
        UIImage *img = [UIImage imageWithData:data];
        if (!img) return;
        dispatch_async(dispatch_get_main_queue(), ^{
            imageView.image = img;
        });
    }] resume];
}

#pragma mark - UITableViewDataSource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return _sections.count;
}

- (NSInteger)tableView:(UITableView *)tableView
 numberOfRowsInSection:(NSInteger)section {
    return _sections[section].count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView
         cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    NSDictionary *row = _sections[indexPath.section][indexPath.row];
    NSString *type = row[@"type"];

    if ([type isEqualToString:@"avatar"]) {
        CSContactInfoAvatarCell *cell =
            [tableView dequeueReusableCellWithIdentifier:kAvatarCellID
                                            forIndexPath:indexPath];
        cell.nameLabel.text = row[@"name"];
        id avObj = row[@"avatar"];
        if (avObj == [NSNull null]) {
            cell.avatarView.image = nil;
        } else {
            cell.avatarView.image = (UIImage *)avObj;
        }
        NSString *username = contactWxid(_contact);
        if (!cell.avatarView.image && username.length) {
            [self loadAvatarAsync:cell.avatarView contact:_contact];
        }
        return cell;
    }

    CSContactInfoDetailCell *cell =
        [tableView dequeueReusableCellWithIdentifier:kDetailCellID
                                        forIndexPath:indexPath];
    cell.titleLabel.text  = row[@"title"];
    cell.detailLabel.text = row[@"detail"];
    return cell;
}

#pragma mark - UITableViewDelegate

- (CGFloat)tableView:(UITableView *)tableView
heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    NSDictionary *row = _sections[indexPath.section][indexPath.row];
    if ([row[@"type"] isEqualToString:@"avatar"]) {
        return kAvatarSize + 40.0;
    }
    return kRowHeight;
}

- (CGFloat)tableView:(UITableView *)tableView
heightForHeaderInSection:(NSInteger)section {
    return section == 0 ? 0.01 : kSectionSpacing;
}

- (CGFloat)tableView:(UITableView *)tableView
heightForFooterInSection:(NSInteger)section {
    return 0.01;
}

- (UIView *)tableView:(UITableView *)tableView
viewForHeaderInSection:(NSInteger)section {
    return [[UIView alloc] initWithFrame:CGRectZero];
}

- (UIView *)tableView:(UITableView *)tableView
viewForFooterInSection:(NSInteger)section {
    return [[UIView alloc] initWithFrame:CGRectZero];
}

- (BOOL)tableView:(UITableView *)tableView
shouldHighlightRowAtIndexPath:(NSIndexPath *)indexPath {
    NSDictionary *row = _sections[indexPath.section][indexPath.row];
    if ([row[@"type"] isEqualToString:@"avatar"]) return NO;
    return YES;
}

- (void)tableView:(UITableView *)tableView
didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [tableView deselectRowAtIndexPath:indexPath animated:YES];

    NSDictionary *row = _sections[indexPath.section][indexPath.row];
    NSString *detail = row[@"detail"];
    if (!detail.length) return;

    if (indexPath.section == 0) {
        [self handleProfileNavigation];
        return;
    }

    UIPasteboard *pb = [UIPasteboard generalPasteboard];
    [pb setString:detail];

    UIAlertController *alert = [UIAlertController
        alertControllerWithTitle:nil
                         message:[NSString stringWithFormat:@"已复制: %@", detail]
                  preferredStyle:UIAlertControllerStyleAlert];
    [self presentViewController:alert animated:YES completion:nil];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.2 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [alert dismissViewControllerAnimated:YES completion:nil];
    });
}

#pragma mark - Navigation

- (void)handleProfileNavigation {
    NSString *username = contactWxid(_contact);
    if (!username.length) return;

    Class contactInfoVCClass = objc_getClass("ContactInfoViewController");
    if (!contactInfoVCClass) return;

    id vc = [[contactInfoVCClass alloc] init];
    ((void (*)(id, SEL, id))objc_msgSend)(vc, NSSelectorFromString(@"setM_contact:"), _contact);
    ((void (*)(id, SEL, id))objc_msgSend)(vc, NSSelectorFromString(@"setM_nsUsrName:"), username);

    UINavigationController *nav = [[UINavigationController alloc]
        initWithRootViewController:vc];

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