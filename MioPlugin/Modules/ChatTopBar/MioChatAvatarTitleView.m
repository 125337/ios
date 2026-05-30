#import "MioChatAvatarTitleView.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import "CSContactInfoPopoverController.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <ImageIO/ImageIO.h>

@implementation MioChatAvatarTitleView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor clearColor];
        self.clipsToBounds = YES;
        [self setupSubviews];
    }
    return self;
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

#pragma mark - Setup

- (void)setupSubviews {
    PluginConfig *config = [PluginConfig shared];

    // 1. leftAvatarView
    UIImageView *la = [[UIImageView alloc] init];
    [self addSubview:la];
    [self setLeftAvatarView:la];
    [la setContentMode:UIViewContentModeScaleAspectFill];
    [la setTag:2];
    [la setClipsToBounds:YES];
    [la setUserInteractionEnabled:YES];
    UITapGestureRecognizer *leftTap = [[UITapGestureRecognizer alloc]
        initWithTarget:self action:@selector(onLeftAvatarTapped:)];
    [la addGestureRecognizer:leftTap];

    // 2. rightAvatarView
    UIImageView *ra = [[UIImageView alloc] init];
    [self addSubview:ra];
    [self setRightAvatarView:ra];
    [ra setContentMode:UIViewContentModeScaleAspectFill];
    [ra setTag:2];
    [ra setClipsToBounds:YES];
    [ra setUserInteractionEnabled:YES];
    UITapGestureRecognizer *rightTap = [[UITapGestureRecognizer alloc]
        initWithTarget:self action:@selector(onRightAvatarTapped:)];
    [ra addGestureRecognizer:rightTap];

    // 3. separatorView
    UIImageView *sv = [[UIImageView alloc] init];
    [self addSubview:sv];
    [self setSeparatorView:sv];
    [sv setContentMode:UIViewContentModeScaleAspectFill];
    [sv setUserInteractionEnabled:YES];
    [sv setHidden:YES];

    // 4. separatorTextLabel
    UILabel *st = [[UILabel alloc] init];
    [self addSubview:st];
    [self setSeparatorTextLabel:st];
    CGFloat sepFontSize = MAX(8.0, MIN(config.chatSeparatorSize * 0.4, 16.0));
    [st setFont:[UIFont systemFontOfSize:sepFontSize weight:UIFontWeightMedium]];
    [st setTextColor:[UIColor grayColor]];
    [st setHidden:YES];

    // 5. titleLabel (昵称)
    UILabel *tl = [[UILabel alloc] init];
    [self addSubview:tl];
    [self setTitleLabel:tl];
    [tl setFont:[UIFont systemFontOfSize:config.chatNicknameFontSize]];
    [tl setTextColor:[UIColor grayColor]];
    [tl setNumberOfLines:1];
    [tl setHidden:YES];
}

#pragma mark - Layout

- (void)layoutSubviews {
    [super layoutSubviews];

    PluginConfig *config = [PluginConfig shared];
    NSInteger mode = config.chatDisplayMode;
    CGFloat totalH = self.bounds.size.height;
    CGFloat totalW = self.bounds.size.width;
    CGFloat avatarSize = config.chatAvatarSize;
    CGFloat avatarSpacing = config.chatAvatarSpacing;
    CGFloat halfSpacing = avatarSpacing * 0.5;
    CGFloat nameFontSize = config.chatNicknameFontSize;

    BOOL hasSeparator = (config.chatSeparatorText.length > 0);

    // avatarY: mode 3(双方+名) 和 mode 4(自己+名) 偏上留空间
    CGFloat avatarY;
    if (mode == 3 || mode == 4) {
        avatarY = (totalH - avatarSize - 4 - nameFontSize) * 0.5 + 1;
    } else {
        avatarY = (totalH - avatarSize) * 0.5;
    }

    // ============ Mode 7: 显示双方头像(重叠) ============
    if (mode == 7) {
        self.leftAvatarView.frame = CGRectMake(0, avatarY, avatarSize, avatarSize);
        self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

        CGFloat smallSize = avatarSize * 0.85;
        CGFloat offset = avatarSize * 0.7;
        self.rightAvatarView.frame = CGRectMake(offset, avatarY + (avatarSize - smallSize), smallSize, smallSize);
        self.rightAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:smallSize];

        self.separatorView.hidden = YES;
        self.separatorTextLabel.hidden = YES;
        self.titleLabel.hidden = YES;
        return;
    }

    // ============ Mode 5: 显示对方头像(名字在左侧) ============
    if (mode == 5) {
        self.separatorView.hidden = YES;
        self.separatorTextLabel.hidden = YES;
        self.rightAvatarView.hidden = YES;
        self.titleLabel.hidden = NO;

        CGFloat nameWidth = [self calculateNameWidth];
        CGFloat gap = 8.0;

        self.titleLabel.textAlignment = NSTextAlignmentLeft;
        [self.titleLabel setFont:[UIFont systemFontOfSize:nameFontSize]];
        self.titleLabel.frame = CGRectMake(
            (totalW - avatarSize - nameWidth - gap) * 0.5 + config.chatNicknameOffsetX,
            avatarY + (avatarSize - nameFontSize) * 0.5 - config.chatNicknameOffsetY,
            nameWidth, nameFontSize);

        self.leftAvatarView.frame = CGRectMake(
            CGRectGetMaxX(self.titleLabel.frame) + gap,
            avatarY, avatarSize, avatarSize);
        self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];
        return;
    }

    // ============ Mode 6: 显示对方头像(名字在右侧) ============
    if (mode == 6) {
        self.rightAvatarView.hidden = YES;
        self.separatorView.hidden = YES;
        self.separatorTextLabel.hidden = YES;
        self.titleLabel.hidden = NO;
        self.leftAvatarView.hidden = NO;

        CGFloat nameWidth = [self calculateNameWidth];
        CGFloat gap = 8.0;

        CGFloat avatarX = (totalW - avatarSize - nameWidth - gap) * 0.5;
        self.leftAvatarView.frame = CGRectMake(avatarX, avatarY, avatarSize, avatarSize);
        self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

        [self.titleLabel setFont:[UIFont systemFontOfSize:nameFontSize]];
        self.titleLabel.textAlignment = NSTextAlignmentRight;
        CGFloat nameX = avatarX + avatarSize + gap + config.chatNicknameOffsetX;
        self.titleLabel.frame = CGRectMake(nameX,
            avatarY + (avatarSize - nameFontSize) * 0.5 - config.chatNicknameOffsetY,
            nameWidth, nameFontSize);
        return;
    }

    // ============ Mode 0: 显示自己头像 (右头像居中, 无名字) ============
    // ============ Mode 4: 显示自己头像(名字在下方) ============
    if (mode == 0 || mode == 4) {
        BOOL showName = (mode == 4);

        self.leftAvatarView.hidden = YES;
        self.rightAvatarView.hidden = NO;
        self.separatorView.hidden = YES;
        self.separatorTextLabel.hidden = YES;
        self.titleLabel.hidden = !showName;

        self.rightAvatarView.frame = CGRectMake((totalW - avatarSize) * 0.5, avatarY,
                                                 avatarSize, avatarSize);
        self.rightAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

        if (showName) {
            [self.titleLabel setFont:[UIFont systemFontOfSize:nameFontSize]];
            self.titleLabel.textAlignment = NSTextAlignmentCenter;
            self.titleLabel.frame = CGRectMake(0, avatarY + avatarSize + 1, totalW, nameFontSize);
            CGRect f = self.titleLabel.frame;
            f.origin.x += config.chatNicknameOffsetX;
            f.origin.y -= config.chatNicknameOffsetY;
            self.titleLabel.frame = f;
        }
        return;
    }

    // ============ Mode 1: 显示对方头像 (左头像居中, 无名字) ============
    if (mode == 1) {
        self.rightAvatarView.hidden = YES;
        self.separatorView.hidden = YES;
        self.separatorTextLabel.hidden = YES;
        self.titleLabel.hidden = YES;

        self.leftAvatarView.frame = CGRectMake((totalW - avatarSize) * 0.5, avatarY,
                                                avatarSize, avatarSize);
        self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];
        return;
    }

    // ============ Mode 2: 显示双方头像 (无名字) ============
    // ============ Mode 3: 显示双方头像(名字在下方) ============
    // ============ + default (双方头像 + 分隔符) ============
    BOOL showName = (mode == 3);
    self.titleLabel.hidden = !showName;
    self.leftAvatarView.hidden = NO;
    self.rightAvatarView.hidden = NO;

    if (hasSeparator) {
        self.separatorTextLabel.hidden = !config.chatSeparatorText.length;

        CGFloat totalContentW;
        if (config.chatSeparatorText.length > 0) {
            self.separatorTextLabel.text = config.chatSeparatorText;
            [self.separatorTextLabel sizeToFit];
            totalContentW = avatarSize + halfSpacing + self.separatorTextLabel.frame.size.width + halfSpacing + avatarSize;
        } else {
            totalContentW = avatarSize + avatarSpacing + avatarSize;
            self.separatorTextLabel.hidden = YES;
        }

        CGFloat startX = (totalW - totalContentW) * 0.5;
        self.leftAvatarView.frame = CGRectMake(startX, avatarY, avatarSize, avatarSize);

        if (!self.separatorTextLabel.hidden) {
            self.separatorTextLabel.frame = CGRectMake(startX + avatarSize + halfSpacing,
                (totalH - self.separatorTextLabel.frame.size.height) * 0.5,
                self.separatorTextLabel.frame.size.width,
                self.separatorTextLabel.frame.size.height);
            self.rightAvatarView.frame = CGRectMake(CGRectGetMaxX(self.separatorTextLabel.frame) + halfSpacing,
                avatarY, avatarSize, avatarSize);
        } else {
            self.rightAvatarView.frame = CGRectMake(startX + avatarSize + avatarSpacing,
                avatarY, avatarSize, avatarSize);
        }
        self.separatorView.hidden = YES;
    } else {
        CGFloat dualW = avatarSize * 2 + avatarSpacing;
        CGFloat startX = (totalW - dualW) * 0.5;
        self.separatorTextLabel.hidden = YES;
        self.separatorView.hidden = YES;
        self.leftAvatarView.frame  = CGRectMake(startX, avatarY, avatarSize, avatarSize);
        self.rightAvatarView.frame = CGRectMake(startX + avatarSize + avatarSpacing, avatarY, avatarSize, avatarSize);
    }

    self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];
    self.rightAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

    if (showName) {
        [self.titleLabel setFont:[UIFont systemFontOfSize:nameFontSize]];
        self.titleLabel.textAlignment = NSTextAlignmentCenter;
        self.titleLabel.frame = CGRectMake(0, avatarY + avatarSize + 1, totalW, nameFontSize);
    }

    [self applyPositionOffset];
}

#pragma mark - Avatar Update

- (void)updateAvatars {
    if (!self.chatController) return;

    PluginConfig *config = [PluginConfig shared];

    // Get contact info
    id contact = ((id (*)(id, SEL))objc_msgSend)(self.chatController, NSSelectorFromString(@"GetContact"));
    if (!contact) return;

    NSString *opponentWxid = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
    NSString *nickname = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsNickName"));
    NSString *selfWxid = [self getSelfWxid];

    // Load avatars
    UIImage *opponentAvatar = [self loadAvatarWithPriorityForWxid:opponentWxid];
    UIImage *selfAvatar = [self loadAvatarWithPriorityForWxid:selfWxid];

    // Build title text
    NSString *titleText = nickname ?: @"";
    BOOL isGroup = [opponentWxid containsString:@"@chatroom"];

    if (isGroup && config.showGroupMemberCount) {
        // Get group member count via CContactMgr
        Class serviceCenter = objc_getClass("MMServiceCenter");
        if (serviceCenter) {
            id center = ((id (*)(Class, SEL))objc_msgSend)(serviceCenter, NSSelectorFromString(@"defaultCenter"));
            id contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), objc_getClass("CContactMgr"));
            if (contactMgr && [contactMgr respondsToSelector:@selector(getGroupMemberCountForContact:)]) {
                unsigned int count = (unsigned int)((unsigned int (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getGroupMemberCountForContact:), contact);
                NSString *suffix = config.chatGroupMemberCountSuffix.length > 0
                    ? config.chatGroupMemberCountSuffix : @"%ld人";
                titleText = [NSString stringWithFormat:@"%@%@",
                    nickname ?: @"",
                    [NSString stringWithFormat:suffix, (long)count]];
            }
        }
    } else if (!isGroup && config.showAddTime) {
        // Get add time — try m_uiAddCreateTime first, fallback to m_uiAddTime
        unsigned int addTime = 0;
        SEL addCreateSel = NSSelectorFromString(@"m_uiAddCreateTime");
        if ([contact respondsToSelector:addCreateSel]) {
            addTime = (unsigned int)((unsigned int (*)(id, SEL))objc_msgSend)(contact, addCreateSel);
        }
        if (addTime == 0 && [contact respondsToSelector:@selector(m_uiAddTime)]) {
            addTime = (unsigned int)((unsigned int (*)(id, SEL))objc_msgSend)(contact, @selector(m_uiAddTime));
        }
        if (addTime > 0) {
            NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
            NSTimeInterval diff = now - addTime;
            if (diff > -86400) {
                NSInteger days = (NSInteger)(diff / 86400.0);
                NSString *suffix = config.chatAddTimeSuffixFormat.length > 0
                        ? config.chatAddTimeSuffixFormat : @"%ld天";
                titleText = [NSString stringWithFormat:@"%@%@",
                    nickname ?: @"",
                    [NSString stringWithFormat:suffix, (long)days]];
            }
        } else {
            [self silentLoadContactExtInfo:contact];
        }
    }

    // Load separator — GIF check merged into loadSeparatorIcon
    if (![self loadSeparatorIcon]) {
        [self loadSeparatorText];
    }

    self.leftAvatarView.image = opponentAvatar ?: [UIImage imageNamed:@"DefaultHead"];
    self.rightAvatarView.image = selfAvatar ?: [UIImage imageNamed:@"DefaultHead"];
    self.titleLabel.text = titleText;
}

- (NSString *)getSelfWxid {
    Class serviceCenter = objc_getClass("MMServiceCenter");
    if (!serviceCenter) return @"";

    id center = ((id (*)(Class, SEL))objc_msgSend)(serviceCenter, NSSelectorFromString(@"defaultCenter"));
    id contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), objc_getClass("CContactMgr"));
    if (contactMgr && [contactMgr respondsToSelector:@selector(getSelfContact)]) {
        id selfContact = ((id (*)(id, SEL))objc_msgSend)(contactMgr, @selector(getSelfContact));
        if (selfContact && [selfContact respondsToSelector:@selector(m_nsUsrName)]) {
            return ((NSString *(*)(id, SEL))objc_msgSend)(selfContact, @selector(m_nsUsrName));
        }
    }

    return @"";
}

#pragma mark - Avatar Loading

- (UIImage *)createAnimatedImageFromGIFData:(NSData *)data {
    if (!data) return nil;
    CGImageSourceRef source = CGImageSourceCreateWithData((CFDataRef)data, NULL);
    if (!source) return nil;

    size_t count = CGImageSourceGetCount(source);
    if (count < 2) {
        CFRelease(source);
        return [UIImage imageWithData:data];
    }

    NSMutableArray *images = [NSMutableArray array];
    NSTimeInterval totalDuration = 0;

    for (size_t i = 0; i < count; i++) {
        CGImageRef cgImage = CGImageSourceCreateImageAtIndex(source, i, NULL);
        if (!cgImage) continue;

        NSDictionary *props = CFBridgingRelease(CGImageSourceCopyPropertiesAtIndex(source, i, NULL));
        if (props) {
            NSDictionary *gifProps = props[(NSString *)kCGImagePropertyGIFDictionary];
            NSNumber *delay = gifProps[(NSString *)kCGImagePropertyGIFUnclampedDelayTime];
            if (!delay) delay = gifProps[(NSString *)kCGImagePropertyGIFDelayTime];
            NSTimeInterval dt = delay ? [delay doubleValue] : 0.1;
            totalDuration += dt;
        } else {
            totalDuration += 0.1;
        }

        [images addObject:[UIImage imageWithCGImage:cgImage]];
        CGImageRelease(cgImage);
    }

    CFRelease(source);
    if (images.count == 0) return nil;
    return [UIImage animatedImageWithImages:images duration:totalDuration];
}

- (UIImage *)loadAvatarWithPriorityForWxid:(NSString *)wxid {
    if (!wxid.length) return nil;

    // 1. Try custom avatar first
    UIImage *custom = [self loadCustomAvatarForWxid:wxid];
    if (custom) return custom;

    // 2. Try WeChat native avatar
    UIImage *native = [self loadWeChatAvatarForWxid:wxid];
    if (native) return native;

    return nil;
}

- (UIImage *)loadCustomAvatarForWxid:(NSString *)wxid {
    NSString *dir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    if (!dir) return nil;

    // 1. Try .gif first
    NSString *gifPath = [dir stringByAppendingPathComponent:
        [NSString stringWithFormat:@"HBWechatHelper/UserHeadImage/%@.gif", wxid]];
    if ([[NSFileManager defaultManager] fileExistsAtPath:gifPath]) {
        NSData *data = [NSData dataWithContentsOfFile:gifPath];
        return [self createAnimatedImageFromGIFData:data];
    }

    // 2. Try .jpg
    NSString *jpgPath = [dir stringByAppendingPathComponent:
        [NSString stringWithFormat:@"HBWechatHelper/UserHeadImage/%@.jpg", wxid]];
    if ([[NSFileManager defaultManager] fileExistsAtPath:jpgPath]) {
        NSData *data = [NSData dataWithContentsOfFile:jpgPath];
        return [UIImage imageWithData:data];
    }

    return nil;
}

- (UIImage *)loadWeChatAvatarForWxid:(NSString *)wxid {
    Class serviceCenter = objc_getClass("MMServiceCenter");
    if (!serviceCenter) return nil;

    id center = ((id (*)(Class, SEL))objc_msgSend)(serviceCenter, NSSelectorFromString(@"defaultCenter"));
    id headImageMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"),
        objc_getClass("MMHeadImageMgr"));
    if (!headImageMgr) return nil;

    if (!((BOOL (*)(id, SEL, SEL))objc_msgSend)(headImageMgr, @selector(respondsToSelector:),
        NSSelectorFromString(@"getHeadImage:withCategory:"))) {
        return nil;
    }

    UIImage *image = ((UIImage *(*)(id, SEL, id, id))objc_msgSend)(headImageMgr,
        NSSelectorFromString(@"getHeadImage:withCategory:"), wxid, @0);
    return image;
}

#pragma mark - Silent Contact ExtInfo Loading

- (void)silentLoadContactExtInfo:(id)contact {
    if (!contact) return;

    Class contactInfoVCClass = objc_getClass("ContactInfoViewController");
    if (!contactInfoVCClass) return;

    id vc = [[contactInfoVCClass alloc] init];
    if (!vc) return;

    SEL setContactSel = NSSelectorFromString(@"setM_contact:");
    if ([vc respondsToSelector:setContactSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(vc, setContactSel, contact);
    }

    ((void (*)(id, SEL))objc_msgSend)(vc, @selector(viewDidLoad));

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.8 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [self updateAvatars];
    });
}

#pragma mark - Separator

- (BOOL)loadSeparatorIcon {
    PluginConfig *config = [PluginConfig shared];

    // 1. 优先检查 GIF 文件路径
    NSString *gifPath = config.chatSeparatorGIF;
    if (gifPath.length && [[NSFileManager defaultManager] fileExistsAtPath:gifPath]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            NSData *data = [NSData dataWithContentsOfFile:gifPath];
            UIImage *gifImage = [UIImage imageWithData:data];
            if (gifImage) {
                self.separatorView.image = gifImage;
                self.separatorView.hidden = NO;
                [self.separatorView sizeToFit];
            }
        });
        return YES;
    }

    // 2. 检查静态图标文件路径
    NSString *iconPath = config.chatSeparatorIcon;
    if (iconPath.length && [[NSFileManager defaultManager] fileExistsAtPath:iconPath]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            NSData *data = [NSData dataWithContentsOfFile:iconPath];
            UIImage *icon = [UIImage imageWithData:data];
            if (icon) {
                self.separatorView.image = icon;
                self.separatorView.hidden = NO;
                [self.separatorView sizeToFit];
            }
        });
        return YES;
    }
    return NO;
}

- (void)loadSeparatorText {
    PluginConfig *config = [PluginConfig shared];
    if (config.chatSeparatorText.length > 0) {
        dispatch_async(dispatch_get_main_queue(), ^{
            self.separatorTextLabel.text = config.chatSeparatorText;
            self.separatorTextLabel.hidden = NO;
            [self.separatorTextLabel sizeToFit];
        });
    }
}

#pragma mark - Helpers

- (UIViewController *)findViewController {
    UIResponder *responder = self;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return (UIViewController *)self.chatController;
}

- (void)updateFontSizes {
    PluginConfig *config = [PluginConfig shared];
    [self.titleLabel setFont:[UIFont systemFontOfSize:config.chatNicknameFontSize]];

    CGFloat sepFontSize = MAX(8.0, MIN(config.chatSeparatorSize * 0.4, 16.0));
    [self.separatorTextLabel setFont:[UIFont systemFontOfSize:sepFontSize weight:UIFontWeightMedium]];

    [self setNeedsLayout];
    [self layoutIfNeeded];
}

- (void)applyPositionOffset {
    PluginConfig *config = [PluginConfig shared];
    CGRect f = self.titleLabel.frame;
    f.origin.x += config.chatNicknameOffsetX;
    f.origin.y -= config.chatNicknameOffsetY;
    self.titleLabel.frame = f;
}

- (CGFloat)calculateCornerRadiusForSize:(CGFloat)size {
    PluginConfig *config = [PluginConfig shared];
    return size * 0.5 * (config.chatAvatarCornerRadius / 100.0);
}

- (CGFloat)calculateNameWidth {
    PluginConfig *config = [PluginConfig shared];

    NSString *text = self.titleLabel.text ?: @"";
    if (text.length == 0) return 30.0;

    UIFont *font = [UIFont systemFontOfSize:config.chatNicknameFontSize];
    NSDictionary *attrs = @{NSFontAttributeName: font};
    CGFloat textWidth = [text sizeWithAttributes:attrs].width;

    CGFloat minW = self.bounds.size.width - config.chatAvatarSize - 20;
    if (minW < 30.0) minW = 30.0;
    return MAX(textWidth + 4.0, minW);
}

#pragma mark - Tap Gestures

- (void)onLeftAvatarTapped:(UITapGestureRecognizer *)gesture {
    PluginConfig *config = [PluginConfig shared];
    if (config.avatarTapFeedback) {
        [self playHapticFeedback];
    }

    if (!self.chatController) return;

    id contact = ((id (*)(id, SEL))objc_msgSend)(self.chatController, NSSelectorFromString(@"GetContact"));
    [self presentUserInfoPopoverWithContact:contact sourceView:self.leftAvatarView];
}

- (void)onRightAvatarTapped:(UITapGestureRecognizer *)gesture {
    PluginConfig *config = [PluginConfig shared];
    if (config.avatarTapFeedback) {
        [self playHapticFeedback];
    }

    Class serviceCenter = objc_getClass("MMServiceCenter");
    if (!serviceCenter) return;
    id center = ((id (*)(Class, SEL))objc_msgSend)(serviceCenter, NSSelectorFromString(@"defaultCenter"));
    id contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"),
        objc_getClass("CContactMgr"));
    id selfContact = ((id (*)(id, SEL))objc_msgSend)(contactMgr, @selector(getSelfContact));
    [self presentUserInfoPopoverWithContact:selfContact sourceView:self.rightAvatarView];
}

- (void)presentUserInfoPopoverWithContact:(id)contact sourceView:(UIView *)sourceView {
    if (!contact) return;

    UIImage *avatar = nil;
    if ([sourceView isKindOfClass:[UIImageView class]]) {
        avatar = [(UIImageView *)sourceView image];
    }

    CSContactInfoPopoverController *popover =
        [[CSContactInfoPopoverController alloc] initWithContact:contact avatar:avatar];

    popover.modalPresentationStyle = UIModalPresentationOverCurrentContext;
    popover.modalTransitionStyle = UIModalTransitionStyleCrossDissolve;

    UIViewController *presentingVC = [self findViewController];
    if (!presentingVC) {
        presentingVC = (UIViewController *)self.chatController;
    }
    if (presentingVC) {
        [presentingVC presentViewController:popover animated:YES completion:nil];
    }
}

- (void)playHapticFeedback {
    UIImpactFeedbackGenerator *generator = [[UIImpactFeedbackGenerator alloc]
        initWithStyle:UIImpactFeedbackStyleLight];
    [generator prepare];
    [generator impactOccurred];
}

@end