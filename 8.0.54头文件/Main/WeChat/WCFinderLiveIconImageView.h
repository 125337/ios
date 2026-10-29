@interface WCFinderLiveIconImageView : UIView <WCFinderLiveIconAnimationProtocol>
{
    unsigned long long _style; // +0x8
    UIImageView * _iconView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2;
- (void)prepareForReuse;
- (void)setUpImageViewWithStyle:(unsigned long long)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (void)startLiveAnimation;
- (void)_startLiveAnimation;
- (unsigned long long)style;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end

