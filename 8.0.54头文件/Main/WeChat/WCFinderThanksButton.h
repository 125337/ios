@interface WCFinderThanksButton : UIView <PAGViewListener>
{
    BOOL _iconPagAnimating; // +0x8
    BOOL _buttonBgAnimating; // +0x9
    BOOL _thankState; // +0xa
    id <WCFinderThanksButtonDelegate> _delegate; // +0x10
    WCFinderThanksButtonConfig * _config; // +0x18
    UIView * _btnContainer; // +0x20
    UIImageView * _iconView; // +0x28
    UILabel * _titleLabel; // +0x30
}
+ (double)buttonWidthWithConfig:(id)arg1 thankState:(BOOL)arg2;
+ (id)thanksIconImageWithConfig:(id)arg1 thankState:(BOOL)arg2;
+ (id)titleTextWithConfig:(id)arg1 thanksState:(BOOL)arg2;
- (id)initWithConfig:(id)arg1;
- (void)setupUI;
- (void)updateConfig;
- (void)sizeToFit;
- (void)layoutUI;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGRect)iconFrame;
- (void)updateThankState:(BOOL)arg1;
- (void)flushUIState;
- (void)onTapGes:(id)arg1;
- (void)tryPlayMagicAnimation;
- (BOOL)isAnimating;
- (unsigned long long)magicAnimationStyle;
- (void)tryPlayButtonFadeAnimationWithStayDuration:(double)arg1;
- (void)tryPlayThanksAnimation;
- (id)createThanksAnimationPag;
- (id)thanksAnimationPagFileName;
- (void)onAnimationEnd:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)btnContainer;
- (void)setBtnContainer:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (BOOL)iconPagAnimating;
- (void)setIconPagAnimating:(BOOL)arg1;
- (BOOL)buttonBgAnimating;
- (void)setButtonBgAnimating:(BOOL)arg1;
- (BOOL)thankState;
- (void)setThankState:(BOOL)arg1;
- (void).cxx_destruct;
@end

