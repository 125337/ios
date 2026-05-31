#import "CSContactInfoPopoverController.h"
#import "WPCommonUI.h"
#import <objc/runtime.h>
#import <objc/message.h>

#pragma mark - KVC

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

static BOOL contactRespondsTo(id contact, NSString *selName) {
    if (!contact) return NO;
    return ((BOOL (*)(id, SEL, SEL))objc_msgSend)(contact, @selector(respondsToSelector:), NSSelectorFromString(selName));
}

#pragma mark - 信息行（内容靠左，与标题保持间距）

static void WPAddInfoRowLeft(UIView *card, CGFloat cy, CGFloat cw, NSString *left, NSString *right) {
    CGFloat titleWidth = 60;

    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, titleWidth, kRowH)];
    l.text = left;
    l.font = [UIFont systemFontOfSize:13 weight:UIFontWeightMedium];
    l.textColor = WPT2();
    [card addSubview:l];

    CGFloat contentX = kPad + titleWidth + 12;
    CGFloat contentW = cw - contentX - kPad;
    UILabel *r = [[UILabel alloc] initWithFrame:CGRectMake(contentX, cy, contentW, kRowH)];
    r.text = right;
    r.font = [UIFont systemFontOfSize:14];
    r.textColor = WPT1();
    r.textAlignment = NSTextAlignmentLeft;
    r.lineBreakMode = NSLineBreakByTruncatingTail;
    [card addSubview:r];
}

@implementation CSContactInfoPopoverController {
    UIScrollView *_scrollView;
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
    if (self.avatarImage) avatarView.image = self.avatarImage;
    UITapGestureRecognizer *avatarTap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(onAvatarTapped:)];
    [avatarView addGestureRecognizer:avatarTap];
    [card addSubview:avatarView];
    cy += 70;

    UILabel *nameLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, cy, cw, 24)];
    nameLabel.text = contactValueForKey(self.contact, @"m_nsNickName") ?: @"微信用户";
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

#pragma mark - 基本信息卡片

- (CGFloat)buildBasicInfoCardAtY:(CGFloat)y width:(CGFloat)w {
    [_scrollView addSubview:WPMakeSectionHeader(@"基本信息", y, w)];
    y += 32;

    UIView *card = WPMakeCard(y, w);
    CGFloat cw = w - kPad * 2;
    CGFloat cy = 0;

    NSArray *items = [self basicInfoItems];
    for (NSUInteger i = 0; i < items.count; i++) {
        if (i > 0) {
            WPAddSep(card, cy, cw);
        }
        NSDictionary *item = items[i];
        NSString *value = [self valueForInfoKey:item[@"key"]];
        WPAddInfoRowLeft(card, cy, cw, item[@"label"], value);

        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = CGRectMake(0, cy, cw, kRowH);
        objc_setAssociatedObject(btn, "infoKey", item[@"key"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(btn, "copiable", item[@"copiable"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [btn addTarget:self action:@selector(onInfoRowTapped:) forControlEvents:UIControlEventTouchUpInside];
        [card addSubview:btn];

        cy += kRowH;
    }

    CGRect f = card.frame; f.size.height = cy; card.frame = f;
    [_scrollView addSubview:card];
    return y + cy + 8;
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
    [_scrollView addSubview:WPMakeSectionHeader(@"群聊信息", y, w)];
    y += 32;

    UIView *card = WPMakeCard(y, w);
    CGFloat cw = w - kPad * 2;
    CGFloat cy = 0;

    NSArray *items = [self groupInfoItems];
    for (NSUInteger i = 0; i < items.count; i++) {
        if (i > 0) {
            WPAddSep(card, cy, cw);
        }
        NSDictionary *item = items[i];
        NSString *value = [self valueForInfoKey:item[@"key"]];
        WPAddInfoRowLeft(card, cy, cw, item[@"label"], value);

        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = CGRectMake(0, cy, cw, kRowH);
        objc_setAssociatedObject(btn, "infoKey", item[@"key"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(btn, "copiable", item[@"copiable"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [btn addTarget:self action:@selector(onInfoRowTapped:) forControlEvents:UIControlEventTouchUpInside];
        [card addSubview:btn];

        cy += kRowH;
    }

    CGRect f = card.frame; f.size.height = cy; card.frame = f;
    [_scrollView addSubview:card];
    return y + cy + 8;
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
    [_scrollView addSubview:WPMakeSectionHeader(@"公众号信息", y, w)];
    y += 32;

    UIView *card = WPMakeCard(y, w);
    CGFloat cw = w - kPad * 2;
    CGFloat cy = 0;

    NSArray *items = [self officialAccountInfoItems];
    for (NSUInteger i = 0; i < items.count; i++) {
        if (i > 0) {
            WPAddSep(card, cy, cw);
        }
        NSDictionary *item = items[i];
        NSString *value = [self valueForInfoKey:item[@"key"]];
        WPAddInfoRowLeft(card, cy, cw, item[@"label"], value);

        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = CGRectMake(0, cy, cw, kRowH);
        objc_setAssociatedObject(btn, "infoKey", item[@"key"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(btn, "copiable", item[@"copiable"], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [btn addTarget:self action:@selector(onInfoRowTapped:) forControlEvents:UIControlEventTouchUpInside];
        [card addSubview:btn];

        cy += kRowH;
    }

    CGRect f = card.frame; f.size.height = cy; card.frame = f;
    [_scrollView addSubview:card];
    return y + cy + 8;
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
    if (!self.contact) return;

    Class contactInfoVCClass = objc_getClass("ContactInfoViewController");
    if (!contactInfoVCClass) return;

    id contactInfoVC = [[contactInfoVCClass alloc] init];
    if (!contactInfoVC) return;

    SEL setContactSel = NSSelectorFromString(@"setM_contact:");
    if ([contactInfoVC respondsToSelector:setContactSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(contactInfoVC, setContactSel, self.contact);
    }

    __weak typeof(self) weakSelf = self;
    [self dismissViewControllerAnimated:YES completion:^{
        __strong typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) return;

        UIViewController *topVC = [strongSelf findTopViewController];
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

- (UIViewController *)findTopViewController {
    for (UIWindowScene *scene in [UIApplication sharedApplication].connectedScenes) {
        if (![scene isKindOfClass:[UIWindowScene class]]) continue;
        for (UIWindow *window in scene.windows) {
            if (!window.isKeyWindow) continue;
            UIViewController *top = window.rootViewController;
            while (top.presentedViewController) {
                top = top.presentedViewController;
            }
            if ([top isKindOfClass:[UINavigationController class]]) {
                top = [(UINavigationController *)top visibleViewController];
            }
            if ([top isKindOfClass:[UITabBarController class]]) {
                top = [(UITabBarController *)top selectedViewController];
                if ([top isKindOfClass:[UINavigationController class]]) {
                    top = [(UINavigationController *)top visibleViewController];
                }
            }
            return top;
        }
    }
    return nil;
}

#pragma mark - 数据取值

- (NSString *)valueForInfoKey:(NSString *)key {
    if ([key isEqualToString:@"nickname"])       return contactValueForKey(self.contact, @"m_nsNickName") ?: @"";
    if ([key isEqualToString:@"wxid"])           return self.wxid ?: @"";
    if ([key isEqualToString:@"remark"])         return [self remarkValue];
    if ([key isEqualToString:@"gender"])         return [self genderValue];
    if ([key isEqualToString:@"location"])       return [self locationValue];
    if ([key isEqualToString:@"signature"])      return [self signatureValue];
    if ([key isEqualToString:@"groupOwner"])     return [self groupOwnerValue];
    if ([key isEqualToString:@"groupMemberCount"]) return [self groupMemberCountValue];
    if ([key isEqualToString:@"verifyStatus"])   return [self verifyStatusValue];
    return @"";
}

- (NSString *)remarkValue {
    id remark = contactValueForKey(self.contact, @"m_nsRemark");
    if (remark && [remark isKindOfClass:[NSString class]] && [(NSString *)remark length] > 0) return remark;
    id remarkName = contactValueForKey(self.contact, @"m_nsRemarkName");
    if (remarkName && [remarkName isKindOfClass:[NSString class]] && [(NSString *)remarkName length] > 0) return remarkName;
    return @"未设置";
}

- (NSString *)genderValue {
    if (!contactRespondsTo(self.contact, @"m_uiSex")) return @"未知";
    NSInteger sex = contactIntForKey(self.contact, @"m_uiSex");
    if (sex == 1) return @"男";
    if (sex == 2) return @"女";
    return @"未知";
}

- (NSString *)locationValue {
    id province = contactValueForKey(self.contact, @"m_nsProvince");
    id city = contactValueForKey(self.contact, @"m_nsCity");
    NSString *p = (province && [province isKindOfClass:[NSString class]]) ? [province stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] : @"";
    NSString *c = (city && [city isKindOfClass:[NSString class]]) ? [city stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]] : @"";
    if (p.length > 0 && c.length > 0) return [NSString stringWithFormat:@"%@ %@", p, c];
    if (p.length > 0) return p;
    if (c.length > 0) return c;
    return @"未设置";
}

- (NSString *)signatureValue {
    id sig = contactValueForKey(self.contact, @"m_nsSignature");
    if (sig && [sig isKindOfClass:[NSString class]] && [(NSString *)sig length] > 0) return sig;
    return @"未设置";
}

- (NSString *)groupOwnerValue {
    NSString *owner = contactValueForKey(self.contact, @"m_nsOwner");
    if (owner && owner.length > 0) return owner;
    return @"未知";
}

- (NSString *)groupMemberCountValue {
    Class serviceCenter = objc_getClass("MMServiceCenter");
    if (serviceCenter) {
        id center = ((id (*)(Class, SEL))objc_msgSend)(serviceCenter, NSSelectorFromString(@"defaultCenter"));
        id contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), objc_getClass("CContactMgr"));
        if (contactMgr && [contactMgr respondsToSelector:@selector(getGroupMemberCountForContact:)]) {
            unsigned int count = (unsigned int)((unsigned int (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getGroupMemberCountForContact:), self.contact);
            return [NSString stringWithFormat:@"%u 人", count];
        }
    }

    id memList = contactValueForKey(self.contact, @"m_nsChatRoomMemList");
    if (memList && [memList isKindOfClass:[NSArray class]]) {
        return [NSString stringWithFormat:@"%lu 人", (unsigned long)[(NSArray *)memList count]];
    }
    return @"未知";
}

- (NSString *)verifyStatusValue {
    if (!contactRespondsTo(self.contact, @"m_uiVerifyFlag")) return @"未知";
    NSInteger flag = contactIntForKey(self.contact, @"m_uiVerifyFlag");
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