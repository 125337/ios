// CSContactInfoPopoverController.m — MRC 环境
// 基于 123456.c 反编译分析实现自定义联系人信息弹窗
#import "CSContactInfoPopoverController.h"
#import <objc/runtime.h>
#import <objc/message.h>

#pragma mark - infoCardHeight

static const CGFloat kPopoverRowH = 50.0;

#pragma mark - 辅助：从 contact KVC 取值

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

@implementation CSContactInfoPopoverController

- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar {
    self = [super init];
    if (self) {
        _contact = [contact retain];
        _avatarImage = [avatar retain];
        if (contact) {
            id usrName = contactValueForKey(contact, @"m_nsUsrName");
            _wxid = [usrName retain];
        }
    }
    return self;
}

- (void)dealloc {
    [_contact release];
    [_wxid release];
    [_avatarImage release];
    [super dealloc];
}

- (UIModalPresentationStyle)adaptivePresentationStyleForPresentationController:
        (UIPresentationController *)controller {
    return UIModalPresentationNone;
}

#pragma mark - viewDidLoad

- (void)viewDidLoad {
    [super viewDidLoad];

    self.view.backgroundColor = [UIColor colorWithRed:0.96 green:0.96 blue:0.97 alpha:1.0];

    CGFloat width = self.view.bounds.size.width;

    // UIScrollView
    UIScrollView *scrollView = [[UIScrollView alloc] init];
    scrollView.frame = self.view.bounds;
    scrollView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    scrollView.showsVerticalScrollIndicator = NO;
    [self.view addSubview:scrollView];
    [scrollView release];

    // 头像卡片
    UIView *headerView = [self createHeaderView];
    [scrollView addSubview:headerView];
    [headerView release];

    // 信息卡片
    UIView *infoCard = [self createInfoCardView];
    CGFloat infoY = CGRectGetMaxY(headerView.frame) + 12;
    infoCard.frame = CGRectMake(16, infoY, width - 32, [self infoCardHeight]);
    [scrollView addSubview:infoCard];
    [infoCard release];

    // 底部提示
    UILabel *tip = [[UILabel alloc] init];
    tip.text = @"点击信息项复制到剪贴板";
    tip.font = [UIFont systemFontOfSize:11];
    tip.textColor = [UIColor grayColor];
    tip.textAlignment = NSTextAlignmentCenter;
    tip.frame = CGRectMake(0, CGRectGetMaxY(infoCard.frame) + 16, width, 20);
    [scrollView addSubview:tip];
    [tip release];

    scrollView.contentSize = CGSizeMake(width, CGRectGetMaxY(tip.frame) + 20);
}

#pragma mark - 创建 UI

- (UIView *)createHeaderView {
    CGFloat width = self.view.bounds.size.width;
    UIView *card = [[UIView alloc] initWithFrame:CGRectMake(16, 12, width - 32, 180)];
    card.backgroundColor = [UIColor whiteColor];
    card.layer.cornerRadius = 16;
    card.clipsToBounds = YES;

    // 头像
    UIImageView *avatar = [[UIImageView alloc] init];
    avatar.frame = CGRectMake((card.bounds.size.width - 60) / 2, 30, 60, 60);
    avatar.layer.cornerRadius = 30;
    avatar.clipsToBounds = YES;
    avatar.contentMode = UIViewContentModeScaleAspectFill;
    if (self.avatarImage) {
        avatar.image = self.avatarImage;
    }
    [card addSubview:avatar];
    [avatar release];

    // 昵称
    UILabel *nickname = [[UILabel alloc] init];
    nickname.frame = CGRectMake(20, 100, card.bounds.size.width - 40, 28);
    nickname.textAlignment = NSTextAlignmentCenter;
    nickname.font = [UIFont boldSystemFontOfSize:18];
    id name = contactValueForKey(self.contact, @"m_nsNickName");
    nickname.text = name ?: @"";
    [card addSubview:nickname];
    [nickname release];

    return card;
}

- (UIView *)createInfoCardView {
    CGFloat cardWidth = self.view.bounds.size.width - 32;
    UIView *card = [[UIView alloc] init];
    card.backgroundColor = [UIColor whiteColor];
    card.layer.cornerRadius = 16;
    card.clipsToBounds = YES;

    NSArray *items = @[
        @{@"label": @"主页",   @"key": @"homepage",   @"copiable": @NO},
        @{@"label": @"类型",   @"key": @"chatType",   @"copiable": @NO},
        @{@"label": @"微信",   @"key": @"wxid",       @"copiable": @YES},
        @{@"label": @"备注",   @"key": @"remark",     @"copiable": @YES},
        @{@"label": @"性别",   @"key": @"gender",     @"copiable": @NO},
        @{@"label": @"地区",   @"key": @"location",   @"copiable": @NO},
        @{@"label": @"签名",   @"key": @"signature",  @"copiable": @YES},
    ];

    for (NSInteger i = 0; i < (NSInteger)items.count; i++) {
        NSDictionary *item = items[i];
        CGFloat y = i * kPopoverRowH;

        // 左侧 label
        UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(20, 0, 60, kPopoverRowH)];
        label.text = item[@"label"];
        label.font = [UIFont systemFontOfSize:14];
        label.textColor = [UIColor blackColor];
        [card addSubview:label];
        [label release];

        // 右侧 value
        UILabel *value = [[UILabel alloc] initWithFrame:CGRectMake(100, 0, cardWidth - 120, kPopoverRowH)];
        value.text = [self valueForInfoKey:item[@"key"]];
        value.font = [UIFont systemFontOfSize:13];
        value.textColor = [UIColor colorWithRed:0.56 green:0.56 blue:0.58 alpha:1.0];
        [card addSubview:value];
        [value release];

        // 分割线
        if (i < (NSInteger)items.count - 1) {
            UIView *sep = [[UIView alloc] initWithFrame:CGRectMake(0, y + kPopoverRowH - 0.5, cardWidth, 0.5)];
            sep.backgroundColor = [UIColor colorWithRed:0.92 green:0.92 blue:0.93 alpha:1.0];
            [card addSubview:sep];
            [sep release];
        }

        // 可复制行：覆盖透明 view + 手势
        BOOL copiable = [item[@"copiable"] boolValue];
        NSString *key = item[@"key"];

        if (copiable || [key isEqualToString:@"homepage"]) {
            UIView *rowView = [[UIView alloc] initWithFrame:CGRectMake(0, y, cardWidth, kPopoverRowH)];
            rowView.backgroundColor = [UIColor clearColor];
            UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]
                initWithTarget:self action:@selector(onInfoRowTapped:)];
            [rowView addGestureRecognizer:tap];
            [tap release];
            objc_setAssociatedObject(rowView, "infoKey", key, OBJC_ASSOCIATION_COPY_NONATOMIC);
            objc_setAssociatedObject(rowView, "copyText", value.text, OBJC_ASSOCIATION_COPY_NONATOMIC);
            [card addSubview:rowView];
            [rowView release];
        }
    }

    return card;
}

- (CGFloat)infoCardHeight {
    return 7 * kPopoverRowH;
}

#pragma mark - 数据取值（参考 123456.c KVC 方式）

- (NSString *)valueForInfoKey:(NSString *)key {
    if ([key isEqualToString:@"homepage"]) {
        return @"点击进入信息页";
    }
    if ([key isEqualToString:@"chatType"]) {
        return [self chatTypeValue];
    }
    if ([key isEqualToString:@"wxid"]) {
        return self.wxid ?: @"";
    }
    if ([key isEqualToString:@"remark"]) {
        return [self remarkValue];
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
    return @"";
}

- (NSString *)chatTypeValue {
    if (!self.wxid) return @"私聊";
    if ([self.wxid containsString:@"@chatroom"]) return @"群聊";
    if ([self.wxid hasPrefix:@"gh_"]) return @"公众号";
    return @"私聊";
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
    if (!province || [(NSString *)province length] == 0) {
        if (city && [(NSString *)city length] > 0) return city;
        return @"未设置";
    }
    NSString *trimmed = [province stringByTrimmingCharactersInSet:
        [NSCharacterSet whitespaceCharacterSet]];
    if ([trimmed length] == 0) return @"未设置";
    return [NSString stringWithFormat:@"%@ %@", trimmed, city ?: @""];
}

- (NSString *)signatureValue {
    id sig = contactValueForKey(self.contact, @"m_nsSignature");
    if (sig && [sig isKindOfClass:[NSString class]] && [(NSString *)sig length] > 0) {
        return sig;
    }
    return @"未设置";
}

#pragma mark - 点击交互

- (void)onInfoRowTapped:(UITapGestureRecognizer *)gesture {
    UIView *rowView = gesture.view;
    NSString *key = objc_getAssociatedObject(rowView, "infoKey");

    if ([key isEqualToString:@"homepage"]) {
        [self onHomepageTapped];
        return;
    }

    // 复制到剪贴板
    NSString *text = objc_getAssociatedObject(rowView, "copyText");
    if (!text || text.length == 0) return;

    [UIPasteboard generalPasteboard].string = text;

    // haptic 反馈
    UIImpactFeedbackGenerator *gen = [[[UIImpactFeedbackGenerator alloc]
        initWithStyle:UIImpactFeedbackStyleLight] autorelease];
    [gen prepare];
    [gen impactOccurred];
}

- (void)onHomepageTapped {
    NSString *usrName = contactValueForKey(self.contact, @"m_nsUsrName");
    if (!usrName) return;

    Class infoVC = objc_getClass("WCUserInfoViewController");
    if (!infoVC) return;

    id vc = ((id (*)(Class, SEL))objc_msgSend)(infoVC, NSSelectorFromString(@"alloc"));
    vc = ((id (*)(id, SEL, id, id))objc_msgSend)(vc,
        NSSelectorFromString(@"initWithUsrName:contact:"), usrName, self.contact);
    if (!vc) return;

    // dismiss 当前 popover，然后 push
    UIViewController *parent = self.presentingViewController;
    [self dismissViewControllerAnimated:YES completion:^{
        if (parent && parent.navigationController) {
            [parent.navigationController pushViewController:vc animated:YES];
        }
        [vc release];
    }];
}

@end