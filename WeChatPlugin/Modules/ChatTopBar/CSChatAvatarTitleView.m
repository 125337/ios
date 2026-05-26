#import "CSChatAvatarTitleView.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>

@implementation CSChatAvatarTitleView

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
    [_leftAvatarView release];
    [_rightAvatarView release];
    [_separatorView release];
    [_separatorTextLabel release];
    [_titleLabel release];
    [super dealloc];
}

#pragma mark - Setup

- (void)setupSubviews {
    PluginConfig *config = [PluginConfig shared];

    // 1. leftAvatarView
    UIImageView *la = [[UIImageView alloc] init];
    [self addSubview:la];
    [self setLeftAvatarView:la];
    [la release];
    [la setContentMode:UIViewContentModeScaleAspectFill];
    [la setTag:2];
    [la setClipsToBounds:YES];
    [la setUserInteractionEnabled:YES];
    UITapGestureRecognizer *leftTap = [[UITapGestureRecognizer alloc]
        initWithTarget:self action:@selector(onLeftAvatarTapped:)];
    [la addGestureRecognizer:leftTap];
    [leftTap release];

    // 2. rightAvatarView
    UIImageView *ra = [[UIImageView alloc] init];
    [self addSubview:ra];
    [self setRightAvatarView:ra];
    [ra release];
    [ra setContentMode:UIViewContentModeScaleAspectFill];
    [ra setTag:2];
    [ra setUserInteractionEnabled:YES];
    [ra setClipsToBounds:YES];
    UITapGestureRecognizer *rightTap = [[UITapGestureRecognizer alloc]
        initWithTarget:self action:@selector(onRightAvatarTapped:)];
    [ra addGestureRecognizer:rightTap];
    [rightTap release];

    // 3. separatorView
    UIImageView *sv = [[UIImageView alloc] init];
    [self addSubview:sv];
    [self setSeparatorView:sv];
    [sv release];
    [sv setContentMode:UIViewContentModeScaleAspectFill];
    [sv setUserInteractionEnabled:YES];
    [sv setHidden:YES];

    // 4. separatorTextLabel
    UILabel *st = [[UILabel alloc] init];
    [self addSubview:st];
    [self setSeparatorTextLabel:st];
    [st release];
    CGFloat sepFontSize = MAX(8.0, MIN(config.chatSeparatorSize * 0.4, 16.0));
    [st setFont:[UIFont systemFontOfSize:sepFontSize weight:UIFontWeightMedium]];
    [st setTextColor:[UIColor grayColor]];
    [st setHidden:YES];

    // 5. titleLabel (昵称)
    UILabel *tl = [[UILabel alloc] init];
    [self addSubview:tl];
    [self setTitleLabel:tl];
    [tl release];
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
    BOOL hasName = YES;

    // Calculate avatar Y position
    CGFloat avatarY;
    if (mode == 1 || mode == 2 || mode == 3 || mode == 7) {
        avatarY = (totalH - avatarSize) * 0.5;
    } else {
        CGFloat contentH = avatarSize + 2 + nameFontSize + 1;
        avatarY = (totalH - contentH) * 0.5;
    }

    // Mode 7: Overlap mode
    if (mode == 7) {
        self.leftAvatarView.frame = CGRectMake(0, avatarY, avatarSize, avatarSize);
        self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

        CGFloat smallSize = avatarSize * 0.85;
        CGFloat offset = avatarSize * 0.3;
        self.rightAvatarView.frame = CGRectMake(offset, avatarY + avatarSize - smallSize + (avatarSize * 0.15), smallSize, smallSize);
        self.rightAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:smallSize];

        self.separatorView.hidden = YES;
        self.separatorTextLabel.hidden = YES;
        self.titleLabel.hidden = YES;
        return;
    }

    // Mode 5: left avatar + separator + nickname
    if (mode == 5) {
        self.separatorView.hidden = YES;
        self.separatorTextLabel.hidden = !hasSeparator;
        self.rightAvatarView.hidden = YES;

        if (hasSeparator) {
            NSString *sepText = config.chatSeparatorText;
            self.separatorTextLabel.text = sepText;
            [self.separatorTextLabel sizeToFit];
            self.separatorTextLabel.hidden = NO;
        }

        // Left avatar
        self.leftAvatarView.frame = CGRectMake(0, avatarY, avatarSize, avatarSize);
        self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

        CGFloat sepX = avatarSize + halfSpacing;
        if (hasSeparator) {
            self.separatorTextLabel.frame = CGRectMake(sepX, (totalH - self.separatorTextLabel.frame.size.height) * 0.5,
                                                         self.separatorTextLabel.frame.size.width, self.separatorTextLabel.frame.size.height);
            sepX = CGRectGetMaxX(self.separatorTextLabel.frame) + halfSpacing;
        }

        self.titleLabel.hidden = NO;
        CGFloat nameW = totalW - sepX;
        [self.titleLabel setFont:[UIFont systemFontOfSize:nameFontSize]];
        self.titleLabel.frame = CGRectMake(sepX, (totalH - nameFontSize) * 0.5, nameW, nameFontSize);
        return;
    }

    // Mode 6: right avatar + nickname
    if (mode == 6) {
        self.leftAvatarView.hidden = YES;
        self.separatorView.hidden = YES;
        self.separatorTextLabel.hidden = YES;
        self.rightAvatarView.hidden = NO;
        self.titleLabel.hidden = NO;

        self.rightAvatarView.frame = CGRectMake(0, avatarY, avatarSize, avatarSize);
        self.rightAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

        [self.titleLabel setFont:[UIFont systemFontOfSize:nameFontSize]];
        self.titleLabel.frame = CGRectMake(avatarSize + halfSpacing, (totalH - nameFontSize) * 0.5,
                                             totalW - avatarSize - halfSpacing, nameFontSize);
        return;
    }

    // Mode 0: left avatar + name
    if (mode == 0) {
        self.rightAvatarView.hidden = YES;
        self.separatorView.hidden = YES;
        self.separatorTextLabel.hidden = YES;
        self.titleLabel.hidden = NO;

        self.leftAvatarView.frame = CGRectMake(0, avatarY, avatarSize, avatarSize);
        self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

        [self.titleLabel setFont:[UIFont systemFontOfSize:nameFontSize]];
        self.titleLabel.frame = CGRectMake(avatarSize + halfSpacing, (totalH - nameFontSize) * 0.5,
                                             totalW - avatarSize - halfSpacing, nameFontSize);
        return;
    }

    // Mode 1, 2, 3, 4: Single avatar modes
    if (mode == 1 || mode == 3 || mode == 4) {
        // mode 1: right avatar (self), mode 3 & 4: left avatar (opponent)
        BOOL showLeft = (mode == 3 || mode == 4);
        BOOL showRight = (mode == 1);

        self.leftAvatarView.hidden = !showLeft;
        self.rightAvatarView.hidden = !showRight;
        self.separatorView.hidden = YES;
        self.separatorTextLabel.hidden = YES;
        self.titleLabel.hidden = YES;

        UIImageView *activeAvatar = showLeft ? self.leftAvatarView : self.rightAvatarView;
        CGFloat centerX = (totalW - avatarSize) * 0.5;
        activeAvatar.frame = CGRectMake(centerX, avatarY, avatarSize, avatarSize);
        activeAvatar.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];
        return;
    }

    // Default: dual avatar with separator
    self.leftAvatarView.hidden = NO;
    self.rightAvatarView.hidden = NO;
    self.titleLabel.hidden = YES;

    if (hasSeparator) {
        // Full layout: leftAvatar | separator | rightAvatar
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
        // No separator: dual avatars centered with spacing
        CGFloat dualW = avatarSize * 2 + avatarSpacing;
        CGFloat startX = (totalW - dualW) * 0.5;

        self.separatorTextLabel.hidden = YES;
        self.separatorView.hidden = YES;

        self.leftAvatarView.frame = CGRectMake(startX, avatarY, avatarSize, avatarSize);
        self.rightAvatarView.frame = CGRectMake(startX + avatarSize + avatarSpacing, avatarY, avatarSize, avatarSize);
    }

    self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];
    self.rightAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

    [self applyPositionOffset];
}

#pragma mark - Preload Contact

- (void)silentLoadContactExtInfo:(id)contact {
    Class infoVCClass = objc_getClass("ContactInfoViewController");
    if (!infoVCClass) return;

    id infoVC = ((id (*)(Class, SEL))objc_msgSend)(infoVCClass, NSSelectorFromString(@"alloc"));
    infoVC = ((id (*)(id, SEL))objc_msgSend)(infoVC, @selector(init));
    if (!infoVC) return;

    if ([infoVC respondsToSelector:NSSelectorFromString(@"setM_contact:")]) {
        ((void (*)(id, SEL, id))objc_msgSend)(infoVC,
            NSSelectorFromString(@"setM_contact:"), contact);
    }

    ((void (*)(id, SEL))objc_msgSend)(infoVC, @selector(view));

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, 0.8 * NSEC_PER_SEC),
                   dispatch_get_main_queue(), ^{
        if ([infoVC respondsToSelector:@selector(dismissViewControllerAnimated:completion:)]) {
            ((void (*)(id, SEL, BOOL, id))objc_msgSend)(infoVC,
                @selector(dismissViewControllerAnimated:completion:), NO, nil);
        }
        [infoVC release];
    });
}

#pragma mark - Avatar Update

- (void)updateAvatars {
    if (!self.chatController) return;

    PluginConfig *config = [PluginConfig shared];

    // Get contact info
    id contact = ((id (*)(id, SEL))objc_msgSend)(self.chatController, NSSelectorFromString(@"GetContact"));
    if (!contact) return;

    // Preload contact info to avoid delay on tap
    [self silentLoadContactExtInfo:contact];

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
                    ? config.chatGroupMemberCountSuffix : @"%u人";
                titleText = [NSString stringWithFormat:@"%@%@",
                    nickname ?: @"",
                    [NSString stringWithFormat:suffix, count]];
            }
        }
    } else if (!isGroup && config.showAddTime) {
        // Get add time
        unsigned int addTime = 0;
        if ([contact respondsToSelector:@selector(m_uiAddTime)]) {
            addTime = (unsigned int)((unsigned int (*)(id, SEL))objc_msgSend)(contact, @selector(m_uiAddTime));
        }
        if (addTime > 0) {
            NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
            NSInteger days = (NSInteger)((now - addTime) / 86400.0);
            NSString *suffix = config.chatAddTimeSuffixFormat.length > 0
                    ? config.chatAddTimeSuffixFormat : @"%ld天";
            titleText = [NSString stringWithFormat:@"%@%@",
                nickname ?: @"",
                [NSString stringWithFormat:suffix, (long)days]];
        }
    }

    // Load separator
    if (![self loadSeparatorIcon]) {
        if (![self loadSeparatorGIF]) {
            [self loadSeparatorText];
        }
    }

    dispatch_async(dispatch_get_main_queue(), ^{
        self.leftAvatarView.image = opponentAvatar;
        self.rightAvatarView.image = selfAvatar;
        self.titleLabel.text = titleText;
    });
}

- (NSString *)getSelfWxid {
    // Get self wxid from MMServiceCenter
    Class serviceCenter = objc_getClass("MMServiceCenter");
    if (!serviceCenter) return @"";

    id center = ((id (*)(Class, SEL))objc_msgSend)(serviceCenter, NSSelectorFromString(@"defaultCenter"));

    // Try CSetting
    id setting = ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), objc_getClass("CSetting"));
    if (setting && [setting respondsToSelector:@selector(GetSelfUserName)]) {
        NSString *selfName = ((NSString *(*)(id, SEL))objc_msgSend)(setting, @selector(GetSelfUserName));
        if (selfName.length > 0) return selfName;
    }

    // Fallback: CContactMgr
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

- (UIImage *)loadAvatarWithPriorityForWxid:(NSString *)wxid {
    if (!wxid.length) return [UIImage imageNamed:@"DefaultHead"];

    // 1. Try custom avatar first
    UIImage *custom = [self loadCustomAvatarForWxid:wxid];
    if (custom) return custom;

    // 2. Try WeChat native avatar
    UIImage *native = [self loadWeChatAvatarForWxid:wxid];
    if (native) return native;

    // 3. Default placeholder
    return [UIImage imageNamed:@"DefaultHead"];
}

- (UIImage *)loadCustomAvatarForWxid:(NSString *)wxid {
    NSString *dir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    if (!dir) return nil;

    // 1. Try .gif first
    NSString *gifPath = [dir stringByAppendingPathComponent:
        [NSString stringWithFormat:@"HBWechatHelper/UserHeadImage/%@.gif", wxid]];
    if ([[NSFileManager defaultManager] fileExistsAtPath:gifPath]) {
        NSData *data = [NSData dataWithContentsOfFile:gifPath];
        return [UIImage imageWithData:data];
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
    id contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), objc_getClass("CContactMgr"));

    if (!contactMgr) return nil;

    id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByName:), wxid);
    if (!contact) return nil;

    if ([contact respondsToSelector:@selector(m_avatarImage)]) {
        return ((UIImage *(*)(id, SEL))objc_msgSend)(contact, @selector(m_avatarImage));
    }

    return nil;
}

#pragma mark - Separator

- (BOOL)loadSeparatorIcon {
    PluginConfig *config = [PluginConfig shared];

    NSData *iconData = [[NSUserDefaults standardUserDefaults]
        dataForKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorIcon"]];
    if (iconData) {
        UIImage *icon = [UIImage imageWithData:iconData];
        self.separatorView.image = icon;
        self.separatorView.hidden = NO;
        [self.separatorView sizeToFit];
        return YES;
    }
    return NO;
}

- (void)loadSeparatorText {
    PluginConfig *config = [PluginConfig shared];
    if (config.chatSeparatorText.length > 0) {
        self.separatorTextLabel.text = config.chatSeparatorText;
        self.separatorTextLabel.hidden = NO;
        [self.separatorTextLabel sizeToFit];
    }
}

- (BOOL)loadSeparatorGIF {
    NSData *gifData = [[NSUserDefaults standardUserDefaults]
        dataForKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorGIF"]];
    if (gifData) {
        UIImage *gifImage = [UIImage imageWithData:gifData];
        self.separatorView.image = gifImage;
        self.separatorView.hidden = NO;
        [self.separatorView sizeToFit];
        self.separatorView.userInteractionEnabled = YES;
        return YES;
    }
    return NO;
}

#pragma mark - Helpers

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
    CGRect f = self.frame;
    f.origin.x += config.chatHorizontalOffset;
    f.origin.y += config.chatVerticalOffset;
    self.frame = f;
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
    if (contact) {
        NSString *opponentWxid = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
        [self presentUserInfoPopoverWithContact:opponentWxid sourceView:self.leftAvatarView];
    }
}

- (void)onRightAvatarTapped:(UITapGestureRecognizer *)gesture {
    PluginConfig *config = [PluginConfig shared];
    if (config.avatarTapFeedback) {
        [self playHapticFeedback];
    }

    if (!self.chatController) return;

    NSString *selfWxid = [self getSelfWxid];
    if (selfWxid.length > 0) {
        [self presentUserInfoPopoverWithContact:selfWxid sourceView:self.rightAvatarView];
    }
}

- (void)presentUserInfoPopoverWithContact:(NSString *)wxid sourceView:(UIView *)sourceView {
    if (!wxid.length) return;

    // Try to get contact info and present via WCContactInfoViewController or similar
    Class serviceCenter = objc_getClass("MMServiceCenter");
    if (!serviceCenter) return;

    id center = ((id (*)(Class, SEL))objc_msgSend)(serviceCenter, NSSelectorFromString(@"defaultCenter"));
    id contactMgr = ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), objc_getClass("CContactMgr"));
    if (!contactMgr) return;

    id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getContactByName:), wxid);
    if (!contact) return;

    // Try WCUserInfoViewController
    Class infoVCClass = objc_getClass("WCUserInfoViewController");
    if (infoVCClass) {
        id infoVC = ((id (*)(Class, SEL))objc_msgSend)(infoVCClass, NSSelectorFromString(@"alloc"));
        infoVC = ((id (*)(id, SEL, id, id))objc_msgSend)(infoVC, NSSelectorFromString(@"initWithUsrName:contact:"), wxid, contact);
        if (infoVC) {
            UIViewController *parentVC = [self findViewController];
            if (parentVC && parentVC.navigationController) {
                [parentVC.navigationController pushViewController:infoVC animated:YES];
                [infoVC release];
                return;
            }
        }
        [infoVC release];
    }

    // Fallback: try ContactInfoViewController
    Class contactInfoVC = objc_getClass("ContactInfoViewController");
    if (contactInfoVC) {
        id ciVC = ((id (*)(Class, SEL))objc_msgSend)(contactInfoVC, NSSelectorFromString(@"alloc"));
        ciVC = ((id (*)(id, SEL, id))objc_msgSend)(ciVC, NSSelectorFromString(@"initWithContact:"), contact);
        if (ciVC) {
            UIViewController *parentVC = [self findViewController];
            if (parentVC && parentVC.navigationController) {
                [parentVC.navigationController pushViewController:ciVC animated:YES];
                [ciVC release];
            } else {
                [ciVC release];
            }
        }
    }
}

- (UIViewController *)findViewController {
    UIResponder *responder = self;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

- (void)playHapticFeedback {
    UIImpactFeedbackGenerator *generator = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
    [generator prepare];
    [generator impactOccurred];
    [generator release];
}

@end