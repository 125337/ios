@interface WCAdDynamicFeedContainerView : MMUIView <WCCanvasPageViewAnimationProtocol>
{
    UIImageView * _animationCoverView; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)resetSubViews;
- (void)onCanvasPageViewAnimationSetContentHidden:(BOOL)arg1;
- (void)setMediaContentHidden:(BOOL)arg1;
- (id)animationCoverView;
- (void)setAnimationCoverView:(id)arg1;
- (void).cxx_destruct;
@end
