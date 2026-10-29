@interface RSVerifyAnimationView : MMUIScrollView <UIScrollViewDelegate>
{
    RSAnimationHeadImgView * _headImage; // +0x8
    CGSize _originSize; // +0x10
    id <RSVerifyAnimationViewDelegate> _rsDelegate; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)doZoomIn:(float)arg1 animated:(BOOL)arg2;
- (void)doZoomOut:(float)arg1 animated:(BOOL)arg2;
- (void)startAnimationWithRadarSearchMember:(id)arg1 remarkName:(id)arg2 OriginPoint:(CGPoint)arg3;
- (void)updateZoomedHeadImageFrame;
- (void)doZoomOutAnimationToPoint:(CGPoint)arg1;
- (void)onZoomInFinish;
- (void)onZoomOutFinish;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)headImage;
- (void)setHeadImage:(id)arg1;
- (id)rsDelegate;
- (void)setRsDelegate:(id)arg1;
- (void).cxx_destruct;
@end
