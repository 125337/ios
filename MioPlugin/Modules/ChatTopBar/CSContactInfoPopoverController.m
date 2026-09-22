#import "CSContactInfoPopoverController.h"
#import "WPCommonUI.h"
#import "../../Settings/Common/WPWeChatTable.h"
#import "../../Core/LogManager.h"
#import "AvatarLoader.h"
#import "../../Core/ServiceHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>

// 联系人信息弹窗：微信引擎渲染（引擎统一定论——禁止自绘列表项/分割线）。
// 头像区为 tableHeaderView 自绘卡（与入口页 hero 同款），信息行走微信原生 NavCell
// （与基类 addInfoRowInGroup 同款：tap 回调带行载荷，点击复制 + toast）。

@implementation CSContactInfoPopoverController {
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
    CGFloat h = self.preferredContentSize.height;
    if (w < 1) w = self.view.bounds.size.width;
    if (h < 1) h = self.view.bounds.size.height;

    // === 微信引擎表（弹窗内自布局：无导航栏，frame 覆盖整个 view）===
    WPWeChatTable *wc = [WPWeChatTable tableForVC:self];
    if (!wc) return;   // 引擎不可用则页面空白（与全站策略一致：无兜底）
    UITableView *tv = wc.tableView;
    tv.frame = CGRectMake(0, 0, w, h);
    tv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    tv.backgroundColor = WPBgColor();

    // === 头像区作 tableHeaderView（自绘卡，点击头像跳资料页）===
    UIView *headerWrap = [[UIView alloc] initWithFrame:CGRectMake(0, 0, w, 158)];
    headerWrap.backgroundColor = [UIColor clearColor];
    UIView *card = WPMakeCard(8, w);
    CGFloat cw = w - kPad * 2;
    CGFloat cy = 16;

    UIImageView *avatarView = [[UIImageView alloc] initWithFrame:CGRectMake((cw - 60) / 2, cy, 60, 60)];
    avatarView.layer.cornerRadius = 30;
    avatarView.clipsToBounds = YES;
    avatarView.contentMode = UIViewContentModeScaleAspectFill;
    avatarView.backgroundColor = [UIColor colorWithWhite:0.9 alpha:1.0];
    avatarView.userInteractionEnabled = YES;
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

    CGRect f = card.frame; f.size.height = cy + 24; card.frame = f;
    [headerWrap addSubview:card];
    // UIKit 已知要求：tableHeaderView.frame 修改后需重新赋值才会重算内容区布局
    tv.tableHeaderView = headerWrap;
    headerWrap.frame = CGRectMake(0, 0, w, 158);
    tv.tableHeaderView = headerWrap;

    // === 信息 section（基本信息/群聊信息/公众号信息）===
    NSArray *items;
    NSString *secTitle;
    if ([self.wxid containsString:@"@chatroom"]) {
        items = [self groupInfoItems];     secTitle = @"群聊信息";
    } else if ([self.wxid hasPrefix:@"gh_"]) {
        items = [self officialAccountInfoItems]; secTitle = @"公众号信息";
    } else {
        items = [self basicInfoItems];     secTitle = @"基本信息";
    }

    WPWGroup *g = [wc addGroup];
    [g wpSetHeader:secTitle footer:nil];
    for (NSUInteger i = 0; i < items.count; i++) {
        NSDictionary *item = items[i];
        NSString *value = [self valueForInfoKey:item[@"key"]];
        id cell = WPWCNavCell(@selector(wpInfoTap:), self, item[@"label"], value);
        if (cell) {
            NSDictionary *row = @{@"label": item[@"label"] ?: @"",
                                  @"key": item[@"key"] ?: @"",
                                  @"copiable": item[@"copiable"] ?: @NO,
                                  @"copyText": value ?: @""};
            objc_setAssociatedObject(cell, "wprow", row, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            @try { [(id)cell setValue:row forKey:@"userInfo"]; } @catch (NSException *e) {}
            [g addCell:cell];
        }
    }

    [self.view addSubview:tv];
    [wc reloadAsync];
}

#pragma mark - 信息行点击（与基类 wpWCTapRow copy 分支同款）

- (void)wpInfoTap:(id)arg {
    id row = nil;
    if (arg) {
        @try {
            id ui = [arg valueForKey:@"userInfo"];
            if ([ui isKindOfClass:[NSDictionary class]]) row = ui;
        } @catch (NSException *e) {}
        if (!row) row = objc_getAssociatedObject(arg, "wprow");
    }
    if (![row isKindOfClass:[NSDictionary class]]) return;
    if (![row[@"copiable"] boolValue]) return;

    NSString *text = row[@"copyText"];
    if (!text.length) return;

    [UIPasteboard generalPasteboard].string = text;
    WPShowToast([NSString stringWithFormat:@"已复制%@: %@", row[@"label"] ?: @"", text]);

    UIImpactFeedbackGenerator *gen = [[UIImpactFeedbackGenerator alloc]
        initWithStyle:UIImpactFeedbackStyleLight];
    [gen prepare];
    [gen impactOccurred];
}

#pragma mark - 头像加载

- (void)loadAvatarForImageView:(UIImageView *)imageView {
    if (!self.wxid.length) {
        imageView.image = [UIImage imageNamed:@"DefaultHead"];
        return;
    }

    // 优先使用外部传入的 avatarImage（无论是否公众号）
    if (self.avatarImage) {
        imageView.image = self.avatarImage;
        return;
    }

    // 无外部缓存，继续原有逻辑（公众号会走到这里）
    [[AvatarLoader shared] loadAvatarForWxid:self.wxid contact:nil completion:^(UIImage *image) {
        if (image) {
            imageView.image = image;
            self.avatarImage = image;
        } else if (!self.avatarImage) {
            imageView.image = [UIImage imageNamed:@"DefaultHead"];
        }
    }];
}

#pragma mark - 信息项定义

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

- (NSArray *)groupInfoItems {
    return @[
        @{@"label": @"群主",       @"key": @"groupOwner",      @"copiable": @YES},
        @{@"label": @"成员",     @"key": @"groupMemberCount", @"copiable": @NO},
        @{@"label": @"id",     @"key": @"wxid",            @"copiable": @YES},
        @{@"label": @"备注",       @"key": @"remark",          @"copiable": @YES},
    ];
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

#pragma mark - 头像点击 → 跳转资料页

- (void)onAvatarTapped:(UITapGestureRecognizer *)gesture {
    [self handleProfileNavigation];
}

- (void)handleProfileNavigation {
    if (!self.wxid) return;

    // 直接使用已持有的 contact 对象（参考实现使用 associatedObject 等价方案）
    id contact = self.contact;
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

/// 群主昵称
- (NSString *)groupOwnerValue {
    NSString *v = WXSafeStringGet(self.contact, @"m_nsOwner");
    return v ?: @"未知";
}

- (NSString *)groupMemberCountValue {
    id contact = self.contact;
    if (!contact) return @"未知";

    // === 成员数量 ===
    // 方案一：优先通过 CContactMgr 获取（保留但不依赖）
    NSUInteger memberCount = 0;
    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (contactMgr && [contactMgr respondsToSelector:@selector(getGroupMemberCountForContact:)]) {
        unsigned int count = (unsigned int)((unsigned int (*)(id, SEL, id))objc_msgSend)(
            contactMgr, @selector(getGroupMemberCountForContact:), contact);
        if (count > 0) {
            memberCount = count;
        }
    }

    // 方案二：手动解析 m_nsChatRoomMemList（兜底）
    if (memberCount == 0) {
        NSString *memList = WXSafeStringGet(contact, @"m_nsChatRoomMemList");
        if (memList.length) {
            NSArray *members = [memList componentsSeparatedByString:@";"];
            memberCount = members.count;
        }
    }

    if (memberCount == 0) return @"未知";

    // === 管理员数量 ===
    NSUInteger adminCount = 0;
    NSString *adminList = WXSafeStringGet(contact, @"m_nsChatRoomAdminList");
    if (adminList.length) {
        NSArray *admins = [adminList componentsSeparatedByString:@";"];
        adminCount = admins.count;
    }

    // === 格式化输出 ===
    if (adminCount > 0) {
        return [NSString stringWithFormat:@"群人员%lu人 管理员%lu人",
                (unsigned long)memberCount, (unsigned long)adminCount];
    }
    return [NSString stringWithFormat:@"群人员%lu人", (unsigned long)memberCount];
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

@end
