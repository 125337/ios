@interface WCFinderPinchLogicScrollView : UIScrollView <UIScrollViewDelegate>
{
    id <WCFinderPinchLogicScrollViewDelegate> _finderDelegate; // +0x8
    CGRect _pinchContentDefaultRect; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (BOOL)isInPinchState;
- (void)setScrollViewCanPinch:(BOOL)arg1;
- (void)resetToInitialZoomScale;
- (id)pinchContentView;
- (unsigned long long)_checkMediaViewBouncingResult;
- (unsigned long long)_checkMediaViewBouncingResultWithOffset:(CGPoint)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (id)finderDelegate;
- (void)setFinderDelegate:(id)arg1;
- (CGRect)pinchContentDefaultRect;
- (void)setPinchContentDefaultRect:(CGRect)arg1;
- (void).cxx_destruct;
@end

