@interface TextStateBlurButton : MMUIButton
{
    BOOL _useRoundCorner; // +0x8
    UIView * _highlightMaskView; // +0x10
    UIColor * _blurColor; // +0x18
    UIView * _backgroundBlurView; // +0x20
    MMBadgeView * _badgeView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setBlurColor:(id)arg1;
- (void)setBtnBlurEffect:(unsigned int)arg1;
- (void)removeBtnBlurEffect;
- (void)setUseRoundCorner:(BOOL)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)showSmallRedDotWithoutNumber;
- (void)removeSmallRedDotWithoutNumber;
- (void)layoutBadgeView;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (BOOL)useRoundCorner;
- (id)blurColor;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (void).cxx_destruct;
@end
