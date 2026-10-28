@interface MMRollableLabelView : UIView <CAAnimationDelegate>
{
    BOOL _hasStartAnimation; // +0x8
    UILabel * _textLabel; // +0x10
    PAGView * _pagAnimationView; // +0x18
    MMRollableLabelViewConfig * _config; // +0x20
    UIImageView * _iconImageView; // +0x28
    UIScrollView * _scrollView; // +0x30
    UIView * _scrollContainerView; // +0x38
    CAGradientLayer * _maskGradientLayer; // +0x40
    UILabel * _secondaryLabel; // +0x48
    CGSize _lastLayoutScrollViewSize; // +0x50
}
- (id)initWithConfig:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)updateLabelText:(id)arg1;
- (void)updateLabelAttributedText:(id)arg1;
- (void)updateLabelTextColor:(id)arg1;
- (void)updateIconImage:(id)arg1;
- (void)updatePAGAnimationPath:(id)arg1;
- (void)playPAGAnimation;
- (void)stopPAGAnimation;
- (void)updateConfig:(id)arg1;
- (BOOL)startAnimation;
- (void)resetAnimation;
- (BOOL)hasStartAnimation;
- (void)resetRollAnimation;
- (BOOL)rescheduleRollAnimation;
- (BOOL)scheduleScrollingAnimation;
- (BOOL)scheduleBackAndForthAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setupUI;
- (id)buildGradientLayer;
- (void)createPAGViewIfNeeded;
- (void)layoutSubviews;
- (CGSize)getImageViewSize;
- (CGSize)getPagViewSize;
- (double)getIconTextPadding;
- (CGSize)getLabelSize;
- (void)sizeToFit;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)pagAnimationView;
- (void)setPagAnimationView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)scrollContainerView;
- (void)setScrollContainerView:(id)arg1;
- (id)maskGradientLayer;
- (void)setMaskGradientLayer:(id)arg1;
- (id)secondaryLabel;
- (void)setSecondaryLabel:(id)arg1;
- (CGSize)lastLayoutScrollViewSize;
- (void)setLastLayoutScrollViewSize:(CGSize)arg1;
- (void)setHasStartAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
