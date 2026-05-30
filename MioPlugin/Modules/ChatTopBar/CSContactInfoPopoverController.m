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

#pragma mark - 工厂方法扩展（适配窄卡片）

static void WPAddInfoRow66(UIView *card, CGFloat cy, CGFloat cw, NSString *left, NSString *right) {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, 80, kRowH)];
    l.text = left;
    l.font = [UIFont systemFontOfSize:15 weight:UIFontWeightMedium];
    l.textColor = WPT1();
    [card addSubview:l];

    UILabel *r = [[UILabel alloc] initWithFrame:CGRectMake(cw - kPad - 130, cy, 130, kRowH)];
    r.text = right;
    r.font = [UIFont systemFontOfSize:13];
    r.textColor = WPT2();
    r.textAlignment = NSTextAlignmentRight;
    [card addSubview:r];
}

#pragma mark - 信息行定义

static NSArray *s_infoItems(void) {
    static NSArray *items = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        items = @[
            @{@"label": @"类型",   @"key": @"chatType",   @"copiable": @NO},
            @{@"label": @"微信",   @"key": @"wxid",       @"copiable": @YES},
            @{@"label": @"备注",   @"key": @"remark",     @"copiable": @YES},
            @{@"label": @"性别",   @"key": @"gender",     @"copiable": @NO},
            @{@"label": @"地区",   @"key": @"location",   @"copiable": @NO},
            @{@"label": @"签名",   @"key": @"signature",  @"copiable": @YES},
        ];
    });
    return items;
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

    y = [self buildInfoCardAtY:y width:w];

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
    if (self.avatarImage) avatarView.image = self.avatarImage;
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

#pragma mark - 信息卡片

- (CGFloat)buildInfoCardAtY:(CGFloat)y width:(CGFloat)w {
    [_scrollView addSubview:WPMakeSectionHeader(@"基本信息", y, w)];
    y += 32;

    UIView *card = WPMakeCard(y, w);
    CGFloat cw = w - kPad * 2;
    CGFloat cy = 0;
    CGFloat scale = [UIScreen mainScreen].scale;

    NSArray *items = s_infoItems();
    for (NSUInteger i = 0; i < items.count; i++) {
        if (i > 0) {
            WPAddSep(card, cy, cw);
            cy = round((cy + 1.0 / scale) * scale) / scale;
        }
        NSDictionary *item = items[i];
        WPAddInfoRow66(card, cy, cw, item[@"label"], [self valueForInfoKey:item[@"key"]]);

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

#pragma mark - 点击

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

#pragma mark - 数据取值

- (NSString *)valueForInfoKey:(NSString *)key {
    if ([key isEqualToString:@"chatType"]) return [self chatTypeValue];
    if ([key isEqualToString:@"wxid"])     return self.wxid ?: @"";
    if ([key isEqualToString:@"remark"])   return [self remarkValue];
    if ([key isEqualToString:@"gender"])   return [self genderValue];
    if ([key isEqualToString:@"location"]) return [self locationValue];
    if ([key isEqualToString:@"signature"]) return [self signatureValue];
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
    if (remark && [remark isKindOfClass:[NSString class]] && [(NSString *)remark length] > 0) return remark;
    id remarkName = contactValueForKey(self.contact, @"m_nsRemarkName");
    if (remarkName && [remarkName isKindOfClass:[NSString class]] && [(NSString *)remarkName length] > 0) return remarkName;
    return @"未设置";
}

- (NSString *)genderValue {
    SEL m_uiSex = NSSelectorFromString(@"m_uiSex");
    if (!((BOOL (*)(id, SEL, SEL))objc_msgSend)(self.contact, @selector(respondsToSelector:), m_uiSex)) return @"未知";
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
    NSString *trimmed = [province stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];
    if ([trimmed length] == 0) return @"未设置";
    return [NSString stringWithFormat:@"%@ %@", trimmed, city ?: @""];
}

- (NSString *)signatureValue {
    id sig = contactValueForKey(self.contact, @"m_nsSignature");
    if (sig && [sig isKindOfClass:[NSString class]] && [(NSString *)sig length] > 0) return sig;
    return @"未设置";
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