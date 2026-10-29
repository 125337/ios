@interface WCFinderLiveNowView : UIView <LOTColorValueDelegate, WCFinderLiveIconAnimationProtocol>
{
    UIImageView * _iconView; // +0x8
    UILabel * _label; // +0x10
    long long _type; // +0x18
    double _kMidInterval; // +0x20
    NSArray * _iconImageArray; // +0x28
    id /* block */ _clickBlock; // +0x30
}
+ (id)iconImageWithType:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1 viewType:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1 viewType:(long long)arg2 text:(id)arg3;
- (void)initViewWithType:(long long)arg1;
- (void)prepareForReuse;
- (id)iconView;
- (void)initViewWithType:(long long)arg1 text:(id)arg2;
- (void)updateColorSchemeWith:(long long)arg1 changeColor:(BOOL)arg2;
- (void)updateIconView;
- (void)updateImage:(id)arg1;
- (void)updateText:(id)arg1;
- (void)sizeToFit;
- (void)fitLabelWithMaxWidth:(double)arg1;
- (void)changeType:(long long)arg1;
- (void)changeType:(long long)arg1 changeColor:(BOOL)arg2;
- (void)setMiddleInterval:(double)arg1;
- (void)setClickBlock:(id /* block */)arg1;
- (CGColor *)colorForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startColor:(CGColor *)arg5 endColor:(CGColor *)arg6 currentColor:(CGColor *)arg7;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (void)startLiveAnimation;
- (void)_startLiveAnimation;
- (void)viewDidClick;
- (id)accessibilityLabel;
- (double)leftInnerInset;
- (double)rightInnerInset;
- (void)setIconView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (double)kMidInterval;
- (void)setKMidInterval:(double)arg1;
- (id)iconImageArray;
- (void)setIconImageArray:(id)arg1;
- (id /* block */)clickBlock;
- (void).cxx_destruct;
@end

