@interface MMFinderLiveGenericFullTapEducationView : UIView
{
    id /* block */ _actionBlock; // +0x8
    PAGView * _animationView; // +0x10
    CGPoint _anchorPoint; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateAnchorPoint:(CGPoint)arg1;
- (void)show;
- (void)hide;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (CGPoint)anchorPoint;
- (void)setAnchorPoint:(CGPoint)arg1;
- (void).cxx_destruct;
@end

