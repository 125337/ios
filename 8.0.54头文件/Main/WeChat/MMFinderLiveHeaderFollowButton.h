@interface MMFinderLiveHeaderFollowButton : MMUIButton
{
    UIImageView * _icon; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateIconColor:(id)arg1;
- (void)startAnimation;
- (void)executeFollowAnimation;
- (void)executeFollowAnimationAgain;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void).cxx_destruct;
@end

