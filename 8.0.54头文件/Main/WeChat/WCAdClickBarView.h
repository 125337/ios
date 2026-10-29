@interface WCAdClickBarView : MMUIView
{
    BOOL _stopArrorAnimation; // +0x8
    NSString * _title; // +0x10
    long long _iconType; // +0x18
    WCAdIconView * _iconView; // +0x20
    UILabel * _titleView; // +0x28
    UIImageView * _arrowView; // +0x30
    CALayer * _animationLayer; // +0x38
    double _selfOriginX; // +0x40
    double _iconViewOriginX; // +0x48
    double _titleViewOriginX; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 andIconType:(long long)arg2 title:(id)arg3;
- (void)initAnimationLayer;
- (void)layerInAnimation;
- (void)layerOutAnimation;
- (id)createAnimationLayer;
- (void)initViews;
- (void)showViewsAnimation;
- (void)setViewProperty:(id)arg1 alpha:(double)arg2 left:(double)arg3 hidden:(BOOL)arg4;
- (void)doArrowShowAnimation;
- (void)doArrowHideAnimation;
- (void)showClickBar;
- (void)hideClickBar;
- (void)hideViewsAnimation;
- (void)resetArrowPosition;
- (void)resetAnimationLayerPosition;
- (void)dealloc;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)iconType;
- (void)setIconType:(long long)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)animationLayer;
- (void)setAnimationLayer:(id)arg1;
- (BOOL)stopArrorAnimation;
- (void)setStopArrorAnimation:(BOOL)arg1;
- (double)selfOriginX;
- (void)setSelfOriginX:(double)arg1;
- (double)iconViewOriginX;
- (void)setIconViewOriginX:(double)arg1;
- (double)titleViewOriginX;
- (void)setTitleViewOriginX:(double)arg1;
- (void).cxx_destruct;
@end

