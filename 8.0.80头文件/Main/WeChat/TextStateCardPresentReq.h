@interface TextStateCardPresentReq : NSObject
{
    BOOL _allowShowHeaderAvatar; // +0x8
    BOOL _forbidShowSetStatusButton; // +0x9
    BOOL _isFromAvatarPopover; // +0xa
    CContact * _contact; // +0x10
    unsigned long long _headClickScene; // +0x18
    long long _cardReportScene; // +0x20
    TextStateCardAnimationConfig * _animationConfig; // +0x28
    MMUIViewController * _delegateViewController; // +0x30
    id /* block */ _onDismiss; // +0x38
    NSString * _avatarPopoverSessionId; // +0x40
}
+ (id)reqWithContact:(id)arg1 headClickScene:(unsigned long long)arg2 cardReportScene:(long long)arg3;
- (id)init;
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned long long)headClickScene;
- (void)setHeadClickScene:(unsigned long long)arg1;
- (long long)cardReportScene;
- (void)setCardReportScene:(long long)arg1;
- (id)animationConfig;
- (void)setAnimationConfig:(id)arg1;
- (BOOL)allowShowHeaderAvatar;
- (void)setAllowShowHeaderAvatar:(BOOL)arg1;
- (BOOL)forbidShowSetStatusButton;
- (void)setForbidShowSetStatusButton:(BOOL)arg1;
- (id)delegateViewController;
- (void)setDelegateViewController:(id)arg1;
- (id /* block */)onDismiss;
- (void)setOnDismiss:(id /* block */)arg1;
- (BOOL)isFromAvatarPopover;
- (void)setIsFromAvatarPopover:(BOOL)arg1;
- (id)avatarPopoverSessionId;
- (void)setAvatarPopoverSessionId:(id)arg1;
- (void).cxx_destruct;
@end
