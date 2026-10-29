@interface WCFinderBreakPointCollisionAnimationView : UIView
{
    BOOL _isAnimating; // +0x8
    NSString * _selfAvatarURL; // +0x10
    NSString * _authorAvatarURL; // +0x18
    UIView * _selfAvatarContainer; // +0x20
    UIView * _authorAvatarContainer; // +0x28
    WCFinderHeadImageView * _selfAvatarImageView; // +0x30
    WCFinderHeadImageView * _authorAvatarImageView; // +0x38
    PAGView * _celebratePAGView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 selfAvatarURL:(id)arg2 authorAvatarURL:(id)arg3;
- (void)_setupUI;
- (void)_adjustLayout;
- (void)_adjustCelebratePAGLayout;
- (void)startAnimationWithTipsView:(id)arg1 bgMaskView:(id)arg2 completion:(id /* block */)arg3;
- (id)selfAvatarURL;
- (void)setSelfAvatarURL:(id)arg1;
- (id)authorAvatarURL;
- (void)setAuthorAvatarURL:(id)arg1;
- (id)selfAvatarContainer;
- (void)setSelfAvatarContainer:(id)arg1;
- (id)authorAvatarContainer;
- (void)setAuthorAvatarContainer:(id)arg1;
- (id)selfAvatarImageView;
- (void)setSelfAvatarImageView:(id)arg1;
- (id)authorAvatarImageView;
- (void)setAuthorAvatarImageView:(id)arg1;
- (id)celebratePAGView;
- (void)setCelebratePAGView:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end
