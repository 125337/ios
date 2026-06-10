#import "CSContactInfoPopoverController.h"
#import "WPCommonUI.h"
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import "AvatarLoader.h"
#import <objc/runtime.h>
#import <objc/message.h>

#pragma mark - 信息行（内容靠左，与标题保持6pt间距，支持多行）

static CGFloat WPAddInfoRowLeft(UIView *card, CGFloat cy, CGFloat cw, NSString *left, NSString *right) {
    CGFloat titleWidth = 60;
    CGFloat spacing = 3;

    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, titleWidth, kRowH)];
    l.text = left;
    l.font = [UIFont systemFontOfSize:13 weight:UIFontWeightMedium];
    l.textColor = WPT2();
    [card addSubview:l];

    CGFloat contentX = kPad + titleWidth + spacing;
    CGFloat contentW = cw - contentX - kPad;
    UIFont *contentFont = [UIFont systemFontOfSize:14];

    CGRect textRect = [right boundingRectWithSize:CGSizeMake(contentW, CGFLOAT_MAX)
                                          options:NSStringDrawingUsesLineFragmentOrigin
                                       attributes:@{NSFontAttributeName: contentFont}
                                          context:nil];
    CGFloat textHeight = ceil(textRect.size.height);
    CGFloat rowHeight = MAX(kRowH, textHeight + 10);

    UILabel *r = [[UILabel alloc] initWithFrame:CGRectMake(contentX, cy, contentW, rowHeight)];
    r.text = right;
    r.font = contentFont;
    r.textColor = WPT1();
    r.textAlignment = NSTextAlignmentLeft;
    r.numberOfLines = 0;
    r.lineBreakMode = NSLineBreakByWordWrapping;
    [card addSubview:r];

    return rowHeight;
}

@implementation CSContactInfoPopoverController {
    UIScrollView *_scrollView;
    UIImageView *_avatarView;
}

- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar {
    self = [super init];
    if (self) {
        self.contact = contact;                    // strong property 存储（ARC 安全）
        self.wxid = WXSafeStringGet(contact, @"m_nsUsrName");  // 提前提取 wxid
        self.avatarImage = avatar;
    }
    return self;
}

- (UIModalPresentationStyle)adaptivePresentationStyleForPresentationController:
        (UIPresentationController *)controller {
    return UIModalPresentationNone;
}

- (void)viewDidLoad {
    [super viewDidLoad];

    CGFloat w = self.preferredContentSize.width;

    _scrollView = WPMakeSV(self);
    _scrollView.alwaysBounceVertical = YES;
    [self.view addSubview:_scrollView];

    CGFloat y = 12;

    y = [self buildAvatarCardAtY:y width:w];

    if (self.wxid) {
        if ([self.wxid containsString:@"@chatroom"]) {
            y = [self buildGroupInfoCardAtY:y width:w];
        } else if ([self.wxid hasPrefix:@"gh_"]) {
            y = [self buildOfficialAccountInfoCardAtY:y width:w];
            [self preloadAndRefreshAvatar];
        } else {
            y = [self buildBasicInfoCardAtY:y width:w];
        }
    } else {
        y = [self buildBasicInfoCardAtY:y width:w];
    }

    _scrollView.contentSize = CGSizeMake(w, y + 12);
}

#pragma mark - 头像卡片

- (CGFloat)buildAvatarCardAtY:(CGFloat)y width:(CGFloat)w {
    UIView *card = WPMakeCard(y, w);
    CGFloat cw = w - kPad * 2;
    CGFloat cy = 20;

    UIImageView *avatarView = [[UIImageView alloc] initWithFrame:CGRectMake((cw - 60) / 2, cy, 60, 60)];
    avatarView.layer.cornerRadius = 30;
    avatarView.clipsToBounds = YES;
    avatarView.contentMode = UIViewContentModeScaleAspectFill;
    avatarView.backgroundColor = [UIColor colorWithWhite:0.9 alpha:1.0];
    avatarView.userInteractionEnabled = YES;
    avatarView.tag = 1000;
    _avatarView = avatarView;
    [self loadAvatarForImageView:avatarView];
    UITapGestureRecognizer *avatarTap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(onAvatarTapped:)];
    [avatarView addGestureRecognizer:avatarTap];
    [card addSubview:avatarView];
    cy += 70;

    UILabel *nameLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, cy, cw, 24)];
    nameLabel.text = WXSafeStringGet(self.contact, @"m_nsNickName") ?: @"微信用户";
    nameLabel.font = [UIFont boldSystemFontOfSize:18];
    nameLabel.textColor = WPT1();
    nameLabel.textAlignment = NSTextAlignmentCenter;
    [card addSubview:nameLabel];
    cy += 28;

    UILabel *wxidLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, cy, cw, 18)];
    wxidLabel.text = self.wxid ?: @"";
    wxidLabel.font = [UIFont systemFontOfSize:12];
    wxidLabel.textColor = WPT2();
    wxidLabel.textAlignment = NSTextAlignmentCenter;
    [card addSubview:wxidLabel];
    cy += 24;

    CGRect f = card.frame; f.size.height = cy; card.frame = f;
    [_scrollView addSubview:card];
    return y + cy + 8;
}

#pragma mark - 头像加载

- (void)loadAvatarForImageView:(UIImageView *)imageView {
    WPLog(@"Mio-Avatar", @"loadAvatarForImageView START  wxid=%@", self.wxid);

    if (!self.wxid.length) {
        WPLog(@"Mio-Avatar", @"❌ wxid 为空，使用默认头像");
        imageView.image = [UIImage imageNamed:@"DefaultHead"];
        return;
    }

    if (self.avatarImage && ![self.wxid hasPrefix:@"gh_"]) {
        WPLog(@"Mio-Avatar", @"✅ 已有缓存 avatarImage");
        imageView.image = self.avatarImage;
        return;
    }

    [[AvatarLoader shared] loadAvatarForWxid:self.wxid contact:nil completion:^(UIImage *image) {
        if (image) {
            imageView.image = image;
            self.avatarImage = image;
        } else if (!self.avatarImage) {
            imageView.image = [UIImage imageNamed:@"DefaultHead"];
        }
    }];
}

- (void)preloadAndRefreshAvatar {
    WPLog(@"Mio-Preload", @"preloadAndRefreshAvatar START wxid=%@", self.wxid);
    __weak typeof(self) weakSelf = self;

    // 公众号无需预加载 ContactInfoViewController，头像加载由 loadAvatarForImageView 通过 wxid 完成

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.6 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        __strong typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf || !strongSelf.wxid) return;

        if (strongSelf.avatarImage && strongSelf.avatarImage.size.width > 44) {
            WPLog(@"Mio-Preload", @"  已有非占位头像，跳过下载");
            return;
        }

        [[AvatarLoader shared] loadAvatarForWxid:strongSelf.wxid contact:nil completion:^(UIImage *image) {
            __strong typeof(weakSelf) innerSelf = weakSelf;
            if (innerSelf && image && innerSelf->_avatarView) {
                WPLog(@"Mio-Preload", @"  ✅ AvatarLoader 成功 size=%.0fx%.0f", image.size.width, image.size.height);
                innerSelf->_avatarView.image = image;
                innerSelf.avatarImage = image;
            }
        }];
    });
}

#pragma mark - 通用卡片构建

- (CGFloat)buildCardWithItems:(NSArray *)items sectionTitle:(NSString *)title atY:(CGFloat)y width:(CGFloat)w {
    [_scrollView addSubview:WPMakeSectionHeader(title, y, w)];
    y += 32;

    UIView *card = WPMakeCard(y, w);
    CGFloat cw = w - kPad * 2;
    CGFloat cy = 0;

    for (NSUInteger i = 0; i < items.count; i++) {
        if (i > 0) {
            WPAddSep(card, cy, cw);
        }
        NSDictionary *item = items[i];
        NSString *value = [self valueForInfoKey:item[@"key"]];
        CGFloat rowH = WPAddInfoRowLeft(card, cy, cw, item[@"label"], value);

        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = CGRectMake(0, cy, cw, rowH);
        objc_setAssociatedObject(btn, "infoKey", item[@"key"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(btn, "copiable", item[@"copiable"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [btn addTarget:self action:@selector(onInfoRowTapped:) forControlEvents:UIControlEventTouchUpInside];
        [card addSubview:btn];

        cy += rowH;
    }

    CGRect f = card.frame; f.size.height = cy; card.frame = f;
    [_scrollView addSubview:card];
    return y + cy + 8;
}

#pragma mark - 基本信息卡片

- (CGFloat)buildBasicInfoCardAtY:(CGFloat)y width:(CGFloat)w {
    return [self buildCardWithItems:[self basicInfoItems] sectionTitle:@"基本信息" atY:y width:w];
}

- (NSArray *)basicInfoItems {
    return @[
        @{@"label": @"昵称",   @"key": @"nickname",   @"copiable": @YES},
        @{@"label": @"微信",   @"key": @"wxid",       @"copiable": @YES},
        @{@"label": @"备注",   @"key": @"remark",     @"copiable": @YES},
        @{@"label": @"性别",   @"key": @"gender",     @"copiable": @YES},
        @{@"label": @"地区",   @"key": @"location",   @"copiable": @YES},
        @{@"label": @"签名",   @"key": @"signature",  @"copiable": @YES},
    ];
}

#pragma mark - 群聊信息卡片

- (CGFloat)buildGroupInfoCardAtY:(CGFloat)y width:(CGFloat)w {
    return [self buildCardWithItems:[self groupInfoItems] sectionTitle:@"群聊信息" atY:y width:w];
}

- (NSArray *)groupInfoItems {
    return @[
        @{@"label": @"群主",       @"key": @"groupOwner",      @"copiable": @YES},
        @{@"label": @"群成员",     @"key": @"groupMemberCount", @"copiable": @NO},
        @{@"label": @"群聊id",     @"key": @"wxid",            @"copiable": @YES},
        @{@"label": @"备注",       @"key": @"remark",          @"copiable": @YES},
    ];
}

#pragma mark - 公众号信息卡片

- (CGFloat)buildOfficialAccountInfoCardAtY:(CGFloat)y width:(CGFloat)w {
    return [self buildCardWithItems:[self officialAccountInfoItems] sectionTitle:@"公众号信息" atY:y width:w];
}

- (NSArray *)officialAccountInfoItems {
    return @[
        @{@"label": @"名称",       @"key": @"nickname",      @"copiable": @YES},
        @{@"label": @"公众号id",   @"key": @"wxid",          @"copiable": @YES},
        @{@"label": @"认证状态",   @"key": @"verifyStatus",  @"copiable": @NO},
        @{@"label": @"地区",       @"key": @"location",      @"copiable": @YES},
        @{@"label": @"简介",       @"key": @"signature",     @"copiable": @YES},
    ];
}

#pragma mark - 点击信息行

- (void)onInfoRowTapped:(UIButton *)btn {
    NSString *key = objc_getAssociatedObject(btn, "infoKey");
    NSNumber *copiable = objc_getAssociatedObject(btn, "copiable");
    if (!copiable.boolValue) return;

    NSString *text = [self valueForInfoKey:key];
    if (!text.length) return;

    [UIPasteboard generalPasteboard].string = text;
    [self showCopySuccessToast];

    UIImpactFeedbackGenerator *gen = [[UIImpactFeedbackGenerator alloc]
        initWithStyle:UIImpactFeedbackStyleLight];
    [gen prepare];
    [gen impactOccurred];
}

#pragma mark - 头像点击 → 跳转资料页

- (void)onAvatarTapped:(UITapGestureRecognizer *)gesture {
    [self handleProfileNavigation];
}

- (void)handleProfileNavigation {
    if (!self.wxid) return;

    // 通过 wxid 重新获取 contact，仅供跳转原生资料页使用
    id contact = WXGetContactForWxid(self.wxid);
    if (!contact) return;

    Class contactInfoVCClass = objc_getClass("ContactInfoViewController");
    if (!contactInfoVCClass) return;

    id contactInfoVC = [[contactInfoVCClass alloc] init];
    if (!contactInfoVC) return;

    SEL setContactSel = NSSelectorFromString(@"setM_contact:");
    if ([contactInfoVC respondsToSelector:setContactSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(contactInfoVC, setContactSel, contact);
    }

    __weak typeof(self) weakSelf = self;
    [self dismissViewControllerAnimated:YES completion:^{
        __strong typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) return;

        UIViewController *topVC = WPGetTopVCForPresentation();
        if (!topVC) {
            UIViewController *rootVC = [UIApplication sharedApplication].keyWindow.rootViewController;
            if (rootVC) {
                topVC = rootVC;
                while (topVC.presentedViewController) {
                    topVC = topVC.presentedViewController;
                }
            }
        }
        if (!topVC) return;

        if ([topVC isKindOfClass:[UINavigationController class]]) {
            [(UINavigationController *)topVC pushViewController:contactInfoVC animated:YES];
        } else if (topVC.navigationController) {
            [topVC.navigationController pushViewController:contactInfoVC animated:YES];
        } else {
            UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:contactInfoVC];
            [topVC presentViewController:nav animated:YES completion:nil];
        }
    }];
}

#pragma mark - 数据取值

- (NSString *)valueForInfoKey:(NSString *)key {
    if ([key isEqualToString:@"nickname"]) {
        return WXSafeStringGet(self.contact, @"m_nsNickName") ?: @"";
    }
    if ([key isEqualToString:@"wxid"]) {
        return self.wxid ?: @"";
    }
    if ([key isEqualToString:@"remark"]) {
        NSString *v = WXSafeStringGet(self.contact, @"m_nsContactRemark");
        return v ?: @"未设置";
    }
    if ([key isEqualToString:@"gender"]) {
        return [self genderValue];
    }
    if ([key isEqualToString:@"location"]) {
        return [self locationValue];
    }
    if ([key isEqualToString:@"signature"]) {
        NSString *v = WXSafeStringGet(self.contact, @"m_nsSignature");
        return v ?: @"未设置";
    }
    if ([key isEqualToString:@"groupOwner"]) {
        return [self groupOwnerValue];
    }
    if ([key isEqualToString:@"groupMemberCount"]) {
        return [self groupMemberCountValue];
    }
    if ([key isEqualToString:@"verifyStatus"]) {
        return [self verifyStatusValue];
    }
    return @"";
}

#pragma mark - 从 contact 读取转换

/// 性别（NSNumber → 文字）
- (NSString *)genderValue {
    NSInteger g = WXSafeIntegerGet(self.contact, @"m_nsGender", 0);
    if (g == 1) return @"男";
    if (g == 2) return @"女";
    return @"未知";
}

/// 地区（组装国家/省/市）
- (NSString *)locationValue {
    id contact = self.contact;
    if (!contact) return @"未设置";
    
    NSString *country = WXSafeStringGet(contact, @"m_nsCountry");
    NSString *province = WXSafeStringGet(contact, @"m_nsProvince");
    NSString *city = WXSafeStringGet(contact, @"m_nsCity");
    
    NSMutableArray *parts = [NSMutableArray array];
    if (country.length) [parts addObject:country];
    if (province.length) [parts addObject:province];
    if (city.length) [parts addObject:city];
    
    return parts.count > 0 ? [parts componentsJoinedByString:@" "] : @"未设置";
}

/// 群主 wxid
- (NSString *)groupOwnerValue {
    NSString *v = WXSafeStringGet(self.contact, @"m_nsChatRoomOwner");
    return v ?: @"未知";
}

- (NSString *)groupMemberCountValue {
    id contact = self.contact;
    if (!contact) return @"未知";

    // 优先通过 CContactMgr 获取成员数
    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (contactMgr && [contactMgr respondsToSelector:@selector(getGroupMemberCountForContact:)]) {
        unsigned int count = (unsigned int)((unsigned int (*)(id, SEL, id))objc_msgSend)(
            contactMgr, @selector(getGroupMemberCountForContact:), contact);
        if (count > 0) {
            // 尝试获取管理员数量
            NSString *adminList = WXSafeStringGet(contact, @"m_nsChatRoomAdminList");
            if (adminList.length) {
                NSArray *admins = [adminList componentsSeparatedByString:@";"];
                return [NSString stringWithFormat:@"群人员%lu人 管理员%lu人",
                        (unsigned long)count, (unsigned long)admins.count];
            }
            return [NSString stringWithFormat:@"%u 人", count];
        }
    }

    // fallback: 手动解析成员列表
    NSString *memList = WXSafeStringGet(contact, @"m_nsChatRoomMemList");
    if (memList.length) {
        NSArray *members = [memList componentsSeparatedByString:@";"];
        return [NSString stringWithFormat:@"群人员%lu人", (unsigned long)members.count];
    }

    return @"未知";
}

- (NSString *)verifyStatusValue {
    if (![self.wxid hasPrefix:@"gh_"]) return @"未知";
    id contact = WXGetContactForWxid(self.wxid);
    if (!contact) return @"未知";
    SEL flagSel = NSSelectorFromString(@"m_uiVerifyFlag");
    if (![contact respondsToSelector:flagSel]) return @"未认证";
    NSInteger flag = (NSInteger)((NSInteger (*)(id, SEL))objc_msgSend)(contact, flagSel);
    return flag > 0 ? @"已认证" : @"未认证";
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
    CGFloat tw = toast.frame.size.width + 20;
    CGFloat th = toast.frame.size.height + 10;
    toast.frame = CGRectMake((self.view.bounds.size.width - tw) * 0.5, self.view.bounds.size.height * 0.8, tw, th);
    [self.view addSubview:toast];

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [UIView animateWithDuration:0.3 animations:^{
            toast.alpha = 0;
        } completion:^(BOOL finished) {
            [toast removeFromSuperview];
        }];
    });
}

@end