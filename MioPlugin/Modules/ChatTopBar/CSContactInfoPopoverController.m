#import "CSContactInfoPopoverController.h"
#import "WPCommonUI.h"
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>

#pragma mark - KVC

static id contactValueForKey(id contact, NSString *key) {
    return WXContactValueForKey(contact, key);
}

static NSInteger contactIntForKey(id contact, NSString *key) {
    if (!contact || !key) return 0;
    NSNumber *n = (id)WXContactValueForKey(contact, key);
    if (n && [n isKindOfClass:[NSNumber class]]) return [n integerValue];
    return 0;
}

static BOOL contactRespondsTo(id contact, NSString *selName) {
    return WXContactRespondsTo(contact, selName);
}

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

#pragma mark - 头像加载（四级回退策略）

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

    // 1. 本地自定义头像缓存
    NSString *dir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    if (dir) {
        NSString *jpgPath = [dir stringByAppendingPathComponent:
            [NSString stringWithFormat:@"HBWechatHelper/UserHeadImage/%@.jpg", self.wxid]];
        UIImage *custom = [UIImage imageWithContentsOfFile:jpgPath];
        if (custom) {
            WPLog(@"Mio-Avatar", @"✅ Step1-本地自定义头像命中");
            imageView.image = custom;
            self.avatarImage = custom;
            return;
        }
    }

    BOOL isOfficialAccount = [self.wxid hasPrefix:@"gh_"];

    if (!isOfficialAccount) {
        WPLog(@"Mio-Avatar", @"⏳ Step2-MMHeadImageMgr...");
        id headImageMgr = WXGetService(objc_getClass("MMHeadImageMgr"));
        WPLog(@"Mio-Avatar", @"  MMServiceCenter %@ headImageMgr=%@", headImageMgr ? @"YES":@"NO", headImageMgr ? @"YES":@"NO");
        if (headImageMgr) {
            SEL getHeadSel = NSSelectorFromString(@"getHeadImage:withCategory:");
            if ([headImageMgr respondsToSelector:getHeadSel]) {
                UIImage *wxImg = ((UIImage *(*)(id, SEL, id, id))objc_msgSend)(headImageMgr, getHeadSel, self.wxid, @0);
                WPLog(@"Mio-Avatar", @"  getHeadImage:withCategory: 结果=%@ size=%.0fx%.0f", wxImg ? @"有图":@"nil", wxImg.size.width, wxImg.size.height);
                if (wxImg) {
                    imageView.image = wxImg;
                    self.avatarImage = wxImg;
                    return;
                }
            } else {
                WPLog(@"Mio-Avatar", @"  ❌ 不支持 getHeadImage:withCategory:");
            }
        }
    } else {
        WPLog(@"Mio-Avatar", @"⏳ Step2-SKIP(公众号用MMHeadImageMgr只返回占位图，直接走URL下载)");
    }

    // 3. 网络下载
    NSString *avatarURL = [self headImageURLFromContact];
    WPLog(@"Mio-Avatar", @"⏳ Step3-网络下载 URL=%@", avatarURL ?: @"(空)");
    if (avatarURL.length) {
        __weak UIImageView *weakImageView = imageView;
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            NSData *data = [NSData dataWithContentsOfURL:[NSURL URLWithString:avatarURL]];
            WPLog(@"Mio-Avatar", @"  网络下载 data=%@ len=%lu", data ? @"YES":@"NO", (unsigned long)data.length);
            if (data) {
                UIImage *downloaded = [UIImage imageWithData:data];
                if (downloaded) {
                    dispatch_async(dispatch_get_main_queue(), ^{
                        weakImageView.image = downloaded;
                        self.avatarImage = downloaded;
                    });
                    return;
                }
            }
            dispatch_async(dispatch_get_main_queue(), ^{
                if (!self.avatarImage) {
                    weakImageView.image = [UIImage imageNamed:@"DefaultHead"];
                }
            });
        });
        return;
    }

    WPLog(@"Mio-Avatar", @"❌ 所有路径失败，使用默认头像");
    imageView.image = [UIImage imageNamed:@"DefaultHead"];
}

- (void)preloadAndRefreshAvatar {
    WPLog(@"Mio-Preload", @"preloadAndRefreshAvatar START wxid=%@", self.wxid);
    __weak typeof(self) weakSelf = self;
    BOOL isOfficialAccount = [self.wxid hasPrefix:@"gh_"];

    WPLog(@"Mio-Preload", @"⏳ ContactInfoViewController 预加载（仿微信优化 silentLoadContactExtInfo）...");
    Class contactInfoVCClass = objc_getClass("ContactInfoViewController");
    if (contactInfoVCClass) {
        id vc = [[contactInfoVCClass alloc] init];
        if (vc) {
            SEL setContactSel = NSSelectorFromString(@"setM_contact:");
            if ([vc respondsToSelector:setContactSel]) {
                ((void (*)(id, SEL, id))objc_msgSend)(vc, setContactSel, self.contact);
            }
            ((void (*)(id, SEL))objc_msgSend)(vc, @selector(viewDidLoad));
            WPLog(@"Mio-Preload", @"  ContactInfoViewController.viewDidLoad 已调用");
        }
    }

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.6 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        __strong typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf || !strongSelf.wxid) return;

        if (isOfficialAccount) {
            WPLog(@"Mio-Preload", @"  0.6s后重新读取 m_nsHeadImgUrl...");
            NSString *avatarURL = [strongSelf headImageURLFromContact];
            WPLog(@"Mio-Preload", @"  URL=%@", avatarURL ?: @"(空)");
            if (!avatarURL.length) return;

            if (strongSelf.avatarImage && strongSelf.avatarImage.size.width > 44) {
                WPLog(@"Mio-Preload", @"  已有非占位头像，跳过下载");
                return;
            }

            dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
                NSData *data = [NSData dataWithContentsOfURL:[NSURL URLWithString:avatarURL]];
                WPLog(@"Mio-Preload", @"    下载结果 data=%@ len=%lu", data ? @"YES":@"NO", (unsigned long)data.length);
                if (data) {
                    UIImage *downloaded = [UIImage imageWithData:data];
                    if (downloaded) {
                        dispatch_async(dispatch_get_main_queue(), ^{
                            __strong typeof(weakSelf) innerSelf = weakSelf;
                            if (innerSelf && innerSelf->_avatarView) {
                                WPLog(@"Mio-Preload", @"    ✅ URL下载成功 size=%.0fx%.0f", downloaded.size.width, downloaded.size.height);
                                innerSelf->_avatarView.image = downloaded;
                                innerSelf.avatarImage = downloaded;
                            }
                        });
                    }
                }
            });
            return;
        }

        WPLog(@"Mio-Preload", @"  0.6s后重试 MMHeadImageMgr...");
        id headImageMgr = WXGetService(objc_getClass("MMHeadImageMgr"));
        if (headImageMgr) {
            SEL getHeadSel = NSSelectorFromString(@"getHeadImage:withCategory:");
            if ([headImageMgr respondsToSelector:getHeadSel]) {
                UIImage *wxImg = ((UIImage *(*)(id, SEL, id, id))objc_msgSend)(headImageMgr, getHeadSel, strongSelf.wxid, @0);
                WPLog(@"Mio-Preload", @"    getHeadImage:withCategory: 结果=%@ size=%.0fx%.0f", wxImg ? @"有图":@"nil", wxImg.size.width, wxImg.size.height);
                if (wxImg && !strongSelf.avatarImage) {
                    WPLog(@"Mio-Preload", @"    ✅ MMHeadImageMgr 重试成功");
                    strongSelf->_avatarView.image = wxImg;
                    strongSelf.avatarImage = wxImg;
                    return;
                }
            }
        }

        if (strongSelf.avatarImage) return;

        WPLog(@"Mio-Preload", @"  ⏳ 回退到网络下载...");
        NSString *avatarURL = [strongSelf headImageURLFromContact];
        WPLog(@"Mio-Preload", @"  URL=%@", avatarURL ?: @"(空)");
        if (!avatarURL.length) return;

        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
            NSData *data = [NSData dataWithContentsOfURL:[NSURL URLWithString:avatarURL]];
            WPLog(@"Mio-Preload", @"    下载结果 data=%@ len=%lu", data ? @"YES":@"NO", (unsigned long)data.length);
            if (data) {
                UIImage *downloaded = [UIImage imageWithData:data];
                if (downloaded) {
                    dispatch_async(dispatch_get_main_queue(), ^{
                        __strong typeof(weakSelf) innerSelf = weakSelf;
                        if (innerSelf && innerSelf->_avatarView && !innerSelf.avatarImage) {
                            WPLog(@"Mio-Preload", @"    ✅ 网络下载成功 size=%.0fx%.0f", downloaded.size.width, downloaded.size.height);
                            innerSelf->_avatarView.image = downloaded;
                            innerSelf.avatarImage = downloaded;
                        }
                    });
                }
            }
        });
    });
}

- (NSString *)headImageURLFromContact {
    return WXContactHeadImageURL(self.contact);
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
    NSString *(^fmtWithAdmin)(NSUInteger, NSString *) = ^(NSUInteger total, NSString *adminStr) {
        if (adminStr.length) {
            return [NSString stringWithFormat:@"群人员%lu人 %@", (unsigned long)total, adminStr];
        }
        return [NSString stringWithFormat:@"%lu 人", (unsigned long)total];
    };

    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (contactMgr && [contactMgr respondsToSelector:@selector(getGroupMemberCountForContact:)]) {
        unsigned int count = (unsigned int)((unsigned int (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getGroupMemberCountForContact:), self.contact);
        if (count > 0) {
            return fmtWithAdmin(count, [self adminCountPart]);
        }
    }

    SEL memListSel = NSSelectorFromString(@"m_nsChatRoomMemList");
    if ([self.contact respondsToSelector:memListSel]) {
        id memList = ((id (*)(id, SEL))objc_msgSend)(self.contact, memListSel);
        if (memList && [memList isKindOfClass:[NSString class]]) {
            NSArray *members = [(NSString *)memList componentsSeparatedByString:@";"];
            if (members.count > 0) {
                return fmtWithAdmin(members.count, [self adminCountPart]);
            }
        }
    }

    return @"未知";
}

- (NSString *)adminCountPart {
    SEL adminListSel = NSSelectorFromString(@"m_nsChatRoomAdminList");
    if (![self.contact respondsToSelector:adminListSel]) return nil;

    id adminList = ((id (*)(id, SEL))objc_msgSend)(self.contact, adminListSel);
    if (!adminList || ![adminList isKindOfClass:[NSString class]]) return nil;

    NSArray *admins = [(NSString *)adminList componentsSeparatedByString:@";"];
    if (admins.count == 0) return nil;

    return [NSString stringWithFormat:@"管理员%lu人", (unsigned long)admins.count];
}

- (NSString *)verifyStatusValue {
    if (!contactRespondsTo(self.contact, @"m_uiVerifyFlag")) return @"未认证";
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