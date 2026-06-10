#import "MioChatAvatarTitleView.h"
#import "ChatTopBarConfig.h"
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import "AvatarLoader.h"
#import <objc/runtime.h>
#import <objc/message.h>

@implementation MioChatAvatarTitleView

// ============================================================
// MARK: - 1. Init & Setup
// ============================================================

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor clearColor];
        self.clipsToBounds = YES;
        [self setupSubviews];
    }
    return self;
}

- (void)setupSubviews {
    // leftAvatarView
    self.leftAvatarView = [self makeAvatarImageViewWithAction:@selector(onLeftAvatarTapped:)];
    [self addSubview:self.leftAvatarView];

    // rightAvatarView
    self.rightAvatarView = [self makeAvatarImageViewWithAction:@selector(onRightAvatarTapped:)];
    [self addSubview:self.rightAvatarView];

    // separatorView (图标/GIF)
    self.separatorView = [self makeSeparatorImageView];
    [self addSubview:self.separatorView];

    // separatorTextLabel
    self.separatorTextLabel = [self makeSeparatorLabel];
    [self addSubview:self.separatorTextLabel];

    // titleLabel
    self.titleLabel = [self makeTitleLabel];
    [self addSubview:self.titleLabel];
}

- (UIImageView *)makeAvatarImageViewWithAction:(SEL)action {
    UIImageView *iv = [[UIImageView alloc] init];
    iv.contentMode = UIViewContentModeScaleAspectFill;
    iv.tag = 2;
    iv.clipsToBounds = YES;
    iv.userInteractionEnabled = YES;
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:action];
    [iv addGestureRecognizer:tap];
    return iv;
}

- (UIImageView *)makeSeparatorImageView {
    UIImageView *iv = [[UIImageView alloc] init];
    iv.contentMode = UIViewContentModeScaleAspectFill;
    iv.userInteractionEnabled = YES;
    iv.hidden = YES;
    return iv;
}

- (UILabel *)makeSeparatorLabel {
    UILabel *label = [[UILabel alloc] init];
    label.hidden = YES;
    return label;
}

- (UILabel *)makeTitleLabel {
    UILabel *label = [[UILabel alloc] init];
    label.numberOfLines = 1;
    label.hidden = YES;
    return label;
}

// ============================================================
// MARK: - 2. Mode Management
// ============================================================

- (void)updateMode {
    ChatTopBarConfig *config = [ChatTopBarConfig shared];
    NSInteger mode = config.chatDisplayMode;

    // 先全部隐藏，再按需显示
    self.leftAvatarView.hidden = YES;
    self.rightAvatarView.hidden = YES;
    self.separatorView.hidden = YES;
    self.separatorTextLabel.hidden = YES;
    self.titleLabel.hidden = YES;

    switch (mode) {
        case 7:
            // 双方头像重叠
            self.leftAvatarView.hidden = NO;
            self.rightAvatarView.hidden = NO;
            break;

        case 5:
            // 对方头像 + 名字在左侧
            self.leftAvatarView.hidden = NO;
            self.titleLabel.hidden = NO;
            break;

        case 6:
            // 对方头像 + 名字在右侧
            self.leftAvatarView.hidden = NO;
            self.titleLabel.hidden = NO;
            break;

        case 0:
            // 自己头像（居中、无名字）
            self.rightAvatarView.hidden = NO;
            break;

        case 4:
            // 自己头像（居中、名字在下方）
            self.rightAvatarView.hidden = NO;
            self.titleLabel.hidden = NO;
            break;

        case 1:
            // 对方头像（居中、无名字）
            self.leftAvatarView.hidden = NO;
            break;

        case 2:
        case 3:
        default: {
            // 双方头像，可能有分隔符
            self.leftAvatarView.hidden = NO;
            self.rightAvatarView.hidden = NO;

            BOOL hasTextSep = config.chatSeparatorText.length > 0;
            BOOL hasIconSep = [ChatTopBarConfig hasSeparatorIconFile];

            if (hasTextSep) {
                self.separatorTextLabel.hidden = NO;
            } else if (hasIconSep) {
                self.separatorView.hidden = NO;
            }
            // 都没有 → 全部隐藏，只有两头像

            if (mode == 3) {
                self.titleLabel.hidden = NO;
            }
            break;
        }
    }
}

// ============================================================
// MARK: - 3. Layout
// ============================================================

- (void)layoutSubviews {
    [super layoutSubviews];
    // ★ 不能在这里调用 updateMode！updateMode 由外部触发

    ChatTopBarConfig *config = [ChatTopBarConfig shared];
    NSInteger mode = config.chatDisplayMode;
    CGFloat totalH = self.bounds.size.height;
    CGFloat totalW = self.bounds.size.width;
    CGFloat avatarSize = config.chatAvatarSize;
    CGFloat avatarSpacing = config.chatAvatarSpacing;
    CGFloat halfSpacing = avatarSpacing * 0.5;
    CGFloat nameFontSize = config.chatNicknameFontSize;

    // ====== avatarY：大部分模式居中，Mode 3/4 偏上留空间给名字 ======
    CGFloat avatarY;
    if (mode == 3 || mode == 4) {
        avatarY = (totalH - avatarSize - 4 - nameFontSize) * 0.5 + 1;
    } else {
        avatarY = (totalH - avatarSize) * 0.5;
    }

    switch (mode) {
        case 7:
            [self layoutMode7WithTotalH:totalH totalW:totalW
                             avatarSize:avatarSize avatarY:avatarY
                                 config:config];
            break;

        case 5:
            [self layoutMode5WithTotalH:totalH totalW:totalW
                             avatarSize:avatarSize avatarY:avatarY
                             nameFontSize:nameFontSize config:config];
            break;

        case 6:
            [self layoutMode6WithTotalH:totalH totalW:totalW
                             avatarSize:avatarSize avatarY:avatarY
                             nameFontSize:nameFontSize config:config];
            break;

        case 0:
        case 4:
            [self layoutMode0Or4WithTotalH:totalH totalW:totalW
                                avatarSize:avatarSize avatarY:avatarY
                              nameFontSize:nameFontSize mode:mode config:config];
            break;

        case 1:
            [self layoutMode1WithTotalH:totalH totalW:totalW
                             avatarSize:avatarSize avatarY:avatarY
                                 config:config];
            break;

        case 2:
        case 3:
        default:
            [self layoutMode2Or3WithTotalH:totalH totalW:totalW
                                avatarSize:avatarSize avatarY:avatarY
                              avatarSpacing:avatarSpacing halfSpacing:halfSpacing
                              nameFontSize:nameFontSize mode:mode config:config];
            break;
    }
}

// Mode 7：双方头像重叠
- (void)layoutMode7WithTotalH:(CGFloat)totalH totalW:(CGFloat)totalW
                   avatarSize:(CGFloat)avatarSize avatarY:(CGFloat)avatarY
                       config:(ChatTopBarConfig *)config {
    self.leftAvatarView.frame = CGRectMake(0, avatarY, avatarSize, avatarSize);
    self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

    CGFloat smallSize = avatarSize * 0.85;
    CGFloat offset = avatarSize * 0.7;
    self.rightAvatarView.frame = CGRectMake(offset,
        avatarY + (avatarSize - smallSize), smallSize, smallSize);
    self.rightAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:smallSize];
}

// Mode 5：对方头像 + 名字在左侧
- (void)layoutMode5WithTotalH:(CGFloat)totalH totalW:(CGFloat)totalW
                   avatarSize:(CGFloat)avatarSize avatarY:(CGFloat)avatarY
                nameFontSize:(CGFloat)nameFontSize
                      config:(ChatTopBarConfig *)config {
    CGFloat nameWidth = [self calculateNameWidth];
    CGFloat gap = 8.0;

    self.titleLabel.textAlignment = NSTextAlignmentLeft;
    self.titleLabel.font = [UIFont systemFontOfSize:nameFontSize];
    self.titleLabel.frame = CGRectMake(
        (totalW - avatarSize - nameWidth - gap) * 0.5 + config.chatNicknameOffsetX,
        avatarY + (avatarSize - nameFontSize) * 0.5 - config.chatNicknameOffsetY,
        nameWidth, nameFontSize);

    self.leftAvatarView.frame = CGRectMake(
        CGRectGetMaxX(self.titleLabel.frame) + gap,
        avatarY, avatarSize, avatarSize);
    self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];
}

// Mode 6：对方头像 + 名字在右侧
- (void)layoutMode6WithTotalH:(CGFloat)totalH totalW:(CGFloat)totalW
                   avatarSize:(CGFloat)avatarSize avatarY:(CGFloat)avatarY
                nameFontSize:(CGFloat)nameFontSize
                      config:(ChatTopBarConfig *)config {
    CGFloat nameWidth = [self calculateNameWidth];
    CGFloat gap = 8.0;

    CGFloat avatarX = (totalW - avatarSize - nameWidth - gap) * 0.5;
    self.leftAvatarView.frame = CGRectMake(avatarX, avatarY, avatarSize, avatarSize);
    self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

    self.titleLabel.textAlignment = NSTextAlignmentRight;
    self.titleLabel.font = [UIFont systemFontOfSize:nameFontSize];
    self.titleLabel.frame = CGRectMake(
        avatarX + avatarSize + gap + config.chatNicknameOffsetX,
        avatarY + (avatarSize - nameFontSize) * 0.5 - config.chatNicknameOffsetY,
        nameWidth, nameFontSize);
}

// Mode 0：自己头像居中 / Mode 4：自己头像+名字在下方
- (void)layoutMode0Or4WithTotalH:(CGFloat)totalH totalW:(CGFloat)totalW
                      avatarSize:(CGFloat)avatarSize avatarY:(CGFloat)avatarY
                    nameFontSize:(CGFloat)nameFontSize
                            mode:(NSInteger)mode config:(ChatTopBarConfig *)config {
    BOOL showName = (mode == 4);

    self.rightAvatarView.frame = CGRectMake(
        (totalW - avatarSize) * 0.5, avatarY, avatarSize, avatarSize);
    self.rightAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

    if (showName) {
        self.titleLabel.textAlignment = NSTextAlignmentCenter;
        self.titleLabel.font = [UIFont systemFontOfSize:nameFontSize];
        self.titleLabel.frame = CGRectMake(
            0 + config.chatNicknameOffsetX,
            avatarY + avatarSize + 1 - config.chatNicknameOffsetY,
            totalW, nameFontSize);
    }
}

// Mode 1：对方头像居中
- (void)layoutMode1WithTotalH:(CGFloat)totalH totalW:(CGFloat)totalW
                   avatarSize:(CGFloat)avatarSize avatarY:(CGFloat)avatarY
                       config:(ChatTopBarConfig *)config {
    self.leftAvatarView.frame = CGRectMake(
        (totalW - avatarSize) * 0.5, avatarY, avatarSize, avatarSize);
    self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];
}

// Mode 2/3：双方头像（核心修复区域）
- (void)layoutMode2Or3WithTotalH:(CGFloat)totalH totalW:(CGFloat)totalW
                      avatarSize:(CGFloat)avatarSize avatarY:(CGFloat)avatarY
                   avatarSpacing:(CGFloat)avatarSpacing halfSpacing:(CGFloat)halfSpacing
                    nameFontSize:(CGFloat)nameFontSize mode:(NSInteger)mode
                          config:(ChatTopBarConfig *)config {
    BOOL showName = (mode == 3);
    CGFloat sepSize = config.chatSeparatorSize;

    // ── 根据 updateMode 决定的 hidden 状态，判断当前是什么分隔符 ──
    BOOL hasText = !self.separatorTextLabel.hidden;
    BOOL hasIcon = !self.separatorView.hidden;

    if (hasText) {
        // ── 文本分隔符 ──
        [self.separatorTextLabel sizeToFit];
        CGFloat textW = self.separatorTextLabel.frame.size.width;
        CGFloat totalContentW = avatarSize + halfSpacing + textW + halfSpacing + avatarSize;
        CGFloat startX = (totalW - totalContentW) * 0.5;

        self.leftAvatarView.frame = CGRectMake(startX, avatarY, avatarSize, avatarSize);
        self.separatorTextLabel.frame = CGRectMake(
            startX + avatarSize + halfSpacing,
            (totalH - self.separatorTextLabel.frame.size.height) * 0.5,
            textW, self.separatorTextLabel.frame.size.height);
        self.rightAvatarView.frame = CGRectMake(
            CGRectGetMaxX(self.separatorTextLabel.frame) + halfSpacing,
            avatarY, avatarSize, avatarSize);

    } else if (hasIcon) {
        // ── 图标/GIF 分隔符 ──
        CGFloat iconW = sepSize > 0 ? sepSize : avatarSize;
        CGFloat iconH = sepSize > 0 ? sepSize : avatarSize;
        CGFloat totalContentW = avatarSize + halfSpacing + iconW + halfSpacing + avatarSize;
        CGFloat startX = (totalW - totalContentW) * 0.5;

        self.leftAvatarView.frame = CGRectMake(startX, avatarY, avatarSize, avatarSize);
        self.separatorView.frame = CGRectMake(
            startX + avatarSize + halfSpacing,
            (totalH - iconH) * 0.5,
            iconW, iconH);
        self.separatorView.contentMode = UIViewContentModeScaleAspectFit;
        self.rightAvatarView.frame = CGRectMake(
            CGRectGetMaxX(self.separatorView.frame) + halfSpacing,
            avatarY, avatarSize, avatarSize);

    } else {
        // ── 无分隔符 ──
        CGFloat totalContentW = avatarSize * 2 + avatarSpacing;
        CGFloat startX = (totalW - totalContentW) * 0.5;

        self.leftAvatarView.frame = CGRectMake(startX, avatarY, avatarSize, avatarSize);
        self.rightAvatarView.frame = CGRectMake(
            startX + avatarSize + avatarSpacing,
            avatarY, avatarSize, avatarSize);
    }

    // 头像圆角（所有子路径共用）
    self.leftAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];
    self.rightAvatarView.layer.cornerRadius = [self calculateCornerRadiusForSize:avatarSize];

    // 名字在下方（Mode 3 专用）
    if (showName) {
        self.titleLabel.textAlignment = NSTextAlignmentCenter;
        self.titleLabel.font = [UIFont systemFontOfSize:nameFontSize];
        self.titleLabel.frame = CGRectMake(
            0 + config.chatNicknameOffsetX,
            avatarY + avatarSize + 1 - config.chatNicknameOffsetY,
            totalW, nameFontSize);
    }
}

// ============================================================
// MARK: - 4. Data Loading
// ============================================================

- (void)updateAvatars {
    if (!self.chatController) return;

    ChatTopBarConfig *config = [ChatTopBarConfig shared];

    // Get contact info
    id contact = ((id (*)(id, SEL))objc_msgSend)(self.chatController, NSSelectorFromString(@"GetContact"));
    if (!contact) return;

    NSString *opponentWxid = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
    NSString *nickname = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsNickName"));
    NSString *selfWxid = [self getSelfWxid];

    // Load avatars — pass contact for official accounts to get avatar URL
    UIImage *opponentAvatar = [self loadAvatarWithPriorityForWxid:opponentWxid contact:contact];
    UIImage *selfAvatar = [self loadAvatarWithPriorityForWxid:selfWxid contact:nil];

    // Build title text
    NSString *titleText = nickname ?: @"";
    BOOL isGroup = [opponentWxid containsString:@"@chatroom"];

    if (isGroup && config.showGroupMemberCount) {
        id contactMgr = WXGetService(objc_getClass("CContactMgr"));
        if (contactMgr && [contactMgr respondsToSelector:@selector(getGroupMemberCountForContact:)]) {
            unsigned int count = (unsigned int)((unsigned int (*)(id, SEL, id))objc_msgSend)(contactMgr, @selector(getGroupMemberCountForContact:), contact);
            NSString *suffix = config.chatGroupMemberCountSuffix.length > 0
                ? config.chatGroupMemberCountSuffix : @"%ld人";
            titleText = [NSString stringWithFormat:@"%@%@",
                nickname ?: @"",
                [NSString stringWithFormat:suffix, (long)count]];
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

    // Set avatar images
    self.leftAvatarView.image = opponentAvatar ?: [UIImage imageNamed:@"DefaultHead"];
    self.rightAvatarView.image = selfAvatar ?: [UIImage imageNamed:@"DefaultHead"];
    self.titleLabel.text = titleText;

    // Set fonts (统一设置位置)
    self.titleLabel.font = [UIFont systemFontOfSize:config.chatNicknameFontSize];
    self.titleLabel.textColor = [UIColor grayColor];
    CGFloat sepFontSize = MAX(8.0, MIN(config.chatSeparatorSize * 0.4, 16.0));
    self.separatorTextLabel.font = [UIFont systemFontOfSize:sepFontSize weight:UIFontWeightMedium];
    self.separatorTextLabel.textColor = [UIColor grayColor];

    // 刷新模式状态 + 触发布局
    [self updateMode];
    [self setNeedsLayout];
}

- (NSString *)getSelfWxid {
    id selfContact = WXGetSelfContact();
    if (selfContact && [selfContact respondsToSelector:@selector(m_nsUsrName)]) {
        return ((NSString *(*)(id, SEL))objc_msgSend)(selfContact, @selector(m_nsUsrName));
    }
    return @"";
}

#pragma mark - Avatar Loading

- (UIImage *)loadAvatarWithPriorityForWxid:(NSString *)wxid contact:(id)contact {
    return [[AvatarLoader shared] loadAvatarSyncForWxid:wxid contact:contact];
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

// ============================================================
// MARK: - Separator Loading
// ============================================================

- (BOOL)loadSeparatorIcon {
    NSString *iconPath = [ChatTopBarConfig separatorIconPath];
    if ([[NSFileManager defaultManager] fileExistsAtPath:iconPath]) {
        NSData *data = [NSData dataWithContentsOfFile:iconPath];
        UIImage *icon = [UIImage imageWithData:data];
        if (icon) {
            self.separatorView.image = icon;
            return YES;
        }
    }
    self.separatorView.image = nil;
    return NO;
}

- (void)loadSeparatorText {
    ChatTopBarConfig *config = [ChatTopBarConfig shared];
    self.separatorTextLabel.text = config.chatSeparatorText.length > 0
        ? config.chatSeparatorText : nil;
}

// ============================================================
// MARK: - 5. Helpers
// ============================================================

- (CGFloat)calculateCornerRadiusForSize:(CGFloat)size {
    ChatTopBarConfig *config = [ChatTopBarConfig shared];
    return size * 0.5 * (config.chatAvatarCornerRadius / 100.0);
}

- (CGFloat)calculateNameWidth {
    ChatTopBarConfig *config = [ChatTopBarConfig shared];

    NSString *text = self.titleLabel.text ?: @"";
    if (text.length == 0) return 30.0;

    UIFont *font = [UIFont systemFontOfSize:config.chatNicknameFontSize];
    NSDictionary *attrs = @{NSFontAttributeName: font};
    CGFloat textWidth = [text sizeWithAttributes:attrs].width;

    CGFloat minW = self.bounds.size.width - config.chatAvatarSize - 20;
    if (minW < 30.0) minW = 30.0;
    return MAX(textWidth + 4.0, minW);
}

// ============================================================
// MARK: - 6. Gestures
// ============================================================

- (void)onLeftAvatarTapped:(UITapGestureRecognizer *)gesture {
    if (!self.chatController) return;
    id contact = [(id)self.chatController performSelector:NSSelectorFromString(@"GetContact")];
    if (!contact) return;
    if ([self.delegate respondsToSelector:@selector(avatarTitleView:didTapAvatarWithContact:avatarImage:sourceView:wxid:)]) {
        NSString *wxid = [contact performSelector:NSSelectorFromString(@"m_nsUsrName")];
        [self.delegate avatarTitleView:self didTapAvatarWithContact:contact avatarImage:self.leftAvatarView.image sourceView:self.leftAvatarView wxid:wxid];
    }
}

- (void)onRightAvatarTapped:(UITapGestureRecognizer *)gesture {
    id selfContact = WXGetSelfContact();
    if ([self.delegate respondsToSelector:@selector(avatarTitleView:didTapAvatarWithContact:avatarImage:sourceView:wxid:)]) {
        NSString *wxid = [selfContact performSelector:NSSelectorFromString(@"m_nsUsrName")];
        [self.delegate avatarTitleView:self didTapAvatarWithContact:selfContact avatarImage:self.rightAvatarView.image sourceView:self.rightAvatarView wxid:wxid];
    }
}

@end
